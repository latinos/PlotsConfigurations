import argparse

import ROOT as R 
R.TH1.SetDefaultSumw2()

'''
Print the normalization of up/down of nuisances
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-n","--nuisances", help="Nuisances", type=str, nargs="+")
parser.add_argument("-c","--cut", help="Cut", type=str)
args = parser.parse_args()


iF = R.TFile.Open(args.input, "READ")
iF.cd(args.cut + "/events")

for s in args.samples:
    h_nom = R.gDirectory.Get("histo_"+s)
    h_nom_I = h_nom.Integral()

    for n in args.nuisances:
        h_up = R.gDirectory.Get("histo_"+s + "_" + n + "Up")
        h_do = R.gDirectory.Get("histo_"+s + "_" + n + "Down")
        h_up_I = h_up.Integral()
        h_do_I = h_do.Integral()

        print s, " | ", n , " ", h_nom_I , "(up: ", h_up_I, " do: ",h_do_I , " ) --> ", h_nom_I / h_up_I , " , ", h_nom_I / h_do_I

    print "------------------------------"