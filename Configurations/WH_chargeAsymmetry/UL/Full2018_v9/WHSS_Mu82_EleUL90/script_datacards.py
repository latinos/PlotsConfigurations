import sys,os

# Define variables and strategy to use
variables = ["mlljj20_whss_1j_bin"]
suffix    = ["","_DYflip"]

# Actually combine datacards
for var in variables:
    for suff in suffix:
        var_2j = ""
        if var == "mlljj20_whss_1j_bin": 
            var_2j = "mlljj20_whss_2j_bin"
        else: 
            var_2j = var        

        # Using em and mm final state. As in the legacy analysis
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}{2}.txt".format(var,var_2j,suff)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only ee final state
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_ee{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only ee final state
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_ee_alsoLowPt{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only mm final state. Also low pT
        tmp_command = "combineCards.py WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_mm{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only mm final state. Also low pT
        tmp_command = "combineCards.py WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_mm_alsoLowPt{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Only ee final state, but also low-pT category
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_eeFinalState{0}.txt".format(suff,var_2j,var)
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
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                  		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_allFinalStates{0}.txt".format(suff,var_2j,var)

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
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_alsoLowPt{0}.txt".format(suff,var_2j,var)

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
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_allFinalStates_alsoLowPt{0}.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using em and mm final state. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}{2}_noZveto.txt".format(var,var_2j,suff)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{1}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                  		       WH_SS_ee_2j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                  		       WH_SS_ee_2j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{0}/datacard.txt \
                  		       WH_SS_ee_1j_minus=datacards{2}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{0}/datacard.txt \
                  		       WH_SS_ee_1j_plus=datacards{2}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{0}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}_allFinalStates{2}_noZveto.txt".format(var,var_2j,suff)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using em and mm final state, and including low-pT categories. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_alsoLowPt{0}_noZveto.txt".format(suff,var_2j,var)

        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state, and including low-pT categories. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{1}/datacard.txt \
                     	               WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{1}/datacard.txt \
                     		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{1}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{2}/datacard.txt \
                                       WH_SS_WZ_CR_1j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_CR_2j=datacards{0}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_allFinalStates_alsoLowPt{0}_noZveto.txt".format(suff,var_2j,var)
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)



        # # Using em and mm final state, being inclusive in sub-leading lepton pT
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_incl/{1}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_incl/{1}/datacard.txt \
	# 	                       WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_incl/{1}/datacard.txt \
	# 	                       WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_incl/{1}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_incl/{0}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_incl/{0}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_incl/{0}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_incl/{0}/datacard.txt \
        #                                ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
        #                                ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
	# 	                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}_incl.txt".format(var,var_2j)
        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using ee, em, and mm final states, being inclusive in sub-leading lepton pT
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_incl/{1}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_incl/{1}/datacard.txt \
        #                  	       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_incl/{1}/datacard.txt \
        #           		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_incl/{1}/datacard.txt \
        #           		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_incl/{1}/datacard.txt \
        #           		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_incl/{1}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_incl/{2}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_incl/{2}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_incl/{2}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_incl/{2}/datacard.txt \
        #                                WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_incl/{2}/datacard.txt \
        #                                WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_incl/{2}/datacard.txt \
        #                                WH_SS_WZ_CR_1j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_CR_2j=datacards{2}/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
        #           		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{2}_allFinalStates_incl{0}.txt".format(suff,var_2j,var)

        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)
