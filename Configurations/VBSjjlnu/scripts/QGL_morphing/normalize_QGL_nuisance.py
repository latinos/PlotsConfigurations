import ROOT as R 
R.gROOT.SetBatch(True)
import argparse 
import json

'''
The script normalize the QGL nuisance effect to the nominal
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-v","--variables", help="var", type=str,nargs="+")
parser.add_argument("-y","--year", help="year", type=str)
args = parser.parse_args()


samples= ['VBS','DY','top','VV','VVV','Vg','VgS', 'VBF-V','ggWW']
wjets_bins = []
for ir in range(1,7):
    wjets_bins.append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins.append("Wjets_HT_boost_"+str(ir))
samples += wjets_bins

import ROOT as R

iF = R.TFile.Open(args.input, "UPDATE")


for cut in iF.GetListOfKeys():
    R.gDirectory.cd(cut.GetName())
    for var in R.gDirectory.GetListOfKeys():
        if var.GetName() not in args.variables: 
            continue
        R.gDirectory.cd(var.GetName())
        for sample in samples:
            hnom = R.gDirectory.Get("histo_{}".format(sample))
            for jtype in ["quark", "gluon"]:
                for  jeta in ["higheta", "loweta"]:
                    mtyp = "_".join([jtype,jeta])  
                    try:
                        print cut.GetName(), var.GetName(), sample
                        hup = R.gDirectory.Get("histo_{}_QGLmorph_{}_{}Up".format(sample, mtyp, args.year))
                        hdo = R.gDirectory.Get("histo_{}_QGLmorph_{}_{}Down".format(sample, mtyp, args.year))
                        
                        hup.Scale(hnom.Integral()/ hup.Integral())
                        hdo.Scale(hnom.Integral()/ hdo.Integral())
                        iF.cd("{}/{}".format(cut.GetName(), var.GetName()))
                        hup.Write()
                        hdo.Write()
                    except:
                        print "Missing shape: ", sample, mtyp, args.year

        R.gDirectory.cd("../")
    iF.cd()
iF.Close()
