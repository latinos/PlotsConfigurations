# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }


structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }


structure['Fake_ee']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [
                                      'hww2l2v_13TeV_0jmm',
                                      'hww2l2v_13TeV_0jmm_pt2ge20',
                                      'hww2l2v_13TeV_0jmm_pt2lt20',
                                      'hww2l2v_13TeV_1jmm',
                                      'hww2l2v_13TeV_1jmm_pt2ge20',
                                      'hww2l2v_13TeV_1jmm_pt2lt20',
                                      'hww2l2v_13TeV_WW_0jmm',
                                      'hww2l2v_13TeV_WW_1jmm',
                                      'hww2l2v_13TeV_top_0jmm',
                                     ],
              }

structure['Fake_mm']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [
                                      'hww2l2v_13TeV_0jee',
                                      'hww2l2v_13TeV_0jee_pt2ge20',
                                      'hww2l2v_13TeV_0jee_pt2lt20',
                                      'hww2l2v_13TeV_1jee',
                                      'hww2l2v_13TeV_1jee_pt2ge20',
                                      'hww2l2v_13TeV_1jee_pt2lt20',
                                      'hww2l2v_13TeV_WW_0jee',
                                      'hww2l2v_13TeV_WW_1jee',
                                      'hww2l2v_13TeV_top_0jee',
                                     ],
              }


structure['ttbar'] = {   
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


structure['singletop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


structure['WW']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ggWW']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ggWW_Int']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0,
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
                  'isData'   : 0,
                  }

structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                   }

structure['WZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


# Signals


import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1Categories:
  if 'GG2H_' in cat:
    sampleNames.append(cat.replace('GG2H','ggH_hww'))
    sampleNames.append(cat.replace('GG2H','ggH_htt'))
  elif 'QQ2HQQ_' in cat:
    sampleNames.append(cat.replace('QQ2HQQ','qqH_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','qqH_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_htt'))
  elif 'QQ2HLNU_' in cat:
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))
  elif 'QQ2HLL_' in cat:
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_htt'))
  elif 'GG2HLL_' in cat:
    sampleNames.append(cat.replace('GG2HLL','ggZH_lep_hww'))
  elif 'TTH' in cat:
    sampleNames.append(cat.replace('TTH','ttH_hww'))
  elif 'BBH' in cat:
    sampleNames.append(cat.replace('BBH','bbH_hww'))

for s in sampleNames:
  structure[s]  = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
}

try:
  for iStruct in structure:
    if 'removeFromCuts' in structure[iStruct]:
      newCuts = []
      for iCut in structure[iStruct]['removeFromCuts']:
        for iOptim in optim:
           newCuts.append(iCut+'_'+iOptim)
      structure[iStruct]['removeFromCuts'] = newCuts
except:
  print "No optim dictionary"

