"""
datacard directory structure:
- datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/BDTG6_TT_more
- <FOLDER>/<BIN>/<VAR>/

Threshold: [0.25, 0.30]

python Rebin.py <FOLDER> <BIN> <VAR> threshols <OUTPUT_FOLDER>

e.g.,
python Rebin.py datacards_2018 SR_ggH_OFF_0j dnnScore_ggH_OFF_0j_binning datacards_opt 0.25
"""

#!/usr/bin/env python

import CombineHarvester.CombineTools.ch as ch
import ROOT 
import sys

args = sys.argv[1:]
assert (len(args) >= 2)

FOLDER        = args[0]
BIN           = args[1]
VAR           = args[2]
OUTPUT_FOLDER = args[3]
THRESHOLD     = args[4]

print("Datacard folder = {}".format(FOLDER))
print("Signal region   = {}".format(BIN))
print("Variable        = {}".format(VAR))
print("Output folder   = {}".format(OUTPUT_FOLDER))
print("Threshold       = {}".format(THRESHOLD))

cmb = ch.CombineHarvester()
cmb.SetFlag('check-negative-bins-on-import', 0)
cmb.ParseDatacard(FOLDER + "/" + BIN + "/" + VAR + "/datacard.txt")

# Rebin Mode 1 : Starts from bin with lowest content which fails the condition. Tries moving left and right merging bins until threshold is met.
# Chooses from left and right to minimise number of bins lost
# Repeats with new lowest bin until all bins pass threshold
# SetBinUncertFraction : The threshold on the bin uncertainty fraction for which we consider merging bins

rebin = ch.AutoRebin()
rebin.SetBinThreshold(0.0)
rebin.SetBinUncertFraction(float(THRESHOLD))
rebin.SetRebinMode(1)
rebin.SetPerformRebin(True) 

rebin.SetVerbosity(0)
rebin.Rebin(cmb, cmb)

writer = ch.CardWriter(OUTPUT_FOLDER + '/' + BIN + '/' + VAR + '/datacard.txt',
                       OUTPUT_FOLDER + '/' + BIN + '/' + VAR + '/shapes/histos_' + BIN + '.root')

writer.WriteCards('', cmb) 
