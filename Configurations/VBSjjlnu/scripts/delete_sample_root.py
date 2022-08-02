import ROOT as R
import sys
'''
This script deletes the sample histograms from all the cuts and variables. 
Both nominal and variations
'''

f = R.TFile(sys.argv[1], "UPDATE")
sample_name = sys.argv[2]

f.ls()
for k in f.GetListOfKeys():
    print ("CUT", k.GetName())
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        print (">> Var: ", z.GetName())
        R.gDirectory.Cd(z.GetName())
        #R.gDirectory.ls()
        # for l in R.gDirectory.GetListOfKeys():
            # if "histo_" + sample_name in l.GetName():
                # print "delete ", l.GetName()
        R.gDirectory.Delete("histo_" + sample_name+"*;*")
        
        R.gDirectory.Cd("../")
    R.gDirectory.Cd("../")

f.Write()
f.Close()
 