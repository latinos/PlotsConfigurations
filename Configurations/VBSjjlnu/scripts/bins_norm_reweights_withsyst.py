from __future__ import print_function
import ROOT as R 
import argparse
from math import sqrt
import numpy as np
import root_numpy as rnp

'''
This script extracts the weights to correct data/MC ratio bin by bin on selected cut and variable, 
for the requested samples. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="input file", type=str)
parser.add_argument("-o","--output", help="output file", type=str)
parser.add_argument("-v", "--vars", help="Variables", nargs="+", type=str)
parser.add_argument("--cuts", help="cuts to analyze", nargs="+", type=str)
parser.add_argument("-s", "--samples", help="Samples to analyze", nargs="+", type=str)
parser.add_argument("-c", "--conf", help="config file", type=str)
parser.add_argument("-e", "--exclude-nuisances", help="Exclude nuisaces", nargs="+", type=str)
parser.add_argument("-on", "--output-nuisances", help="Output all the nuisances effect",action="store_true")
parser.add_argument( "--other-samples", help="Samples to be removed from data",nargs="+", type=str)
args = parser.parse_args()


nuisances = {}
samples = {}
exec(open(args.conf))
exec(open(samplesFile))
exec(open(nuisancesFile))

print(nuisancesFile)

import LatinoAnalysis.ShapeAnalysis.utils as utils

subsamplesmap = utils.flatten_samples(samples)
utils.update_nuisances_with_subsamples(nuisances, subsamplesmap)

def get_syst_uncertainty(cutName,sampleName,variableName, histo, fileIn):
    print ("Working on ", cutName, sampleName, variableName, histo)
    mynuisances = {}
    nuisances_vy_up     = {}
    nuisances_vy_do     = {}
    # handle 'stat' nuisance to create the bin-by-bin list of nuisances
    # "massage" the list of nuisances accordingly
    for nuisanceName, nuisance in nuisances.iteritems():         
        if 'cuts' in nuisance and cutName not in nuisance['cuts']:
            continue
        # run only if this nuisance will affect the phase space defined in "cut"
        if nuisanceName not in mynuisances.keys() :
            if 'type' in nuisance.keys() and (nuisance['type'] == 'rateParam' or nuisance['type'] == 'lnU') :
                pass
            #print "skip this nuisance since 100 percent uncertainty :: ", nuisanceName
            else :
                mynuisances[nuisanceName] = nuisances[nuisanceName]
    
    nuisanceHistos = ({}, {})
    for nuisanceName, nuisance in mynuisances.iteritems():
        #print ("Nuisance: ", nuisanceName)
        # is this nuisance to be considered for this background?
        if 'samples' in nuisance:
            if sampleName not in nuisance['samples']:
                continue
        elif 'all' not in nuisance or nuisance['all'] != 1:
            continue
        
        if 'cuts' in nuisance and cutName not in nuisance['cuts']:
            continue

        if 'name' in nuisance:
            shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisance['name']+var for var in ['Up', 'Down'])
        else:
            shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisanceName+var for var in ['Up', 'Down'])
        
        if 'type' in nuisance and nuisance['type'] == 'lnN':
            if 'samples' in nuisance:
                values = nuisance['samples'][sampleName]                        
            else: # 'all'
                values = nuisance['value']

            if '/' in values:
                variations = map(float, values.split('/'))
            else:
                variations = (float(values), 2. - float(values))
                
            # don't use  histos[sampleName], or the second "scale" will fail!!!
            for ivar, shapeNameVar in enumerate(shapeNameVars):
                histoVar = histo.Clone(shapeNameVar.replace('/', '__'))
                histoVar.Scale(variations[ivar])
                nuisanceHistos[ivar][nuisanceName] = histoVar
        else:
            for ivar, shapeNameVar in enumerate(shapeNameVars):
                histoVar = fileIn.Get(shapeNameVar)
                nuisanceHistos[ivar][nuisanceName] = histoVar
    
    for ivar, nuisances_vy in enumerate([nuisances_vy_up, nuisances_vy_do]):
        for nuisanceName, nuisance in mynuisances.iteritems():
            #print('CCCC', nuisanceName)
            try:
                histoVar = nuisanceHistos[ivar][nuisanceName]
            except KeyError:
                # put nominal
                histoVar = histo           
            try:
                vy = nuisances_vy[nuisanceName]
            except KeyError:
                vy = nuisances_vy[nuisanceName] = np.zeros_like(rnp.hist2array(histo, copy=False))
            #Get value of up/down
            vy += rnp.hist2array(histoVar, copy=False)
        
    #print(nuisances_vy_up)
    # Get MC stat err
    nuis_out = {}
    tgrMC_vy = rnp.hist2array(histo, copy=True)
    nuisances_err2_up = rnp.array(histo.GetSumw2())[1:-1]
    nuisances_err2_do = rnp.array(histo.GetSumw2())[1:-1]
    for nuisanceName in mynuisances.keys():
        if args.exclude_nuisances and nuisanceName in args.exclude_nuisances: 
            print ("Excluding nuisance: ", nuisanceName)
            continue
        # now we need to tell wthether the variation is actually up or down ans sum in quadrature those with the same sign 
        up = nuisances_vy_up[nuisanceName]
        do = nuisances_vy_do[nuisanceName]
        
        up_is_up = (up > tgrMC_vy)
        dup2 = np.square(up - tgrMC_vy)
        ddo2 = np.square(do - tgrMC_vy)
        
        nuisances_err2_up += np.where(up_is_up, dup2, ddo2)
        nuisances_err2_do += np.where(up_is_up, ddo2, dup2)
        # 
        if np.sum(dup2)!=0 or np.sum(ddo2)!=0:
            nuis_out[nuisanceName]= (np.sqrt(np.where(up_is_up, dup2, ddo2)), np.sqrt(np.where(up_is_up, ddo2, dup2)))
        
        
    # Final 
    nuisances_err_up = np.sqrt(nuisances_err2_up)
    nuisances_err_do = np.sqrt(nuisances_err2_do)
    return nuisances_err_up, nuisances_err_do, nuis_out

results = []
nuisances_all = []

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

        data_hist_orig = R.gDirectory.Get("histo_DATA")
        data_minus_others = data_hist_orig.Clone("data_minus_others")
        # Remove all others MC from data
        data_minus_others.Add(tot_mc, -1)
        
        samplestoweight = {}
        errors = {}
        for s in args.samples:
            h = R.gDirectory.Get("histo_"+s)
            samplestoweight[s] = h
            errors[s] = get_syst_uncertainty(cut, s, variable, h, iF)
        
        #print(errors)
               
        sample_weights = {}
        for sample, reweight_hist in samplestoweight.items():
            weights = []
            for ibin in range(1, reweight_hist.GetXaxis().GetNbins()+1):
                if reweight_hist.GetBinContent(ibin) == 0: 
                    # used for ibin == 1 case
                    weights.append(1.)
                    continue

                nom = reweight_hist.GetBinContent(ibin)
                ref = data_minus_others.GetBinContent(ibin)
                w = ref / nom

                sigma_ref = sqrt(ref)
                sigma_nom_up =  errors[sample][0][ibin-1] 
                sigma_nom_do =  errors[sample][1][ibin-1]

                err_w_up_syst = sqrt( ((ref/nom**2)**2)*sigma_nom_up**2 )
                err_w_do_syst = sqrt( ((ref/nom**2)**2)*sigma_nom_do**2 )
                err_w_stat = (sigma_ref/nom)
                err_tot_up = sqrt(err_w_stat**2 + err_w_up_syst**2)
                err_tot_do = sqrt(err_w_stat**2 + err_w_do_syst**2)
                
                weights.append(w)
                if w != 1.0:
                    results.append((cut, sample, w, err_w_stat, err_w_up_syst, err_w_do_syst,err_tot_up,err_tot_do, sigma_nom_up/ nom ))
                    nout = {"sample": sample}
                    for key, values in errors[sample][2].items():
                        nout[key+"_up"]= sqrt( ((ref/nom**2)**2)*(values[0][ibin-1])**2 )
                        nout[key+"_do"]= sqrt( ((ref/nom**2)**2)*(values[1][ibin-1])**2 )
                    nuisances_all.append(nout)

            sample_weights[sample] = weights

        print(">>>Samples: ", "".join(["{:>20}".format(s) for s,w in sample_weights.items()]))
        for i,w in enumerate(weights):
            print("bin {0} =".format(i)+ "".join(["{:.5f}".format(w[i]).rjust(20) for s,w in sample_weights.items()]))

        
        R.gDirectory.Cd("..")
    R.gDirectory.Cd("..")

iF.Close()

import pandas as pd
df = pd.DataFrame(results, columns=["channel", "bin", "weight","err_stat","err_syst_up","err_syst_do","err_tot_up","err_tot_do","wnorm_prefit_err_rel"])
print(df)
df.to_csv(args.output, sep=";", index=False)


if args.output_nuisances:
    dfn = pd.DataFrame(nuisances_all)
    dfn.to_csv(args.output+"nuisances", sep=";", index=False)