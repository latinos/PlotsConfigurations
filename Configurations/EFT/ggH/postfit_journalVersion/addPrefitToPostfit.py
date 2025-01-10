import ROOT
import shutil

#inputFilePostfit = "output_postFitShapes_Run2_VHBoosted_IP_afterVgBug_H0M_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_2jVBF_IP_afterVgBug_H0M_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_2jVBF_IP_afterVgBug_narrowFai_H0PH_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_2jVH_afterVgBug_narrowFai_H0L1_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_VHBoosted_IN_afterVgBug_H0M_fitS.root"
inputFilePostfit = "output_postFitShapes_Run2_VHBoosted_afterVgBug_narrowFai_H0PH_fitS.root"
inputFilePostfit = "output_postFitShapes_Run2_2jVBF_afterVgBug_narrowFai_H0L1_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_1j_afterVgBug_H0M_fitS.root"
#inputFilePostfit = "output_postFitShapes_Run2_2jGGH_IN_fpruned_HGG_H0M_fitS.root"

#inputFilePrefit  = "../prefit_GGH/Files_rebin/plots_JJHRun2_H0M.root"
#inputFilePrefit  = "../unweighted_result.root"
#inputFilePrefit = "../prefit_plots_Lourdes/AnaTemplates_rootfiles/plots_JJHRun2_AC_MCStatsOFF_fixedH0Zg.root"
inputFilePrefit  = "../prefit_plots_Lourdes/AnaTemplates_rootfiles/plots_JJHRun2B_AC_MCStatsOFF.root"
outputFileName = inputFilePostfit[:-5]+"_plusPrefit.root"
#cat = "hww2l2v_13TeV_of2j_vbf"
cat = "hww2l2v_13TeV_of2j_Vh"
#cat = "hww2l2v_13TeV_1j"
#cat = "hww2l2v_13TeV_of2j_ggh_thmin"
#var = "varH0M"
var = "HVV_H0PH"
#var = "HGG_H0M"
#cat_alt = "hww2l2v_13TeV_orig_mth125_mllCut_1j" 
cat_alt = None
var_alt = None
scaleToPostfit = False
scaleToSM = True
#onlyFor = ["ggHjj"]
onlyFor = []

#copy postfit file in a full extend to the output using standard libraries
shutil.copy(inputFilePostfit, outputFileName)

#retrieve normalisation factor
norm = 0.
normOnlyFor = 0.
outputFile = ROOT.TFile.Open(outputFileName, "READ")
dir1 = outputFile.Get(cat)
if dir1:
    dir2 = dir1.Get(var)
    if dir2:
        dir2.cd()
        for h in dir2.GetListOfKeys():
            if h.GetName().split("_")[-1] in ["T1","T2","T3","T4","T5"]:
                hist = h.ReadObj()
                norm += hist.Integral()
                for proc in onlyFor:
                    if proc in h.GetName():
                        normOnlyFor += hist.Integral() 
    else:
        print(var+" NOT FOUND!")
else:
    print(cat+" NOT FOUND!")
print("Integral Postfit All = "+str(norm))
for proc in onlyFor:
    print("Integral Postfit for "+proc+" = "+str(normOnlyFor)) 

#read prefit file using ROOT and save all signal histograms
inputPrefit = ROOT.TFile.Open(inputFilePrefit, "READ")
if cat_alt is not None: _cat = cat_alt 
else: _cat = cat
if var_alt is not None: _var = var_alt 
else: _var = var
dir1 = inputPrefit.Get(_cat)
dir2 = dir1.Get(_var)
histos = [h.ReadObj() for h in dir2.GetListOfKeys() if h.GetName().split("_")[-1] in ["T1","T2","T3","T4","T5"]]

#rename signal histograms and normalize them to the total postfit signal 
normBSM = 0.
normSM  = 0.
normBSMOnlyFor = 0.
normSMOnlyFor = 0.
for h in histos:
    h.SetDirectory(0)
    h.SetName(h.GetName()+"_prefit")
    prenorm = 1.0
    if any(sub in h.GetName() for sub in ["VBF","WH","ZH"]) and "T5" in h.GetName():
        prenorm = 0.0001
        h.Scale(prenorm)
        normBSM += h.Integral()
        for proc in onlyFor:
            if proc in h.GetName():
                normBSMOnlyFor += h.Integral() 
    elif any(sub in h.GetName() for sub in ["ggH","ggHjj"]) and "T3" in h.GetName():
        prenorm = 0.01
        h.Scale(prenorm)
        normBSM += h.Integral()
        for proc in onlyFor:
            if proc in h.GetName():
                normBSMOnlyFor += h.Integral()
    elif "T1" in h.GetName():
        normSM += h.Integral()
        for proc in onlyFor:
            if proc in h.GetName():
                normSMOnlyFor += h.Integral()

testBSM = 0.
testSM = 0.
for h in histos:
    print(h.GetName())
    if h.Integral() == 0:
        print("scale ---> 0")

    if (any(sub in h.GetName() for sub in ["VBF","WH","ZH"]) and "T5" in h.GetName()) \
       or (any(sub in h.GetName() for sub in ["ggH","ggHjj"]) and "T3" in h.GetName()):
        if scaleToPostfit:
            print("scale ---> "+str(norm/normBSM))
            h.Scale(norm/normBSM)
            testBSM += h.Integral()
        elif scaleToSM:
            if len(onlyFor) != 0:
                for proc in onlyFor:
                    if proc in h.GetName():
                        print("scale ---> "+str(normSMOnlyFor/normBSMOnlyFor))
                        h.Scale(normSMOnlyFor/normBSMOnlyFor)
                        testBSM += h.Integral() 
            else:
                print("scale ---> "+str(normSM/normBSM))
                h.Scale(normSM/normBSM)
                testBSM += h.Integral()  
    elif "T1" in h.GetName():
        if scaleToPostfit: 
            print("scale ---> "+str(norm/normSM))
            h.Scale(norm/normSM) 
            testSM += h.Integral()
        elif scaleToSM:
            if len(onlyFor) != 0: 
                for proc in onlyFor:
                    if proc in h.GetName():
                        print("scale ---> 1.0")
                        testSM += h.Integral()
            else:
                print("scale ---> 1.0")
                testSM += h.Integral()
     
print("Test Total: "+str(norm))
print("Test SM: "+str(testSM))
print("Test BSM: "+str(testBSM))

#copy renamed histograms to the output file
outputFile = ROOT.TFile.Open(outputFileName, "UPDATE")
dir1 = outputFile.Get(cat)
if dir1:
    dir2 = dir1.Get(var)
    if dir2:
        dir2.cd()
        for h in histos:
            h.Write()
    else:
        print(var+" NOT FOUND!!")
else:
    print(cat+" NOT FOUND!!")
print("ALL OK")
inputPrefit.Close()
outputFile.Close()
