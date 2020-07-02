from __future__ import print_function
import ROOT as R 
R.TH1.SetDefaultSumw2()
import argparse

'''
This script joins the histograms of subsamples reading datacards shapes files. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input",help="Inputfile", type=str)
parser.add_argument("-o","--output",help="Output file", type=str)
parser.add_argument("--cut",help="Cut to add", type=str)
args = parser.parse_args()

inF = R.TFile(args.input, "read")
ofF = R.TFile(args.output, "update")

if not ofF.FindKeyAny(args.cut):
    outDir = ofF.mkdir(args.cut)


inF.cd()
inDir = R.gDirectory 

for cut in inDir.GetListOfKeys():
    if cut.GetName() != args.cut: continue
    inDir.cd(cut.GetName())

    for var in inDir.GetListOfKeys():
        
        print("Var: ", var.GetName())
        
        ofF.mkdir(cut.GetName()+"/"+ var.GetName())
        inF.cd(cut.GetName()+"/"+ var.GetName())
        
        for hist in R.gDirectory.GetListOfKeys():
            print(hist)
            inF.cd(cut.GetName()+"/"+ var.GetName())
            obj = hist.ReadObj()
            ofF.cd(cut.GetName()+"/"+ var.GetName())
            obj.Write()
        

ofF.Close()