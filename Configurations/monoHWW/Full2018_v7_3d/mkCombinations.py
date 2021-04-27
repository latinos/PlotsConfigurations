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
                txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl_drll1/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/SR_Incl_drll2/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/SR_Incl_drll3/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'



    mhs = ["170","190"]
    mDM = ["200"]
    mZp = ["600","700","1100","1300","1400"]

    for hs in mhs:
        for DM in mDM:
            for Zp in mZp:
                if hs == "170":
                    if int(Zp) == 700 or int(Zp) == 1100 or int(Zp) == 1400:
                        continue
                if hs == "190":
                    if int(Zp) == 600 or int(Zp) == 1300:
                        continue
                txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl_drll1/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/SR_Incl_drll2/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/SR_Incl_drll3/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'


    # mDM = ['150','200']
    # mhs = ['300','400']
    # mZp = ['400','500','800','1000','1200','1500']

    # for DM in mDM:
    #     for hs in mhs:
    #         if DM == '150' and hs == '400':
    #             continue
    #         for Zp in mZp:
    #             if DM == '200' and Zp == '400':
    #                 continue
    #             if DM == '200' and hs == '400' and int(Zp) > 1000:
    #                 continue
    #             txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl_drll1/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/SR_Incl_drll2/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/SR_Incl_drll3/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'



    # mDM = ['300']
    # mhs = ['160','180','200','300']
    # mZp = ['800','1000','1200','1500','2000','2500']


    # for DM in mDM:
    #     for hs in mhs:
    #         for Zp in mZp:
    #             if hs == '300' and int(Zp) > 1200:
    #                 continue
    #             txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl_drll1/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/SR_Incl_drll2/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/SR_Incl_drll3/mllVSmtw2_2/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.txt > ' + args.inputDir + '/datacard_DH_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '_combined.txt\n'


    # mA = ['200','400','500','600']
    
    # for A in mA:
    #     print('Combining 2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150')
    #     txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl/mtw2/datacard_2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150.txt > ' + args.inputDir + '/datacard_2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150_combined.txt\n'


    # sintheta = ['0p35', '0p7']
    # tanbeta = ['0p5', '1p0', '1p5', '2p0', '4p0', '8p0']

    # for theta in sintheta:
    #     for beta in tanbeta:
    #         print('Combining 2HMDa__gg_sinp_' + theta  + '_tanb_' + beta  + '_mXd_10_MA_300_ma_150')
    #         txt+= 'combineCards.py ' + args.inputDir + '/SR_Incl/mtw2/datacard_2HMDa__gg_sinp_' + theta + '_tanb_' + beta + '_mXd_10_MA_300_ma_150.txt ' + args.inputDir + '/WWCR_Incl/events/datacard_2HMDa__gg_sinp_' + theta + '_tanb_' + beta + '_mXd_10_MA_300_ma_150.txt '  + args.inputDir + '/TopCR_Incl/events/datacard_2HMDa__gg_sinp_' + theta + '_tanb_' + beta + '_mXd_10_MA_300_ma_150.txt '  + args.inputDir + '/DYttCR_Incl/events/datacard_2HMDa__gg_sinp_' + theta + '_tanb_' + beta + '_mXd_10_MA_300_ma_150.txt > ' + args.inputDir + '/datacard_2HMDa__gg_sinp_' + theta  + '_tanb_' + beta  + '_mXd_10_MA_300_ma_150_combined.txt\n'


    f = open('runCombination.sh', 'w')
    f.write(txt)
    f.close()
