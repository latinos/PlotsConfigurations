import ROOT as R 
import argparse
import re

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-o","--output", help="Output file", type=str)
parser.add_argument("-e","--exclude", help="Exclude histo", type=str)
parser.add_argument("-c","--cuts-only", help="Cuts only", type=str, nargs="+")
parser.add_argument("-s","--samples-only", help="Samples only", type=str, nargs="+")
args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()


iF = R.TFile.Open(args.input, "READ")
oF = R.TFile.Open(args.output, "RECREATE")

for cut in iF.GetListOfKeys():
    if args.cuts_only and cut.GetName() not in args.cuts_only: continue
    oF.mkdir(cut.GetName())
    for var in iF.Get(cut.GetName()).GetListOfKeys():
        oF.mkdir(cut.GetName()+"/"+var.GetName())
        print (cut.GetName(), var.GetName())
        histos = []
        for h in iF.Get(cut.GetName()+'/'+var.GetName()).GetListOfKeys():
            histo = iF.Get(cut.GetName()+'/'+var.GetName() + "/"+ h.GetName())
            
            if args.exclude and re.match(args.exclude, histo.GetName()):
                #print("Exclude", h.GetName())
                continue 
            else:
                if args.samples_only:
                    has_sample = False 
                    for sam in args.samples_only:
                        if sam in histo.GetName(): 
                            has_sample = True 
                            break 
                    if has_sample: 
                        histos.append(histo)
                else:
                    histos.append(histo)

        oF.cd(cut.GetName()+"/"+var.GetName())
        for h in histos:
            # print (h.GetName())
            h.Write()
        oF.Flush()
        oF.cd('/')
        
        iF.cd("../")
    iF.cd("../")

    print ("------------------------------")

# oF.Write()
oF.Close()
iF.Close()
