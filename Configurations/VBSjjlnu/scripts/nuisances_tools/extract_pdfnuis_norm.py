import argparse
import json
'''
This script saves in a TFile the effect of the selected nuisance for the 
given samples and variables. 

The effect is saved as the ratio of variationn/nominal.
'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-o","--output", help="Output file", type=str)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-c","--cuts", help="Cut", type=str, nargs="+")
args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()


nuisances = ['pdf_weight_'+str(i) for i in range(0,103)]

iF = R.TFile.Open(args.input, "READ")

for cut in args.cuts:
    output_data = {}
    print "Cut: ", cut
    for s in args.samples:
        output_data[s] = {}
        print ">> Sample: ", s 
        h_nom = iF.Get("{}/events/histo_{}".format(cut, s ))

        for n in nuisances:
            h_up = iF.Get("{}/events/histo_{}_{}Up".format(cut, s, n))
            h_do = iF.Get("{}/events/histo_{}_{}Down".format(cut, s, n))

            print s, " | ", n, " | nom: ",h_nom.Integral(), " | up: ", h_up.Integral(), "(",  h_nom.Integral()/h_up.Integral(), \
                                       ") | do: ", h_do.Integral(), " (" , h_nom.Integral()/h_do.Integral() , ") |"
            output_data[s][n] = h_nom.Integral()/h_up.Integral() 

    with open(args.output,'w') as out:
        out.write(json.dumps(output_data, indent=2))

print "------------------------------"

