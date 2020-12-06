import ROOT as R 
import sys

f = R.TFile.Open(sys.argv[1], "READ")
h = f.Get("pileup")
hp = f.Get("pileup_plus")
hm = f.Get("pileup_minus")

o = R.TFile.Open("output_pu.root","UPDATE")

newhA = R.TH1D(sys.argv[2]+"_100", "pileup", 100, 0, 100)
newhpA = R.TH1D(sys.argv[2]+"_plus_100", "pileup_plus", 100, 0, 100)
newhmA = R.TH1D(sys.argv[2]+"_minus_100", "pileup_minus", 100, 0, 100)
newhB = R.TH1D(sys.argv[2] +"_200", "pileup", 200, 0, 200)
newhpB = R.TH1D(sys.argv[2]+"_plus_200", "pileup_plus", 200, 0, 200)
newhmB = R.TH1D(sys.argv[2]+"_minus_200", "pileup_minus", 200, 0, 200)

for i in range(1, h.GetNbinsX()+1):
    newhA.SetBinContent(newhA.FindBin(h.GetBinCenter(i)), h.GetBinContent(i))
for i in range(1, hp.GetNbinsX()+1):
    newhpA.SetBinContent(newhpA.FindBin(hp.GetBinCenter(i)), hp.GetBinContent(i))
for i in range(1, hm.GetNbinsX()+1):
    newhmA.SetBinContent(newhmA.FindBin(hm.GetBinCenter(i)), hm.GetBinContent(i))


for i in range(1, h.GetNbinsX()+1):
    newhB.SetBinContent(newhB.FindBin(h.GetBinCenter(i)), h.GetBinContent(i))
for i in range(1, hp.GetNbinsX()+1):
    newhpB.SetBinContent(newhpB.FindBin(hp.GetBinCenter(i)), hp.GetBinContent(i))
for i in range(1, hm.GetNbinsX()+1):
    newhmB.SetBinContent(newhmB.FindBin(hm.GetBinCenter(i)), hm.GetBinContent(i))

o.Write()
o.Close()