structure['DY']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Wjets']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['top'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }
structure['WW']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }
structure['QCD_MU'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['QCD_EM'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

#QCD_bcToE
structure['QCD_bcToE'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

import sys
sys.path.insert(0, "MassPoints")
from List_MX import *
from List_MX_VBF import *


for MX in List_MX:
    structure['ggHWWlnuqq_M'+str(MX)+"_S_B_I"] = {
        'isSignal' : 1,
        'isData'   : 0
    }

    structure['ggHWWlnuqq_M'+str(MX)+"_S"] = {
        'isSignal' : 1,
        'isData'   : 0
    }

    structure['ggHWWlnuqq_M'+str(MX)+"_B"] = {
        'isSignal' : 1,
        'isData'   : 0
    }


for MX in List_MX_VBF:
    structure['VBFHToWWToLNuQQ_M'+str(MX)]={
        'isSignal' : 1,
        'isData'   : 0,
    }

structure['DATA']  = {
                  'isSignal' : 0,
                  'isData'   : 1
              }
