import os
import shutil
import argparse

import subprocess

#python addBracket.py --inputDir datacards_2016

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputDir', action = 'store', type = str, dest = 'inputDir', help = 'Define the inputDir path')
    args = parser.parse_args()


    mhs = ['160','180','200','250','300','350','400']
    mDM = ['100','150','200','300']
    mZp = ['200','300','400','450','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']
    
    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:
                if int(hs) == 300 and int(DM) == 150 and int(Zp) == 450:
                    continue
                with open(args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt', 'r') as input_file, open(args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined_corr.txt', 'w') as output_file:
                    for line in input_file:
                        if 'rateParam' in line.strip():
                            output_file.write(line.replace('1.0000', '1.0000  [0.1,10]'))
                        else:
                            output_file.write(line)

