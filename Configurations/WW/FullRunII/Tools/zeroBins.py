import os
import sys
from ROOT import *

#root = root directory, dirnames = list of subdirectories in root directory, filenames = list of files in root directory
# In our case, we are looking for the rootfiles in shapes/, so we can check that root ends with shapes/
for root, dirnames, filenames in os.walk('.',followlinks=True):
    if root.endswith('shapes'):
        histfile = root+'/'+filenames[0]
        f0 = TFile.Open(histfile,"UPDATE")
        allhists = [key.GetName() for key in f0.GetListOfKeys()]
        nomhists = [hist for hist in allhists if not ('Up' in hist or 'Down' in hist or 'Var' in hist)]
        varhists = [hist for hist in allhists if not hist in nomhists]
        
        for nomhist in nomhists:
            nom = f0.Get(nomhist)
            for varhist in varhists:
                if not varhist.replace(nomhist,'').startswith('_'): continue
                var = f0.Get(varhist)
                if var.Integral() < 0.0: continue #If nuisance integral is negative, will drop with 'nuisance edit drop' in datacard
                for ibin in xrange(1,nom.GetNbinsX()+1):
                    if nom.GetBinContent(ibin) > 0 and var.GetBinContent(ibin) < 0:
                        var.SetBinContent(ibin,0.00001)

        f0.Write("",TObject.kOverwrite)
