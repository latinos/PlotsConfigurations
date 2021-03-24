from __future__ import print_function
import argparse

'''
The script rescale up/down shapes equal to nominals in all cuts and vars
'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("--nuisances", help="Nuisances", type=str, nargs="+")
parser.add_argument("-ev","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("-ec","--exclude-cuts", help="Exclude cuts", type=str, nargs="+")
args = parser.parse_args()


samples= ['VBS','VBS_dipoleRecoil','DY','top','VV','VVV','Vg','VgS', 'VBF-V','ggWW']
wjets_bins = []
for ir in range(1,11):
    wjets_bins.append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins.append("Wjets_HT_boost_"+str(ir))
samples += wjets_bins

import ROOT as R

iF = R.TFile.Open(args.input, "UPDATE")


for cut in iF.GetListOfKeys():
    if args.exclude_cuts and cut.GetName() in args.exclude_cuts: 
        continue
    R.gDirectory.cd(cut.GetName())
    for var in R.gDirectory.GetListOfKeys():
        if args.exclude_vars and var.GetName() in args.exclude_vars: 
            continue
        R.gDirectory.cd(var.GetName())
        print( cut, var)
        for sample in samples:
            
            shapes =  [k.GetName() for k in R.gDirectory.GetListOfKeys()]
            if "histo_{}".format(sample) in shapes:
                hnom = R.gDirectory.Get("histo_{}".format(sample))
            else:
                print("Sample not found: ", sample, " ---> skip")
                continue
            for nuis in args.nuisances:
                # print( cut, var, sample, nuis)
                hup = R.gDirectory.Get("histo_{}_{}Up".format(sample, nuis))
                hdo = R.gDirectory.Get("histo_{}_{}Down".format(sample, nuis))
                if hup.Integral() != 0:
                    hup.Scale(hnom.Integral()/hup.Integral())
                if hdo.Integral() != 0:
                    hdo.Scale(hnom.Integral()/hdo.Integral())
                iF.cd("{}/{}".format(cut.GetName(), var.GetName()))
                hup.Write()
                hdo.Write()
        R.gDirectory.cd("../")
    iF.cd()
iF.Close()
