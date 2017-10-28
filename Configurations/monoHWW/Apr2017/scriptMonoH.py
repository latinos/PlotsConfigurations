
import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600"}#,"800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

if len(sys.argv) < 6 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print "python scriptMonoH.py em muccamva2HDMadaptFull_600 MVA 600 300 False"
    print "python scriptMonoH.py em muccamvaZbaradaptFull_100 MVA ZB 100_1_ False"
    print ""
    print "python scriptMonoH.py em muccamva2HDMadaptFull_600 MVA 600 300 True"
    print "python scriptMonoH.py em muccamva2HDMadaptFull_1000 MVA 1000 300 True"
    print "python scriptMonoH.py em muccamva2HDMadaptFull_2000 MVA 2000 300 True"
    print "python scriptMonoH.py em muccamva2HDMadaptFull_2500 MVA 2500 300 True"
    print ""
    print "python scriptMonoH.py em muccamvaZbaradaptFull_10 MVA ZB 10_1_ True"
    print "python scriptMonoH.py em muccamvaZbaradaptFull_100 MVA ZB 100_1_ True"
    print "python scriptMonoH.py em muccamvaZbaradaptFull_1000 MVA ZB 1000_1_ True"
    print "python scriptMonoH.py em muccamvaZbaradaptFull_2000 MVA ZB 2000_1_ True"
    sys.exit()

channel = sys.argv[1]
print "Channel: " + channel

variable = sys.argv[2]
print "Variable: " + variable

cut = sys.argv[3]
print "Cut: " + cut

mZp = sys.argv[4]
print "Mass Point/Model: " + mZp

mA0 = sys.argv[5]
print "Mass Point: " + mA0

doPulls="False"
if len(sys.argv) > 6 :
    doPulls = sys.argv[6]
print "Do pulls: " + doPulls

# # Source Combine
# print "+++++ Source Combine +++++"
# os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/")
# os.system("eval `scramv1 runtime -sh`")
# os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/")

# Combine datacards
print "+++++ Combining Datacards +++++"

print "Full Signal Region"
os.system("combineCards.py signal=datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard.txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard.txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.txt")

print "1/15 Signal Region"
os.system("combineCards.py signal=datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard.txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard.txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_blind.txt")

# Create folders for results
print "+++++ Creating Folders for Results +++++"
os.system('mkdir -p  goodnessOfFit_' + channel + '_' + cut + '/')
os.system('mkdir -p  combine_' + channel + '_' + cut + '/')
os.system('mkdir -p  limits_' + channel + '_' + cut + '/')
os.system('mkdir -p  pulls_' + channel + '_' + cut + '/')

##if "Zbar" not in variable: 

##    print "Running on 2HDM Model"

    # # Loop over 2HDM model mass points
    # print "+++++ 2HDM Mass Points +++++"
    # for mZp in ZpMasses :
    #     for mA0 in A0Masses :
            
# text2workspace step
print "+++++ Translating Datacards to Rootfiles +++++"

print "Full Signal Region"
os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_' + mZp + '_' + mA0 + '.root')
os.system('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')

print "1/15 Signal Region"
os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_blind.txt -o monoH_' + mZp + '_' + mA0 + '_blind.root')
os.system('mv monoH_' + mZp + '_' + mA0 + '_blind.root combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.root')

# Use combine to calculate limits
print "+++++ Extracting Limits +++++"

print "Full Signal Region"
os.system('combine -M Asymptotic -n ' + mZp + '_' + mA0 + '_' + variable + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
os.system('mv higgsCombine' + mZp + '_' + mA0 + '_' + variable + '.Asymptotic.mH120.root combine_' + channel + '_' + cut + '/')

print "1/15 Signal Region"
os.system('combine -M Asymptotic -n ' + mZp + '_' + mA0 + '_' + variable + '_blind combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.txt')
os.system('mv higgsCombine' + mZp + '_' + mA0 + '_' + variable + '_blind.Asymptotic.mH120.root combine_' + channel + '_' + cut + '/')

#if (mZp == "600" and mA0 == "300") or (mZp == "ZB" and mA0 == "100_1_"):
if (doPulls=="True") :
    # Produce pulls
    print "+++++ Producing Pulls +++++"
    
    # SB = Signal and Background Asimov for Signal and Control Regions
    print "+++++ Signal and Control Regions. S + B +++++"
    os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_SB --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
    os.system('mv mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SB.root combine_' + channel + '_' + cut + '/')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SB.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SB.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SB.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_SB.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SB\")\'')
    
    # B = Background-only Asimov for Signal and Control Regions
    print "+++++ Signal and Control Regions. B Only Asimov +++++"
    os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 0 --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_B --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
    os.system('mv mlfit_' + mZp + '_' + mA0 + '_' + variable + '_B.root combine_' + channel + '_' + cut + '/')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_B.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_B.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_B.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_B.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"B\")\'')
    
    # SR = Background-only fit for Data in Signal and Control Regions
    print "+++++ Signal and Control Regions. Unblind +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_SR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
    os.system('mv mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SR.root combine_' + channel + '_' + cut + '/')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SR.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_SR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SR\")\'')
    
    # CR = Background-only fit for Data in Control Regions
    print "+++++ Control Regions Only +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_CR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=1 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
    os.system('mv mlfit_' + mZp + '_' + mA0 + '_' + variable + '_CR.root combine_' + channel + '_' + cut + '/')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_CR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_CR.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_CR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_CR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"CR\")\'')
    
    # BSR = Background-only fit for Data in Signal and Control Regions
    print "+++++ 1/15 Signal Region and Control Regions. Unblind +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_BSR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.root')
    os.system('mv mlfit_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root combine_' + channel + '_' + cut + '/')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_BSR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_BSR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"BSR\")\'')
    
    # # Produce Impact Plot
    # os.system('combineTool.py -M Impacts -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit 1 -n ' + mZp + '_' + mA0 + '_' + variable)
    # os.system('combineTool.py -M Impacts -d  combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root -m 125 -t -1 --expectSignal=1 --robustFit 1 --doFits  --parallel 24 -n ' + mZp + '_' + mA0 + '_' + variable)
    # os.system('combineTool.py -M Impacts -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root -m 125 -o pulls_' + channel + '_' + cut + '/impact_' + mZp + '_' + mA0 + '_' + variable + '.json -n ' + mZp + '_' + mA0 + '_' + variable)
    # os.system('plotImpacts.py -i pulls_' + channel + '_' + cut + '/impact_' + mZp + '_' + mA0 + '_' + variable + '.json -o pulls_' + channel + '_' + cut + '/impact_' + mZp + '_' + mA0 + '_' + variable + '.pdf')

    # Produce Goodness of Fit test
    print "+++++ Producing Goodness of Fit test +++++"
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_AD combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=AD --setPhysicsModelParameters mask_signal=0 > goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_AD.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_AD.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')
    
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_KS combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=KS --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_KS.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_KS.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')
    
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_SAT combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=saturated --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_saturated.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_SAT.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')


# #zbMassPoints={"10000_1000_","10000_500_","10000_150_","10000_50_","10000_1_","2000_1_","1995_1000_","1000_1000_","1000_150_","1000_1_","995_500_","500_500_","500_150_","500_1_","300_50_","300_1_","295_150_","200_150_","200_50_","200_1_","100_10_","100_1_","95_50_","50_50_","50_10_","50_1_","20_1_","15_10_","10_1000_","10_500_","10_150_","10_50_","10_10_","10_1_"}
# #zbMassPoints={"1000_1_","100_1_","10_1_","300_1_","50_1_"}
# zbMassPoints={"100_1_"}

# if "2HDM" not in variable :

#     print "Running on Zbar Model"

#     # Loop over Z'B model mass points
#     print "+++++ Z'B Mass Points +++++"
#     for masses in zbMassPoints :

#         # text2workspace step
#         print "+++++ Translating Datacards to Rootfiles +++++"

#         print "Full Signal Region"
#         os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_ZB_' + masses + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_ZB_' + masses + '.root')
#         os.system('mv monoH_ZB_' + masses + '.root combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')

#         print "1/15 Signal Region"
#         os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_ZB_' + masses + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_blind.txt -o monoH_ZB_' + masses + '_blind.root')
#         os.system('mv monoH_ZB_' + masses + '_blind.root combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root')

#         # Use combine to calculate limits
#         print "+++++ Extracting Limits +++++"

#         print "Full Signal Region"
#         os.system('combine -M Asymptotic -n ' + masses + '_' + variable + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.txt')
#         os.system('mv higgsCombine' + masses + '_' + variable + '.Asymptotic.mH120.root combine_' + channel + '_' + cut + '/')
    
#         print "1/15 Signal Region"
#         os.system('combine -M Asymptotic -n ' + masses + '_' + variable + '_blind combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root &> limits_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.txt')
#         os.system('mv higgsCombine' + masses + '_' + variable + '_blind.Asymptotic.mH120.root combine_' + channel + '_' + cut + '/')

#         if masses == "100_1_" :

#             # Produce pulls
#             print "+++++ Producing Pulls +++++"
            
#             # SB = Signal and Background Asimov for Signal and Control Regions
#             print "+++++ Signal and Control Regions. S + B +++++"
#             os.system('combine -M MaxLikelihoodFit --robustFit 1 -t -1 -n _ZB_' + masses + '_' + variable + '_SB --expectSignal 1  --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
#             os.system('mv mlfit_ZB_' + masses + '_' + variable + '_SB.root combine_' + channel + '_' + cut + '/')
#             os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SB.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_SB.root')
#             os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"SB\")\'')
            
#             # B = Background-only Asimov for Signal and Control Regions
#             print "+++++ Signal and Control Regions. B Only Asimov +++++"
#             os.system('combine -M MaxLikelihoodFit --robustFit 1 -t -1 -n _ZB_' + masses + '_' + variable + '_B --expectSignal 0 --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
#             os.system('mv mlfit_ZB_' + masses + '_' + variable + '_B.root combine_' + channel + '_' + cut + '/')
#             os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_B.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_B.root')
#             os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"B\")\'')
            
#             # SR = Background-only fit for Data in Signal and Control Regions
#             print "+++++ Signal and Control Regions. Unblind +++++"
#             os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _ZB_' + masses + '_' + variable + '_SR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
#             os.system('mv mlfit_ZB_' + masses + '_' + variable + '_SR.root combine_' + channel + '_' + cut + '/')
#             os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_SR.root')
#             os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"SR\")\'')
            
#             # CR = Background-only fit for Data in Control Regions
#             print "+++++ Control Regions Only +++++"
#             os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _ZB_' + masses + '_' + variable + '_CR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=1 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
#             os.system('mv mlfit_ZB_' + masses + '_' + variable + '_CR.root combine_' + channel + '_' + cut + '/')
#             os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_CR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_CR.root')
#             os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"CR\")\'')
        
#             # BSR = Background-only fit for Data in Signal and Control Regions
#             print "+++++ 1/15 Signal and Control Regions +++++"
#             os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _ZB_' + masses + '_' + variable + '_BSR --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root')
#             os.system('mv mlfit_ZB_' + masses + '_' + variable + '_BSR.root combine_' + channel + '_' + cut + '/')
#             os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_BSR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_BSR.root')
#             os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"BSR\")\'')

#             # Produce Goodness of Fit test
#             print "+++++ Producing Goodness of Fit test +++++"
#             print "+++++ Signal and Control Regions +++++"
#             os.system('combine -M GoodnessOfFit -n _ZB_' + masses + '_' + variable + '_AD combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=AD --setPhysicsModelParameters mask_signal=0 > goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_AD.txt')
#             os.system('mv higgsCombine_ZB_' + masses + '_' + variable + '_AD.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')

#             os.system('combine -M GoodnessOfFit -n _' + masses + '_' + variable + '_KS combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=KS --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_KS.txt')
#             os.system('mv higgsCombine_ZB_' + masses + '_' + variable + '_KS.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')

#             os.system('combine -M GoodnessOfFit -n _' + masses + '_' + variable + '_SAT combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=saturated --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_saturated.txt')
#             os.system('mv higgsCombine_ZB_' + masses + '_' + variable + '_SAT.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')


