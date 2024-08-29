#!/usr/bin/env python
##prints the bins after Rebin.py

##python PrintBin.py $BIN_VBF $VAR_VBF $OUTFILE_2018 ##run in opt dir
##

import uproot
import sys

args = sys.argv[1:]
assert (len(args) >= 2)

BIN           = args[0]
VAR           = args[1]
OUTPUT_FOLDER = args[2]

print("Signal region   = {}".format(BIN))
print("Variable        = {}".format(VAR))
print("Output folder   = {}".format(OUTPUT_FOLDER))

# 2016_noHIP_opt/SR_VBF_OFF_2j/dnnScore_VBF_OFF/shapes/histos_SR_VBF_OFF_2j.root

f = uproot.open(OUTPUT_FOLDER + "/" + BIN + "/" + VAR + "/shapes/histos_" + BIN + ".root")

vals, bins = f[BIN][f[BIN].keys()[0]].numpy()

print(bins)

# new_bins = []
# new_bins.append(bins[-1])
# new_bins.append(bins[-3])
# new_bins.append(bins[-6])
# mid_point = (-.5 + bins[-6])/2 + .5
# new_bins.append(mid_point)
# new_bins.append(.5)
# new_bins.reverse()
# print("Processed bins:")
# print(new_bins)

new_bins = []
new_bins.append(bins[-1])
new_bins.append(bins[-2])
new_bins.append(bins[-4])
new_bins.append(bins[-7]) ##6th spot
mid_point = (-.5 + bins[-7])/2 + .5
new_bins.append(mid_point)
new_bins.append(.5)
new_bins.reverse()
print("Processed bins:")
print(new_bins)
