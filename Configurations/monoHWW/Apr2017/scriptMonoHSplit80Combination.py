import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600"}#,"800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

if len(sys.argv) < 6 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print ""
    print "python scriptMonoHSplit80Combination.py em muccamva2HDMadaptFull_All_Bin800            MVA 800 300 True"
    print ""
    print "python scriptMonoHSplit80Combination.py em muccamvaZbaradaptFull_All_Bin100            MVA ZB 100_1_ True"
    print ""
    print ""
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

# Combine datacards
print "+++++ Combining Datacards +++++"

print "Full Signal Region"  # datacard_600_300.txt.pruned.txt
os.system("combineCards.py signal=datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards_combination/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards_combination/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards_combination/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")
os.system("echo \"* autoMCStats 10 1\" >> datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")

# print "1/15 Signal Region"
# os.system("combineCards.py signal=datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")
#os.system("echo \"* autoMCStats 10 1\" >> datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")


# Create folders for results
print "+++++ Creating Folders for Results +++++"
os.system('mkdir -p  goodnessOfFit_' + channel + '_' + cut + '_combination/')
os.system('mkdir -p  combine_' + channel + '_' + cut + '_combination/')
os.system('mkdir -p  limits_' + channel + '_' + cut + '_combination/')
os.system('mkdir -p  pulls_' + channel + '_' + cut + '_combination/')

# text2workspace step
print "+++++ Translating Datacards to Rootfiles +++++"

print "Full Signal Region"
os.system("text2workspace.py --channel-masks datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")

# print "1/15 Signal Region"
# os.system("text2workspace.py --channel-masks datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")

# Use combine to calculate limits

print "+++++ Extracting Limits +++++" 

print "Full Signal Region"

# datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt
# We have removed '-t -1 --expectSignal=1 --runExpected' since we are now unblind!!!
os.system('combine -M Asymptotic -n ' + mZp + '_' + mA0 + '_' + variable + ' datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root &> limits_' + channel + '_' + cut + '_combination/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
os.system('mv higgsCombine' + mZp + '_' + mA0 + '_' + variable + '.Asymptotic.mH120.root combine_' + channel + '_' + cut + '_combination/')

# # datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt
# print "1/15 Signal Region"
# os.system('combine -M Asymptotic -n ' + mZp + '_' + mA0 + '_' + variable + '_blind datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_blind.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.txt')
# os.system('mv higgsCombine' + mZp + '_' + mA0 + '_' + variable + '_blind.Asymptotic.mH120.root combine_' + channel + '_' + cut + '/')



if (doPulls=="True") :
    # Produce pulls
    print "+++++ Producing Pulls +++++"
    
    # SB = Signal and Background Asimov for Signal and Control Regions
    print "+++++ Signal and Control Regions. S + B +++++"
    os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal=1 --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_SB --saveShapes --saveWithUncertainties -d datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root')
    os.system('mv fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_SB.root combine_' + channel + '_' + cut + '_combination/')
    os.system('python ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '_combination/fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_SB.root -a -f latex --histogram pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SB.root > pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SB.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_SB.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "_combination/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SB\")\'')
    
    # B = Background-only Asimov for Signal and Control Regions
    print "+++++ Signal and Control Regions. B Only Asimov +++++"
    os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal=0  --rMin -0.1 --rMax 2 --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_B --saveShapes --saveWithUncertainties -d datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root')
    os.system('mv fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_B.root combine_' + channel + '_' + cut + '_combination/')
    os.system('python ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '_combination/fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_B.root -a -f latex --histogram pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_B.root > pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_B.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_B.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "_combination/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"B\")\'')
    
    # SR = Background-only fit for Data in Signal and Control Regions
    print "+++++ Signal and Control Regions. Unblind +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_SR --saveShapes --saveWithUncertainties --setParameters mask_signal=0 -d datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root')
    os.system('mv fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_SR.root combine_' + channel + '_' + cut + '_combination/')
    os.system('python ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '_combination/fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_SR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SR.root > pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_SR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "_combination/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SR\")\'')
    
    # CR = Background-only fit for Data in Control Regions
    print "+++++ Control Regions Only +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_CR --saveShapes --saveWithUncertainties --setParameters mask_signal=1 -d datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root')
    os.system('mv fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_CR.root combine_' + channel + '_' + cut + '_combination/')
    os.system('python ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '_combination/fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_CR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_CR.root > pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_CR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_CR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "_combination/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"CR\")\'')
    
    # BSR = Background-only fit for Data in Signal and Control Regions
    print "+++++ 1/15 Signal Region and Control Regions. Unblind +++++"
    os.system('combine -M MaxLikelihoodFit --robustFit 1 -n _' + mZp + '_' + mA0 + '_' + variable + '_BSR --saveShapes --saveWithUncertainties --setParameters mask_signal=0 -d datacards_combination/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_blind.root')
    os.system('mv fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root combine_' + channel + '_' + cut + '_combination/')
    os.system('python ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '_combination/fitDiagnostics_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root > pulls_' + channel + '_' + cut + '_combination/pulls_' + mZp + '_' + mA0 + '_' + variable + '_BSR.tex')
    os.system("mv higgsCombine_" + mZp + "_" + mA0 + "_" + variable + "_BSR.MaxLikelihoodFit.mH120.root combine_" + channel + "_" + cut + "_combination/")
    os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"BSR\")\'')
    
    # Produce Goodness of Fit test
    print "+++++ Producing Goodness of Fit test +++++"
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_AD datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root --algo=AD --setParameters mask_signal=0 > goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_AD.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_AD.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')
    
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_KS datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root --algo=KS --setParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_KS.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_KS.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')
    
    os.system('combine -M GoodnessOfFit -n _' + mZp + '_' + mA0 + '_' + variable + '_SAT datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_' + mZp + '_' + mA0 + '_combined.root --algo=saturated --setParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_saturated.txt')
    os.system('mv higgsCombine_' + mZp + '_' + mA0 + '_' + variable + '_SAT.GoodnessOfFit.mH120.root goodnessOfFit_' + channel +'_' + cut + '/')


