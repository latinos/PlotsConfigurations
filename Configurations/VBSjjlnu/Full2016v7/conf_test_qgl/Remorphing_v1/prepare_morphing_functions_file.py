import ROOT as R 

f0 = R.TFile("morphing_functions_iter0.root")
f1 = R.TFile("morphing_functions_iter1_temp.root")

gr0 = ["j3_loweta_pt0_gluon",  "j2_loweta_pt1_gluon", "j0_higheta_pt0_quark", "j0_higheta_pt1_quark"]
gr1 = ["j1_loweta_pt0_quark", "j0_loweta_pt1_quark"]
    
out = R.TFile("morphing_functions_iter1.root", "RECREATE")


for g in gr0:
    gr = f0.Get(g)
    out.cd()
    gr.Write()

for g in gr1:
    gr = f1.Get(g)
    out.cd()
    gr.Write() 

out.Close()