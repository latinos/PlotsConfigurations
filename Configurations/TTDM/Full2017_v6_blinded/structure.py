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


structure['singleTop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['TTToSemiLeptonic'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ttV'] = {   
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

structure['VgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS_H'] = {
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

#signal

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_50'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_100'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_150'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_200'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_250'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_300'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_350'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_400'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_450'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_500'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_50'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_100'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_150'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_200'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_250'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_300'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_350'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_400'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_450'] = {
  'isSignal': 2,
  'isData': 0
}

structure['TTbarDMJets_Dilepton_scalar_LO_Mchi_1_Mphi_500'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi10'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi20'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi50'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi100'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi200'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi300'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi500'] = {
  'isSignal': 2,
  'isData': 0
}

structure['DMscalar_Dilepton_top_tWChan_Mchi1_Mphi1000'] = {
  'isSignal': 2,
  'isData': 0
}

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }



#print "INSTRUCTURE"
#print cuts
#print nuisances['WWresum0j']
#print "OK"

"""
for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
"""
