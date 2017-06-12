import os
import sys

variable = sys.argv[1]
print "variable = " + str(variable)

os.system("mkdir -p goodnessOfFit")

print "combine -M GoodnessOfFit datacards/monoH_MVA_Top_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_Top_" + variable + ".txt"
os.system("combine -M GoodnessOfFit datacards/monoH_MVA_Top_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_Top_" + variable + ".txt")
os.system("mv Goodness_Top_" + variable + ".txt goodnessOfFit")

print "combine -M GoodnessOfFit datacards/monoH_MVA_DYtt_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_DYtt_" + variable + ".txt"
os.system("combine -M GoodnessOfFit datacards/monoH_MVA_DYtt_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_DYtt_" + variable + ".txt")
os.system("mv Goodness_DYtt_" + variable + ".txt goodnessOfFit")

print "combine -M GoodnessOfFit datacards/monoH_MVA_WW_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_WW_" + variable + ".txt"
os.system("combine -M GoodnessOfFit datacards/monoH_MVA_WW_em/" + variable + "/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1 > Goodness_WW_" + variable + ".txt")
os.system("mv Goodness_WW_" + variable + ".txt goodnessOfFit")
