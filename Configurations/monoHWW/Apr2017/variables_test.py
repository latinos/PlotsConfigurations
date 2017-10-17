# Tuning for shape analysis

variables['events']  = {
    'name': '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold' : 3
    }

variables['mt2ll'] = {
   'name': 'ComputeMT2(std_vector_lepton_pt[0],std_vector_lepton_phi[0],std_vector_lepton_eta[0],std_vector_lepton_pt[1],std_vector_lepton_phi[1],std_vector_lepton_eta[1],metPfType1,metPfType1Phi)',
    'range' : (400,0,400),
    'xaxis' : 'm_{T2}(#ell #ell)',
    'fold' : 3,
    'linesToAdd' : ['.L /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/onTheFly/mt2ll.C+']
   }

