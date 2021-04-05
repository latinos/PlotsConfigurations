from __future__ import print_function
import ROOT as R 
R.gROOT.SetBatch(True)
import argparse 
import json

'''
The script normalize the nuisance effect looking at a list of phase spaces specified
in the config file. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-c","--config", help="Config file",type=str)
parser.add_argument("--cuts", help="Cuts to consider",type=str,nargs="+")
parser.add_argument("--dry", help="Dry run", action="store_true")
parser.add_argument("-e","--exclude-vars", help="Exclude vars", type=str, nargs="+")
args = parser.parse_args()


iF = R.TFile.Open(args.input, "UPDATE")

# Load config 
config = json.load(open(args.config))


for sample, sample_conf in config.items():
    print ("> Working on sample: ", sample)
    for nuis in sample_conf["nuisances"]:
        print (">> nuisance: ", nuis)
        for phase_space, cuts in sample_conf["phase_spaces"].items():
            results = sample_conf['results'][nuis][phase_space]   
            print (">>> phase space: ", phase_space)            
            for cut in cuts:
                if cut not in args.cuts: 
                    print ("! Skip cut: ", cut)
                    continue
                print (">>>> cut: ", cut)
                directory = iF.Get(cut)
                vars = [k.GetName() for k in directory.GetListOfKeys()]
                iF.cd("/")
                for var in vars:
                    if args.exclude_vars and var in args.exclude_vars: continue
                    print ("  Var: ", var)
                    try:
                        h_up   = iF.Get("{}/{}/histo_{}_{}Up".format(cut, var, sample, nuis))
                        h_down = iF.Get("{}/{}/histo_{}_{}Down".format(cut, var, sample, nuis))
                        if not args.dry:
                            h_up.Scale(results["ratioUp"])
                            h_down.Scale(results["ratioDown"])
                            iF.cd("{}/{}/".format(cut, var))
                            h_up.Write()
                            h_down.Write()
                    except:
                        print ("problem with var: ", var)

                
    print ("-------------------------------------")

# json.dump(config, open(args.output,"w"),indent=2)


