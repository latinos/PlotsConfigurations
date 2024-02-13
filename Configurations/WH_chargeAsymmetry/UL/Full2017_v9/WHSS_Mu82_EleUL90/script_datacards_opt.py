import sys,os

# Define variables and strategy to use
variables = ["BDTG6_TT_100_bins","BDTG5_TT_weight_100_bins","BDTG5_TT_weight_FullRun2_100_bins"]
suffix    = ["_opt","_DYflip_original_signal_scale_opt"]

# Actually combine datacards
for var in variables:
    for suff in suffix:

        # Using ee, em, and mm final state, and including low-pT categories. Remove the Z veto for the mm final state.
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                     	               WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_{1}_allFinalStates_alsoLowPt{0}_noZveto.txt".format(suff,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)
