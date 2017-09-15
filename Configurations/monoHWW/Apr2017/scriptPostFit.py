import os
import sys

if len(sys.argv) < 2 :
    print "Please insert all the inputs I need: model"
    print "python scriptPostFit.py 2HDM"
    print "python scriptPostFit.py Zbar"
    sys.exit()

model = sys.argv[1]
print "Model = " + model

if model == "2HDM" :

    variables={"mthBin","muccamva2HDMadaptFull","muccamva2HDMgradFull"}
    for var in variables :
        os.system("mkPostFitPlot.py --inputFileCombine combine_em_MVA/mlfit_600_300_" + var + "_BSR.root  --outputFile monoH_2HDM_em_postFit/" + var + "_2HDM.root --variable " + var + " --cut signal --cutNameInOriginal monoH_MVA_em --kind s --pycfg configuration_em_blindData_postFit2HDM.py --samplesFile samples_em_blindData_postFit2HDM.py --inputFile rootFile_em_blindData/plots_monoHWW_em_blindData.root")
        os.system("mkPlot.py --inputFile=monoH_2HDM_em_postFit/" + var + "_2HDM.root --pycfg=configuration_em_blindData_postFit2HDM.py --onlyCut=monoH_MVA_em   --onlyVariable=" + var + " --showIntegralLegend=1")

elif model == "Zbar" :

    variables={"mthBin","muccamvaZbaradaptFull","muccamvaZbargradFull"}
    for var in variables :
        os.system("mkPostFitPlot.py --inputFileCombine combine_em_MVA/mlfit_ZB_100_1__" + var + "_BSR.root  --outputFile monoH_Zbar_em_postFit/" + var + "_Zbar.root --variable " + var + " --cut signal --cutNameInOriginal monoH_MVA_em --kind s --pycfg configuration_em_blindDataZbar.py --samplesFile samples_em_blindData_postFitZbar.py --inputFile rootFile_em_blindData/plots_monoHWW_em_blindData.root")
        os.system("mkPlot.py --inputFile=monoH_Zbar_em_postFit/" + var + "_Zbar.root --pycfg=configuration_em_blindData_postFitZbar.py --onlyCut=monoH_MVA_em   --onlyVariable=" + var + " --showIntegralLegend=1")

else :
    print "I'm sorry, but I don't know the model " + model + ". I'll quit. Bye!"
    sys.exit()
