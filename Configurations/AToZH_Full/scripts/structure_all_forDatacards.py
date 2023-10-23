# structure configuration for datacard
# keys here must match keys in samples.py    

# Backgrounds                  
structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['ttH_hww']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['tZq_ll']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ttZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ZgS']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
		  'removeFromCuts': ['breq_SR', 'bveto_1j_SR']
                  }
structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['DY']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['Zg']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
		  'removeFromCuts': ['bveto_4j']
                  }
structure['WZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['top']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
		  'removeFromCuts': ['bveto_4j']
                  }
structure['TTWJets']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['DATA']  = {
                  'isSignal' : 0,
                  'isData'   : 1    
                  }
structure['AZH_1000_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1000_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1050_950'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1100_950'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_1050'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1150_950'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1200_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1300_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1400_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1500_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1600_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_1600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1700_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_1700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1800_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_1800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_1900_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_1900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2000_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1100'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1200'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1300'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_1900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_2000'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_2100_900'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_430_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_450_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_450_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_500_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_500_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_500_370'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_500_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_550_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_550_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_550_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_550_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_600_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_600_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_600_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_600_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_600_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_650_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_370'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_700_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_750_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_800_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_850_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_370'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_900_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_330'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_350'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_400'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_450'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_500'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_550'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_600'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_650'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_700'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_750'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_800'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
structure['AZH_950_850'] = {'isSignal':1, 'isData':0, 'removeFromCuts':['breq_SR', 'bveto_1j_SR', 'bveto_4j']}
