from __future__ import print_function
import ROOT as R 
import argparse


'''
This script extracts the weights to correct data/MC ratio bin by bin on selected cut and variable, 
for the requested samples. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="input file", type=str)
parser.add_argument("--cuts", help="cuts to analyze", nargs="+", type=str)
parser.add_argument("-s","--sample", help="Sample to analyze", type=str)
parser.add_argument("-t", "--thresholds", help="Threshold to analyze", nargs="+", type=float)
args = parser.parse_args()

variable = "Lepton_pt"

iF = R.TFile(args.input, "READ")


R.gStyle.SetOptStat(0)
c = R.TCanvas()
l = R.TLegend(0.2,0.2,0.5, 0.5)
notdraw = True
cache = []

for cut in args.cuts: 
    
    h = R.gDirectory.Get(cut+"/"+variable+"/histo_"+args.sample).Clone("h"+cut)
    h.SetDirectory(0)
    h.Scale(1/h.Integral())
    hc = h.GetCumulative(False)
    hc.SetDirectory(0)
    
    cache.append(hc)
    l.AddEntry(hc, cut,"l")

    print("Category: {}".format(cut))
    for t in args.thresholds:
        print("\tCut: {} --> {}".format(t, hc.GetBinContent(hc.FindBin(t))))

for i, h in enumerate(cache):
    if i==0:
        h.Draw("PLC PMC")
    else:
        h.Draw("PLC SAME")
        
l.Draw("same")
c.Draw()

