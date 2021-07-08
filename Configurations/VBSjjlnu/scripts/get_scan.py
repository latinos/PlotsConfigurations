import ROOT as R
import sys

f = R.TFile(sys.argv[1])
tree = f.Get("limit")

o = R.TFile(sys.argv[2],"recreate")

tree.Draw("r:2*deltaNLL","","goff")
x = tree.GetV1()
y = tree.GetV2()
N = tree.GetSelectedRows()
gr = R.TGraph(N)
for i in range(N):
    print(i,x[i], y[i])
    gr.SetPoint(i, x[i], y[i])
gr.SetName(sys.argv[3])
o.cd()
gr.Write()
o.Close() 
f.Close()