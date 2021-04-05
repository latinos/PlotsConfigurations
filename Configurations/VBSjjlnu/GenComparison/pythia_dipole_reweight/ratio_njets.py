import ROOT as R 
import sys 


f= R.TFile.Open(sys.argv[1],"UPDATE")

for c in [2,3,4,5,6,7]: #recocut_cleanlep 
    cut = 'njet'+str(c)
    f.cd(cut)
    for var in ['nGenJetClean30','mjj','mjj_400', 'detajj_morebins', 'vbs0_pt','vbs1_pt', 
                'vbstot_pt', 'vbstot_pt_zoom',
                'mjj_vbstot', 'mjj_vbstot_morebins','vbstot_detajj']:
        print(cut, var)
        pythia = f.Get("{}/{}_{}".format(cut, "pythia",var))
        dipole = f.Get("{}/{}_{}".format(cut, "pythiaDipole",var))
        ratio = dipole.Clone("ratio_{}".format(var))
        ratio.Divide(pythia)
        ratio.Write()
    f.cd("/")

f.Close()