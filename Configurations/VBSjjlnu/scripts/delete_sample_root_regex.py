import ROOT as R
import sys
import re 

'''
This script deletes the sample histograms from all the cuts and variables. 
Both nominal and variations
'''

f = R.TFile(sys.argv[1], "UPDATE")
pattern = sys.argv[2]

f.ls()
for k in f.GetListOfKeys():
    print "CUT", k.GetName()
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        print ">> Var: ", z.GetName()
        R.gDirectory.Cd(z.GetName())
        #R.gDirectory.ls()
        to_delete = []
        for l in R.gDirectory.GetListOfKeys():
            if re.match(pattern, l.GetName()):
                print "delete ", l.GetName()
                to_delete.append(l.GetName())
        for h in to_delete:
            R.gDirectory.Delete(h+";*")
        
        R.gDirectory.Cd("../")
    R.gDirectory.Cd("../")

f.Write()
f.Close()
