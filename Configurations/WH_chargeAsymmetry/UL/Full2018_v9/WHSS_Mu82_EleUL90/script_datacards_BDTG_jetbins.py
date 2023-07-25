import sys,os

# Define variables and strategy to use
variables = ["BDTG6_jetbins"]
suffix    = ["_DYflip"] # ,""]

# Actually combine datacards
for var in variables:
    for suff in suffix:
        # S/sqrt(B) optimization
        var_1j_mm_plus_highpt  = "BDTG6_1j_binning_0_6"
        var_1j_mm_minus_highpt = "BDTG6_1j_binning_0_4"
        var_1j_em_plus_highpt  = "BDTG6_1j_binning_0_5"
        var_1j_em_minus_highpt = "BDTG6_1j_binning_0_5"
        var_1j_ee_plus_highpt  = "BDTG6_1j_binning_0_4"
        var_1j_ee_minus_highpt = "BDTG6_1j_binning_0_4"

        var_1j_mm_plus_lowpt   = "BDTG6_1j_binning_0_5"
        var_1j_mm_minus_lowpt  = "BDTG6_1j_binning_0_6"
        var_1j_em_plus_lowpt   = "BDTG6_1j_binning_0_6"
        var_1j_em_minus_lowpt  = "BDTG6_1j_binning_0_4"
        var_1j_ee_plus_lowpt   = "BDTG6_1j_binning_0_4"
        var_1j_ee_minus_lowpt  = "BDTG6_1j_binning_0_2"


        var_2j_mm_plus_highpt  = "BDTG5_2j_binning_0_6"
        var_2j_mm_minus_highpt = "BDTG5_2j_binning_0_5"
        var_2j_em_plus_highpt  = "BDTG5_2j_binning_0_6"
        var_2j_em_minus_highpt = "BDTG5_2j_binning_0_6"
        var_2j_ee_plus_highpt  = "BDTG5_2j_binning_0_1"
        var_2j_ee_minus_highpt = "BDTG5_2j_binning_0_2"

        var_2j_mm_plus_lowpt   = "BDTG5_2j_binning_0_5"
        var_2j_mm_minus_lowpt  = "BDTG5_2j_binning_0_5"
        var_2j_em_plus_lowpt   = "BDTG5_2j_binning_0_6"
        var_2j_em_minus_lowpt  = "BDTG5_2j_binning_0_3"
        var_2j_ee_plus_lowpt   = "BDTG5_2j_binning_0_4"
        var_2j_ee_minus_lowpt  = "BDTG5_2j_binning_0_2"

        # # S/B optimization
        # var_1j_em_highpt = "BDTG6_binning_0_6"
        # var_2j_em_highpt = "BDTG6_binning_0_6"
        # var_1j_mm_highpt = "BDTG6_binning_0_7"
        # var_2j_mm_highpt = "BDTG6_binning_0_5"
        # var_1j_ee_highpt = "BDTG6_binning_0_5"
        # var_2j_ee_highpt = "BDTG6_binning_0_3"
        # var_1j_em_lowpt  = "BDTG6_binning_0_5"
        # var_2j_em_lowpt  = "BDTG6_binning_0_3"
        # var_1j_mm_lowpt  = "BDTG6_binning_0_5"
        # var_2j_mm_lowpt  = "BDTG6_binning_0_3"
        # var_1j_ee_lowpt  = "BDTG6_binning_0_2"
        # var_2j_ee_lowpt  = "BDTG6_binning_0_0"
        
        # Using only ee final state.
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{2}/datacard.txt \
		                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{3}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{4}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{5}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_ee{0}.txt".format(suff,var,
                                                                                                                var_2j_ee_minus_highpt,
                                                                                                                var_2j_ee_plus_highpt,
                                                                                                                var_1j_ee_minus_highpt,
                                                                                                                var_1j_ee_plus_highpt
                                       )
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using only ee final state. Also low pT.
        tmp_command = "combineCards.py WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{2}/datacard.txt \
		                       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{3}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{4}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{5}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{6}/datacard.txt \
		                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{7}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{8}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{9}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_ee_alsoLowPt{0}.txt".format(suff,var,
                                                                                                                          var_2j_ee_minus_highpt,
                                                                                                                          var_2j_ee_plus_highpt,
                                                                                                                          var_1j_ee_minus_highpt,
                                                                                                                          var_1j_ee_plus_highpt,
                                                                                                                          var_2j_ee_minus_lowpt,
                                                                                                                          var_2j_ee_plus_lowpt,
                                                                                                                          var_1j_ee_minus_lowpt,
                                                                                                                          var_1j_ee_plus_lowpt
                                       )
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # # Using only mm final state.
        # tmp_command = "combineCards.py WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{2}/datacard.txt \
	# 	                       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{3}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{4}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{5}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
	# 	                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_mm{0}.txt".format(suff,var,
        #                                                                                                         var_2j_mm_minus_highpt,
        #                                                                                                         var_2j_mm_plus_highpt,
        #                                                                                                         var_1j_mm_minus_highpt,
        #                                                                                                         var_1j_mm_plus_highpt
        #                                )
        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using only mm final state. Also low pT.
        # tmp_command = "combineCards.py WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{2}/datacard.txt \
	# 	                       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{3}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{4}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{5}/datacard.txt \
        #                                WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{6}/datacard.txt \
	# 	                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{7}/datacard.txt \
        #                                WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{8}/datacard.txt \
        #                                WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{9}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
	# 	                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_mm_alsoLowPt{0}.txt".format(suff,var,
        #                                                                                                                   var_2j_mm_minus_highpt,
        #                                                                                                                   var_2j_mm_plus_highpt,
        #                                                                                                                   var_1j_mm_minus_highpt,
        #                                                                                                                   var_1j_mm_plus_highpt,
        #                                                                                                                   var_2j_mm_minus_lowpt,
        #                                                                                                                   var_2j_mm_plus_lowpt,
        #                                                                                                                   var_1j_mm_minus_lowpt,
        #                                                                                                                   var_1j_mm_plus_lowpt
        #                                )
        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using em and mm final states. As in the legacy analysis
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
	# 	                       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{4}/datacard.txt \
	# 	                       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{5}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{6}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{7}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{8}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{9}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
	# 	                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}{0}.txt".format(suff,var,
        #                                                                                                      var_2j_em_minus_highpt,
        #                                                                                                      var_2j_em_plus_highpt,
        #                                                                                                      var_2j_mm_minus_highpt,
        #                                                                                                      var_2j_mm_plus_highpt,
        #                                                                                                      var_1j_em_minus_highpt,
        #                                                                                                      var_1j_em_plus_highpt,
        #                                                                                                      var_1j_mm_minus_highpt,
        #                                                                                                      var_1j_mm_plus_highpt
        #                                )
        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using ee, em, and mm final state
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
        #                  	       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{4}/datacard.txt \
        #           		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{5}/datacard.txt \
        #           		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{6}/datacard.txt \
        #           		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{7}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{8}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{9}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{10}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{11}/datacard.txt \
        #                                WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{12}/datacard.txt \
        #                                WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{13}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
        #           		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_allFinalStates{0}.txt".format(suff,var,
        #                                                                                                                     var_2j_em_minus_highpt,
        #                                                                                                                     var_2j_em_plus_highpt,
        #                                                                                                                     var_2j_mm_minus_highpt,
        #                                                                                                                     var_2j_mm_plus_highpt,
        #                                                                                                                     var_2j_ee_minus_highpt,
        #                                                                                                                     var_2j_ee_plus_highpt,
        #                                                                                                                     var_1j_em_minus_highpt,
        #                                                                                                                     var_1j_em_plus_highpt,
        #                                                                                                                     var_1j_mm_minus_highpt,
        #                                                                                                                     var_1j_mm_plus_highpt,
        #                                                                                                                     var_1j_ee_minus_highpt,
        #                                                                                                                     var_1j_ee_plus_highpt
        #                                )

        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using em and mm final state, and including low-pT categories
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
        #                                WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{4}/datacard.txt \
        #              		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{5}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{6}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{7}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{8}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{9}/datacard.txt \
        #                                WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{10}/datacard.txt \
        #                                WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{11}/datacard.txt \
        #                                WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{12}/datacard.txt \
        #                                WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{13}/datacard.txt \
        #                                WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{14}/datacard.txt \
        #                                WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{15}/datacard.txt \
        #                                WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{16}/datacard.txt \
        #                                WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{17}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
        #              		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_alsoLowPt{0}.txt".format(suff,var,
        #                                                                                                                var_2j_em_minus_highpt,
        #                                                                                                                var_2j_em_plus_highpt,
        #                                                                                                                var_2j_mm_minus_highpt,
        #                                                                                                                var_2j_mm_plus_highpt,
        #                                                                                                                var_1j_em_minus_highpt,
        #                                                                                                                var_1j_em_plus_highpt,
        #                                                                                                                var_1j_mm_minus_highpt,
        #                                                                                                                var_1j_mm_plus_highpt,
        #                                                                                                                var_2j_em_minus_lowpt,
        #                                                                                                                var_2j_em_plus_lowpt,
        #                                                                                                                var_2j_mm_minus_lowpt,
        #                                                                                                                var_2j_mm_plus_lowpt,
        #                                                                                                                var_1j_em_minus_lowpt,
        #                                                                                                                var_1j_em_plus_lowpt,
        #                                                                                                                var_1j_mm_minus_lowpt,
        #                                                                                                                var_1j_mm_plus_lowpt
        #                                )

        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # # Using ee, em, and mm final state, and including low-pT categories
        # tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
        #                                WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
        #              	               WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/{4}/datacard.txt \
        #              		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/{5}/datacard.txt \
        #              		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{6}/datacard.txt \
        #              		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{7}/datacard.txt \
        #                                WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{8}/datacard.txt \
        #                                WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{9}/datacard.txt \
        #                                WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/{0}/datacard.txt \
        #                                WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/{1}/datacard.txt \
        #                                WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{2}/datacard.txt \
        #                                WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{3}/datacard.txt \
        #                                WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{4}/datacard.txt \
        #                                WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{5}/datacard.txt \
        #                                WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/{6}/datacard.txt \
        #                                WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/{7}/datacard.txt \
        #                                WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{18}/datacard.txt \
        #                                WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{19}/datacard.txt \
        #                                WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{20}/datacard.txt \
        #                                WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{21}/datacard.txt \
        #                                WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/{22}/datacard.txt \
        #                                WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/{23}/datacard.txt \
        #                                WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{24}/datacard.txt \
        #                                WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{25}/datacard.txt \
        #                                WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
        #                                WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
        #              		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_allFinalStates_alsoLowPt{0}.txt".format(suff,var,
        #                                                                                                                               var_2j_em_minus_highpt, var_2j_em_plus_highpt,
        #                                                                                                                               var_2j_mm_minus_highpt, var_2j_mm_plus_highpt,
        #                                                                                                                               var_2j_ee_minus_highpt, var_2j_ee_plus_highpt,
        #                                                                                                                               var_1j_em_minus_highpt, var_1j_em_plus_highpt,
        #                                                                                                                               var_1j_mm_minus_highpt, var_1j_mm_plus_highpt,
        #                                                                                                                               var_1j_ee_minus_highpt, var_1j_ee_plus_highpt,
        #                                                                                                                               var_2j_em_minus_lowpt,  var_2j_em_plus_lowpt,
        #                                                                                                                               var_2j_mm_minus_lowpt,  var_2j_mm_plus_lowpt,
        #                                                                                                                               var_2j_ee_minus_lowpt,  var_2j_ee_plus_lowpt,
        #                                                                                                                               var_1j_em_minus_lowpt,  var_1j_em_plus_lowpt,
        #                                                                                                                               var_1j_mm_minus_lowpt,  var_1j_mm_plus_lowpt,
        #                                                                                                                               var_1j_ee_minus_lowpt,  var_1j_ee_plus_lowpt
        #                                )
        # print(tmp_command)
        # print()
        # print()
        # os.system(tmp_command)


        # Using em and mm final state. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{4}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{5}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{6}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{7}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{8}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{9}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}{1}_noZveto.txt".format(var,suff,
                                                                                                                     var_2j_em_minus_highpt,
                                                                                                                     var_2j_em_plus_highpt,
                                                                                                                     var_2j_mm_minus_highpt,
                                                                                                                     var_2j_mm_plus_highpt,
                                                                                                                     var_1j_em_minus_highpt,
                                                                                                                     var_1j_em_plus_highpt,
                                                                                                                     var_1j_mm_minus_highpt,
                                                                                                                     var_1j_mm_plus_highpt
                                       )
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
		                       WH_SS_mm_2j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{4}/datacard.txt \
		                       WH_SS_mm_2j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{5}/datacard.txt \
                  		       WH_SS_ee_2j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{6}/datacard.txt \
                  		       WH_SS_ee_2j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{7}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{8}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{9}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{10}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{11}/datacard.txt \
                  		       WH_SS_ee_1j_minus=datacards{1}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{12}/datacard.txt \
                  		       WH_SS_ee_1j_plus=datacards{1}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{13}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
		                       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{0}_allFinalStates{1}_noZveto.txt".format(var,suff,
                                                                                                                                    var_2j_em_minus_highpt, var_2j_em_plus_highpt,
                                                                                                                                    var_2j_mm_minus_highpt, var_2j_mm_plus_highpt,
                                                                                                                                    var_2j_ee_minus_highpt, var_2j_ee_plus_highpt,
                                                                                                                                    var_1j_em_minus_highpt, var_1j_em_plus_highpt,
                                                                                                                                    var_1j_mm_minus_highpt, var_1j_mm_plus_highpt,
                                                                                                                                    var_1j_ee_minus_highpt, var_1j_ee_plus_highpt,
                                       )
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using em and mm final state, and including low-pT categories. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
                                       WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{4}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{5}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{6}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{7}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{8}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{9}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{10}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{11}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{12}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{13}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{14}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{15}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{16}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{17}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_alsoLowPt{0}_noZveto.txt".format(suff,var,
                                                                                                                               var_2j_em_minus_highpt, var_2j_em_plus_highpt,
                                                                                                                               var_2j_mm_minus_highpt, var_2j_mm_plus_highpt,
                                                                                                                               var_1j_em_minus_highpt, var_1j_em_plus_highpt,
                                                                                                                               var_1j_mm_minus_highpt, var_1j_mm_plus_highpt,
                                                                                                                               var_2j_em_minus_lowpt,  var_2j_em_plus_lowpt, 
                                                                                                                               var_2j_mm_minus_lowpt,  var_2j_mm_plus_lowpt, 
                                                                                                                               var_1j_em_minus_lowpt,  var_1j_em_plus_lowpt, 
                                                                                                                               var_1j_mm_minus_lowpt,  var_1j_mm_plus_lowpt, 
                                       )

        print(tmp_command)
        print()
        print()
        os.system(tmp_command)


        # Using ee, em, and mm final state, and including low-pT categories. Remove the Z veto for the mm final state
        tmp_command = "combineCards.py WH_SS_em_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/{2}/datacard.txt \
                                       WH_SS_em_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/{3}/datacard.txt \
                     	               WH_SS_mm_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20/{4}/datacard.txt \
                     		       WH_SS_mm_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20/{5}/datacard.txt \
                     		       WH_SS_ee_2j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/{6}/datacard.txt \
                     		       WH_SS_ee_2j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/{7}/datacard.txt \
                                       WH_SS_em_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/{8}/datacard.txt \
                                       WH_SS_em_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/{9}/datacard.txt \
                                       WH_SS_mm_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20/{10}/datacard.txt \
                                       WH_SS_mm_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20/{11}/datacard.txt \
                                       WH_SS_ee_1j_minus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/{12}/datacard.txt \
                                       WH_SS_ee_1j_plus=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/{13}/datacard.txt \
                                       WH_SS_em_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/{14}/datacard.txt \
                                       WH_SS_em_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/{15}/datacard.txt \
                                       WH_SS_mm_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20/{16}/datacard.txt \
                                       WH_SS_mm_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20/{17}/datacard.txt \
                                       WH_SS_ee_2j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/{18}/datacard.txt \
                                       WH_SS_ee_2j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/{19}/datacard.txt \
                                       WH_SS_em_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/{20}/datacard.txt \
                                       WH_SS_em_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/{21}/datacard.txt \
                                       WH_SS_mm_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20/{22}/datacard.txt \
                                       WH_SS_mm_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20/{23}/datacard.txt \
                                       WH_SS_ee_1j_minus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/{24}/datacard.txt \
                                       WH_SS_ee_1j_plus_low_pt=datacards{0}/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/{25}/datacard.txt \
                                       WH_SS_WZ_1j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_1j/events/datacard.txt \
                                       WH_SS_WZ_2j=../WH3l_Mu82_EleUL90/datacards/hww2l2v_13TeV_WH_SS_WZ_2j/events/datacard.txt \
                     		       > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_{1}_allFinalStates_alsoLowPt{0}_noZveto.txt".format(suff,var,
                                                                                                                                              var_2j_em_minus_highpt, var_2j_em_plus_highpt,
                                                                                                                                              var_2j_mm_minus_highpt, var_2j_mm_plus_highpt,
                                                                                                                                              var_2j_ee_minus_highpt, var_2j_ee_plus_highpt,
                                                                                                                                              var_1j_em_minus_highpt, var_1j_em_plus_highpt,
                                                                                                                                              var_1j_mm_minus_highpt, var_1j_mm_plus_highpt,
                                                                                                                                              var_1j_ee_minus_highpt, var_1j_ee_plus_highpt,
                                                                                                                                              var_2j_em_minus_lowpt,  var_2j_em_plus_lowpt, 
                                                                                                                                              var_2j_mm_minus_lowpt,  var_2j_mm_plus_lowpt, 
                                                                                                                                              var_2j_ee_minus_lowpt,  var_2j_ee_plus_lowpt, 
                                                                                                                                              var_1j_em_minus_lowpt,  var_1j_em_plus_lowpt, 
                                                                                                                                              var_1j_mm_minus_lowpt,  var_1j_mm_plus_lowpt, 
                                                                                                                                              var_1j_ee_minus_lowpt,  var_1j_ee_plus_lowpt
                                       )
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)
