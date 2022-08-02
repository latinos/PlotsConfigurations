import pandas as pd 
import numpy as np
import ROOT as R 
import sys
import argparse 
from pprint import pprint
import os

parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-s","--samples", help="Samples to include", nargs="+", type=str)
parser.add_argument("-o","--outputdir", help="Output h5py file", type=str)
args = parser.parse_args()

os.makedirs(args.outputdir, exist_ok=True)

exec(open(args.config).read())

samples= args.samples
cuts={}
variables= {}
exec(open(cutsFile).read())
exec(open(variablesFile).read())

R.ROOT.EnableImplicitMT();

trees = []

# analyse variables to check where a tree is defines
for v, var in variables.items():
    if 'tree' in var:
        if 'cuts' in var:
            for cut in var['cuts']:
                trees.append((cut, v))
        else:
            for cut in cuts:
                trees.append((cut, v)) 


#iF = R.TFile(outputDir + '/plots_'+tag+'_' + sample + '.root')



for sample in samples:
    print(sample)
    for cut,var in trees:
        print(cut,var)
        rdf = R.RDataFrame(cut+"/"+var+"/tree_"+sample,outputDir + '/plots_'+tag+'_' + sample + '.root' )

        df = pd.DataFrame(rdf.AsNumpy())
        df.to_csv("{}/dataframe_{}_{}_{}.csv".format(args.outputdir,sample,cut,var), index=False, sep=",")


            


