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


mhs = ['160','180','200','250','300','350','400']
mDM = ['100','150','200','300']
mZp = ['200','300','400','450','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            if int(hs) == 300 and int(DM) == 150 and int(Zp) == 450:
                continue
            structure['DH_mhs_' + hs  +  '_mx_'   + DM + '_mZp_' + Zp]  = {
                'isSignal' : 2,
                'isData'   : 0    
            }


mhs = ['160','180','200']
mDM = ['100','150','200']
mZp = ['195','295']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            structure['DH_mhs_' + hs  +  '_mx_'   + DM + '_mZp_' + Zp]  = {
                'isSignal' : 2,
                'isData'   : 0    
            }


mhs = ["170","190"]
mx = ["200"]
mZp = ["600","700","1100","1300","1400"]

for hs in mhs:
    for chi in mx:
        for Zp in mZp:
            if hs == "170":
                if int(Zp) == 700 or int(Zp) == 1100 or int(Zp) == 1400:
                    continue
            if hs == "190":
                if int(Zp) == 600 or int(Zp) == 1300:
                    continue

            structure['DH_mhs_' + hs  +  '_mx_'   + DM + '_mZp_' + Zp]  = {
                'isSignal' : 2,
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

