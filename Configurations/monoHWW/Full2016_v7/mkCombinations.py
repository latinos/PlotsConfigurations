import os
import shutil
import argparse

import subprocess

#python mkCombinations.py --inputDir datacards_2016

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputDir', action = 'store', type = str, dest = 'inputDir', help = 'Define the inputDir path')
    args = parser.parse_args()

    mhs = ['160','180','200']
    mDM = ['100','150','200']
    mZp = ['195','200','295','300','400','500','800','1000','1200','1500']
    
    txt = ''

    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:
                print('Combining DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp)
                txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl/mtw2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'

    f = open('runCombination.sh', 'w')
    f.write(txt)
    f.close()
