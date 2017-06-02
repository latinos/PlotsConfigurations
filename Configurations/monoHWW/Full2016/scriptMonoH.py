import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

if len(sys.argv) < 4 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print "python scriptMonoH.py em mthBin MVA"
    sys.exit()

channel = sys.argv[1]
print channel

variable = sys.argv[2]
print variable

cut = sys.argv[3]
print cut

# Combine datacards
print "+++++ Combining Datacards +++++"
os.system("combineCards.py datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.txt")


# Create folders for results
print "+++++ Creating Folders for Results +++++"
os.system('mkdir -p  combine_' + channel + '_' + cut + '/')
os.system('mkdir -p  limits_' + channel + '_' + cut + '/')
os.system('mkdir -p  pulls_' + channel + '_' + cut + '/')

# Loop over 2HDM model mass points
print "+++++ 2HDM Mass Points +++++"
for mZp in ZpMasses :
    for mA0 in A0Masses :
        # text2workspace step
        print "+++++ Translating Datacards to Rootfiles +++++"
        os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_' + mZp + '_' + mA0 + '.root')
        os.system('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        
        # Use combine to calculate limits
        print "+++++ Extracting Limits +++++"
        os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
        os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mH' + mZp + '_' + mA0 + '_' + variable + '.root')

        # Produce pulls
        print "+++++ Producing Pulls +++++"
        os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 -d combine_' + channel + '_' + cut + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root --histogram pulls_' + channel + '_' + cut + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '.root')


zbMassPoints={"ZB_10000_50","ZB_10000_500","ZB_1000_1","ZB_1000_1000","ZB_1000_150","ZB_995_500","ZB_100_1","ZB_100_10","ZB_10_1","ZB_10_1000","ZB_10_50","ZB_10_500","ZB_15_10","ZB_200_150","ZB_300_1","ZB_300_50","ZB_500_150","ZB_500_500","ZB_50_1","ZB_50_10","ZB_50_50"}

# Loop over Z'B model mass points
print "+++++ Z'B Mass Points +++++"
for masses in zbMassPoints :
    # text2workspace step
    print "+++++ Translating Datacards to Rootfiles +++++"
    os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + masses + ':r[1,0,10]\' datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_' + masses + '.root')
    os.system('mv monoH_' + masses + '.root combine_' + channel + '_' + cut + '/monoH_' + masses + '_' + variable + '.root')
    
    # Use combine to calculate limits
    print "+++++ Extracting Limits +++++"
    os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '_' + cut + '/monoH_' + masses + '_' + variable + '.root &> limits_' + channel + '_' + cut + '/monoH_' + masses + '_' + variable + '.txt')
    os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '_' + cut + '/higgsCombineTest.Asymptotic.mH' + masses + '_' + variable + '.root')
    
    # Produce pulls
    print "+++++ Producing Pulls +++++"
    os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 -d combine_' + channel + '_' + cut + '/monoH_' + masses + '_' + variable + '.root')
    os.system('mv mlfit.root combine_' + channel + '_' + cut + '/mlfit_' + masses + '_' + variable + '.root')
    os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '_' + cut + '/mlfit_' + masses + '_' + variable + '.root --histogram pulls_' + channel + '_' + cut + '/pulls_' + masses + '_' + variable + '.root')
