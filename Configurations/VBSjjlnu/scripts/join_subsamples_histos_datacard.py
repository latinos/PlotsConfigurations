from __future__ import print_function
import ROOT as R 
R.TH1.SetDefaultSumw2()
import argparse

'''
This script joins the histograms of subsamples reading datacards shapes files. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-v","--variables", help="variables to join", type=str, nargs="+")
parser.add_argument("-i","--inputdir", help="input dir", type=str)
args = parser.parse_args()

exec(open(args.config))

samples= {}
cuts= {}
nuisances= {}
exec(open(samplesFile))
exec(open(nuisancesFile))
exec(open(cutsFile))


nuisances_name = [ nuisance['name'] for nuisance in nuisances.values() if 'name' in nuisance]

def join_histos(file, keys, sample_name, subsamples, suffix = ""):
    if suffix != "":
        histos_names = [sample_name +"_"+ s +"_"+suffix for s in subsamples]
        final_name = sample_name + "_"+ suffix 
    else:
        histos_names = [sample_name +"_"+ s for s in subsamples]
        final_name = sample_name
    
    #print(histos_names)
    hnew= None
    for hs in histos_names:
        hid = "histo_"+ hs 
        if hid in keys:
            print("\t\t-n joinining: ", hid)
            if hnew == None: 
                hnew = file.Get(hid).Clone("histo_"+final_name)
            else:
                h_ = file.Get(hid)
                hnew.Add(h_)
    if hnew!= None:
        hnew.SetTitle("histo_"+final_name)
        hnew.Write()


for cut in cuts: 
    print(">Cut: ", cut)
    for variable in args.variables:
        print(">> Variable: ", variable)
        filepath = args.inputdir +"/"+cut +"/"+variable +"/shapes/histos_"+ cut +".root"
        print("####"+ filepath)

        iF = R.TFile(filepath, "UPDATE")
        keys = [k.GetName() for k in  iF.GetListOfKeys()]

        for sample_name, sample in samples.items():
            print(" > > Sample:", sample_name)
            if "subsamples" in sample:
                join_histos(iF,keys, sample_name, sample["subsamples"])

                # Now for each nuisance
                for nuis in nuisances_name:
                    print("Nuisance: ", nuis)
                    join_histos(iF, keys, sample_name, sample["subsamples"], suffix=nuis+"Up")
                    join_histos(iF, keys, sample_name, sample["subsamples"], suffix=nuis+"Down")

        iF.Write()
        iF.Close()
                
