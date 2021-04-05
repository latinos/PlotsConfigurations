import ROOT as R 
import sys 


iF= R.TFile.Open(sys.argv[1],"READ")
oF= R.TFile.Open(sys.argv[2],"UPDATE")

for njet in [2,3,4,5,6,7]:
    cut = "mjj100_njet"+str(njet)
    iF.cd(cut)
    fit = R.gDirectory.Get("fit_mjj")
    oF.cd("/mjj100_njet"+str(njet))
    fit.Write()
    oF.cd("/")
    iF.cd("/")
        
oF.Close()
iF.Close()

