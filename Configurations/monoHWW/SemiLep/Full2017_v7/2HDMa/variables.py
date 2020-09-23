variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }
#variables['projMET']  = {
#                        'name': 'projMET',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T} projected puppiMET [GeV]',
#                        'fold'  : 3
#                        }
#variables['pfmet']  = {
#                        'name': 'MET_pt',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T} pfMET [GeV]',
#                        'fold'  : 3
#                        }

variables['l1_pt']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (25,20,200),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
#variables['l2_pt']  = {   'name': 'Alt$(Lepton_pt[1], -9999.)',     
#                        'range' : (25,0,12),   
#                        'xaxis' : 'p_{T}^{l_{2}}',
#                        'fold'  : 3
#                        }

variables['j1_pt']  = {   'name': 'MHlnjj_pt_j1',     
                        'range' : (25,0,350),   
                        'xaxis' : 'p_{T}^{j_{1}}',
                        'fold'  : 3
                        }
variables['j2_pt']  = {   'name': 'MHlnjj_pt_j2',     
                        'range' : (25,0,150),   
                        'xaxis' : 'p_{T}^{j_{2}}',
                        'fold'  : 3
                        }
#variables['nlep']  = {   'name': 'nLepton',     
#                        'range' : (5,0,5),   
#                        'xaxis' : '# Lepton',
#                        'fold'  : 3
#                        }
variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',     
                        'range' : (10,0,10),   
                        'xaxis' : 'nCleanJet (p_{T} > 30)',
                        'fold'  : 3
                        }


variables['l1_eta']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (25,-3,3),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['j1_eta']  = {  'name': 'MHlnjj_eta_j1',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{1}}',
                        'fold'  : 3                         
                        }
variables['j2_eta']  = {  'name': 'MHlnjj_eta_j2',     
                        'range' : (25,-5,5),   
                        'xaxis' : '#eta^{j_{2}}',
                        'fold'  : 3                         
                        }

#variables['mt_lmet']  = {  'name': 'MHlnjj_mt_lmet',     
#                        'range' : (25,0,300),   
#                        'xaxis' : 'm_{T}^{l,MET}',
#                        'fold'  : 3                         
#                        }
#variables['m_jj']  = {  'name': 'MHlnjj_m_jj',     
#                        'range' : (25,0,200),   
#                        'xaxis' : 'm^{j,j}',
#                        'fold'  : 3                         
#                        }

# copied

variables['mt_lmet']  = {
                       'name': 'MHlnjj_mt_lmet',
                       'range' : (25,0,200),
                       'xaxis' : 'm_{T}^{lmet} [GeV]',
                       'fold'  : 3
                       }
variables['mt_jj']  = {
                        'name': 'MHlnjj_mt_jj',
                        'range' : (25,0,200),
                        'xaxis' : 'm_{T}^{jj} [GeV]',
                        'fold'  : 3
                        }
variables['mt_ljj']  = {
                        'name': 'MHlnjj_mt_ljj',
                        'range' : (25,0,500),
                        'xaxis' : 'm_{T}^{ljj} [GeV]',
                        'fold'  : 3
                        }
#variables['mt_lmetjj']  = {
#                        'name': 'MHlnjj_mt_lmetjj',
#                        'range' : (25,0,500),
#                        'xaxis' : 'm_{T}^{lmetjj} [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['pt_lmet']  = {
#                        'name': 'MHlnjj_pt_lmet',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T}^{lmet} [GeV]',
#                        'fold'  : 3
#                        }
#
variables['pt_jj']  = {
                        'name': 'MHlnjj_pt_jj',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T}^{jj} [GeV]',
                        'fold'  : 3
                        }
variables['pt_ljj']  = {
                        'name': 'MHlnjj_pt_ljj',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T}^{ljj} [GeV]',
                        'fold'  : 3
                        }

#variables['lmetjj_pz']  = {
#                        'name': 'MHlnjj_pz_lmetjj',
#                        'range' : (25,0,300),
#                        'xaxis' : 'lmetjj_pz [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['lmet_pz']  = {
#                        'name': 'MHlnjj_pz_lmet',
#                        'range' : (25,0,300),
#                        'xaxis' : 'lmet_pz [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['jj_pz']  = {
#                        'name': 'MHlnjj_pz_jj',
#                        'range' : (25,0,300),
#                        'xaxis' : 'jj_pz [GeV]',
#                        'fold'  : 3
#                        }
#variables['ljj_pz']  = {
#                        'name': 'MHlnjj_pz_ljj',
#                        'range' : (25,0,300),
#                        'xaxis' : 'ljj_pz [GeV]',
#                        'fold'  : 3
#                        }
#variables['met_pz']  = {
#                        'name': 'MHlnjj_pz_met',
#                        'range' : (25,0,300),
#                        'xaxis' : 'met_pz [GeV]',
#                        'fold'  : 3
#                        }


variables['dphi_ljj_met']  = {
                        'name': 'MHlnjj_dphi_ljjVmet',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(ljj,met)',
                        'fold'  : 3,
                        }
#variables['dr_ljj_met']  = {
#                        'name': 'MHlnjj_dr_ljjVmet',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(ljj,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_ljj_met']  = {
#                        'name': 'MHlnjj_deta_ljjVmet',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(ljj,met)',
#                        'fold'  : 3,
#                        }
#
#variables['dr_l_met']  = {
#                        'name': 'MHlnjj_dr_lVmet',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(l,met)',
#                        'fold'  : 3,
#                        }
#variables['dphi_l_met']  = {
#                        'name': 'MHlnjj_dphi_lVmet',
#                        'range' : (25,0,3.14),
#                        'xaxis' : '#Delta#phi(l,met)',
#                        'fold'  : 3,
#                        }
#variables['deta_l_met']  = {
#                        'name': 'MHlnjj_deta_lVmet',
#                        'range' : (25,0,3),
#                        'xaxis' : '#Delta#eta(l,met)',
#                        'fold'  : 3,
#                        }
#
#
#variables['dr_l_jj']  = {
#                        'name': 'MHlnjj_dr_jjVl',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(l,jj)',
#                        'fold'  : 3
#                        }
#
variables['dphi_l_jj']  = {
                        'name': 'MHlnjj_dphi_jjVl',
                        'range' : (25,0,3.14),
                        'xaxis' : '#Delta#phi(l,jj)',
                        'fold'  : 3
                        }

#variables['deta_l_jj']  = {
#                        'name': 'MHlnjj_deta_jjVl',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(l,jj)',
#                        'fold'  : 3
#                        }
#
#
#variables['dr_j_j']  = {
#                        'name': 'MHlnjj_dr_jVj',
#                        'range' : (25,0,5),
#                        'xaxis' : '#DeltaR(j1,j2)',
#                        'fold'  : 3
#                        }
#
#
#variables['dphi_j_j']  = {
#                        'name': 'MHlnjj_dphi_jVj',
#                        'range' : (25,0,3.14),
#                        'xaxis' : '#Delta#phi(j1,j2)',
#                        'fold'  : 3
#                        }
#
#
#variables['deta_j_j']  = {
#                        'name': 'MHlnjj_deta_jVj',
#                        'range' : (25,0,5),
#                        'xaxis' : '#Delta#eta(j1,j2)',
#                        'fold'  : 3
#                        }
#
#variables['m_lmet']  = {
#                        'name': 'MHlnjj_m_lmet',
#                        'range' : (25,0,500),
#                        'xaxis' : 'm_{lmet} [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['m_jj']  = {
#                        'name': 'MHlnjj_m_jj',
#                        'range' : (25,0,200),
#                        'xaxis' : 'm_{jj} [GeV]',
#                        'fold'  : 3
#                        }
variables['m_ljj']  = {
                        'name': 'MHlnjj_m_ljj',
                        'range' : (25,0,600),
                        'xaxis' : 'm_{ljj} [GeV]',
                        'fold'  : 3
                        }
variables['m_lmetjj']  = {
                        'name': 'MHlnjj_m_lmetjj',
                        'range' : (25,0,1500),
                        'xaxis' : 'm_{lmetjj} [GeV]',
                        'fold'  : 3
                        }

#variables['frac_PTljj_D_PTmet']  = {
#                        'name': 'MHlnjj_PTljj_D_PTmet',
#                        'range' : (25,0,3),
#                        'xaxis' : 'p_{T}^{ljj} / p_{T}^{met}',
#                        'fold'  : 3
#                        }
#variables['frac_PTljj_D_Mlmetjj']  = {
#                        'name': 'MHlnjj_PTljj_D_Mlmetjj',
#                        'range' : (25,0,1),
#                        'xaxis' : 'p_{T}^{ljj} / m_{lmetjj}',
#                        'fold'  : 3
#                        }
#variables['frac_MINPTlj_D_PTmet']  = {
#                        'name': 'MHlnjj_MINPTlj_D_PTmet',
#                        'range' : (25,0,0.8),
#                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / p_{T}^{met}',
#                        'fold'  : 3
#                        }
#variables['frac_MINPTlj_D_Mlmetjj']  = {
#                        'name': 'MHlnjj_MINPTlj_D_Mlmetjj',
#                        'range' : (25,0,0.3),
#                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / m_{lmetjj}',
#                        'fold'  : 3
#                        }
##WptOvHak4M_OTF
#variables['WptOvHak4M']  = {
#                        'name': 'WptOvHak4M_OTF',
#                        'range' : (25,0,1.),
#                        'xaxis' : 'min(p_{T}^{lmet}, p_{T}^{jj}) / m_{lmetjj}',
#                        'fold'  : 3
#                        }
#
#
#variables['2HDMaBDT_Grad22Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Grad22Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Grad22Var}',
#                        'fold'  : 3 
#                        }   
#variables['2HDMaBDT_Grad15Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Grad15Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Grad15Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['2HDMaBDT_Grad12Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Grad12Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Grad12Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['2HDMaBDT_Ada22Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Ada22Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Ada22Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['2HDMaBDT_Ada15Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Ada15Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Ada15Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['2HDMaBDT_Ada12Var']  = { 
#                        'name': 'MHlnjj_2HDMaBDT_Ada12Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : '2HDMa BDT_{Ada12Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#
#variables['darkHiggsBDT_Ada16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['darkHiggsBDT_Grad16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Grad16Var',
#                        'range' : (10,-1.1,1.1),
#                        'xaxis' : 'darkHiggs BDT_{Grad16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#
