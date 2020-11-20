import ROOT as R
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
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
        g_cdf.SetPoint(ibin, h_cdf.GetBinCenter(ibin), h_cdf.GetBinContent(ibin))
        g_inv.SetPoint(ibin, h_cdf.GetBinContent(ibin),h_cdf.GetBinCenter(ibin))
    g_cdf.SetPoint(ibin+1, 1., 1.)
    g_inv.SetPoint(ibin+1, 1., 1.)
    return g_cdf, g_inv


def get_morphing(gG, gT_inv, name):
    t = R.TGraph()
    t.SetName(name)
    t.SetPoint(0, 0., 0.)
    for i,x in enumerate(np.linspace(0.,1.,250)):
        y = gT_inv.Eval(gG.Eval(x))
        t.SetPoint(i+1,x,y)
    t.SetPoint(i+2,1.,1.)
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

                gQ, gQ_inv= get_cdf_func(hQ, jet)
                gT , gT_inv = get_cdf_func(hQ_target, jet + "_target")
                
                morph = get_morphing(gQ, gT_inv, jet + "_quark")
                morph.Write()
                morphs[jet + "_quark"] = morph

            elif args.jet_type == "gluon":
                hG_target = hData.Clone("hG_target_"+j)
                hG_target.Add(hOthers, -1.)
                hG_target.Add(hQ, -1.)

                gG, gG_inv= get_cdf_func(hG, jet)
                gT , gT_inv = get_cdf_func(hG_target, jet + "_target")
                
                morph = get_morphing(gG, gT_inv, jet + "_gluon")
                morph.Write()
                morphs[jet + "_gluon"] = morph

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

