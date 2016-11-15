import os

Channels = {"em"}
ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300","400","500","600","700","800"}

for mZp in ZpMasses :
    for mA0 in A0Masses :
        for channel in Channels :
            print('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' datacards/monoH_Alberto_' + channel + '/events/datacard.txt.pruned.txt -o monoH_' + mZp + '_' + mA0 + '.root')
            os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_' + mZp + '_' + mA0 + ':r[1,0,10]\' datacards/monoH_Alberto_' + channel + '/events/datacard.txt.pruned.txt -o monoH_' + mZp + '_' + mA0 + '.root')
            print('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '/')
            os.system('mv monoH_' + mZp + '_' + mA0 + '.root combine_' + channel + '/')
            
            print('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --rMin=0.001 --run expected combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '.root &> limits_' + channel + '/monoH_' + mZp + '_' + mA0 + '.txt')
            os.system('combine -M Asymptotic -m ' + mZp + '.' + mA0 + ' -t -1 --expectSignal 1 --run expected combine_' + channel + '/monoH_' + mZp + '_' + mA0 + '.root &> limits_' + channel + '/monoH_' + mZp + '_' + mA0 + '.txt')
        os.system('mv higgsCombineTest.Asymptotic* combine_' + channel + '/')


