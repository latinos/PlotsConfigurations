import ROOT as R 
import sys 

f = R.TFile.Open(sys.argv[1])

h = f.Get("res_sig_mu/vjet_0_qgl_res/histo_VBS")

print h.Integral()