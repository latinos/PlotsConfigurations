
variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (25,20,350),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }


variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }


variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'puppimet [GeV]',
                        'fold'  : 3
                        }

variables['mtw1']  = {
                        'name': 'mtw1',
                        'range' : (25,0,300),
                        'xaxis' : 'mtw1 [GeV]',
                        'fold'  : 3
                        }

variables['Whad_mass']  = {
                        'name': 'Whad_mass',
                        'range' : (25,1,300),
                        'xaxis' : 'Whad_mass [GeV]',
                        'fold'  : 0
                        }

variables['Whad_pt']  = {
                        'name': 'Whad_pt',
                        'range' : (25,1,300),
                        'xaxis' : 'Whad_pt [GeV]',
                        'fold'  : 0
                        }


variables['lmet_pt']  = {
                        'name': 'Wlep_pt_Puppi',
                        'range' : (25,0,600),
                        'xaxis' : 'lepMET P_{T} [GeV]',
                        'fold'  : 3
                        }


variables['WptOvHak4M']  = {
                        'name': 'ComputeVars(Entry$,0)',
                        'range' : (25,0,0.8),
                        'xaxis' : 'WptOvHak4M',
                        'fold'  : 3,
                       'linesToAdd':['.L /gpfs/users/mantecap/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017/ComputeVars.C+']
                        }

variables['Hlnjj_mass']  = {
                        'name': 'ComputeVars(Entry$,1)',
                        'range' : (25,0,1600),
                        'xaxis' : 'm_{Hlnjj_mass} [GeV]',
                        'fold'  : 3
                        }

variables['Wlep_mt']  = {
                        'name': 'ComputeVars(Entry$,2)',
                        'range' : (25,0,1000),
                        'xaxis' : 'Wlep_mt [GeV]',
                        'fold'  : 3
                        }


# variables['lepMETjj_mass']  = {
#                         'name': 'ComputeVars(Entry$,3)',
#                         'range' : (25,0,1200),
#                         'xaxis' : 'lepMETjj_mass [GeV]',
#                         'fold'  : 3
#                         }


variables['lepMETjj_mt']  = {
                        'name': 'ComputeVars(Entry$,4)',
                        'range' : (25,0,1200),
                        'xaxis' : 'lepMETjj_mt [GeV]',
                        'fold'  : 3
                        }

variables['lepMET_mt']  = {
                        'name': 'ComputeVars(Entry$,5)',
                        'range' : (25,0,600),
                        'xaxis' : 'lepMET_mt [GeV]',
                        'fold'  : 3
                        }



variables['dphi_ljj_met']  = {
                        'name': 'ComputeVars(Entry$,6)',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(ljj,met)',
                        'fold'  : 3,
                        }


variables['dr_l_jj']  = {
                        'name': 'ComputeVars(Entry$,7)',
                        'range' : (25,0,5),
                        'xaxis' : 'dR(lep,jj)',
                        'fold'  : 3
                        }

variables['dphi_l_jj']  = {
                        'name': 'ComputeVars(Entry$,8)',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(lep,jj)',
                        'fold'  : 3
                        }


variables['drjj']  = {
                        'name': 'ComputeVars(Entry$,9)',
                        'range' : (25,0,5),
                        'xaxis' : 'dr(j1,j2)',
                        'fold'  : 3
                        }


variables['dphijj']  = {
                        'name': 'ComputeVars(Entry$,10)',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(j1,j2)',
                        'fold'  : 3
                        }


variables['detajj']  = {
                        'name': 'ComputeVars(Entry$,11)',
                        'range' : (25,0,5),
                        'xaxis' : 'deta(j1,j2)',
                        'fold'  : 3
                        }

variables['deta_l_jj']  = {
                        'name': 'ComputeVars(Entry$,12)',
                        'range' : (25,0,5),
                        'xaxis' : 'deta(lep,jj)',
                        'fold'  : 3
                        }
