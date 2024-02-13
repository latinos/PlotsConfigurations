import sys,os

# Define variables and strategy to use
variables = ['BDT_WH3l_OSSF_new_v9_100_bins','BDT_WH3l_OSSF_weight_v9_100_bins'] # ,'BDT_WH3l_SSSF_weight_v9_100_bins','BDT_WH3l_OSSF_weight_FullRun2_v9_100_bins']
scaling   = ['','_original_signal_scale']

# Actually combine datacards
for var in variables:
    for scale in scaling:

        suffix = ''
        if var == 'BDT_WH3l_OSSF_new_v9_100_bins':
            suffix = '_100_bins_new'
        if var == 'BDT_WH3l_OSSF_weight_v9_100_bins':
            suffix = '_100_bins_weight'

        var_OSSF_plus  = var
        var_OSSF_minus = var

        var_SSSF_plus  = var.replace('OSSF','SSSF')
        var_SSSF_minus = var.replace('OSSF','SSSF')
        
        print(var_OSSF_plus) 
        print(var_OSSF_minus)
        print(var_SSSF_plus)
        print(var_SSSF_minus)
    
        # Load combine
        current_directory = os.getcwd()
        combine_directory = "/afs/cern.ch/user/n/ntrevisa/work/combine/CMSSW_11_3_4/src/"
        
        os.chdir(combine_directory)
        os.system("cmsenv")
        os.chdir(current_directory)
        
        
        # Only high-pT categories
        tmp_command = "combineCards.py WH_3l_sssf_plus=datacards{4}_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                                       WH_3l_sssf_minus=datacards{4}_opt/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                                       WH_3l_ossf_plus=datacards{4}_opt/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                                       WH_3l_ossf_minus=datacards{4}_opt/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                                       WH_3l_WZ_CR_0j=datacards{4}/wh3l_wz_13TeV/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_3l_2016noHIPM_v9{4}{5}_opt.txt".format(
                                           var_SSSF_plus,
                                           var_SSSF_minus,
                                           var_OSSF_plus,
                                           var_OSSF_minus,
                                           scale,
                                           suffix
                                       )
        
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)
        
        
        # Also low-pT categories
        tmp_command = "combineCards.py WH_3l_sssf_plus=datacards_opt/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                                       WH_3l_sssf_minus=datacards_opt/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                                       WH_3l_ossf_plus=datacards_opt/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                                       WH_3l_ossf_minus=datacards_opt/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                                       WH_3l_sssf_plus_low_pt=datacards_opt/wh3l_13TeV_sssf_plus_pt2lt20/{4}/datacard.txt \
                                       WH_3l_sssf_minus_low_pt=datacards_opt/wh3l_13TeV_sssf_minus_pt2lt20/{5}/datacard.txt \
                                       WH_3l_ossf_plus_low_pt=datacards_opt/wh3l_13TeV_ossf_plus_pt2lt20/{6}/datacard.txt \
                                       WH_3l_ossf_minus_low_pt=datacards_opt/wh3l_13TeV_ossf_minus_pt2lt20/{7}/datacard.txt \
                                       WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                                       > Combination/WH_chargeAsymmetry_WH_3l_2016noHIPM_v9_alsoLowPt{8}_opt.txt".format(
                                           var_SSSF_plus,
                                           var_SSSF_minus,
                                           var_OSSF_plus,
                                           var_OSSF_minus,
                                           var_SSSF_plus,
                                           var_SSSF_minus,
                                           var_OSSF_plus,
                                           var_OSSF_minus,
                                           suffix
                                       )
        
        print(tmp_command)
        print()
        print()
        os.system(tmp_command)
