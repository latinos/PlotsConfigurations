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
parser.add_argument("--cat", type=str, help="Category")
args = parser.parse_args()

file = args.file
samples = args.samples
cat = args.cat

f = R.TFile(file)

hs = {}
tot_mc = None


for s in samples:
    h = f.Get(cat+ "/"+args.var+"/histo_"+s)
    print (h)
    hs[s] = h
    if tot_mc:
        tot_mc.Add(h)
    else:
        tot_mc = h.Clone()
        tot_mc.SetName("totMC") 

data_hist = f.Get(cat+ "/"+args.var+"/histo_DATA")

# No fake in DY under Z peak
# if 'mm' in args.cat:
#     fake_sample = '/histo_Fake_mm'
# elif 'ee' in args.cat:
#     fake_sample = '/histo_Fake_ee'
# else:
#     print 'no fake sample selected, ERROR'
# fake_hist =  f.Get(cat+ "/" + args.var + fake_sample)
# data_hist.Add(fake_hist, -1)

# Ratio: normalized distribution!
tot_mc.Scale(1/ tot_mc.Integral())
data_hist.Scale(1/data_hist.Integral())

c = R.TCanvas()
tot_mc.Draw("hist")
tot_mc.SetLineColor(R.kRed)
data_hist.Draw("hist same")
c.Draw()

nbins = data_hist.GetNbinsX()

weights = []
x = []
errw = []

for ibin in range(1, nbins+1):
    x.append(tot_mc.GetXaxis().GetBinLowEdge(ibin))
    if tot_mc.GetBinContent(ibin) == 0: 
        # used for ibin == 1 case
        weights.append(1.)
        continue
    weights.append(data_hist.GetBinContent(ibin) / tot_mc.GetBinContent(ibin))
    errw.append( sqrt(  (1/tot_mc.GetBinContent(ibin))**2 * data_hist.GetBinError(ibin)**2  \
                + ( data_hist.GetBinContent(ibin)/ tot_mc.GetBinContent(ibin)**2 )**2 * tot_mc.GetBinError(ibin)**2))


#wsum = sum(weights)
#norm_weights = [w / wsum for w in weights]

with open("output_reweighting_{}.txt".format(cat), "w") as out:
    for x,w,err in zip(x,weights, errw):
        out.write("{:.0f} {} 0. {}\n".format(x,w, err)) 


