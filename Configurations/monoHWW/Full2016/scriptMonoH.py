import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600"}#,"800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

if len(sys.argv) < 4 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print "python scriptMonoH.py em mthBin MVA"
    print "python scriptMonoH.py em muccamva2HDMadaptFull MVA"
    print "python scriptMonoH.py em muccamva2HDMgradFull MVA"
    print "python scriptMonoH.py em muccamvaZbaradaptFull MVA"
    print "python scriptMonoH.py em muccamvaZbargradFull MVA"
    sys.exit()

channel = sys.argv[1]
print channel

variable = sys.argv[2]
print variable

cut = sys.argv[3]
print cut

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

if "Zbar" not in variable: 

    print "Running on 2HDM Model"

    # Loop over 2HDM model mass points
    print "+++++ 2HDM Mass Points +++++"
    for mZp in ZpMasses :
        for mA0 in A0Masses :
            
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
            os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 0 --run expected combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
            os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mH' + mZp + '_' + mA0 + '_' + variable + '.root')
            
            print "1/15 Signal Region"
            os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.txt')
            os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mH' + mZp + '_' + mA0 + '_' + variable + '_blind.root')

            if mZp == "600" and mA0 == "300" :
                # Produce pulls
                print "+++++ Producing Pulls +++++"
                
                # SB = Signal and Background Asimov for Signal and Control Regions
                print "+++++ Signal and Control Regions. S + B +++++"
                os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 --robustFit 1 --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
                os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SB.root')
                os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SB.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SB.root')
                os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SB\")\'')

                # B = Background-only Asimov for Signal and Control Regions
                print "+++++ Signal and Control Regions. B Only Asimov +++++"
                os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 0 --robustFit 1 --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
                os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_B.root')
                os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_B.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_B.root')
                os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"B\")\'')
                
                # SR = Background-only fit for Data in Signal and Control Regions
                print "+++++ Signal and Control Regions. Unblind +++++"
                os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
                os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SR.root')
                os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_SR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_SR.root')
                os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"SR\")\'')
                
                # CR = Background-only fit for Data in Control Regions
                print "+++++ Control Regions Only +++++"
                os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=1 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
                os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_CR.root')
                os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_CR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_CR.root')
                os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"CR\")\'')
                
                # BSR = Background-only fit for Data in Signal and Control Regions
                print "+++++ 1/15 Signal Region and Control Regions. Unblind +++++"
                os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_blind.root')
                os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root')
                os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root -a -f latex --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '_BSR.root')
                os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"\",\"' + mZp + '_' + mA0 + '\",\"' + variable + '\",\"BSR\")\'')
                
                # Produce Goodness of Fit test
                print "+++++ Producing Goodness of Fit test +++++"
                os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=AD --setPhysicsModelParameters mask_signal=0 > goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_AD.txt')
                os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=KS --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_KS.txt')
                os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root --algo=saturated --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '_saturated.txt')


#zbMassPoints={"10000_50","10000_500","1000_1","1000_1000","1000_150","995_500","100_1","100_10","10_1","10_1000","10_50","10_500","15_10","200_150","300_1","300_50","500_150","500_500","50_1","50_10","50_50"}
#zbMassPoints={"1000_1","100_1","10_1","300_1","50_1"}
zbMassPoints={"100_1"}

if "2HDM" not in variable :

    print "Running on Zbar Model"

    # Loop over Z'B model mass points
    print "+++++ Z'B Mass Points +++++"
    for masses in zbMassPoints :

        # text2workspace step
        print "+++++ Translating Datacards to Rootfiles +++++"

        print "Full Signal Region"
        os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_ZB_' + masses + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_ZB_' + masses + '.root')
        os.system('mv monoH_ZB_' + masses + '.root combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')

        print "1/15 Signal Region"
        os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_ZB_' + masses + ':r[1,0,10]\' --channel-masks datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_blind.txt -o monoH_ZB_' + masses + '_blind.root')
        os.system('mv monoH_ZB_' + masses + '_blind.root combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root')

        # Use combine to calculate limits
        print "+++++ Extracting Limits +++++"

        print "Full Signal Region"
        os.system('combine -M Asymptotic -m 125 -t -1 --expectSignal 1 --run expected combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.txt')
        os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mHZB_' + masses + '_' + variable + '.root')
    
        print "1/15 Signal Region"
        os.system('combine -M Asymptotic -m 125 combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root &> limits_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.txt')
        os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mHZB_' + masses + '_' + variable + '_blind.root')

        if masses == "100_1" :

            # Produce pulls
            print "+++++ Producing Pulls +++++"
            
            # SB = Signal and Background Asimov for Signal and Control Regions
            print "+++++ Signal and Control Regions. S + B +++++"
            os.system('combine -M MaxLikelihoodFit --robustFit 1 -t -1 --expectSignal 1  --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
            os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SB.root')
            os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SB.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_SB.root')
            os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"SB\")\'')
            
            # B = Background-only Asimov for Signal and Control Regions
            print "+++++ Signal and Control Regions. B Only Asimov +++++"
            os.system('combine -M MaxLikelihoodFit --robustFit 1 -t -1 --expectSignal 0 --saveShapes --saveWithUncertainties -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
            os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_B.root')
            os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_B.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_B.root')
            os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"B\")\'')
            
            # SR = Background-only fit for Data in Signal and Control Regions
            print "+++++ Signal and Control Regions. Unblind +++++"
            os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
            os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SR.root')
            os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_SR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_SR.root')
            os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"SR\")\'')
            
            # CR = Background-only fit for Data in Control Regions
            print "+++++ Control Regions Only +++++"
            os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=1 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root')
            os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_CR.root')
            os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_CR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_CR.root')
            os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"CR\")\'')
        
            # BSR = Background-only fit for Data in Signal and Control Regions
            print "+++++ 1/15 Signal and Control Regions +++++"
            os.system('combine -M MaxLikelihoodFit --robustFit 1 --saveShapes --saveWithUncertainties --setPhysicsModelParameters mask_signal=0 -d combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_blind.root')
            os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_BSR.root')
            os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_ZB_' + masses + '_' + variable + '_BSR.root --histogram pulls_' + channel + '_' + cut + '/pulls_ZB_' + masses + '_' + variable + '_BSR.root')
            os.system('root -l -b -q \'macroPulls.C(\"pulls_' + channel + '_' + cut + '\",\"ZB_\",\"' + masses + '\",\"' + variable + '\",\"BSR\")\'')

            # Produce Goodness of Fit test
            print "+++++ Producing Goodness of Fit test +++++"
            print "+++++ Signal and Control Regions +++++"
            os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=AD --setPhysicsModelParameters mask_signal=0 > goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_AD.txt')
            os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=KS --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_KS.txt')
            os.system('combine -M GoodnessOfFit combine_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '.root --algo=saturated --setPhysicsModelParameters mask_signal=0 >> goodnessOfFit_' + channel + '_' + cut + '/monoH_ZB_' + masses + '_' + variable + '_saturated.txt')

