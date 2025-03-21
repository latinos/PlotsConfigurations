import os
import sys
from ROOT import *
TH1.AddDirectory(0)



years_btag = ["2018","2017","2016preVFP", "2016postVFP"]

years = ["2018","2017","2016"]
years_alt = {
    "2018"      : ["2017", "2016HIPM", "2016noHIPM"],
    "2017"      : ["2018", "2016HIPM", "2016noHIPM"],
    "2016HIPM"  : ["2018", "2017", "2016noHIPM"],
    "2016noHIPM": ["2018", "2017", "2016HIPM"],
}

f0             = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_FullRunII_Fit_test_NEW_morevariables.root"
#f0             = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_FullRunII_Fit_test_NEW.root"
fname_18       = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_2018_v9_Fit_test.root"
fname_17       = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_2017_v9_Fit_test.root"
fname_16HIPM   = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_2016HIPM_v9_Fit_test.root"
fname_16noHIPM = "rootFiles_AZH_FullRunII_Fit_test/plots_AZH_2016noHIPM_v9_Fit_test.root"

f_18       = TFile.Open(fname_18,"READ")
f_17       = TFile.Open(fname_17,"READ")
f_16HIPM   = TFile.Open(fname_16HIPM,"READ")
f_16noHIPM = TFile.Open(fname_16noHIPM,"READ")
f0         = TFile.Open(f0,"UPDATE")

bkg = ["Zg", "Fake", "ZgS", "TTWJets", "tZq_ll", "Vh_hww", "top", "WZ", "ttH_hww", "ZZ", "ttZ", "VVV"]
signals = ["AZH_600_400", "AZH_800_600", "AZH_900_400", "AZH_1000_600"]
samples = bkg + signals
def sample2variable(signalname):
    variablename = signalname.replace("AZH", "mA").replace("0_", "0_mH_")
    return variablename

base_variables = ["events", "ptz"]#"checkmZ", "njet", "nbjet"]
extra_breq_SR = ["mA", "mH", "DeltaM"]#, "chisq", "chisq_alt"]
extra_bveto_1j_SR = ["mA_onebjet", "mH_onebjet", "DeltaM_onebjet"]#, "chisq_onebjet", "chisq_onebjet_alt"]

variables_dict = {
    "breq_SR" : base_variables + extra_breq_SR,
    "bveto_1j_SR" : base_variables+ extra_bveto_1j_SR,
    "bveto_4j": base_variables,
}
signal_variables_dict = {
    "breq_SR" : (lambda signal : "ellipse_"+sample2variable(signal)),
    "bveto_1j_SR" : (lambda signal: "ellipse_onebjet_"+sample2variable(signal)),
}
bkg_variables_dict = {
    "breq_SR" : ["ellipse_"+sample2variable(signal) for signal in signals],
    "bveto_1j_SR" : ["ellipse_onebjet_"+sample2variable(signal) for signal in signals],
}

nuis2016JES = ["CMS_scale_JESAbsolute_2016_all", "CMS_scale_JESBBEC1_2016_all", "CMS_scale_JESEC2_2016_all" , "CMS_scale_JESHF_2016_all", "CMS_scale_JESRelativeSample_2016_all"]
JES_inclusive=["CMS_scale_"+js+"_all" for js in ['JESAbsolute','JESBBEC1','JESEC2','JESFlavorQCD','JESHF','JESRelativeBal']]
all_nuisances=[]
fake_nuisances=[]
with open("uncorrelated_systs.txt") as f:
    for line in f:
        if "fake" in line:
            fake_nuisances.append(line.rstrip("\n"))
        else:
            all_nuisances.append(line.rstrip("\n"))
            

for region in ["breq_SR","bveto_1j_SR","bveto_4j"]:
    print("START "+region)
    for sample in samples:
        print("\t"+region+" "+sample)
        variables = variables_dict[region][:]
        if "SR" in region:
            if "AZH" in sample:
                variables.append(signal_variables_dict[region](sample))
            else:
                variables = variables + bkg_variables_dict[region][:]
        print("\t",variables)
        for variable in variables:
            gDirectory.cd("../../")
            histpath = region+"/"+variable+"/histo_"+sample
            print("\t\t"+histpath)
            h_18       = f_18.Get(histpath).Clone()
            h_17       = f_17.Get(histpath).Clone()
            h_16HIPM   = f_16HIPM.Get(histpath).Clone()
            h_16noHIPM = f_16noHIPM.Get(histpath).Clone()
            print("\t\thistograms loaded!")
            print("\t\t2018: %8.3f\n2017: %8.3f\n2016HIPM: %8.3f\n2016noHIPM: %8.3f"%(h_18.Integral(), h_17.Integral(), h_16HIPM.Integral(),h_16noHIPM.Integral()))
            nominal = h_18.Integral() + h_17.Integral() + h_16HIPM.Integral() + h_16noHIPM.Integral()
            print("\t\t >> nominal value: %8.3f"%(nominal))
            
            gDirectory.cd("%s/%s"%(region,variable))
            print(gDirectory.pwd())
            nuisances = fake_nuisances if "Fake" in sample else all_nuisances
            for nuisance in nuisances:
                print("\t\t\t\t"+nuisance)
                for year in years:
                    for direction in ["Up", "Down"]:

                        if "btag" in nuisance and year == "2016":
                            for suffix in ["preVFP","postVFP"]:
                                variation = "%s_%s%s"%(histpath, nuisance.replace("RPLMEYEAR",year+suffix),direction)
                                h = f0.Get(variation).Clone()
                                print("\t\t\t\t\t"+h.GetName())
                                print("\t\t\t\t\t\tbefore >> %8.3f"%(h.Integral()))
                                    
                                if not h:
                                    print("Could not find "+variation+" in "+fname)
                                    continue
                                h.Add(h_18)
                                h.Add(h_17)
                                if suffix == "preVFP":
                                    h.Add(h_16HIPM)
                                else:
                                    h.Add(h_16noHIPM)
                                h.Write(h.GetName(),TObject.kOverwrite)
                                print("\t\t\t\t\t\tafter >> %8.3f"%(h.Integral()))


                        else: 
                            if "prefiring" in nuisance and year == "2018": continue
                            if "JES" in nuisance and year == "2017" and sample == "TTWJets": continue
                            if "_PU_" in nuisance and sample not in ['WZ','ZZ','VVV','ttZ','Zg','top'] and sample not in signals: continue
                            variation = "%s_%s%s"%(histpath, nuisance.replace("RPLMEYEAR",year),direction)
                            h = f0.Get(variation).Clone()
                            print("\t\t\t\t\t"+h.GetName())
                            print("\t\t\t\t\t\t>>before >> %8.3f"%(h.Integral()))
                            if year == "2018":
                                h.Add(h_17)
                                h.Add(h_16HIPM)
                                h.Add(h_16noHIPM)
                            if year == "2017":
                                h.Add(h_18)
                                h.Add(h_16HIPM)
                                h.Add(h_16noHIPM)
                            if year == "2016":
                                h.Add(h_18)
                                h.Add(h_17)
                            print("\t\t\t\t\t\tafter >> %8.3f"%(h.Integral()))
                            h.Write(h.GetName(),TObject.kOverwrite) 


            if sample == "TTWJets":
                print("fixing missing JES invlusive uncertainties for 2017 and 2016HIPM...")
                for nuisance in JES_inclusive:
                    print("\t"+nuisance)
                    for direction in ["Up", "Down"]:
                        variation = "%s_%s%s"%(histpath, nuisance, direction)
                        h = f0.Get(variation).Clone()
                        print("\t\t"+h.GetName())
                        print("\t\tbefore >> %8.3f"%(h.Integral()))
                        h.Add(h_17)
                        h.Add(h_16HIPM)
                        print("\t\tafter >> %8.3f"%(h.Integral()))
                        h.Write(h.GetName(),TObject.kOverwrite)

                print("adding missing 2016HIPM nominals uncorrelated 2016 JES uncertainties !!!!")
                for nuisance in nuis2016JES:
                    print("\t"+nuisance)
                    for direction in ["Up", "Down"]:
                        variation = "%s_%s%s"%(histpath, nuisance, direction)
                        h = f0.Get(variation).Clone()
                        print("\t\t"+h.GetName())
                        print("\t\tbefore >> %8.3f"%(h.Integral()))
                        h.Add(h_16HIPM)
                        print("\t\tafter >> %8.3f"%(h.Integral()))
                        h.Write(h.GetName(),TObject.kOverwrite) 


