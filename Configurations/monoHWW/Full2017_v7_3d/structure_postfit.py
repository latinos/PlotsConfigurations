# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Fake']  = {  
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

structure['WWewk']  = {
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

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }



structure['Higgs'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }



structure['DH_mhs_160_mx_100_mZp_500']  = {
    'isSignal' : 1,
    'isData'   : 0    
}


# mA = ['200', '400', '500', '600']

# for A in mA:
#     structure['2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150']  = {
#         'isSignal' : 2,
#         'isData'   : 0    
        
#     }
            

# sintheta = ['0p35', '0p7']
# tanbeta = ['0p5', '1p0', '1p5', '2p0', '4p0', '8p0']

# for theta in sintheta:
#     for beta in tanbeta:
#         structure['2HMDa__gg_sinp_' + theta  + '_tanb_' + beta  + '_mXd_10_MA_300_ma_150'] = {
#             'isSignal' : 2,
#             'isData'   : 0    
            
#         }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }

