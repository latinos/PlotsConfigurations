'''
ratio: Data / ( weight(MC) + Fake )
'''

import ROOT as R
import sys
import argparse
from math import sqrt

parser = argparse.ArgumentParser()
parser.add_argument("--file", type=str, help="File")
parser.add_argument("--file_weight", type=str, help="Weights File")
parser.add_argument("--var",type=str, help="Variable")
parser.add_argument("--samples",nargs="+", type=str, help="Samples")
parser.add_argument("--cat", type=str, help="Category")
args = parser.parse_args()

file = args.file
samples = args.samples
cat = args.cat

print('read weights from textfile')
xs = []
ys = []
with open(args.file_weight, "r") as f:
    for line in f:
        x,y = line.split()
        x, y = int(x), float(y)
        xs.append(x)
        ys.append(y)

if 'Zmm' in args.file_weight:
    print('read zmmnorm weights from textfile')
    xs_zmmnorm = []
    ys_zmmnorm = []
    with open("zmmnorm_" + args.file_weight, "r") as f:
        for line in f:
            x,y = line.split()
            x, y = int(x), float(y)
            xs_zmmnorm.append(x)
            ys_zmmnorm.append(y)

print('import histo from rootfile')
f = R.TFile(file)

# def data_hist - h2
data_hist = f.Get(cat+ "/"+args.var+"/histo_DATA")
# data_hist.Scale(1/data_hist.Integral())
data_hist.SetLineColor(R.kRed)
data_hist.SetLineWidth(2)

# def tot_mc - h1
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
tot_mc_integral = tot_mc.Integral()

nbins = data_hist.GetNbinsX()
nvtx_uncorrected={}
print('apply weights')
for ibin in range(1, nbins):
    bin_content = tot_mc.GetBinContent(ibin)
    nvtx_uncorrected[str(ibin)] = bin_content
    # print(ibin, xs[ibin-1], ys[ibin-1])
    tot_mc.SetBinContent(ibin, bin_content * ys[ibin-1]) 
tot_mc_integral_rew = tot_mc.Integral()
integral_ratio = tot_mc_integral_rew / tot_mc_integral
print(integral_ratio)

if 'Zmm' in args.file_weight:
    print('apply normalized weights')
    print(tot_mc)
    for ibin in range(1, nbins):
        # bin_content = tot_mc.GetBinContent(ibin)
        bin_content = nvtx_uncorrected[str(ibin)]
        # print(ibin, xs[ibin-1], ys[ibin-1])
        tot_mc.SetBinContent(ibin, bin_content * ys_zmmnorm[ibin-1]) 
    print(tot_mc.Integral() / tot_mc_integral)

tot_mc.SetLineColor(R.kRed)
tot_mc.GetYaxis().SetTitleSize(20)
tot_mc.GetYaxis().SetTitleFont(43)
tot_mc.GetYaxis().SetTitleOffset(1.55)
tot_mc.SetStats(0)

# No fake in DY under Z peak
# if 'mm' in args.cat:
#     fake_sample = '/histo_Fake_mm'
# elif 'ee' in args.cat:
#     fake_sample = '/histo_Fake_ee'
# else:
#     print 'no fake sample selected, exit 1'
# fake_hist =  f.Get(cat+ "/" + args.var + fake_sample)
# tot_mc.Add(fake_hist, +1)

# def ratio - h3
# https://root.cern.ch/doc/v608/ratioplot_8py_source.html
h3 = data_hist.Clone("h3")
h3.SetLineColor(R.kBlack)
h3.SetMarkerStyle(21)
h3.SetTitle("")
h3.SetMinimum(0.8)
h3.SetMaximum(1.35)
# Set up plot for markers and errors
h3.Sumw2()
h3.SetStats(0)
h3.Divide(tot_mc)

# Adjust y-axis settings
y = h3.GetYaxis()
y.SetTitle("ratio data / mc ")
y.SetNdivisions(505)
y.SetTitleSize(20)
y.SetTitleFont(43)
y.SetTitleOffset(1.55)
y.SetLabelFont(43)
y.SetLabelSize(15)

# Adjust x-axis settings
x = h3.GetXaxis()
x.SetTitleSize(20)
x.SetTitleFont(43)
x.SetTitleOffset(4.0)
x.SetLabelFont(43)
x.SetLabelSize(15)

# def canvas
c = R.TCanvas("c", "canvas", 800, 800)
# Upper histogram plot is pad1
pad1 = R.TPad("pad1", "pad1", 0, 0.3, 1, 1.0)
pad1.SetBottomMargin(0)  # joins upper and lower plot
pad1.SetGridx()
pad1.Draw()
# Lower ratio plot is pad2
c.cd()  # returns to main canvas before defining pad2
pad2 = R.TPad("pad2", "pad2", 0, 0.05, 1, 0.3)
pad2.SetTopMargin(0)  # joins upper and lower plot
pad2.SetBottomMargin(0.2)
pad2.SetGridx()
pad2.Draw()

# draw everything
pad1.cd()
tot_mc.Draw()
data_hist.Draw("same")
# to avoid clipping the bottom zero, redraw a small axis
tot_mc.GetYaxis().SetLabelSize(0.0)
axis = R.TGaxis(-5, 20, -5, 220, 20, 220, 510, "")
axis.SetLabelFont(43)
axis.SetLabelSize(15)
axis.Draw()
pad2.cd()
h3.Draw("ep")
line = R.TLine(0,1,100,1)
line.SetLineColor(R.kBlack)
line.Draw()

if 'Zmm' in args.file_weight and 'mm' in args.cat :
    print ('writing file with nvtx Zmm normalization correction factor')
    with open('nvtx_zmm_integralratio.txt', 'w') as f:
        f.write(str(integral_ratio))

# weights = []
# x = []
# errw = []

# for ibin in range(1, nbins+1):
#     x.append(tot_mc.GetXaxis().GetBinLowEdge(ibin))
#     if tot_mc.GetBinContent(ibin) == 0: 
#         weights.append(1.)
#         continue
#     weights.append(data_hist.GetBinContent(ibin) / tot_mc.GetBinContent(ibin))
#     errw.append( sqrt(  (1/tot_mc.GetBinContent(ibin))**2 * data_hist.GetBinError(ibin)**2  \
#                 + ( data_hist.GetBinContent(ibin)/ tot_mc.GetBinContent(ibin)**2 )**2 * tot_mc.GetBinError(ibin)**2))


#wsum = sum(weights)
#norm_weights = [w / wsum for w in weights]

# with open("output_reweighting_{}.txt".format(cat), "w") as out:
#     for x,w,err in zip(x,weights, errw):
#         out.write("{:.0f} {} 0. {}\n".format(x,w, err)) 


