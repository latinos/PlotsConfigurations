from __future__ import print_function
import ROOT as R 
R.gROOT.SetBatch(True)
import argparse 
import json

'''
The script invert the up and down direction of the nuisance  
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-n","--nuisance", help="nuisance",type=str)
parser.add_argument("-s","--samples", help="Samples",type=str, nargs="+")
parser.add_argument("-e","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("--second", help="Second step", action="store_true")
args = parser.parse_args()

f = R.TFile.Open(args.input, "UPDATE")

if not args.second:
    for k in f.GetListOfKeys():
        R.gDirectory.Cd(k.GetName())
        for z in R.gDirectory.GetListOfKeys():
            R.gDirectory.Cd(z.GetName())
            for l in R.gDirectory.GetListOfKeys():

                for sample in args.samples:
                    if sample == "VBS":
                        shape_name = args.nuisance+"_"+sample + "_accept"
                    elif "Wjets" in sample:
                        shape_name = args.nuisance+"_Wjets_HT"
                    else:
                        shape_name = args.nuisance+"_" + sample
                    objs = []
                    if "histo_"+sample+"_"+shape_name+"Down" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        print(l.GetName())
                        obj.SetName("histo_" + sample+"_"+shape_name+"UpFIX")
                        objs.append(obj)
                    if "histo_"+sample+"_"+shape_name+"Up" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        print(l.GetName())
                        obj.SetName("histo_" + sample+"_"+shape_name+"DownFIX")
                        objs.append(obj)
                    for ob in objs:
                        ob.Write()
                    # f.Flush()

                    # for d in ['Up','Down']:
                    #     obj1 = R.gDirectory.Get("histo_" + sample+"_"+shape_name+d+"FIX")
                    #     obj1.SetName("histo_" + sample+"_"+shape_name+d)
                    #     obj1.Write()
            R.gDirectory.Cd("../")
        R.gDirectory.Cd("../")
    f.Close()

if args.second:
    for k in f.GetListOfKeys():
        R.gDirectory.Cd(k.GetName())
        for z in R.gDirectory.GetListOfKeys():
            R.gDirectory.Cd(z.GetName())
            for l in R.gDirectory.GetListOfKeys():

                for sample in args.samples:
                    if sample == "VBS":
                        shape_name = args.nuisance+"_"+sample + "_accept"
                    elif "Wjets" in sample:
                        shape_name = args.nuisance+"_Wjets_HT"
                    else:
                        shape_name = args.nuisance+"_" + sample
                    objs = []
                    if "histo_"+sample+"_"+shape_name+"DownFIX" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_"+shape_name+"Down")
                        objs.append(obj)
                    if "histo_"+sample+"_"+shape_name+"UpFIX" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_"+shape_name+"Up")
                        objs.append(obj)
                    for ob in objs:
                        ob.Write()
                    # f.Flush()

                    # for d in ['Up','Down']:
                    #     obj1 = R.gDirectory.Get("histo_" + sample+"_"+shape_name+d+"FIX")
                    #     obj1.SetName("histo_" + sample+"_"+shape_name+d)
                    #     obj1.Write()
            R.gDirectory.Cd("../")
        R.gDirectory.Cd("../")
    f.Close()