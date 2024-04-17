import sys,os

# Define variables and strategy to use
scaling   = ['','_original_signal_scale']

# Actually combine datacards
for scale in scaling:

    var_OSSF_plus  = "BDT_WH3l_OSSF_new_v9_0_75"
    var_OSSF_minus = "BDT_WH3l_OSSF_new_v9_0_75"

    var_SSSF_plus  = "BDT_WH3l_SSSF_new_v9_0_75"
    var_SSSF_minus = "BDT_WH3l_SSSF_new_v9_0_75"
    
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
    tmp_command = "combineCards.py WH_3l_sssf_plus=datacards{4}/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                                   WH_3l_sssf_minus=datacards{4}/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                                   WH_3l_ossf_plus=datacards{4}/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                                   WH_3l_ossf_minus=datacards{4}/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                                   WH_3l_WZ_CR_0j=datacards{4}/wh3l_wz_13TeV/events/datacard.txt \
                                   > Combination/WH_chargeAsymmetry_WH_3l_2016noHIPM_v9{4}_binning.txt".format(
                                       var_SSSF_plus,
                                       var_SSSF_minus,
                                       var_OSSF_plus,
                                       var_OSSF_minus,
                                       scale,
                                   )
    
    print(tmp_command)
    print()
    print()
    os.system(tmp_command)
