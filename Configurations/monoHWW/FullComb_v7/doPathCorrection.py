import os
import shutil
import argparse

import subprocess

#python doPathCorrection.py --inputDir datacards

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--inputDir', action = 'store', type = str, dest = 'inputDir', help = 'Define the inputDir path')
    args = parser.parse_args()

    mhs = ['160','180','200']
    mDM = ['100','150','200']
    mZp = ['195','200','295','300','400','500','800','1000','1200','1500']
    
    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:

                with open(args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt', 'r') as input_file, open(args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined_corr.txt', 'w') as output_file:
                    for line in input_file:
                        if 'datacards_2016/datacards_2016/' in line.strip():
                            output_file.write(line.replace('datacards_2016/datacards_2016/', 'datacards_2016/'))
                        elif 'datacards_2017/datacards_2017/' in line.strip():
                            output_file.write(line.replace('datacards_2017/datacards_2017/', 'datacards_2017/'))
                        elif 'datacards_2018/datacards_2018/' in line.strip():
                            output_file.write(line.replace('datacards_2018/datacards_2018/', 'datacards_2018/'))
                        else:
                            output_file.write(line)
