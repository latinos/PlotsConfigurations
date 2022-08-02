import argparse

'''
This script applyu the effect of a nuisance from an external file on the nominal shape 
and save the result on a new file
'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-n","--nuisances", help="Nuisances", type=str, nargs="+")
parser.add_argument("-v","--variables", help="variables", type=str, nargs="+")
parser.add_argument("-t","--threshold", help="threshold", type=float,default=0.3)
args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()

iF = R.TFile.Open(args.input, "READ")

# Iterating on nuisance_effect folders
for cut in iF.GetListOfKeys():
        R.gDirectory.Cd(cut.GetName())
        print "Cut: ", cut.GetName()
        for var  in args.variables:
            print "> Var: ", var 
            for sample in args.samples:
                h_nom = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var, sample))
                # Exclude samples associated explicity to a cut (Wjets bins)
                if 'res' in cut.GetName() and 'boost' in sample: continue
                if 'boost' in cut.GetName() and 'res' in sample: continue
                
                for nuis in args.nuisances:
                    
                    h_up = iF.Get("{}/{}/histo_{}_{}Up".format(cut.GetName(), var, sample, nuis ))
                    h_do = iF.Get("{}/{}/histo_{}_{}Down".format(cut.GetName(), var,  sample, nuis ))

                    for i in range(1, h_up.GetNbinsX()+1):
                        nom = h_nom.GetBinContent(i)
                        up = h_up.GetBinContent(i)
                        do = h_do.GetBinContent(i)

                        if abs((up/nom)-1) >args.threshold: 
                            print  cut.GetName(), var, sample, nuis, " bin ", i, " large effect: {:.3f}".format((up/nom)-1)
        iF.cd()
