import os
import shutil
import argparse
import subprocess

#python mkCombinations.py --inputDir datacards_2016

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputDir', action = 'store', type = str, dest = 'inputDir', help = 'Define the inputDir path')
    args = parser.parse_args()

    mhs = ['160','180','200','250','300','350','400']
    mDM = ['100','150','200','300']
    mZp = ['200','300','400','450','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']


    txt = ''

    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:
                if int(hs) == 300 and int(DM) == 150 and int(Zp) == 450:
                    continue
#                print('Combining DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp)
                txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl_drll1/mllVSmtw2_1/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/SR_Incl_drll2/mllVSmtw2_1/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/SR_Incl_drll3/mllVSmtw2_1/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'



    f = open('runCombination.sh', 'w')
    f.write(txt)
    f.close()
