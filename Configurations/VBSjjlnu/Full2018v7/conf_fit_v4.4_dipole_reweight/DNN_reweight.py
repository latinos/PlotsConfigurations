import ROOT as R 
import sys 


iF = R.TFile.Open(sys.argv[1],"READ")
oF = R.TFile.Open(sys.argv[2],"RECREATE")

################
for cut in ["res_sig_ele","res_sig_mu"]:

    h_dipole = iF.Get("{}/DNNoutput_res_v1/histo_VBS_dipoleRecoil".format(cut))
    h_nodipole = iF.Get("{}/DNNoutput_res_v1/histo_VBS".format(cut))

    h_ratio = h_dipole.Clone("DNN_weight_dipole")
    h_ratio.Divide(h_nodipole)
    oF.cd("/")
    oF.mkdir(cut)
    oF.cd(cut)
    h_ratio.Write()

#################3
for cut in ["boost_sig_ele","boost_sig_mu"]:
    h_dipole = iF.Get("{}/DNNoutput_boost/histo_VBS_dipoleRecoil".format(cut))
    h_nodipole = iF.Get("{}/DNNoutput_boost/histo_VBS".format(cut))

    h_ratio = h_dipole.Clone("DNN_weight_dipole")
    h_ratio.Divide(h_nodipole)

    oF.cd("/")
    oF.mkdir(cut)
    oF.cd(cut)
    h_ratio.Write()

oF.Close()
iF.Close()
