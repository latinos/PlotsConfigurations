from __future__ import print_function
import argparse

'''
This script applyu the effect of a nuisance from an external file on the nominal shape 
and save the result on a new file
'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("--nuisance-effect", help="Nuisance effect file", type=str)
parser.add_argument("-o","--output", help="Output file", type=str)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-sf","--samples-file", help="Samples file", type=str)
parser.add_argument("-n","--nuisances", help="Nuisances", type=str, nargs="+")
parser.add_argument("-nr","--nuisances-rename", help="Nuisances rename", type=str, nargs="+")
parser.add_argument("-ev","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("-ec","--exclude-cuts", help="Exclude cuts", type=str, nargs="+")

args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()


if args.samples and len(args.samples) > 0:
    samples = args.samples 
elif args.samples_file:
    samples = [f.strip() for f in open(args.samples_file).readlines()]
else:
    print("Please provide samples of file with a list of samples")
    exit(1)

iF = R.TFile.Open(args.input, "READ")
oF = R.TFile.Open(args.output, "RECREATE")

nF = R.TFile.Open(args.nuisance_effect, "READ")

# Iterating on nuisance_effect folders
for cut in nF.GetListOfKeys():
        if args.exclude_cuts and cut.GetName() in args.exclude_cuts: continue
        R.gDirectory.Cd(cut.GetName())
        oF.mkdir(cut.GetName())

        print ("Cut: ", cut.GetName())
        for var  in R.gDirectory.GetListOfKeys():
            if args.exclude_vars and var.GetName() in args.exclude_vars: continue
            oF.mkdir(cut.GetName() + "/"+var.GetName())
            print ("> Var: ", var.GetName() )
            for sample in samples:
                h_nom = iF.Get("{}/{}/histo_{}".format(cut.GetName(), var.GetName(), sample))
                # Exclude samples associated explicity to a cut (Wjets bins)
                # if 'res' in cut.GetName() and 'boost' in sample: continue
                # if 'boost' in cut.GetName() and 'res' in sample: continue
                if args.nuisances_rename: rename_nuisances = args.nuisances_rename
                else: rename_nuisances = args.nuisances
                for nuis, nuis_rename in zip(args.nuisances, rename_nuisances):
                    try:
                        h_up = h_nom.Clone("histo_{}_{}Up".format(sample, nuis_rename))
                        h_do = h_nom.Clone("histo_{}_{}Down".format(sample, nuis_rename))
                        
                        eff_up = nF.Get("{}/{}/histo_{}_{}Up".format(cut.GetName(), var.GetName(), sample, nuis ))
                        eff_do = nF.Get("{}/{}/histo_{}_{}Down".format(cut.GetName(), var.GetName(),  sample, nuis ))
                        
                        h_up.Multiply(eff_up)
                        h_do.Multiply(eff_do)

                        oF.cd(cut.GetName() + "/"+var.GetName())
                        h_up.Write()
                        h_do.Write()
                    except Exception as e:
                        print(e)
                        print("Problem with: ", sample, nuis_rename, " --> skipping")
        nF.cd()

oF.Close()