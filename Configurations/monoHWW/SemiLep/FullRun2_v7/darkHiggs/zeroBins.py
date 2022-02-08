import os
import sys
import argparse
from ROOT import *

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--sample', action = 'store', type = str, dest = 'sample', default='ALL', help = 'Zero negative nuisance bins of target sample only')
args = parser.parse_args()


check_samples = True
if args.sample == 'ALL': check_samples = False
samples = args.sample.split(',')
#root = root directory, dirnames = list of subdirectories in root directory, filenames = list of files in root directory
# In our case, we are looking for the rootfiles in shapes/, so we can check that root ends with shapes/
for root, dirnames, filenames in os.walk('.'):
    if root.endswith('shapes'):
        histfile = root+'/'+filenames[0]
        f0 = TFile.Open(histfile,"UPDATE")
        allhists = [key.GetName() for key in f0.GetListOfKeys()]
        nomhists = [hist for hist in allhists if not ('Up' in hist or 'Down' in hist or 'Var' in hist)]
        varhists = [hist for hist in allhists if not hist in nomhists]
        
        for nomhist in nomhists:
            if check_samples:
                if not nomhist.replace('histo_', '') in samples: continue
            print(nomhist)

            nom = f0.Get(nomhist)
            for varhist in varhists:
                if not varhist.replace(nomhist,'').startswith('_'): continue
                var = f0.Get(varhist)
                for ibin in xrange(1,nom.GetNbinsX()+1):
                    #if nom.GetBinContent(ibin) > 0 and var.GetBinContent(ibin) < 0:
                    if var.GetBinContent(ibin) < 0:
                        print '%s: Setting bin %d of %s to 0 (was %.3f)'%(histfile,ibin,varhist,var.GetBinContent(ibin))
                        var.SetBinContent(ibin,0.00001)
            for ibin in xrange(1,nom.GetNbinsX()+1):
                if nom.GetBinContent(ibin) < 0:
                    print '%s: Setting bin %d of %s to 0 (was %.3f)'%(histfile,ibin,nomhist,nom.GetBinContent(ibin))
                    nom.SetBinContent(ibin,0.00001)

        f0.Write("",TObject.kOverwrite)
