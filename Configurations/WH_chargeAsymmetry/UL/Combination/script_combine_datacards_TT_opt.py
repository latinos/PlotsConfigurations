import sys,os

print("#######################")
print("Number of arguments: {}".format(len(sys.argv)))
print("Argument List: {}".format(str(sys.argv)))
if (len(sys.argv) > 1):
    if (sys.argv[1] == "1"):
        print("Using correct signal normalization!!")
    elif (sys.argv[1] == "old"):
        print("Using loose bVeto WP in WHSS and old WZ normalization!!")
    else:
        print("Using signal normalization enhanced by a factor 10")
else:
    print("Using signal normalization enhanced by a factor 10")
print("#######################")

print("\n\n\n\n")

# "Global" variables
suffix_WHSS = ''
suffix_WH3l = ''

suffix_WHSS_original_scale = "_DYflip_original_signal_scale" # datacards{_DYflip_original_signal_scale}_opt/
suffix_WH3l_original_scale = "_original_signal_scale"        # datacards{_original_signal_scale}_opt/

# suffix_loose_bVeto         = "_DYflip_loose_bVeto"
# suffix_WH3l_old_wz_scaling = "_old_wz_scaling"

if (len(sys.argv) > 1):
    if (sys.argv[1] == "1"):
        suffix_WHSS = suffix_WHSS_original_scale
        suffix_WH3l = suffix_WH3l_original_scale
    elif (sys.argv[1] == "old"):
        suffix_WHSS = suffix_WHSS_loose_bVeto
        suffix_WH3l = suffix_WH3l_old_wz_scaling

var_WHSS = 'BDTG6_TT_more'
var_SSSF = 'BDT_WH3l_SSSF_new_v9_more'
var_OSSF = 'BDT_WH3l_OSSF_new_v9_more'

# ---------
# Full 2018
# ---------

# 2018 datacards
WHSS_2018_high_pt = "WH_SS_em_1j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_em_1j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_mm_1j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                     WH_SS_mm_1j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt   \
                     WH_SS_ee_1j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_ee_1j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_em_2j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_em_2j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_mm_2j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{0}/datacard.txt \
                     WH_SS_mm_2j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{0}/datacard.txt   \
                     WH_SS_ee_2j_minus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_ee_2j_plus_2018=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_WZ_1j_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt                             \
                     WH_SS_WZ_2j_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt                             \
                     ".format(var_WHSS,suffix_WHSS,suffix_WH3l)

WHSS_2018_low_pt = "WH_SS_em_1j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_em_1j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_mm_1j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{0}/datacard.txt \
                    WH_SS_mm_1j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{0}/datacard.txt   \
                    WH_SS_ee_1j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_ee_1j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_em_2j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_em_2j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_mm_2j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{0}/datacard.txt \
                    WH_SS_mm_2j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{0}/datacard.txt   \
                    WH_SS_ee_2j_minus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_ee_2j_plus_2018_low_pt=../Full2018_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{0}/datacard.txt           \
                    ".format(var_WHSS,suffix_WHSS)

WH3l_2018 = "WH_3l_sssf_plus_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt   \
             WH_3l_sssf_minus_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_minus_pt2ge20/{0}/datacard.txt \
             WH_3l_ossf_plus_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_plus_pt2ge20/{1}/datacard.txt   \
             WH_3l_ossf_minus_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_minus_pt2ge20/{1}/datacard.txt \
             WH_3l_WZ_CR_0j_2018=../Full2018_v9/WH3l_Mu82_EleUL90/datacards{2}/wh3l_wz_13TeV/events/datacard.txt                    \
             ".format(var_SSSF,var_OSSF,suffix_WH3l)

# ---------
# Full 2017
# ---------

# 2017 datacards
WHSS_2017_high_pt = "WH_SS_em_1j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_em_1j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_mm_1j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                     WH_SS_mm_1j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt   \
                     WH_SS_ee_1j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_ee_1j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_em_2j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_em_2j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_mm_2j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{0}/datacard.txt \
                     WH_SS_mm_2j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{0}/datacard.txt   \
                     WH_SS_ee_2j_minus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{0}/datacard.txt         \
                     WH_SS_ee_2j_plus_2017=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{0}/datacard.txt           \
                     WH_SS_WZ_1j_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt                             \
                     WH_SS_WZ_2j_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt                             \
                     ".format(var_WHSS,suffix_WHSS,suffix_WH3l)

WHSS_2017_low_pt = "WH_SS_em_1j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_em_1j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_mm_1j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{0}/datacard.txt \
                    WH_SS_mm_1j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{0}/datacard.txt   \
                    WH_SS_ee_1j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_ee_1j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_em_2j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_em_2j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{0}/datacard.txt           \
                    WH_SS_mm_2j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{0}/datacard.txt \
                    WH_SS_mm_2j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{0}/datacard.txt   \
                    WH_SS_ee_2j_minus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{0}/datacard.txt         \
                    WH_SS_ee_2j_plus_2017_low_pt=../Full2017_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{0}/datacard.txt           \
                    ".format(var_WHSS,suffix_WHSS)

WH3l_2017 = "WH_3l_sssf_plus_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt   \
             WH_3l_sssf_minus_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_minus_pt2ge20/{0}/datacard.txt \
             WH_3l_ossf_plus_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_plus_pt2ge20/{1}/datacard.txt   \
             WH_3l_ossf_minus_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_minus_pt2ge20/{1}/datacard.txt \
             WH_3l_WZ_CR_0j_2017=../Full2017_v9/WH3l_Mu82_EleUL90/datacards{2}/wh3l_wz_13TeV/events/datacard.txt                    \
             ".format(var_SSSF,var_OSSF,suffix_WH3l)

# ------------
# 2016 no HIPM
# ------------

# 2016noHIPM datacards

WHSS_2016noHIPM_high_pt = "WH_SS_em_1j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt         \
                           WH_SS_em_1j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt           \
                           WH_SS_mm_1j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                           WH_SS_mm_1j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt   \
                           WH_SS_ee_1j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{0}/datacard.txt         \
                           WH_SS_ee_1j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{0}/datacard.txt           \
                           WH_SS_em_2j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{0}/datacard.txt         \
                           WH_SS_em_2j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{0}/datacard.txt           \
                           WH_SS_mm_2j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{0}/datacard.txt \
                           WH_SS_mm_2j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{0}/datacard.txt   \
                           WH_SS_ee_2j_minus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{0}/datacard.txt         \
                           WH_SS_ee_2j_plus_2016noHIPM=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{0}/datacard.txt           \
                           WH_SS_WZ_1j_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt                             \
                           WH_SS_WZ_2j_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt                             \
                           ".format(var_WHSS,suffix_WHSS,suffix_WH3l)


WHSS_2016noHIPM_low_pt = "WH_SS_em_1j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{0}/datacard.txt         \
                          WH_SS_em_1j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{0}/datacard.txt           \
                          WH_SS_mm_1j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{0}/datacard.txt \
                          WH_SS_mm_1j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{0}/datacard.txt   \
                          WH_SS_ee_1j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{0}/datacard.txt         \
                          WH_SS_ee_1j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{0}/datacard.txt           \
                          WH_SS_em_2j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{0}/datacard.txt         \
                          WH_SS_em_2j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{0}/datacard.txt           \
                          WH_SS_mm_2j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{0}/datacard.txt \
                          WH_SS_mm_2j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{0}/datacard.txt   \
                          WH_SS_ee_2j_minus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{0}/datacard.txt         \
                          WH_SS_ee_2j_plus_2016noHIPM_low_pt=../2016noHIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{0}/datacard.txt           \
                          ".format(var_WHSS,suffix_WHSS)

WH3l_2016noHIPM = "WH_3l_sssf_plus_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt   \
                   WH_3l_sssf_minus_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_minus_pt2ge20/{0}/datacard.txt \
                   WH_3l_ossf_plus_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_plus_pt2ge20/{1}/datacard.txt   \
                   WH_3l_ossf_minus_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_minus_pt2ge20/{1}/datacard.txt \
                   WH_3l_WZ_CR_0j_2016noHIPM=../2016noHIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/wh3l_wz_13TeV/events/datacard.txt                    \
                   ".format(var_SSSF,var_OSSF,suffix_WH3l)

# ---------
# 2016 HIPM
# ---------

# 2016HIPM datacards

WHSS_2016HIPM_high_pt = "WH_SS_em_1j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt         \
                         WH_SS_em_1j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt           \
                         WH_SS_mm_1j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                         WH_SS_mm_1j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt   \
                         WH_SS_ee_1j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{0}/datacard.txt         \
                         WH_SS_ee_1j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{0}/datacard.txt           \
                         WH_SS_em_2j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{0}/datacard.txt         \
                         WH_SS_em_2j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{0}/datacard.txt           \
                         WH_SS_mm_2j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{0}/datacard.txt \
                         WH_SS_mm_2j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{0}/datacard.txt   \
                         WH_SS_ee_2j_minus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{0}/datacard.txt         \
                         WH_SS_ee_2j_plus_2016HIPM=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{0}/datacard.txt           \
                         WH_SS_WZ_1j_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt                                     \
                         WH_SS_WZ_2j_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt                                     \
                         ".format(var_WHSS,suffix_WHSS,suffix_WH3l)

WHSS_2016HIPM_low_pt = "WH_SS_em_1j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{0}/datacard.txt         \
                        WH_SS_em_1j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{0}/datacard.txt           \
                        WH_SS_mm_1j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{0}/datacard.txt \
                        WH_SS_mm_1j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{0}/datacard.txt   \
                        WH_SS_ee_1j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{0}/datacard.txt         \
                        WH_SS_ee_1j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{0}/datacard.txt           \
                        WH_SS_em_2j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{0}/datacard.txt         \
                        WH_SS_em_2j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{0}/datacard.txt           \
                        WH_SS_mm_2j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{0}/datacard.txt \
                        WH_SS_mm_2j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{0}/datacard.txt   \
                        WH_SS_ee_2j_minus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{0}/datacard.txt         \
                        WH_SS_ee_2j_plus_2016HIPM_low_pt=../2016HIPM_v9/WHSS_Mu82_EleUL90/datacards{1}_opt/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{0}/datacard.txt           \
                        ".format(var_WHSS,suffix_WHSS)

WH3l_2016HIPM = "WH_3l_sssf_plus_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt   \
                 WH_3l_sssf_minus_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_sssf_minus_pt2ge20/{0}/datacard.txt \
                 WH_3l_ossf_plus_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_plus_pt2ge20/{1}/datacard.txt   \
                 WH_3l_ossf_minus_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}_opt/wh3l_13TeV_ossf_minus_pt2ge20/{1}/datacard.txt \
                 WH_3l_WZ_CR_0j_2016HIPM=../2016HIPM_v9/WH3l_Mu82_EleUL90/datacards{2}/wh3l_wz_13TeV/events/datacard.txt                    \
                   ".format(var_SSSF,var_OSSF,suffix_WH3l)

# Here we define the actual combine commands we want to use
os.system("mkdir -p Combination")

tmp_command = "combineCards.py "

output_name_suffix = ""
if (len(sys.argv) > 1):
    if (sys.argv[1] == "1"):
        output_name_suffix = "_original_signal_scale"
    elif (sys.argv[1] == "old"):
        output_name_suffix = "_loose_bVeto_and_old_wz_scaling"

combine_command_FullRun2 = tmp_command + WHSS_2018_high_pt       + WHSS_2018_low_pt       + WH3l_2018 \
                                       + WHSS_2017_high_pt       + WHSS_2017_low_pt       + WH3l_2017 \
                                       + WHSS_2016noHIPM_high_pt + WHSS_2016noHIPM_low_pt + WH3l_2016noHIPM \
                                       + WHSS_2016HIPM_high_pt   + WHSS_2016HIPM_low_pt   + WH3l_2016HIPM \
                                       + " > Combination/WH_chargeAsymmetry_WH_FullRun2_v9{0}.txt".format(output_name_suffix)
print(combine_command_FullRun2)
os.system(combine_command_FullRun2)
print("")
print("")
print("")

# WHSS and WH3l Full 2018
combine_command_Full2018 = tmp_command + WHSS_2018_high_pt + WHSS_2018_low_pt + WH3l_2018 + " > Combination/WH_chargeAsymmetry_WH_Full2018_v9{0}.txt".format(output_name_suffix)
print(combine_command_Full2018)
os.system(combine_command_Full2018)
print("")
print("")
print("")

# WHSS and WH3l Full 2017
combine_command_Full2017 = tmp_command + WHSS_2017_high_pt + WHSS_2017_low_pt + WH3l_2017 + " > Combination/WH_chargeAsymmetry_WH_Full2017_v9{0}.txt".format(output_name_suffix)
print(combine_command_Full2017)
os.system(combine_command_Full2017)
print("")
print("")
print("")

# WHSS and WH3l 2016noHIPM
combine_command_2016noHIPM = tmp_command + WHSS_2016noHIPM_high_pt + WHSS_2016noHIPM_low_pt + WH3l_2016noHIPM + " > Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9{0}.txt".format(output_name_suffix)
print(combine_command_2016noHIPM)
os.system(combine_command_2016noHIPM)
print("")
print("")
print("")

# WHSS and WH3l 2016HIPM
combine_command_2016HIPM = tmp_command + WHSS_2016HIPM_high_pt + WHSS_2016HIPM_low_pt + WH3l_2016HIPM + " > Combination/WH_chargeAsymmetry_WH_2016HIPM_v9{0}.txt".format(output_name_suffix)
print(combine_command_2016HIPM)
os.system(combine_command_2016HIPM)
print("")
print("")
print("")
