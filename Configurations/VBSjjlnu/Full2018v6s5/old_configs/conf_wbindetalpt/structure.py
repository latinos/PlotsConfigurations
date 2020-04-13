# structure configuration for datacard
from itertools import product
#structure = {}

detabins = ["deta{}_lpt{}".format(i,j) for i, j in product(range(1,6), range(1,4))]

for detabin in detabins:
    structure['Wjets_'+detabin] = {
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




