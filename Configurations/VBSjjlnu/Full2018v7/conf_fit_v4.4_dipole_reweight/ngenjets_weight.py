import ROOT as R 
import sys 


iF = R.TFile.Open(sys.argv[1],"READ")
oF = R.TFile.Open(sys.argv[2],"RECREATE")

################
hele_dipole = iF.Get("res_sig_ele/n_gen_jets/histo_VBS_dipoleRecoil")
hmu_dipole = iF.Get("res_sig_mu/n_gen_jets/histo_VBS_dipoleRecoil")
hele_nodipole = iF.Get("res_sig_ele/n_gen_jets/histo_VBS_dipole_weightUp")
hmu_nodipole = iF.Get("res_sig_mu/n_gen_jets/histo_VBS_dipole_weightUp")

h_ratio = hele_dipole.Clone("ngenjets_weight_res")
h_ratio.Add(hmu_dipole)

h_nodipole = hele_nodipole.Clone()
h_nodipole.Add(hmu_nodipole)

h_ratio.Divide(h_nodipole)

oF.cd()
h_ratio.Write()

#################3
hele_dipole = iF.Get("boost_sig_ele/n_gen_jets/histo_VBS_dipoleRecoil")
hmu_dipole = iF.Get("boost_sig_mu/n_gen_jets/histo_VBS_dipoleRecoil")
hele_nodipole = iF.Get("boost_sig_ele/n_gen_jets/histo_VBS_dipole_weightUp")
hmu_nodipole = iF.Get("boost_sig_mu/n_gen_jets/histo_VBS_dipole_weightUp")

h_ratio = hele_dipole.Clone("ngenjets_weight_boost")
h_ratio.Add(hmu_dipole)

h_nodipole = hele_nodipole.Clone()
h_nodipole.Add(hmu_nodipole)

h_ratio.Divide(h_nodipole)

oF.cd()
h_ratio.Write()

oF.Close()
iF.Close()