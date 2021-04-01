import ROOT as R 
import sys 


f= R.TFile.Open(sys.argv[1],"UPDATE")

for cut in ['incl_cleanlep']: #recocut_cleanlep 
    f.cd(cut)
    for var in ['nGenJetClean30','mjj','detajj', 'vbs0_pt','vbs1_pt', 'vbs1_pt_bin2','vbs1_pt_bin3',
                'njet_vbs0_pt','njet_vbs1_pt', 'njet_vbs0_pt_bin2','njet_vbs1_pt_bin2','njet_vbs1_pt_bin3',
                'njet_detajj','njet_detajj_bin2',
                'njet_vbs0_vbs1_pt','njet_vbs0_vbs1_pt_bin2','njet_vbs0_vbs1_pt_bin3',
                'njet_vbs1_pt_detajj','njet_vbs1_pt_detajj_bin2','njet_vbs1_pt_detajj_bin3']:
        print(cut, var)
        pythia = f.Get("{}/{}_{}".format(cut, "pythia",var))
        dipole = f.Get("{}/{}_{}".format(cut, "pythiaDipole",var))
        ratio = dipole.Clone("ratio_dipolepythia_{}".format(var))
        ratio.Divide(pythia)
        ratio.Write()
    f.cd("/")

f.Close()