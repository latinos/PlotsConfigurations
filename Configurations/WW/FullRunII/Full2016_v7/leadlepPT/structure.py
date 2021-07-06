# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Dyemb']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Dyveto']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts ],
              }


structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Fake_em']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'me' in k],
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'em' in k],
              }

structure['ttbar'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['singletop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WW_fid_Bin0'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['WW_fid_Bin1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin6'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin7'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin8'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin9'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin10'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin11'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin12'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin13'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_fid_Bin14'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin0'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin1'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin2'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin3'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin4'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin5'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin6'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin7'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin8'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin9'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin10'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin11'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin12'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin13'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WW_nonfid_Bin14'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }


structure['WWewk']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggWW_Int']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZgS'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WgS'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }
'''
structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }
'''
structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


structure['ggH'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['H_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['bbH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['H_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
