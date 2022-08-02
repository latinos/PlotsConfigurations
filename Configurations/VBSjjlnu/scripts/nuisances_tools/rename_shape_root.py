from __future__ import print_function
import ROOT as R
import sys
import argparse

'''
This script can be used to rename a systematic shape including the name
of the samples or a custom name. 

The original shape is not removed
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("--shape-name", help="Shape name",type=str)
parser.add_argument("--rename", help="Rename",type=str)
parser.add_argument("--samples","-s", help="Samples", nargs="+", type=str)
parser.add_argument("-sf","--samples-file", help="Samples", type=str)
parser.add_argument("-ev","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("-ec","--exclude-cuts", help="Exclude cuts", type=str, nargs="+")
args = parser.parse_args()


if args.samples and len(args.samples) > 0:
    samples = args.samples 
elif args.samples_file:
    samples = [f.strip() for f in open(args.samples_file).readlines()]
else:
    print("Please provide samples of file with a list of samples")
    exit(1)


f = R.TFile(args.input, "UPDATE")
shape_name = args.shape_name
rename_shape = args.rename

for k in f.GetListOfKeys():
    if args.exclude_cuts and k.GetName() in args.exclude_cuts: continue
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        if args.exclude_vars and z.GetName() in args.exclude_vars: continue
        R.gDirectory.Cd(z.GetName())
        print(k.GetName(), z.GetName())
        for l in R.gDirectory.GetListOfKeys():

            for sample in samples:
                if rename_shape == None:  new_shape_name = shape_name +"_"+ sample
                else:  new_shape_name = rename_shape

                if "histo_"+sample+"_"+shape_name+"Down" == l.GetName():
                    #print(l.GetName(),"histo_"+sample+"_"+shape_name+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    obj.SetName("histo_" + sample+"_"+new_shape_name+"Down")
                    obj.Write()
                if "histo_"+sample+"_"+shape_name+"Up" == l.GetName():
                    #print(l.GetName(),"histo_"+sample+"_"+shape_name+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    obj.SetName("histo_" + sample+"_"+new_shape_name+"Up")
                    obj.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

# Already writter
#f.Write()
f.Close()
