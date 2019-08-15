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


structure['ggH_hmm'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['VBF_hmm'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['WH_hmm'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ZH_hmm'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ttH_hmm'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




