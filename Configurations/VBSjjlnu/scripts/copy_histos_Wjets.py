import ROOT as R 
import sys

oF = R.TFile(sys.argv[2], "RECREATE")
iF = R.TFile(sys.argv[1], "READ")

wjets_bins = {"res":[],"boost":[]}
for ir in range(1,7):
    wjets_bins["res"].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins["boost"].append("Wjets_HT_boost_"+str(ir))


# Iterating on nuisance_effect folders
for cut in iF.GetListOfKeys():
        R.gDirectory.Cd(cut.GetName())
        oF.mkdir(cut.GetName())
        print "Cut: ", cut.GetName()
        for var  in R.gDirectory.GetListOfKeys():
            oF.mkdir(cut.GetName() + "/"+var.GetName())
            print "> Var: ", var.GetName() 
            
            if 'res' in cut.GetName():
                samples = wjets_bins['boost']
            if 'boost' in cut.GetName():
                samples = wjets_bins['res']

            for sample in samples:
                h1 = iF.Get("{}/{}/histo_{}_CMS_PS_FSRUp".format(cut.GetName(), var.GetName(), sample))
                h2 = iF.Get("{}/{}/histo_{}_CMS_PS_FSRDown".format(cut.GetName(), var.GetName(), sample))
                h3 = iF.Get("{}/{}/histo_{}_CMS_PS_ISRUp".format(cut.GetName(), var.GetName(), sample))
                h4 = iF.Get("{}/{}/histo_{}_CMS_PS_ISRDown".format(cut.GetName(), var.GetName(), sample))
                oF.cd(cut.GetName() + "/"+var.GetName())
                h1.Write()
                h2.Write()
                h3.Write()
                h4.Write()
        iF.cd()

oF.Close()