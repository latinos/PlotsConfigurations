import ROOT
ROOT.gROOT.SetBatch(True)

def GetXsecInNtuple(path):
    myfile=ROOT.TFile.Open(path)
    mytree=myfile.Get("Events")
    mytree.Draw("Xsec")
    htemp = ROOT.gPad.GetPrimitive("htemp");
    myxsec=htemp.GetMean()
    myfile.Close()
    del htemp
    return float(myxsec)



if __name__ == '__main__':
    A=GetXsecInNtuple('/xrootd_user/jhchoi/xrootd/Latino/HWWNano/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSkimJHv6_7/nanoLatino_DYJetsToLL_M-50__part0.root')
    print A
