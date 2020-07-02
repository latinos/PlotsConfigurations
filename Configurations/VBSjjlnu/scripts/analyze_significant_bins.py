import ROOT as R 
import sys 
from math import sqrt

file = R.TFile(sys.argv[1])

cuts = ["res_sig_mjjincl_mu/DNNoutput_high_200bins/","res_sig_mjjincl_ele/DNNoutput_high_200bins/"]
labels = ["mu", "ele"]

#bkgs = ["Wjets", "top", "DY", "VV", "VVV", "Fake", "VBF-V"]
bkgs = ["Wjets", "top", "DY",  "VVV", "Fake"]
signal = "VBS"
bin_start = [184, 181 ]
n_sig_events = int(sys.argv[2])

mg = R.TMultiGraph()

for ic, cut in enumerate(cuts): 

    print(cut)
    totb = file.Get(cut+"/histo_"+bkgs[0]).Clone("tot_backgrounds")
    for bkg in bkgs[1:]:
        totb.Add(file.Get(cut+"/histo_"+bkg))

    sigh = file.Get(cut+"/histo_VBS").Clone("tot_signal")

    nbins = totb.GetNbinsX()

    bin_edges = []
    bin_num = []
    totB = []
    totS = []

    last_edge = 1
    sum_s = 0
    sum_b = 0
    for bin in range(bin_start[ic],0, -1):
        sig = sigh.GetBinContent(bin)
        bkg = totb.GetBinContent(bin)
        sum_s += sig 
        sum_b += bkg 
        #print(bin, totb.GetBinLowEdge(bin), sum_s, sum_b)
        if sum_s >= n_sig_events:
            bin_edges.append((totb.GetBinLowEdge(bin), last_edge))
            bin_num.append(bin)
            totB.append(sum_b)
            totS.append(sum_s)
            last_edge = totb.GetBinLowEdge(bin)
            sum_s = 0
            sum_b = 0

    print("| bin | bin-down | bin-up | total signal | total bkg | s / sqrt(b) | s/sqrt(b+5%)| s/sqrt(b+10%)| ")
    print("|-----|-------|-------|---------|-------|-------|-------|-------|")
    for i, (bN, bE, tS,tB) in enumerate( zip(bin_num, bin_edges, totS, totB)) :
        print(i, "| {} |{} |{}| {:.2f}| {:.2f}|{:.2f}|{:.2f}|{:.2f}|".format(bN, bE[0], bE[1], tS, tB, tS/sqrt(tB), tS/sqrt(tB*(1+tB*(0.05**2))),tS/sqrt(tB*(1+tB*(0.1**2))) ))
    


# c = R.TCanvas()

# mg.Draw("APL")
# mg.SetTitle("Tot Bkg with bins of 5 signal events;Bin edge;N. bkg events")
# c.Draw()