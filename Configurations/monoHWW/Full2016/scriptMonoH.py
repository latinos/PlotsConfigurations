import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

channel = sys.argv[1]
print channel

variable = sys.argv[2]
print variable

print "combineCards.py datacards/monoH_MVA_" + channel + "/" + variable + "/datacard.txt.pruned.txt datacards/monoH_MVA_WW_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_MVA_Top_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_MVA_" + channel + "/" + variable + "/datacard_combined.txt"
os.system("combineCards.py datacards/monoH_MVA_" + channel + "/" + variable + "/datacard.txt.pruned.txt datacards/monoH_MVA_WW_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_MVA_Top_" + channel + "/events/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_MVA_" + channel + "/" + variable + "/datacard_combined.txt")


#for channel in Channels :
os.system('mkdir -p  combine_' + channel + '/')
os.system('mkdir -p  limits_' + channel + '/')
os.system('mkdir -p  pulls_' + channel + '/')
for mZp in ZpMasses :
    for mA0 in A0Masses :
        print('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' datacards/monoH_MVA_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_' + mZp + '_' + mA0 + '.root')
        os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' datacards/monoH_MVA_' + channel + '/' + variable + '/datacard_combined.txt -o monoH_' + mZp + '_' + mA0 + '.root')
        print('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        
        print('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --rMin=0.001 --run expected combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root &> limits_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
        os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root &> limits_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.txt')
        os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '/higgsCombineTest.Asymptotic.mH' + mZp + '_' + mA0 + '_' + variable + '.root')

        print('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 -d combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        print('mv mlfit.root combine_' + channel + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root')
        print('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root --histogram pulls_' + channel + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('combine -M MaxLikelihoodFit -t -1 --expectSignal 1 -d combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('mv mlfit.root combine_' + channel + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root')
        os.system('python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py combine_' + channel + '/mlfit_' + mZp + '_' + mA0 + '_' + variable + '.root --histogram pulls_' + channel + '/pulls_' + mZp + '_' + mA0 + '_' + variable + '.root')



# combine -M MaxLikelihoodFit -t -1 --expectSignal 1 -d combine_em/monoH_800_300.root
# python ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py mlfit.root --histogram output.root
