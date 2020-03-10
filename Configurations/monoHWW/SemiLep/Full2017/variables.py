
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
variables['mtw2']  = {
                        'name': 'mtw2',
                        'range' : (25,0,300),
                        'xaxis' : 'mtw2 [GeV]',
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

#variables['Hlnjj_mass']  = {
#                        'name': 'MHlnjj_(Entry$,1)',
#                        'range' : (25,0,1600),
#                        'xaxis' : 'm_{Hlnjj_mass} [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['Wlep_mt']  = {
#                        'name': 'MHlnjj_(Entry$,2)',
#                        'range' : (25,0,1000),
#                        'xaxis' : 'Wlep_mt [GeV]',
#                        'fold'  : 3
#                        }
#
#
# variables['lepMETjj_mass']  = {
#                         'name': 'MHlnjj_(Entry$,3)',
#                         'range' : (25,0,1200),
#                         'xaxis' : 'lepMETjj_mass [GeV]',
#                         'fold'  : 3
#                         }


variables['lepMETjj_mt']  = {
                        'name': 'MHlnjj_mt_lmetjj',
                        'range' : (25,0,300),
                        'xaxis' : 'lepMETjj_mt [GeV]',
                        'fold'  : 3
                        }

variables['lepMET_mt']  = {
                        'name': 'MHlnjj_mt_lmet',
                        'range' : (25,0,2000),
                        'xaxis' : 'lepMET_mt [GeV]',
                        'fold'  : 3
                        }

variables['JJ_mt']  = {
                        'name': 'MHlnjj_mt_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'jj_mt [GeV]',
                        'fold'  : 3
                        }
variables['lepJJ_mt']  = {
                        'name': 'MHlnjj_mt_ljj',
                        'range' : (25,0,1000),
                        'xaxis' : 'ljj_mt [GeV]',
                        'fold'  : 3
                        }
variables['MET_mt']  = {
                        'name': 'MHlnjj_mt_met',
                        'range' : (25,0,2000),
                        'xaxis' : 'met_mt [GeV]',
                        'fold'  : 3
                        }

variables['lepMETjj_mt']  = {
                        'name': 'MHlnjj_mt_lmetjj',
                        'range' : (25,0,2000),
                        'xaxis' : 'lepMETjj_mt [GeV]',
                        'fold'  : 3
                        }

variables['lepMET_pt']  = {
                        'name': 'MHlnjj_pt_lmet',
                        'range' : (25,0,300),
                        'xaxis' : 'lepMET_pt [GeV]',
                        'fold'  : 3
                        }

variables['JJ_pt']  = {
                        'name': 'MHlnjj_pt_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'jj_pt [GeV]',
                        'fold'  : 3
                        }
variables['lepJJ_pt']  = {
                        'name': 'MHlnjj_pt_ljj',
                        'range' : (25,0,300),
                        'xaxis' : 'ljj_pt [GeV]',
                        'fold'  : 3
                        }
variables['MET_pt']  = {
                        'name': 'MHlnjj_pt_met',
                        'range' : (25,0,500),
                        'xaxis' : 'met_pt [GeV]',
                        'fold'  : 3
                        }

variables['lepMETjj_pz']  = {
                        'name': 'MHlnjj_pz_lmetjj',
                        'range' : (25,0,300),
                        'xaxis' : 'lepMETjj_pz [GeV]',
                        'fold'  : 3
                        }

variables['lepMET_pz']  = {
                        'name': 'MHlnjj_pz_lmet',
                        'range' : (25,0,300),
                        'xaxis' : 'lepMET_pz [GeV]',
                        'fold'  : 3
                        }

variables['JJ_pz']  = {
                        'name': 'MHlnjj_pz_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'jj_pz [GeV]',
                        'fold'  : 3
                        }
variables['lepJJ_pz']  = {
                        'name': 'MHlnjj_pz_ljj',
                        'range' : (25,0,300),
                        'xaxis' : 'ljj_pz [GeV]',
                        'fold'  : 3
                        }
variables['MET_pz']  = {
                        'name': 'MHlnjj_pz_met',
                        'range' : (25,0,300),
                        'xaxis' : 'met_pz [GeV]',
                        'fold'  : 3
                        }


variables['dphi_ljj_met']  = {
                        'name': 'MHlnjj_dphi_ljjVmet',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(ljj,met)',
                        'fold'  : 3,
                        }
variables['dr_ljj_met']  = {
                        'name': 'MHlnjj_dr_ljjVmet',
                        'range' : (25,0,5),
                        'xaxis' : 'dR(ljj,met)',
                        'fold'  : 3,
                        }
variables['deta_ljj_met']  = {
                        'name': 'MHlnjj_deta_ljjVmet',
                        'range' : (25,0,5),
                        'xaxis' : 'deta(ljj,met)',
                        'fold'  : 3,
                        }

variables['dr_l_met']  = {
                        'name': 'MHlnjj_dr_lVmet',
                        'range' : (25,0,5),
                        'xaxis' : 'dR(l,met)',
                        'fold'  : 3,
                        }
variables['dphi_l_met']  = {
                        'name': 'MHlnjj_dphi_lVmet',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(l,met)',
                        'fold'  : 3,
                        }
variables['deta_l_met']  = {
                        'name': 'MHlnjj_deta_lVmet',
                        'range' : (25,0,3),
                        'xaxis' : 'deta(l,met)',
                        'fold'  : 3,
                        }


variables['dr_l_jj']  = {
                        'name': 'MHlnjj_dr_jjVl',
                        'range' : (25,0,5),
                        'xaxis' : 'dR(lep,jj)',
                        'fold'  : 3
                        }

variables['dphi_l_jj']  = {
                        'name': 'MHlnjj_dphi_jjVl',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(lep,jj)',
                        'fold'  : 3
                        }

variables['deta_l_jj']  = {
                        'name': 'MHlnjj_deta_jjVl',
                        'range' : (25,0,5),
                        'xaxis' : 'deta(lep,jj)',
                        'fold'  : 3
                        }


variables['drjj']  = {
                        'name': 'MHlnjj_dr_jVj',
                        'range' : (25,0,5),
                        'xaxis' : 'dr(j1,j2)',
                        'fold'  : 3
                        }


variables['dphijj']  = {
                        'name': 'MHlnjj_dphi_jVj',
                        'range' : (25,0,3.14),
                        'xaxis' : 'dphi(j1,j2)',
                        'fold'  : 3
                        }


variables['detajj']  = {
                        'name': 'MHlnjj_deta_jVj',
                        'range' : (25,0,5),
                        'xaxis' : 'deta(j1,j2)',
                        'fold'  : 3
                        }



#variables['WptOvHak4M']  = {
#                        'name': 'ComputeVars(Entry$,0)',
#                        'range' : (25,0,0.8),
#                        'xaxis' : 'WptOvHak4M',
#                        'fold'  : 3,
#                       #'linesToAdd':['.L /gpfs/users/mantecap/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017/ComputeVars.C+']
#                       'linesToAdd':['.L /user/svanputt/monoHiggs/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017/ComputeVars.C+']
#                        }
#
#variables['Hlnjj_mass']  = {
#                        'name': 'ComputeVars(Entry$,1)',
#                        'range' : (25,0,1600),
#                        'xaxis' : 'm_{Hlnjj_mass} [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['Wlep_mt']  = {
#                        'name': 'ComputeVars(Entry$,2)',
#                        'range' : (25,0,1000),
#                        'xaxis' : 'Wlep_mt [GeV]',
#                        'fold'  : 3
#                        }
#
#
## variables['lepMETjj_mass']  = {
##                         'name': 'ComputeVars(Entry$,3)',
##                         'range' : (25,0,1200),
##                         'xaxis' : 'lepMETjj_mass [GeV]',
##                         'fold'  : 3
##                         }
#
#
#variables['lepMETjj_mt']  = {
#                        'name': 'ComputeVars(Entry$,4)',
#                        'range' : (25,0,300),
#                        'xaxis' : 'lepMETjj_mt [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['lepMET_mt']  = {
#                        'name': 'ComputeVars(Entry$,5)',
#                        'range' : (25,0,300),
#                        'xaxis' : 'lepMET_mt [GeV]',
#                        'fold'  : 3
#                        }
#
#
#
#variables['dphi_ljj_met']  = {
#                        'name': 'ComputeVars(Entry$,6)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : 'dphi(ljj,met)',
#                        'fold'  : 3,
#                        }
#variables['dr_ljj_met']  = {
#                        'name': 'ComputeVars(Entry$,21)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'dR(ljj,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_ljj_met']  = {
#                        'name': 'ComputeVars(Entry$,22)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'deta(ljj,met)',
#                        'fold'  : 3,
#                        }
#
#variables['dr_l_met']  = {
#                        'name': 'ComputeVars(Entry$,31)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'dR(l,met)',
#                        'fold'  : 3,
#                        }
#variables['dphi_l_met']  = {
#                        'name': 'ComputeVars(Entry$,33)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : 'dphi(l,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_l_met']  = {
#                        'name': 'ComputeVars(Entry$,32)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'deta(l,met)',
#                        'fold'  : 3,
#                        }
#
#
#variables['dr_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,7)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'dR(lep,jj)',
#                        'fold'  : 3
#                        }
#
#variables['dphi_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,8)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : 'dphi(lep,jj)',
#                        'fold'  : 3
#                        }
#
#
#variables['drjj']  = {
#                        'name': 'ComputeVars(Entry$,9)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'dr(j1,j2)',
#                        'fold'  : 3
#                        }
#
#
#variables['dphijj']  = {
#                        'name': 'ComputeVars(Entry$,10)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : 'dphi(j1,j2)',
#                        'fold'  : 3
#                        }
#
#
#variables['detajj']  = {
#                        'name': 'ComputeVars(Entry$,11)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'deta(j1,j2)',
#                        'fold'  : 3
#                        }
#
#variables['deta_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,12)',
#                        'range' : (25,0,5),
#                        'xaxis' : 'deta(lep,jj)',
#                        'fold'  : 3
#                        }
#
