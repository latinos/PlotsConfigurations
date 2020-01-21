'''
Ratio normalized( Data - Fake ) / normalized( MC )
'''

import ROOT as R
import sys
import argparse
from math import sqrt


parser = argparse.ArgumentParser()
parser.add_argument("--file", type=str, help="File")
parser.add_argument("--var",type=str, help="Variable")
parser.add_argument("--samples",nargs="+", type=str, help="Samples")
# parser.add_argument("--cat", type=str, help="Category")
args = parser.parse_args()

file = args.file
f = R.TFile(file)

hs = {}
tot_mcs = []

samples = args.samples
# cats = ('Zee', 'Zmm')

tot_mc_ele = None
for s in samples:
    h = f.Get('Zee'+ "/"+args.var+"/histo_"+s)
    print (h)
    hs[s] = h
    if tot_mc_ele:
        tot_mc_ele.Add(h)
    else:
        tot_mc_ele = h.Clone()
        tot_mc_ele.SetName("MC Zee") 

tot_mc_mu = None
for s in samples:
    h = f.Get('Zmm'+ "/"+args.var+"/histo_"+s)
    print (h)
    hs[s] = h
    if tot_mc_mu:
        tot_mc_mu.Add(h)
    else:
        tot_mc_mu = h.Clone()
        tot_mc_mu.SetName("MC Zmm") 


c = R.TCanvas()
tot_mc_ele.SetTitle("Compare nvtx in Zmm and Zee - MC")
tot_mc_ele.SetLineColor(R.kRed)
tot_mc_mu.SetLineColor(R.kBlue)
tot_mc_ele.DrawNormalized("")
tot_mc_mu.DrawNormalized("same")
c.BuildLegend()
c.Draw()

c2 = R.TCanvas()
data_ele = f.Get('Zee'+ "/"+args.var+"/histo_DATA")
data_ele.SetTitle("Compare nvtx in Zmm and Zee - MC")
data_mu  = f.Get('Zmm'+ "/"+args.var+"/histo_DATA")
data_ele.SetLineColor(R.kRed)
data_mu.SetLineColor(R.kBlue)
data_ele.DrawNormalized("")
data_mu.DrawNormalized("same")
c2-BuildLegend()