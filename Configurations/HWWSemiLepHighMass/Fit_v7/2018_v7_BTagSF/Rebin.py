#!/usr/bin/env python

import CombineHarvester.CombineTools.ch as ch
import ROOT 
import sys

args = sys.argv[1:]
assert (len(args) >= 2)

BIN = args[0]
VAR  = args[1]

print BIN, VAR 

cmb = ch.CombineHarvester()
#cmb.SetFlag('check-negative-bins-on-import', 0)

cmb.ParseDatacard("Datacards_DiffWidth_nonui/"+BIN+"/"+VAR+"/datacard.txt")

# Rebin Mode 1 : Starts from bin with lowest content which fails the condition. Tries moving left and right merging bins until threshold is met.
# Chooses from left and right to minimise number of bins lost
# Repeats with new lowest bin until all bins pass threshold
# SetBinUncertFraction : The threshold on the bin uncertainty fraction for which we consider merging bins

#rebin = ch.CombineHarvester_Evaluate()
#cmb.VariableRebin([0, 250, 350,500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1600, 1700, 1800, 2000, 2200, 2400, 2600, 3000, 5000],)

cmb.VariableRebin([0, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1150, 1350, 1400, 1500, 1600, 1700, 1800, 2000, 2600, 3400, 5000],)
#cmb.VariableRebin([0, 250, 350,500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1600, 1700, 1800, 2000, 2200, 2400, 2600, 3000, 5000],) 

#cmb.VariableRebin([0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 1700, 3000],)
#

writer = ch.CardWriter('Datacards_60_nonui/'+BIN+'/'+VAR+'/datacard.txt',
                       'Datacards_60_nonui/'+BIN+'/'+VAR+'/shapes/histos_'+BIN+'.root')

writer.WriteCards('', cmb) 
