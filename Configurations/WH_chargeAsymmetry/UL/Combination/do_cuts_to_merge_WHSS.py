import sys,os

cut_name = ""

print("#######################")
print("Number of arguments: {}".format(len(sys.argv)))
print("Argument List: {}".format(str(sys.argv)))
if (len(sys.argv) > 1):
    cut_name = sys.argv[1]
else:
    print("Please provide cut name")
print("#######################")

print("\n\n\n\n")

with open('cuts_to_merge_WHSS.py', 'w') as f:

    f.write("# 2016HIPM\n")
    f.write("cutsToMerge['{}_2016HIPM'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_2016HIPM/cratio_weight_X_{}_BDTG6_TT.root',\n".format(cut_name))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# 2016noHIPM\n")
    f.write("cutsToMerge['{}_2016noHIPM'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_2016noHIPM/cratio_weight_X_{}_BDTG6_TT.root',\n".format(cut_name))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# Full2017\n")
    f.write("cutsToMerge['{}_Full2017'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_Full2017/cratio_weight_X_{}_BDTG6_TT.root',\n".format(cut_name))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# Full2018\n")
    f.write("cutsToMerge['{}_Full2018'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_Full2018/cratio_weight_X_{}_BDTG6_TT.root',\n".format(cut_name))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")



# # 2016noHIPM
# cutsToMerge['hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_2016noHIPM']  = { 
#     'rootFile': './plots_2016noHIPM/cratio_weight_X_hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_BDTG6.root',
#     'cutUsed' : 'hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20'
# }

# # Full2017
# cutsToMerge['hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_Full2017']  = { 
#     'rootFile': './plots_Full2017/cratio_weight_X_hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_BDTG6.root',
#     'cutUsed' : 'hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20'
# }

# # Full2018
# cutsToMerge['hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_Full2018']  = { 
#     'rootFile': './plots_Full2018/cratio_weight_X_hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20_BDTG6.root',
#     'cutUsed' : 'hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20'
# }
