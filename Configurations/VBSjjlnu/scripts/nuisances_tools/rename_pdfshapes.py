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
parser.add_argument("--rename", help="Rename",type=str)
args = parser.parse_args()


samples = ["DY", "VV","VVV",'Vg','VgS','VBF-V', "ggWW","VBS"]


f = R.TFile(args.input, "UPDATE")

for k in f.GetListOfKeys():
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        R.gDirectory.Cd(z.GetName())
        print( ">> ", k.GetName(), z.GetName())
        for l in R.gDirectory.GetListOfKeys():
            for sample in samples:
                if sample == "VBS":
                    if "histo_"+sample+"_pdf_weight_"+sample+"_acceptDown" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_pdf_weight_"+args.rename+"_acceptDown")
                        obj.Write()
                    if "histo_"+sample+"_pdf_weight_"+sample+"_acceptUp" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_pdf_weight_"+args.rename+"_acceptUp")
                        obj.Write()
                else:
                    if "histo_"+sample+"_pdf_weight_"+sample+"Down" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_pdf_weight_"+args.rename+"Down")
                        obj.Write()
                    if "histo_"+sample+"_pdf_weight_"+sample+"Up" == l.GetName():
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_pdf_weight_"+args.rename+"Up")
                        obj.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

# Already writter
#f.Write()
f.Close()
