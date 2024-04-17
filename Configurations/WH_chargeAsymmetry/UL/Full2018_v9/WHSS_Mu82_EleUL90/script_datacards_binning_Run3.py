import sys,os

# Define variables and strategy to use
suff_WHSS = "_DYflip_original_signal_scale_Run3"
suff_WH3l = "_original_signal_scale_Run3"

# Actually combine datacards
tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/BDTG6_TT_0_5/datacard.txt \
                               WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/BDTG6_TT_0_5/datacard.txt \
                 	       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/BDTG6_TT_0_0/datacard.txt \
                 	       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/BDTG6_TT_0_0/datacard.txt \
                 	       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/BDTG6_TT_0_0/datacard.txt \
             	               WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/BDTG6_TT_0_6/datacard.txt \
                               WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/BDTG6_TT_0_5/datacard.txt \
                               WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/BDTG6_TT_0_5/datacard.txt \
                               WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/BDTG6_TT_0_5/datacard.txt \
                               WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/BDTG6_TT_0_5/datacard.txt \
                               WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/BDTG6_TT_0_0/datacard.txt \
                               WH_3l_sssf_plus=../WH3l_Mu82_EleUL90/datacards{1}/wh3l_13TeV_sssf_plus_pt2ge20/BDT_WH3l_SSSF_new_v9_0_75/datacard.txt \
                               WH_3l_sssf_minus=../WH3l_Mu82_EleUL90/datacards{1}/wh3l_13TeV_sssf_minus_pt2ge20/BDT_WH3l_SSSF_new_v9_0_75/datacard.txt \
                               WH_3l_ossf_plus=../WH3l_Mu82_EleUL90/datacards{1}/wh3l_13TeV_ossf_plus_pt2ge20/BDT_WH3l_OSSF_new_v9_0_75/datacard.txt \
                               WH_3l_ossf_minus=../WH3l_Mu82_EleUL90/datacards{1}/wh3l_13TeV_ossf_minus_pt2ge20/BDT_WH3l_OSSF_new_v9_0_75/datacard.txt \
                               WH_3l_WZ_0j=../WH3l_Mu82_EleUL90/datacards{1}/wh3l_wz_13TeV/events/datacard.txt \
                               WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards{1}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                               WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards{1}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                 	       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_binning_Run3.txt".format(suff_WHSS,suff_WH3l)
print(tmp_command)
print()
print()
os.system(tmp_command)
