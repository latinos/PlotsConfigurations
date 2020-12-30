import ROOT as R 
import os
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", type=str)
parser.add_argument("-o","--outputfile", type=str)
parser.add_argument("--outputfile-fit", type=str)
args = parser.parse_args()

iF = R.TFile.Open(args.inputfile, "READ")
oF = R.TFile.Open(args.outputfile,"RECREATE")
oFF = R.TFile.Open(args.outputfile_fit,"UPDATE")

samples= ['VBS','DY','top','VV','VVV','Vg','VgS', 'VBF-V']
wjets_bins = {"res":[], "boost":[]}
for ir in range(1,7):
    wjets_bins["res"].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins["boost"].append("Wjets_HT_boost_"+str(ir))

variables = { 
    "res": ['DNNoutput_res_bins2','vbs_0_qgl_res','vjet_0_qgl_res','vjet_1_qgl_res'],
    "boost":  ['DNNoutput_boost_bins2','vbs_0_qgl_boost']
}

for cut in iF.GetListOfKeys():
    print cut.GetName()
    oF.mkdir(cut.GetName())
    if "boost" in cut.GetName():
        vars = variables["boost"]
        all_samples = samples + wjets_bins['boost']
        other_samples = wjets_bins['res']
    else:
        vars = variables["res"]
        all_samples = samples + wjets_bins['res']
        other_samples = wjets_bins['boost']
    for var in vars:
        oF.mkdir("{}/{}".format(cut.GetName(), var))
    
        for sample in all_samples:
            hnom = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var, sample ))
            if "DNN" in var:
                hup = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var + "_qglmorphup", sample ))   
                hdo = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var + "_qglmorphdo", sample ))
            else:
                hup = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var + "_up", sample ))   
                hdo = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var + "_do", sample ))
            hup.SetName("histo_{}_QGLmorphUp".format(sample))
            hdo.SetName("histo_{}_QGLmorphDown".format(sample))

            oF.cd("{}/{}".format(cut.GetName(), var))
            hnom.Write()
            hup.Write()
            hdo.Write()
            oFF.cd("{}/{}".format(cut.GetName(), var))
            hup.Write()
            hdo.Write()
        # copy also nominal data
        hnom_data = iF.Get("{}/{}/histo_DATA".format(cut.GetName(), var))
        hnom_fake = iF.Get("{}/{}/histo_Fake".format(cut.GetName(), var))
        oF.cd("{}/{}".format(cut.GetName(), var))
        hnom_data.Write()
        hnom_fake.Write()
        #Empty histos for W+jets
        for sam in other_samples:
            hO = hnom.Clone('histo_'+sam)
            hO.Reset()
            hOu = hO.Clone('histo_'+sam+'_QGLmorphUp')
            hOd = hO.Clone('histo_'+sam+'_QGLmorphDown')
            oF.cd("{}/{}".format(cut.GetName(), var))
            hO.Write()
            hOu.Write()
            hOd.Write()
            oFF.cd("{}/{}".format(cut.GetName(), var))
            hOu.Write()
            hOd.Write()

    print '-----------------------'

oF.Close()
iF.Close()