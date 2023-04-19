import sys,os

cut_name = ""

print("#######################")
print("Number of arguments: {}".format(len(sys.argv)))
print("Argument List: {}".format(str(sys.argv)))
if (len(sys.argv) > 2):
    cut_name = sys.argv[1]
    variable = sys.argv[2]
else:
    print("Please provide cut name")
print("#######################")

print("\n\n\n\n")

with open('cuts_to_merge_WH3l.py', 'w') as f:

    f.write("# 2016HIPM\n")
    f.write("cutsToMerge['{}_2016HIPM'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_2016HIPM/cratio_weight_X_{}_{}.root',\n".format(cut_name,variable))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# 2016noHIPM\n")
    f.write("cutsToMerge['{}_2016noHIPM'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_2016noHIPM/cratio_weight_X_{}_{}.root',\n".format(cut_name,variable))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# Full2017\n")
    f.write("cutsToMerge['{}_Full2017'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_Full2017/cratio_weight_X_{}_{}.root',\n".format(cut_name,variable))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
    f.write("\n")
    f.write("# Full2018\n")
    f.write("cutsToMerge['{}_Full2018'] = {{\n".format(cut_name))
    f.write("    'rootFile': './plots_Full2018/cratio_weight_X_{}_{}.root',\n".format(cut_name,variable))
    f.write("    'cutUsed' : '{}'\n".format(cut_name))
    f.write("}\n")
