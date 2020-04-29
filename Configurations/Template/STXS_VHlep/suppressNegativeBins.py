#!/bin/env python                                                                                                                                                                                           
import ROOT as rt
from array import array
import sys

if len(sys.argv) < 2 or len(sys.argv) > 2:
    print("Syntax: suppressNegativeBins.py plots_analysis.root")
    sys.exit()    
files = sys.argv[1]

f = rt.TFile.Open(files,"UPDATE")

# list of regions
for i in [ ff.GetTitle() for ff in f.GetListOfKeys() ]:
    # list of variables
    for j in [ ff.GetTitle() for ff in f.GetDirectory(i).GetListOfKeys() ]:
        # list of histogram
        for k in [ ff.GetTitle() for ff in f.GetDirectory( "%s/%s" %(i,j) ).GetListOfKeys() ]:
            if k.split('_')[1] == 'Fake': continue
            if k.split('_')[1] == 'DATA': continue
            # only the nominal
            if len(k.split('_'))>2 and k.split('_')[-1] not in ['LT150','GT150','FWDH']: continue
            histo = f.Get('%s/%s/%s' %( i , j , k ) )
            #if histo.Integral() < 0:
                #print('Nominal histogram %s/%s/%s has negative integral: %s , overwritting bin to 0.00001' %( i , j , k , histo.Integral() ))
            # set only negative bin to zero
            for ixbin in range(0,histo.GetNbinsX()+1):
                #print('inspecting bin : ',histo.GetBinContent(ixbin))
                if histo.GetBinContent(ixbin) < 0:
                    print('Nominal histogram %s/%s/%s has negative entry in %s , overwritting bin to 0.00001' %( i , j , k , ixbin ))
                    print('before :: ixbin : %s ; bincontent : %s +/- %s' %( ixbin , histo.GetBinContent(ixbin) , histo.GetBinError(ixbin) ) )
                    histo.SetBinContent(ixbin, 0.00001)
                    #histo.SetBinError(ixbin, 0.)
                    print('after  :: ixbin : %s ; bincontent : %s +/- %s' %( ixbin , histo.GetBinContent(ixbin) , histo.GetBinError(ixbin) ) )

f.Write("",rt.TObject.kOverwrite)
f.Close()
