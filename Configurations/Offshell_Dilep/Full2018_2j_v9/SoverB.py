import uproot
import numpy

f = uproot.open("rootFile/plots_hww_offshell_UL_2018.root")

VBF_SR = f["SR_VBF_OFF_2j"]
VBF_SR = f["SR_ggH_OFF_2j"]
VBF_dnn = VBF_SR["dnnScore_VBF_OFF_mixed"]
VBF_dnn = VBF_SR["dnnScore_ggH_OFF_mixed"]


s_name = "histo_VBFHToWWOffshell"
s_name = "histo_ggHToWWOffshell"
d_name = "histo_DATA"

s_yield_last_bin = 0
b_yield_last_bin = 0

s_yield_three_bin = 0
b_yield_three_bin = 0

for key in VBF_dnn.keys():
    values, bins = VBF_dnn[key].to_numpy()
    if(s_name in str(key)):
        s_yield_last_bin += values[-1] 
        s_yield_three_bin += values[-1] + values[-2] + values[-3]

    if(not s_name in str(key) and not d_name in str(key)):
        b_yield_last_bin += values[-1] 
        b_yield_three_bin += values[-1] + values[-2] + values[-3]


print("S: " + str(s_yield_last_bin) + ", B: " + str(b_yield_last_bin) + " | S/B" + str(s_yield_last_bin/ b_yield_last_bin))

print("S: " + str(s_yield_three_bin) + ", B: " + str(b_yield_three_bin) + " | S/B" + str(s_yield_three_bin/ b_yield_three_bin))

