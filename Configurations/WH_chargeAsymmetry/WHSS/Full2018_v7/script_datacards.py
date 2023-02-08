import sys,os

# Define variables and strategy to use
variables = ["mlljj20_whss_1j_bin","BDTG6"]
suffix    = ["_DYflip",""]

# Load combine
# combo_command = "cd /afs/cern.ch/user/n/ntrevisa/work/combine/CMSSW_10_2_13/src/; cmsenv; cd -"
# os.system(combo_command)

# Actually combine datacards
for var in variables:
    for suff in suffix:
        var_2j = ""
        if var == "mlljj20_whss_1j_bin": 
            var_2j = "mlljj20_whss_2j_bin"
        else: 
            var_2j = var

        # Using em and mm final state. As in the legacy analysis
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{0}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{0}.txt".format(var,var_2j)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only ee final state
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{2}_eeFinalState{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                         	       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                  		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                  		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                  		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                  		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{2}_allFinalStates{0}.txt".format(suff,var_2j,var)

        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using em and mm final state, and including low-pT categories
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{2}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{2}_alsoLowPt{0}.txt".format(suff,var_2j,var)

        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state, and including low-pT categories
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                     	               WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{2}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{2}_allFinalStates_alsoLowPt{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using em and mm final state, being inclusive in sub-leading lepton pT
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_incl/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_incl/{1}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_incl/{1}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_incl/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_incl/{0}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_incl/{0}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_incl/{0}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_incl/{0}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{0}_incl.txt".format(var,var_2j)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final states, being inclusive in sub-leading lepton pT
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_incl/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_incl/{1}/datacard.txt \
                         	       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_incl/{1}/datacard.txt \
                  		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_incl/{1}/datacard.txt \
                  		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_incl/{1}/datacard.txt \
                  		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_incl/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_incl/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_incl/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_incl/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_incl/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_incl/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_incl/{2}/datacard.txt \
                                       ZH3l_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                                       ZH3l_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                  		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_{2}_allFinalStates_incl{0}.txt".format(suff,var_2j,var)

        print(tmp_command)
        print()
        print()
        os.system(tmp_command)
