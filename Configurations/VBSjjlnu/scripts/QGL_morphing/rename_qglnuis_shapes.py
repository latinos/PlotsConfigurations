from __future__ import print_function
import ROOT as R 
import os
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", type=str)
parser.add_argument("-o","--outputfile", type=str)
parser.add_argument("--outputfile-fit", type=str)
parser.add_argument("--name", type=str)
args = parser.parse_args()

iF = R.TFile.Open(args.inputfile, "READ")
oF = R.TFile.Open(args.outputfile,"RECREATE")
oFF = R.TFile.Open(args.outputfile_fit,"UPDATE")

# samples= ['VBS','DY','top','VV','VVV','Vg','VgS', 'VBF-V','ggWW'] # 'VBS_dipoleRecoil'
VBS_samples = ["VBS_osWW", "VBS_ssWW", "VBS_WZjj", "VBS_WZll", "VBS_ZZ"]
VV_samples = ["VV_osWW", "VV_ssWW", "VV_WZjj", "VV_WZll", "VV_ZZ"]
samples =  VBS_samples + VV_samples #+['VBF-V_dipole',"VBS_dipoleRecoil"] +
wjets_bins = {"res":[], "boost":[]}
# for ir in range(1,22):
#     wjets_bins["res"].append("Wjets_res_"+str(ir))
# for ir in range(1,8):
#     wjets_bins["boost"].append("Wjets_boost_"+str(ir))

# variables = { 
#     "res": ['DNNoutput_res_v1','vbs_0_qgl_res','vjet_0_qgl_res','vjet_1_qgl_res'],
#     "boost":  ['vbs_0_qgl_boost','DNNoutput_boost']#
# }

variables = { 
    "res": ['DNNoutput_res_v1'],
    "boost":  ['DNNoutput_boost']#
}

for cut in iF.GetListOfKeys():
    # if 'sig' not in cut.GetName(): continue
    print (cut.GetName())
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
        oFF.mkdir("{}/{}".format(cut.GetName(), var))
    
        for sample in all_samples:
            #print "{}/{}/histo_{}".format(cut.GetName(), var, sample )
            #hnom = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var, sample ))

            for m in ["morphUp", "morphDown"]:
                for jtype in ["quark", "gluon"]:
                    for  jeta in ["higheta", "loweta"]:
                        mtyp = "_".join([m,jtype,jeta])
                        print ("{}/{}_{}/histo_{}".format(cut.GetName(), var, mtyp, sample ))
                        hup = iF.Get("{}/{}_{}/histo_{}".format(cut.GetName(), var, mtyp, sample ))   
                        hdo = iF.Get("{}/{}_{}/histo_{}".format(cut.GetName(), var, mtyp, sample ))
                        if m == "morphUp":
                            hup.SetName("histo_{}_QGLmorph_{}_{}_{}Up".format(sample, jtype,jeta, args.name))
                        elif m == "morphDown":
                            hup.SetName("histo_{}_QGLmorph_{}_{}_{}Down".format(sample, jtype,jeta, args.name))
                        
                        oF.cd("{}/{}".format(cut.GetName(), var))
                        #hnom.Write()
                        hup.Write()
                        hdo.Write()
                        oFF.cd("{}/{}".format(cut.GetName(), var))
                        hup.Write()
                        hdo.Write()
        # copy also nominal data
        # hnom_data = iF.Get("{}/{}/histo_DATA".format(cut.GetName(), var))
        # hnom_fake = iF.Get("{}/{}/histo_Fake".format(cut.GetName(), var))
        # oF.cd("{}/{}".format(cut.GetName(), var))
        # hnom_data.Write()
        # hnom_fake.Write()

        #Empty histos for bins of W+jets in the "wrong" cut
        for sam in other_samples:
            hO = hup.Clone('histo_'+sam)
            hO.Reset()
            for m in ["morphUp", "morphDown"]:
                for jtype in ["quark", "gluon"]:
                    for  jeta in ["higheta", "loweta"]:
                        mtyp = "_".join([m,jtype,jeta])
                        if m == "morphUp":
                            hOv = hO.Clone("histo_{}_QGLmorph_{}_{}_{}Up".format(sam, jtype,jeta, args.name))
                        elif m == "morphDown":
                            hOv = hO.Clone("histo_{}_QGLmorph_{}_{}_{}Down".format(sam, jtype,jeta, args.name))
                        
                        oF.cd("{}/{}".format(cut.GetName(), var))
                        hOv.Write()
                        oFF.cd("{}/{}".format(cut.GetName(), var))
                        hOv.Write()

    print ('-----------------------')

oF.Close()
iF.Close()