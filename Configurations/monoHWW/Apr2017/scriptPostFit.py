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

#    variables={"mthBin","muccamva2HDMadaptFull","muccamva2HDMgradFull"}
    variables={"muccamva2HDMadaptFull_All_Bin800"}
    for var in variables :
        os.system("mkPostFitPlot.py --inputFileCombine combine_em_MVA/fitDiagnostics_600_300_" + var + "_SR.root  --outputFile monoH_2HDM_em_postFit/" + var + "_2HDM.root --variable " + var + " --cut signal --cutNameInOriginal monoH_MVA_em --kind s --pycfg=configuration_em_postFit2HDM.py --getSignalFromPrefit=1 --samplesFile samples_em_postFit2HDM.py --inputFile rootFile_em/plots_monoHWW_em.root")
        os.system("mkPlot.py --inputFile=monoH_2HDM_em_postFit/" + var + "_2HDM.root --pycfg=configuration_em_postFit2HDM.py --onlyCut=monoH_MVA_em   --onlyVariable=" + var + " --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000")

elif model == "Zbar" :

    variables={"muccamvaZbaradaptFull_All_Bin100"}
    for var in variables :
        os.system("mkPostFitPlot.py --inputFileCombine combine_em_MVA/fitDiagnostics_ZB_100_1__" + var + "_SR.root  --outputFile monoH_Zbar_em_postFit/" + var + "_Zbar.root --variable " + var + " --cut signal --cutNameInOriginal monoH_MVA_em --kind s --pycfg=configuration_em_Zbar.py --samplesFile samples_em_postFitZbar.py --getSignalFromPrefit=1 --structureFile structure.py --inputFile rootFile_em/plots_monoHWW_em.root")
        os.system("mkPlot.py --inputFile=monoH_Zbar_em_postFit/" + var + "_Zbar.root --pycfg=configuration_em_postFitZbar.py --onlyCut=monoH_MVA_em   --onlyVariable=" + var + " --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000")

else :
    print "I'm sorry, but I don't know the model " + model + ". I'll quit. Bye!"
    sys.exit()
