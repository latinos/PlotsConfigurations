import os
import sys
import math
import argparse
from ROOT import *

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--histo-path', action = 'store', type = str, dest = 'histo', help = 'Path to histogram') #default='ALL'
args = parser.parse_args()


#root = root directory, dirnames = list of subdirectories in root directory, filenames = list of files in root directory
# In our case, we are looking for the rootfiles in shapes/, so we can check that root ends with shapes/


# Inspect only, no changes

histo_paths = [args.histo]

if args.histo == 'ALL':
    histo_paths = []
    for root, dirnames, filenames in os.walk('.'):
        if root.endswith('shapes'):
            histfile = root+'/'+filenames[0]
            histo_paths.append(histfile)
            print(histfile)

for histfile in histo_paths:
    print('Reading histograms in "'+histfile+'"')
    f0 = TFile.Open(histfile,"READ")
    allhists = [key.GetName() for key in f0.GetListOfKeys()]
    nomhists = [hist for hist in allhists if not ('Up' in hist or 'Down' in hist or 'Var' in hist)]
    varhists = [hist for hist in allhists if not hist in nomhists]
    
    for nomhist in nomhists:
        sample_name = nomhist.replace('histo_', '')
        nom = f0.Get(nomhist)

        print(sample_name)

        # check nominal
        for ibin in xrange(1,nom.GetNbinsX()+1):
            if nom.GetBinContent(ibin) < 0:
                print(' - Found negative bin in sample "'+sample_name+'": bin='+str(ibin)+', val='+str(var.GetBinContent(ibin)))
        for ibin in xrange(nom.GetNbinsX()-1, nom.GetNbinsX()+1):
            cont = nom.GetBinContent(ibin)
            err  = nom.GetBinError(ibin)
            print('- Bin '+str(ibin)+' content '+str(cont) + '( sqrt = '+str(math.sqrt(abs(cont)))+')'+', error '+ str(err)+', err/cont '+str(err/(cont+0.0001)))

        # Check all nuisances
        covered = []
        for varhist in varhists:
            if not varhist.replace(nomhist,'').startswith('_'): continue
            var_name = varhist.replace(nomhist+'_','')
            if var_name in covered: continue
            covered.append(var_name)
            #print(' - '+var_name)
            var = f0.Get(varhist)
            for ibin in xrange(1,nom.GetNbinsX()+1):
                #if nom.GetBinContent(ibin) > 0 and var.GetBinContent(ibin) < 0:
                if var.GetBinContent(ibin) <= 0:
                    print(' - Found negative bin in sample "'+sample_name+'", nuisance "'+var_name+'": bin='+str(ibin)+', val='+str(var.GetBinContent(ibin))+', nominal val='+str(nom.GetBinContent(ibin)))

