# structure configuration for datacard
from itertools import product, chain
#structure = {}

Wjets_bins = ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1",
                "Wjets_boost1", "Wjets_boost2"]


phase_spaces_boost = []
phase_spaces_res = []

for fl in ["ele", "mu"]:
    for d in ["high", "low"]:
        for cat in ["sig", "wjetcr", "topcr"]:
            phase_spaces_boost.append("boost_{}_dnn{}_{}".format(cat, d,fl))
            phase_spaces_res.append("res_{}_dnn{}_{}".format(cat, d, fl))


# for wbin in Wjets_bins:
#     if 'boost' in wbin:
#         structure[wbin] = {
#                     'isSignal' : 0,
#                     'isData'   : 0 ,
#                     'removeFromCuts': phase_spaces_res 
#         }
#     else:
#         structure[wbin] = {
#                     'isSignal' : 0,
#                     'isData'   : 0 ,
#                     'removeFromCuts': phase_spaces_boost 
#         }

structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['top']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['VV']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }


structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }


structure['VVV']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['VBF-V']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }



structure['VBS']  = { 
                  'isSignal' : 1,
                  'isData'   : 0 
              }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




