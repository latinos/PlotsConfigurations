"""
Load the frequentist toy model parameters to the nominal model. Used by dofit.sh GOFShift command.
"""

import sys
import ROOT

nominal_source = ROOT.TFile.Open(sys.argv[1])
toy_source = ROOT.TFile.Open(sys.argv[2])

w = nominal_source.Get('w')
toyset = toy_source.Get('toys/toy_%s_snapshot' % sys.argv[3])

w.saveSnapshot('toygen', toyset, True)

w.writeToFile(sys.argv[4])
