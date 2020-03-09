# structure configuration for datacard
from itertools import product
#structure = {}

jetbin_detabins = [3,3,2]
# # name of samples here must match keys in samples.py 
Wjets_bins = []
for jetbin in range(3):
    for detabin in range(jetbin_detabins[jetbin]):
        Wjets_bins.append("Wjets_deta{}_jpt{}".format(detabin+1, jetbin+1))

for wbin in Wjets_bins:
    structure[wbin] = {
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
                  'isData'   : 0 
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




