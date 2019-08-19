# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
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
                  'removeFromCuts' : [
                                      'hww2l2v_13TeV_me_pm_0j_pt2ge20',
                                      'hww2l2v_13TeV_me_pm_0j_pt2ge20', 
                                      'hww2l2v_13TeV_me_pm_1j_pt2ge20', 
                                      'hww2l2v_13TeV_me_mp_0j_pt2ge20',
                                      'hww2l2v_13TeV_me_mp_1j_pt2ge20',
                                      'hww2l2v_13TeV_me_pm_0j_pt2lt20',
                                      'hww2l2v_13TeV_me_pm_1j_pt2lt20',
                                      'hww2l2v_13TeV_me_mp_0j_pt2lt20',
                                      'hww2l2v_13TeV_me_mp_1j_pt2lt20'],
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [
                                      'hww2l2v_13TeV_em_pm_0j_pt2ge20',
                                      'hww2l2v_13TeV_em_pm_0j_pt2ge20', 
                                      'hww2l2v_13TeV_em_pm_1j_pt2ge20', 
                                      'hww2l2v_13TeV_em_mp_0j_pt2ge20',
                                      'hww2l2v_13TeV_em_mp_1j_pt2ge20',
                                      'hww2l2v_13TeV_em_pm_0j_pt2lt20',
                                      'hww2l2v_13TeV_em_pm_1j_pt2lt20',
                                      'hww2l2v_13TeV_em_mp_0j_pt2lt20',
                                      'hww2l2v_13TeV_em_mp_1j_pt2lt20'],
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

structure['ttW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['ttZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }
structure['ggH_hzz'] = {
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

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WZgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WZgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

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
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ggH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['WH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ZH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['H_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['bbH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ttH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['H_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




