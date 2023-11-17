import sys,os

# Define variables and strategy to use
# variables = ['BDT_WH3l_OSSF_new_v9_LegacyBinning','BDT_WH3l_SSSF_new_v9_OptimizedBinning']
# suffix    = [""] # ["_DYflip",""]

var_SSSF_plus  = 'BDT_WH3l_SSSF_new_v9_OptimizedBinning'
var_SSSF_minus = 'BDT_WH3l_SSSF_new_v9_OptimizedBinning'
var_OSSF_plus  = 'BDT_WH3l_OSSF_new_v9_OptimizedBinning'
var_OSSF_minus = 'BDT_WH3l_OSSF_new_v9_LegacyBinning'

# Load combine
current_directory = os.getcwd()
combine_directory = "/afs/cern.ch/user/n/ntrevisa/work/combine/CMSSW_10_2_13/src/"

os.chdir(combine_directory)
os.system("cmsenv")
os.chdir(current_directory)


# Only high-pT categories
tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_optimized.txt".format(
                                   'BDT_WH3l_SSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_SSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_LegacyBinning'
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)


tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9.txt".format(
                                   'BDT_WH3l_SSSF_new_v9_LegacyBinning',
                                   'BDT_WH3l_SSSF_new_v9_LegacyBinning',
                                   'BDT_WH3l_OSSF_new_v9_LegacyBinning',
                                   'BDT_WH3l_OSSF_new_v9_LegacyBinning'
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)


tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_0_7.txt".format(
                                   'BDT_WH3l_SSSF_new_v9_0_7',
                                   'BDT_WH3l_SSSF_new_v9_0_7',
                                   'BDT_WH3l_OSSF_new_v9_0_7',
                                   'BDT_WH3l_OSSF_new_v9_LegacyBinning'
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)


tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_0_9.txt".format(
                                   'BDT_WH3l_SSSF_new_v9_0_9',
                                   'BDT_WH3l_SSSF_new_v9_0_9',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning'
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)


tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{2}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{3}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_0_9_OSSF.txt".format(
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning',
                                   'BDT_WH3l_OSSF_new_v9_OptimizedBinning'
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)


# Also low-pT categories
tmp_command = "combineCards.py WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus_pt2ge20/{0}/datacard.txt \
                               WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus_pt2ge20/{0}/datacard.txt \
                               WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus_pt2ge20/{1}/datacard.txt \
                               WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus_pt2ge20/{1}/datacard.txt \
                               WH_3l_sssf_plus_low_pt=datacards/wh3l_13TeV_sssf_plus_pt2lt20/{0}/datacard.txt \
                               WH_3l_sssf_minus_low_pt=datacards/wh3l_13TeV_sssf_minus_pt2lt20/{0}/datacard.txt \
                               WH_3l_ossf_plus_low_pt=datacards/wh3l_13TeV_ossf_plus_pt2lt20/{1}/datacard.txt \
                               WH_3l_ossf_minus_low_pt=datacards/wh3l_13TeV_ossf_minus_pt2lt20/{1}/datacard.txt \
                               WH_3l_WZ_CR_0j=datacards/wh3l_wz_13TeV/events/datacard.txt \
                               > Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_alsoLowPt.txt".format(
                                   var_SSSF_plus,
                                   var_OSSF_plus
                               )

print(tmp_command)
print()
print()
os.system(tmp_command)
