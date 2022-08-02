import argparse

'''
This script normalize the nuisance shapes to a reference shape. 
'''
parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-s","--samples", help="Samples", type=str, nargs="+")
parser.add_argument("-c","--cuts", help="Cuts", type=str, nargs="+")
parser.add_argument("-v","--vars", help="Variables", type=str, nargs="+", default=["ALL"])
parser.add_argument("-n","--nuisances", help="Nuisances", type=str, nargs="+")
parser.add_argument("--ref", help="Reference variable",type=str)
args = parser.parse_args()

import ROOT as R 
R.gROOT.SetBatch(True)
R.TH1.SetDefaultSumw2()


iF = R.TFile.Open(args.input, "UPDATE")

for cut in args.cuts:
    print "----- Cut ", cut
    if args.vars[0] == "ALL":
        vars = [k.GetName() for k in iF.Get(cut).GetListOfKeys()]
    else:
        vars = args.vars 

    for s in args.samples:
        print "> Sample: ", s
        for n in args.nuisances:
            print ">> Nuisance: ", n
            href_up = iF.Get("{}/{}/histo_{}_{}Up".format(cut, args.ref, s , n ))   
            href_do = iF.Get("{}/{}/histo_{}_{}Down".format(cut, args.ref, s , n ))   
        
            print ">> Ref up norm: ", href_up.Integral(), " | Ref down norm: ", href_do.Integral()

            for var in vars:
                print ">>> Var: ", var 
                h_up = iF.Get("{}/{}/histo_{}_{}Up".format(cut, var, s, n))
                h_do = iF.Get("{}/{}/histo_{}_{}Down".format(cut, var, s, n))
                print "{}/{}/histo_{}_{}Down".format(cut, var, s, n)
                print ">>>  up norm: ", h_up.Integral(), " | down norm: ", h_do.Integral()
                h_up.Scale(href_up.Integral()/h_up.Integral())
                h_do.Scale(href_do.Integral()/h_do.Integral())
                iF.cd("{}/{}".format(cut, var))
                h_up.Write()
                h_do.Write()
            print "------------------------------"
        print "################################"


iF.Close()