from __future__ import print_function
import ROOT as R 
R.TH1.SetDefaultSumw2()
import argparse

'''
'''

parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-s","--samples", help="Samples to join", type=str, nargs="+")
parser.add_argument("-o","--output-name", help="Sample name to output", type=str)
args = parser.parse_args()

exec(open(args.config))

samples= {}
cuts= {}
nuisances= {}
variables = {}
exec(open(samplesFile))
exec(open(nuisancesFile))
exec(open(cutsFile))
exec(open(variablesFile))


nuisances_name = [ nuisance['name'] for nuisance in nuisances.values() if 'name' in nuisance]

def join_histos(file, keys, samples, output, suffix=""):
    hnew= None
    for hs in samples:
        hid = "histo_"+ hs + suffix
        if hid in keys:
            if hnew == None: 
                hnew = file.Get(hid).Clone("histo_"+output+suffix)
            else:
                h_ = file.Get(hid)
                hnew.Add(h_)
    if hnew!= None:
        hnew.SetTitle("histo_"+output+suffix)
        hnew.SetDirectory(file)
        hnew.Write()


#Check if there are subsamples
subsamples = []

if "subsamples" in samples[args.samples[0]]:
    subsamples = samples[args.samples[0]]["subsamples"]


filepath = outputDir + "/plots_" +tag +".root"

iF = R.TFile(filepath, "UPDATE")

for cut in cuts: 
    R.gDirectory.Cd(cut)
    print(">Cut: ", cut)
    available_vars = [k.GetName() for k in  R.gDirectory.GetListOfKeys()]
    for variable in variables:
        if variable not in available_vars: continue
        print(">> Variable: ", variable)
        R.gDirectory.Cd(variable)
        keys = [k.GetName() for k in  R.gDirectory.GetListOfKeys()]
        
        for subsamp in subsamples:   
            join_histos(R.gDirectory,  keys,  args.samples, args.output_name, suffix="_"+subsamp)

            for nuis in nuisances_name:
                #print("Nuisance: ", nuis)
                join_histos(R.gDirectory, keys, args.samples, args.output_name, suffix="_"+subsamp+"_"+nuis+"Up")
                join_histos(R.gDirectory, keys, args.samples, args.output_name, suffix="_"+subsamp+"_"+nuis+"Down")

        R.gDirectory.Cd("..")
    R.gDirectory.Cd("..")
iF.Write()
iF.Close()
        
