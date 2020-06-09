from __future__ import print_function
import ROOT as R 
import argparse


'''
This script extracts the weights to correct data/MC ratio bin by bin on selected cut and variable, 
for the requested samples. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="input file", type=str)
parser.add_argument("-v", "--vars", help="Variables", nargs="+", type=str)
parser.add_argument("--cuts", help="cuts to analyze", nargs="+", type=str)
parser.add_argument("-s", "--samples", help="Samples to analyzer", nargs="+", type=str)
parser.add_argument( "--other-samples", help="Samples to be removed from data",nargs="+", type=str)
args = parser.parse_args()


iF = R.TFile(args.input, "READ")

for cut in args.cuts: 
    
    R.gDirectory.Cd(cut)
    print(">Cut: ", cut)

    for variable in args.vars:
        print(">> Variable: ", variable)
        R.gDirectory.Cd(variable)

        tot_mc = None
        for s in args.other_samples:
            h = R.gDirectory.Get("histo_"+s)
            #print (h)
            if tot_mc:
                tot_mc.Add(h)
            else:
                tot_mc = h.Clone()
                tot_mc.SetName("totMC") 

        data_hist = R.gDirectory.Get("histo_DATA")
        # Remove all others MC from data
        data_hist.Add(tot_mc, -1)
        
        samplestoweight = {}
        for s in args.samples:
            h = R.gDirectory.Get("histo_"+s)
            samplestoweight[s] = h
               
        sample_weights = {}
        for sample, reweight_hist in samplestoweight.items():
            weights = []
            for ibin in range(1, reweight_hist.GetXaxis().GetNbins()+1):
                if reweight_hist.GetBinContent(ibin) == 0: 
                    # used for ibin == 1 case
                    weights.append(1.)
                    continue
                
                w = data_hist.GetBinContent(ibin) / reweight_hist.GetBinContent(ibin)
                weights.append(w)
            sample_weights[sample] = weights

        print(">>>Samples: ", "".join(["{:>20}".format(s) for s,w in sample_weights.items()]))
        for i,w in enumerate(weights):
            print("bin {0} =".format(i)+ "".join(["{:.5f}".format(w[i]).rjust(20) for s,w in sample_weights.items()]))

        
        R.gDirectory.Cd("..")
    R.gDirectory.Cd("..")
iF.Write()
iF.Close()