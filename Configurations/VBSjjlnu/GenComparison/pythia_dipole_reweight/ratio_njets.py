import ROOT as R 
import sys 


f= R.TFile.Open(sys.argv[1],"UPDATE")

for njet in [2,3,4,5,6,7,8]:
    for c in ["njet","mjj100_njet"]:
        cut = c+str(njet)
        f.cd(cut)
        for var in ['nGenJetClean30','mjj','mjj_zoom2', 'mjj_morebins','mjj_zoom','detajj',
                    'detajj_morebins', 'vbs0_pt','vbs1_pt', 
                    'vbs1_pt_bin2','vbstot_pt', 'GenLepPt',
                     "vbstot_pt_zoom","mjj_morebins_100"]:
            print(cut, var)
            pythia = f.Get("{}/{}_{}".format(cut, "pythia",var))
            dipole = f.Get("{}/{}_{}".format(cut, "pythiaDipole",var))
            ratio = dipole.Clone("ratio_{}".format(var))
            ratio.Divide(pythia)
            ratio.Write()
        f.cd("/")

f.Close()