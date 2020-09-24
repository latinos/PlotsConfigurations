import os
import shutil
import argparse

import subprocess

#python mkCombinations.py --inputDir2016 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2016_v7/datacards_2016/ --inputDir2017 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7/datacards_2017/ --inputDir2018 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2018_v7/datacards_2018/

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputDir2016', action = 'store', type = str, dest = 'inputDir2016', help = 'Define the inputDir path')
    parser.add_argument('--inputDir2017', action = 'store', type = str, dest = 'inputDir2017', help = 'Define the inputDir path')
    parser.add_argument('--inputDir2018', action = 'store', type = str, dest = 'inputDir2018', help = 'Define the inputDir path')
    args = parser.parse_args()

    mhs = ['160','180','200']
    mDM = ['100','150','200']
    mZp = ['195','200','295','300','400','500','800','1000','1200','1500']
    
    txt = ''

    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:
                print('Combining DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp)
                txt+= 'combineCards.py ' + args.inputDir2016 + 'datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined_corr.txt ' + args.inputDir2017 + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined_corr.txt '  + args.inputDir2018 + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined_corr.txt > datacards/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'

    f = open('runCombination.sh', 'w')
    f.write(txt)
    f.close()
