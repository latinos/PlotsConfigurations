'''
Ratio normalized( Data ) / normalized( MC )


'''

import ROOT as R
import sys
import argparse
from math import sqrt

parser = argparse.ArgumentParser()
parser.add_argument("--file", type=str, help="mkShape rootFile")
parser.add_argument("--outputdir", type=str, help="outputdir")
parser.add_argument("--var",type=str, help="Variable whose disrtibution is used to compute the new set of weights")
parser.add_argument("--shape1", type=str, help="Shape1")
parser.add_argument("--shape2",type=str, help="Shape2 ")
parser.add_argument("--cat", type=str, help="Category (only a single category is considered!)")
#parser.add_argument("--fit-func", type=str, help="Fit function expression")
parser.add_argument("--fit-range", nargs=2, type=float, help="Fit range")
args = parser.parse_args()

file = args.file
cat = args.cat

f = R.TFile(file)

h1 = f.Get(cat + "/"+ args.var + "/histo_" + args.shape1)
h2 = f.Get(cat + "/"+ args.var + "/histo_" + args.shape2)

# bin0 = h1.FindBin(141)
# bin1 = h1.FindBin(161)

# tot1 = sum([h1.GetBinContent(i) for i in range(bin0, bin1)])
# tot2 = sum([h2.GetBinContent(i) for i in range(bin0, bin1)])
# nbins = bin1-bin0 
# #print(mean)
# for ib in range(bin0, bin1):
#     h1.SetBinContent(ib, tot1/nbins)
#     h2.SetBinContent(ib, tot2/nbins)

# bin0 = h1.FindBin(161)
# bin1 = h1.FindBin(181)

# tot1 = sum([h1.GetBinContent(i) for i in range(bin0, bin1)])
# tot2 = sum([h2.GetBinContent(i) for i in range(bin0, bin1)])
# nbins = bin1-bin0 
# #print(mean)
# for ib in range(bin0, bin1):
#     h1.SetBinContent(ib, tot1/nbins)
#     h2.SetBinContent(ib, tot2/nbins)


h1.Scale(1/ h1.Integral())
h2.Scale(1/ h2.Integral())


c1 = R.TCanvas("c1","c1")
le = R.TLegend()
h1.Draw("hist")
h2.Draw("hist same")
h2.SetLineColor(R.kRed)
le.AddEntry(h1, args.shape1,"lpm")
le.AddEntry(h2, args.shape2,"lpm")
le.Draw("same")
c1.SetLogy()
c1.Draw()
c1.SaveAs(args.outputdir + "/nlo_lo_normcomparison.png")
c1.SaveAs(args.outputdir + "/nlo_lo_normcomparison.pdf")

hratio = h1.Clone("ratio")
hratio.SetTitle("NLO/LO")
hratio.Divide(h2)
# Fit the function
# #print(">>> Fitting function {}, in range {}".format(args.fit_func, args.fit_range))

#Function is over all the range 
func1 = R.TF1("wf1", "[0]+ exp(-x/[1])", *args.fit_range )
func1.SetLineWidth(3)

func1.SetParameter(0, 0.6)
func1.SetParameter(1, 300)
hratio.Fit("wf1", "+","", *args.fit_range)


#Function is over all the range 
func2 = R.TF1("wf2", "[0]", 140,180 )
func2.SetLineWidth(3)

func2.SetParameter(0, 0.6)
func2.SetParameter(1, 300)
hratio.Fit("wf2", "+","", 140,180)

c2 = R.TCanvas("ratio", "ratio")
hratio.Draw()
#func1.Draw("same")
c2.Draw()
c2.SaveAs(args.outputdir + "/nlo_lo_ratiofit.png")
c2.SaveAs(args.outputdir + "/nlo_lo_ratiofit.pdf")

print("[0]+ exp(-x/[1])")
print("Parameter [0] = {}".format(func1.GetParameter(0)))
print("Parameter [1] = {}".format(func1.GetParameter(1)))


for i in range(10):
    print("Bin {} : hratio: {}".format(i,hratio.GetBinContent(i)))
