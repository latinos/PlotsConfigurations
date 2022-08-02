import ROOT as R
import numpy as np
import argparse
import os

R.gROOT.SetBatch(True)

parser = argparse.ArgumentParser()
parser.add_argument("--input", type=str)
parser.add_argument("--outputdir", type=str)
parser.add_argument("--outputfile", type=str)
parser.add_argument("--jet-type", type=str)
args = parser.parse_args()

os.makedirs(args.outputdir, exist_ok=True)

R.gStyle.SetOptStat(0)

f = R.TFile(args.input, "READ")

def get_cdf_func(h_i, name):
    h = h_i.Clone(name)

    m = h.GetMinimum()
    if m<0:
        for ibin in range(1, h.GetNbinsX()+1):
            h.SetBinContent(ibin, h.GetBinContent(ibin) - m)
            
    h.Scale(1/h.Integral())
    
    h_cdf = h.GetCumulative()
    g_cdf = R.TGraph()
    g_inv = R.TGraph()
    g_cdf.SetName(name + '_cdf')
    g_inv.SetName(name + '_inv')
    g_cdf.SetBit(19)
    g_inv.SetBit(19)
    g_cdf.SetPoint(0, 0., 0.)
    g_inv.SetPoint(0, 0., 0.)
    for ibin in range(1, h_cdf.GetNbinsX()+1):
        #print(ibin,  h_cdf.GetBinCenter(ibin), h_cdf.GetBinContent(ibin))
        y = h_cdf.GetBinContent(ibin)
        if y>1: y=1
        g_cdf.SetPoint(ibin, h_cdf.GetBinCenter(ibin), y)
        g_inv.SetPoint(ibin, y ,h_cdf.GetBinCenter(ibin))
        
    g_cdf.SetPoint(ibin+1, 1., 1.)
    g_inv.SetPoint(ibin+1, 1., 1.)
    return g_cdf, g_inv,h


def get_morphing(gG, gT_inv, name):
    t = R.TGraph()
    t.SetName(name)
    for i,x in enumerate(np.linspace(0.,1.,200)):
        y1 = gG.Eval(x)
        if y1>1: y1 = 1
        y = gT_inv.Eval(y1)
        if y>1: y=1
        t.SetPoint(i,x,y)
    return t



out = R.TFile(args.outputdir + '/' + args.outputfile, "RECREATE")


# Morph quark
for e in ["_loweta", "_higheta"]:
    for ptbin in [ "_pt0","_pt1"] :
        morphs = {}
        for j in ["j" + str(i) for i in range(4)]:
            jet = j+e+ptbin
            hG = f.Get(j + '_gluon_qgl'+e +ptbin)    
            hQ = f.Get(j + '_quark_qgl'+e +ptbin) 
            hData = f.Get('DATA_'+ j + '_nogen_qgl' +e +ptbin )
            hOthers = f.Get('Fake_'+ j + '_nogen_qgl' +e +ptbin )

            nTot = hG.Integral() + hQ.Integral() + hOthers.Integral()
            # Scale data to tot MC
            hData.Scale(nTot / hData.Integral())

            if args.jet_type == "quark":

                hQ_target = hData.Clone("hQ_target_"+j)
                hQ_target.Add(hOthers, -1.)
                hQ_target.Add(hG, -1.)

                gQ, gQ_inv, hQcorr= get_cdf_func(hQ, jet)
                gT , gT_inv, hQtarget_corr = get_cdf_func(hQ_target, jet + "_target")
                
                morph = get_morphing(gQ, gT_inv, jet + "_quark")
                morph.Write()
                morphs[jet + "_quark"] = morph

                c = R.TCanvas()
                hQcorr.Draw("hist")
                hQcorr.SetLineWidth(2)
                hQcorr.SetLineColor(R.kBlue)
                hQcorr.GetYaxis().SetRangeUser(0, 1.2*hQcorr.GetMaximum())
                hQtarget_corr.Draw("hist same")
                hQtarget_corr.SetLineWidth(2)
                hQtarget_corr.SetLineColor(R.kGreen)
                c.Draw()
                c.SaveAs(args.outputdir + '/morphing_debug_{}_{}_{}_{}.png'.format(args.jet_type, e,ptbin, j))

            elif args.jet_type == "gluon":
                hG_target = hData.Clone("hG_target_"+j)
                hG_target.Add(hOthers, -1.)
                hG_target.Add(hQ, -1.)

                gG, gG_inv, hGcorr = get_cdf_func(hG, jet)
                gT , gT_inv, hGtarget_corr = get_cdf_func(hG_target, jet + "_target")
                
                morph = get_morphing(gG, gT_inv, jet + "_gluon")
                morph.Write()
                morphs[jet + "_gluon"] = morph

                c = R.TCanvas()
                hGcorr.Draw("hist")
                hGcorr.SetLineWidth(2)
                hGcorr.SetLineColor(R.kBlue)
                hGcorr.GetYaxis().SetRangeUser(0, 1.2*hGcorr.GetMaximum())
                hGtarget_corr.Draw("hist same")
                hGtarget_corr.SetLineWidth(2)
                hGtarget_corr.SetLineColor(R.kGreen)
                
                c.Draw()
                c.SaveAs(args.outputdir + '/morphing_debug_{}_{}_{}_{}.png'.format(args.jet_type, e,ptbin, j))



        c = R.TCanvas()
        leg = R.TLegend(0.6,0.1,0.9,0.3)
        mg = R.TMultiGraph()
        for label, gr in morphs.items():
                mg.Add(gr)
                leg.AddEntry(gr, label)
                gr.SetLineWidth(2)
                if "j0" in label:  gr.SetLineColor(R.kBlue)
                if "j1" in label:  gr.SetLineColor(R.kGreen)
                if "j2" in label:  gr.SetLineColor(R.kRed)
                if "j3" in label:  gr.SetLineColor(R.kOrange)     
        mg.Draw("APL")
        leg.Draw("same")
        fnc = R.TF1("a","x", 0, 1)
        fnc.SetLineWidth(1)
        fnc.SetLineStyle(2)
        fnc.SetLineColor(R.kCyan)
        fnc.Draw("same")
        c.Draw()
        c.SaveAs(args.outputdir + '/morphing_{}_{}_{}.png'.format(args.jet_type, e,ptbin))

