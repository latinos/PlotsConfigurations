from __future__ import print_function
import ROOT as R 
import sys 
import canvas_utils

R.gROOT.SetBatch(True)

iF = R.TFile.Open(sys.argv[1])
data_p = float(sys.argv[2])
output = sys.argv[3]

c = canvas_utils.get_canvas('G.O.F. saturated model',600,800)


tree = iF.Get("limit")

tree.Draw('limit>>h(30,180,300)')



leg = R.TLegend(0.65, 0.8, 0.95, 0.9)

h = R.gDirectory.Get("h")
h.GetXaxis().SetTitle("t")
h.GetYaxis().SetTitle("Counts")
leg.AddEntry(h, "Toys [300]")
h.GetYaxis().SetRangeUser(0., h.GetMaximum()*1.3)
h.Draw()

gt = tree.GetEntries('limit>'+str(data_p))
tot = h.GetEntries()
print(gt, tot)

line = R.TLine(data_p, 0., data_p, 33.8)
line.SetLineWidth(2)
line.SetLineColor(R.kRed)
line.Draw("same")

leg.AddEntry(line,"Data obs. p={:.2f}".format(gt/tot))
leg.Draw("same")

canvas_utils.finalize(c,h)
# c.Draw()

c.SaveAs(output)