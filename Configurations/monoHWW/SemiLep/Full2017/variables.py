
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
                        'xaxis' : 'p_{T} puppiMET [GeV]',
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
                        'range' : (25,0,100),
                        'xaxis' : 'mtw2 [GeV]',
                        'fold'  : 3
                        }


variables['lmet_mt']  = {
                        'name': 'MHlnjj_mt_lmet',
                        'range' : (25,0,300),
                        'xaxis' : 'm_{T}^{lmet} [GeV]',
                        'fold'  : 3
                        }

variables['jj_mt']  = {
                        'name': 'MHlnjj_mt_jj',
                        'range' : (25,0,200),
                        'xaxis' : 'm_{T}^{jj} [GeV]',
                        'fold'  : 3
                        }
variables['ljj_mt']  = {
                        'name': 'MHlnjj_mt_ljj',
                        'range' : (25,0,1000),
                        'xaxis' : 'm_{T}^{ljj} [GeV]',
                        'fold'  : 3
                        }
variables['met_mt']  = {
                        'name': 'MHlnjj_mt_met',
                        'range' : (25,0,1000),
                        'xaxis' : 'm_{T}^{met} [GeV]',
                        'fold'  : 3
                        }

variables['lmetjj_mt']  = {
                        'name': 'MHlnjj_mt_lmetjj',
                        'range' : (25,0,2000),
                        'xaxis' : 'm_{T}^{lmetjj} [GeV]',
                        'fold'  : 3
                        }

variables['lmet_pt']  = {
                        'name': 'MHlnjj_pt_lmet',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T}^{lmet} [GeV]',
                        'fold'  : 3
                        }

variables['jj_pt']  = {
                        'name': 'MHlnjj_pt_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T}^{jj} [GeV]',
                        'fold'  : 3
                        }
variables['ljj_pt']  = {
                        'name': 'MHlnjj_pt_ljj',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T}^{ljj} [GeV]',
                        'fold'  : 3
                        }
variables['met_pt']  = {
                        'name': 'MHlnjj_pt_met',
                        'range' : (25,0,500),
                        'xaxis' : 'p_{T}^{met} [GeV]',
                        'fold'  : 3
                        }

variables['lmetjj_pz']  = {
                        'name': 'MHlnjj_pz_lmetjj',
                        'range' : (25,0,300),
                        'xaxis' : 'lmetjj_pz [GeV]',
                        'fold'  : 3
                        }

variables['lmet_pz']  = {
                        'name': 'MHlnjj_pz_lmet',
                        'range' : (25,0,300),
                        'xaxis' : 'lmet_pz [GeV]',
                        'fold'  : 3
                        }

variables['jj_pz']  = {
                        'name': 'MHlnjj_pz_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'jj_pz [GeV]',
                        'fold'  : 3
                        }
variables['ljj_pz']  = {
                        'name': 'MHlnjj_pz_ljj',
                        'range' : (25,0,300),
                        'xaxis' : 'ljj_pz [GeV]',
                        'fold'  : 3
                        }
variables['met_pz']  = {
                        'name': 'MHlnjj_pz_met',
                        'range' : (25,0,300),
                        'xaxis' : 'met_pz [GeV]',
                        'fold'  : 3
                        }


variables['dphi_ljj_met']  = {
                        'name': 'MHlnjj_dphi_ljjVmet',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(ljj,met)',
                        'fold'  : 3,
                        }
variables['dr_ljj_met']  = {
                        'name': 'MHlnjj_dr_ljjVmet',
                        'range' : (25,0,5),
                        'xaxis' : '#DeltaR(ljj,met)',
                        'fold'  : 3,
                        }
variables['deta_ljj_met']  = {
                        'name': 'MHlnjj_deta_ljjVmet',
                        'range' : (25,0,5),
                        'xaxis' : '#Delta#eta(ljj,met)',
                        'fold'  : 3,
                        }

variables['dr_l_met']  = {
                        'name': 'MHlnjj_dr_lVmet',
                        'range' : (25,0,5),
                        'xaxis' : '#DeltaR(l,met)',
                        'fold'  : 3,
                        }
variables['dphi_l_met']  = {
                        'name': 'MHlnjj_dphi_lVmet',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(l,met)',
                        'fold'  : 3,
                        }
variables['deta_l_met']  = {
                        'name': 'MHlnjj_deta_lVmet',
                        'range' : (25,0,3),
                        'xaxis' : '#Delta#eta(l,met)',
                        'fold'  : 3,
                        }


variables['dr_l_jj']  = {
                        'name': 'MHlnjj_dr_jjVl',
                        'range' : (25,0,5),
                        'xaxis' : '#DeltaR(l,jj)',
                        'fold'  : 3
                        }

variables['dphi_l_jj']  = {
                        'name': 'MHlnjj_dphi_jjVl',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(l,jj)',
                        'fold'  : 3
                        }

variables['deta_l_jj']  = {
                        'name': 'MHlnjj_deta_jjVl',
                        'range' : (25,0,5),
                        'xaxis' : '#Delta#eta(l,jj)',
                        'fold'  : 3
                        }


variables['dr_j_j']  = {
                        'name': 'MHlnjj_dr_jVj',
                        'range' : (25,0,5),
                        'xaxis' : '#DeltaR(j1,j2)',
                        'fold'  : 3
                        }


variables['dphi_j_j']  = {
                        'name': 'MHlnjj_dphi_jVj',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(j1,j2)',
                        'fold'  : 3
                        }


variables['deta_j_j']  = {
                        'name': 'MHlnjj_deta_jVj',
                        'range' : (25,0,5),
                        'xaxis' : '#Delta#eta(j1,j2)',
                        'fold'  : 3
                        }

variables['lmet_m']  = {
                        'name': 'MHlnjj_m_lmet',
                        'range' : (25,0,500),
                        'xaxis' : 'm_{lmet} [GeV]',
                        'fold'  : 3
                        }

variables['jj_m']  = {
                        'name': 'MHlnjj_m_jj',
                        'range' : (25,0,110),
                        'xaxis' : 'm_{jj} [GeV]',
                        'fold'  : 3
                        }
variables['ljj_m']  = {
                        'name': 'MHlnjj_m_ljj',
                        'range' : (25,0,600),
                        'xaxis' : 'm_{ljj} [GeV]',
                        'fold'  : 3
                        }
variables['met_m']  = {
                        'name': 'MHlnjj_m_met',
                        'range' : (25,0,2000),
                        'xaxis' : 'm_{met} [GeV]',
                        'fold'  : 3
                        }

variables['lmetjj_m']  = {
                        'name': 'MHlnjj_m_lmetjj',
                        'range' : (25,0,1500),
                        'xaxis' : 'm_{lmetjj} [GeV]',
                        'fold'  : 3
                        }

variables['PTljj_D_PTmet']  = {
                        'name': 'MHlnjj_PTljj_D_PTmet',
                        'range' : (25,0,3),
                        'xaxis' : 'p_{T}^{ljj} / p_{T}^{met}',
                        'fold'  : 3
                        }
variables['PTljj_D_Mlmetjj']  = {
                        'name': 'MHlnjj_PTljj_D_Mlmetjj',
                        'range' : (25,0,1),
                        'xaxis' : 'p_{T}^{ljj} / m_{lmetjj}',
                        'fold'  : 3
                        }
variables['MINPTlj_D_PTmet']  = {
                        'name': 'MHlnjj_MINPTlj_D_PTmet',
                        'range' : (25,0,0.8),
                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / p_{T}^{met}',
                        'fold'  : 3
                        }
variables['MINPTlj_D_Mlmetjj']  = {
                        'name': 'MHlnjj_MINPTlj_D_Mlmetjj',
                        'range' : (25,0,0.3),
                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / m_{lmetjj}',
                        'fold'  : 3
                        }
variables['2HDMa_BDT']  = {
                        'name': 'MHlnjj_2HDMaBDT',
                        'range' : (25,-1.1,1.1),
                        'xaxis' : 'BDT',
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
#                        'xaxis' : '#Delta#phi(ljj,met)',
#                        'fold'  : 3,
#                        }
#variables['dr_ljj_met']  = {
#                        'name': 'ComputeVars(Entry$,21)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(ljj,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_ljj_met']  = {
#                        'name': 'ComputeVars(Entry$,22)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(ljj,met)',
#                        'fold'  : 3,
#                        }
#
#variables['dr_l_met']  = {
#                        'name': 'ComputeVars(Entry$,31)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(l,met)',
#                        'fold'  : 3,
#                        }
#variables['dphi_l_met']  = {
#                        'name': 'ComputeVars(Entry$,33)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : '#Delta#phi(l,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_l_met']  = {
#                        'name': 'ComputeVars(Entry$,32)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(l,met)',
#                        'fold'  : 3,
#                        }
#
#
#variables['dr_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,7)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(lep,jj)',
#                        'fold'  : 3
#                        }
#
#variables['dphi_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,8)',
#                        'range' : (25,0,3.14),
#                        'xaxis' : '#Delta#phi(lep,jj)',
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
#                        'xaxis' : '#Delta#phi(j1,j2)',
#                        'fold'  : 3
#                        }
#
#
#variables['detajj']  = {
#                        'name': 'ComputeVars(Entry$,11)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(j1,j2)',
#                        'fold'  : 3
#                        }
#
#variables['deta_l_jj']  = {
#                        'name': 'ComputeVars(Entry$,12)',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(lep,jj)',
#                        'fold'  : 3
#                        }
#
