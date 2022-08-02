# structure configuration for datacard
from itertools import product, chain
#structure = {}

wjets_bins = []
for ir in range(1,22):
    wjets_bins.append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins.append("Wjets_boost_"+str(ir))


phase_spaces_boost = [c for c in cuts if "boost" in c]
phase_spaces_res = [c for c in cuts if "res" in c]

VBS_WV_samples = ["VBS_osWW", "VBS_ssWW", "VBS_WZjj"]
VBS_ZV_samples = ["VBS_WZll", "VBS_ZZ"]
VV_WV_samples = ["VV_osWW", "VV_ssWW", "VV_WZjj"]
VV_ZV_samples = ["VV_WZll", "VV_ZZ"]

for wbin in wjets_bins:
    if 'boost' in wbin:
        structure[wbin] = {
                    'isSignal' : 0,
                    'isData'   : 0 ,
                    'removeFromCuts': phase_spaces_res 
        }
    else:
        structure[wbin] = {
                    'isSignal' : 0,
                    'isData'   : 0 ,
                    'removeFromCuts': phase_spaces_boost 
        }


# structure['Wjets_HT']  = {  
#                   'isSignal' : 0,
#                   'isData'   : 0
#               }

structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['top']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

# structure['VV']  = {  
#                   'isSignal' : 0,
#                   'isData'   : 0
#               }
for VV_s in VV_ZV_samples:
    structure[VV_s]  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

for VV_s in VV_WV_samples:
    structure[VV_s]  = {  
                  'isSignal' : 1,
                  'isData'   : 0
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }


structure['VVV']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

# structure['VBF-V']  = {  
#                   'isSignal' : 0,
#                   'isData'   : 0 
#               }

structure['VBF-V_dipole']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['ggWW']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Vg']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VgS']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VBS_WZll']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VBS_ZZ']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }


# structure['VBS']  = { 
#                   'isSignal' : 1,
#                   'isData'   : 0 
#               }

# structure['VBS_dipoleRecoil']  = { 
#                   'isSignal' : 1,
#                   'isData'   : 0 
#               }

structure['VBS_osWW']  = {  
                  'isSignal' : 1,
                  'isData'   : 0 
              }

structure['VBS_ssWW']  = {  
                  'isSignal' : 1,
                  'isData'   : 0 
              }

structure['VBS_WZjj']  = {  
                  'isSignal' : 1,
                  'isData'   : 0 
              }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




