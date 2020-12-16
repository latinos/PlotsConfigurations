import ROOT as R
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import argparse
import os

R.gROOT.SetBatch(True)

parser = argparse.ArgumentParser()
parser.add_argument("--inputfile", type=str)
parser.add_argument("--cut", type=str)
parser.add_argument("--var", type=str)
parser.add_argument("--sample", type=str)
parser.add_argument("--outputdir", type=str)
parser.add_argument("--outputfile", type=str)
args = parser.parse_args()

if not os.path.exists(args.outputdir): os.makedirs(args.outputdir)

R.gStyle.SetOptStat(0)

iF = R.TFile.Open(args.inputfile, "READ")

def get_cdf_func(h_i, name, xmin,xmax):
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
    g_cdf.SetPoint(0, xmin, 0.)
    g_inv.SetPoint(0, xmin, 0.)
    for ibin in range(1, h_cdf.GetNbinsX()+1):
        #print(ibin,  h_cdf.GetBinCenter(ibin), h_cdf.GetBinContent(ibin))
        y = h_cdf.GetBinContent(ibin)
        if y>1: y=1
        g_cdf.SetPoint(ibin, h_cdf.GetBinCenter(ibin), y)
        g_inv.SetPoint(ibin, y ,h_cdf.GetBinCenter(ibin))
        
    g_cdf.SetPoint(ibin+1, xmax, 1.)
    g_inv.SetPoint(ibin+1, xmax, 1.)
    return g_cdf, g_inv


def get_morphing(gG, gT_inv, name, xmin, xmax,nbins):
    t = R.TGraph()
    t.SetName(name)
    for i,x in enumerate(np.linspace(xmin,xmax,nbins)):
        y1 = gG.Eval(x)
        if y1>xmax: y1 = xmax
        y = gT_inv.Eval(y1)
        if y>xmax: y=xmax
        t.SetPoint(i,x,y)
    return t


iF.cd(args.cut +"/"+ args.var)

hData = R.gDirectory.Get("histo_DATA").Clone()
hToMorph = R.gDirectory.Get("histo_"+ args.sample)
hOthers = None

for l in R.gDirectory.GetListOfKeys():
    name = l.GetName()
    if "DATA" not in name and args.sample not in name:
        if hOthers == None:
            hOthers = R.gDirectory.Get(name).Clone("hOthers")
        else:
            ho = R.gDirectory.Get(name)
            hOthers.Add(ho)


nTot = hToMorph.Integral() + hOthers.Integral()
# Scale data to tot MC
hData.Scale(nTot / hData.Integral())

xmin = hData.GetXaxis().GetBinLowEdge(1)
xmax = hData.GetXaxis().GetBinUpEdge(hData.GetNbinsX())
nbins = hData.GetNbinsX()

print xmin, xmax, nbins

out = R.TFile(args.outputdir + '/' + args.outputfile +".root", "RECREATE")

hTarget = hData.Clone("hTarget")
hTarget.Add(hOthers, -1.)


gQ, gQ_inv= get_cdf_func(hToMorph, "original", xmin,xmax)
gT , gT_inv = get_cdf_func(hTarget, "target", xmin, xmax)

morph = get_morphing(gQ, gT_inv, "morph", xmin, xmax, nbins)
morph.Write()


c = R.TCanvas()
leg = R.TLegend(0.6,0.6,0.9,0.8)
hTarget.Draw("hist")
hTarget.SetLineColor(R.kRed)
hToMorph.Draw("hist same")
hToMorph.SetLineColor(R.kBlue)
leg.AddEntry(hTarget, "target")
leg.AddEntry(hToMorph, "original")
leg.Draw("same")
c.Draw()
c.SaveAs(args.outputdir + "/"+ args.outputfile + "_comparison.png")


c1 = R.TCanvas()
mg = R.TMultiGraph()
leg = R.TLegend(0.6,0.1,0.9,0.3)
mg.Add(morph)
leg.AddEntry(morph, "morph f(x)")
morph.SetLineColor(R.kGreen)
morph.SetLineWidth(2)

line = R.TGraph()
line.SetName("line")
line.SetPoint(0, xmin,xmin)
line.SetPoint(1, xmax, xmax)
mg.Add(line)
leg.AddEntry(line, "identity")
line.SetLineColor(R.kCyan)
mg.Draw("APL")
leg.Draw("same")

c1.Draw()
c1.SaveAs(args.outputdir + "/"+ args.outputfile + "_morph.png")



c2 = R.TCanvas()
leg = R.TLegend(0.6,0.1,0.9,0.3)
mg = R.TMultiGraph()
mg.Add(gQ)
leg.AddEntry(gQ, "original CDF")
gQ.SetLineColor(R.kBlue)
mg.Add(gT)
leg.AddEntry(gT, "target CDF")
gT.SetLineColor(R.kRed)
mg.Draw()
mg.Draw("APL")
leg.Draw("same")
c2.Draw()
c2.SaveAs(args.outputdir + "/"+ args.outputfile + "_cdfs.png")