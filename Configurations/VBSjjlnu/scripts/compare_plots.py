import ROOT as R 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-a", help="File A", type=str, )
parser.add_argument("-b", help="File B", type=str)
parser.add_argument("--ta", help="Title A", type=str)
parser.add_argument("--tb", help="Title B", type=str)
parser.add_argument("--cut", help="Cut", type=str)
parser.add_argument("--var", help="Var", type=str)
parser.add_argument("--sample", help="Var", type=str)
parser.add_argument("-o", "--output", help="Output", type=str)
args = parser.parse_args()

fA = R.TFile(args.a)
fB = R.TFile(args.b)

hA = fA.Get(args.cut +"/"+ args.var +"/histo_"+ args.sample)
hB = fB.Get(args.cut +"/"+ args.var +"/histo_"+ args.sample)
hA.SetLineColor(R.kBlue)
hB.SetLineColor(R.kRed)

c = R.TCanvas("c1")
leg = R.TLegend(0.4,0.7,0.6,0.9)
leg.AddEntry(hA, args.ta, "l")
leg.AddEntry(hB, args.tb, "l")
hR1 = R.TRatioPlot(hA, hB, "divsym")
hA.GetXaxis().SetTitle("eta")
hR1.Draw()
leg.Draw()
c.Draw()
c.SaveAs(args.output+".png")