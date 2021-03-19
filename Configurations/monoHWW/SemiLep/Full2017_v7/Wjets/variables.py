variables['Events']  = {   'name': '1',     
                           'range' : (1,0,1),   
                           'xaxis' : '1',
                           'fold'  : 3
                        }

LHE_Vpt_bins = [0, 50, 100, 250, 400, 600, 13000]
variables['LHE_Vpt']  = {
                        'name': 'LHE_Vpt',
                        'range' : (40,0,200),
                        'xaxis' : 'LHR Vpt [GeV]',
                        'fold'  : 3
                        }
variables['LHE_Vpt_bins']  = {
                        'name': 'LHE_Vpt',
                        #'range' : (25,0,400),
                        'range' : (LHE_Vpt_bins,),
                        'xaxis' : 'LHE Vpt [GeV]',
                        'fold'  : 3
                        }

LHE_HT_bins = [0, 70, 100, 200, 400, 600, 800, 1200, 2500]
variables['LHE_HT']  = {
                        'name': 'LHE_HT',
                        'range' : (25,0,800),
                        'xaxis' : 'LHE HT [GeV]',
                        'fold'  : 3
                        }
variables['LHE_HT_bins']  = {
                        'name': 'LHE_HT',
                        #'range' : (25,0,400),
                        'range' : (LHE_HT_bins,),
                        'xaxis' : 'LHE HT [GeV]',
                        'fold'  : 3
                        }


variables['Puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (25,0,300),
                        'xaxis' : 'p_{T} puppiMET [GeV]',
                        'fold'  : 3
                        }
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
variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',     
                        'range' : (10,0,10),   
                        'xaxis' : 'nCleanJet (p_{T} > 30)',
                        'fold'  : 3
                        }

variables['nbjet']  = { 
    'name': 'nbJet',     
    'range' : (10,0,10),   
    'xaxis' : 'b-tagged nCleanJet (p_{T} > 30)',
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

#variables['m_jj']  = {  'name': 'MHlnjj_m_jj',     
#                        'range' : (25,0,250),   
#                        'xaxis' : 'm^{j,j}',
#                        'fold'  : 3                         
#                        }
#
## copied
#
#variables['mt_lmet']  = {
#                       #'name': 'MHlnjj_mt_lmet',
#                       'name': 'mtw1',
#                       #'range' : (25,0,200),
#                       'range' : ([50,75,100,125,181,300],),
#                       'xaxis' : 'm_{T}^{lmet} [GeV]',
#                       'fold'  : 3
#                       }
#variables['mt_jj']  = {
#                        'name': 'MHlnjj_mt_jj',
#                        'range' : (25,0,200),
#                        'xaxis' : 'm_{T}^{jj} [GeV]',
#                        'fold'  : 3
#                        }
#variables['mt_ljj']  = {
#                        'name': 'MHlnjj_mt_ljj',
#                        'range' : (25,0,500),
#                        'xaxis' : 'm_{T}^{ljj} [GeV]',
#                        'fold'  : 3
#                        }
#variables['pt_jj']  = {
#                        'name': 'MHlnjj_pt_jj',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T}^{jj} [GeV]',
#                        'fold'  : 3
#                        }
#variables['pt_ljj']  = {
#                        'name': 'MHlnjj_pt_ljj',
#                        'range' : (25,0,300),
#                        'xaxis' : 'p_{T}^{ljj} [GeV]',
#                        'fold'  : 3
#                        }
#
#
##variables['dphi_ljj_met']  = {
##                        'name': 'MHlnjj_dphi_ljjVmet',
##                        'range' : (25,0,3.14),
##                        'xaxis' : '#Delta#phi(ljj,met)',
##                        'fold'  : 3,
##                        }
##variables['dr_ljj_met']  = {
##                        'name': 'MHlnjj_dr_ljjVmet',
##                        'range' : (25,0,5),
##                        'xaxis' : '#DeltaR(ljj,met)',
##                        'fold'  : 3,
##                        }
##variables['deta_ljj_met']  = {
##                        'name': 'MHlnjj_deta_ljjVmet',
##                        'range' : (25,0,5),
##                        'xaxis' : '#Delta#eta(ljj,met)',
##                        'fold'  : 3,
##                        }
##
##variables['dr_l_met']  = {
##                        'name': 'MHlnjj_dr_lVmet',
##                        'range' : (25,0,5),
##                        'xaxis' : '#DeltaR(l,met)',
##                        'fold'  : 3,
##                        }
##variables['dphi_l_met']  = {
##                        'name': 'MHlnjj_dphi_lVmet',
##                        'range' : (25,0,3.14),
##                        'xaxis' : '#Delta#phi(l,met)',
##                        'fold'  : 3,
##                        }
##variables['deta_l_met']  = {
##                        'name': 'MHlnjj_deta_lVmet',
##                        'range' : (25,0,3),
##                        'xaxis' : '#Delta#eta(l,met)',
##                        'fold'  : 3,
##                        }
##
##
##variables['dr_l_jj']  = {
##                        'name': 'MHlnjj_dr_jjVl',
##                        'range' : (25,0,5),
##                        'xaxis' : '#DeltaR(l,jj)',
##                        'fold'  : 3
##                        }
##
##variables['dphi_l_jj']  = {
##                        'name': 'MHlnjj_dphi_jjVl',
##                        'range' : (25,0,3.14),
##                        'xaxis' : '#Delta#phi(l,jj)',
##                        'fold'  : 3
##                        }
##
##variables['deta_l_jj']  = {
##                        'name': 'MHlnjj_deta_jjVl',
##                        'range' : (25,0,5),
##                        'xaxis' : '#Delta#eta(l,jj)',
##                        'fold'  : 3
##                        }
##
##
##variables['dr_j_j']  = {
##                        'name': 'MHlnjj_dr_jVj',
##                        'range' : (25,0,5),
##                        'xaxis' : '#DeltaR(j1,j2)',
##                        'fold'  : 3
##                        }
##
##
##variables['dphi_j_j']  = {
##                        'name': 'MHlnjj_dphi_jVj',
##                        'range' : (25,0,3.14),
##                        'xaxis' : '#Delta#phi(j1,j2)',
##                        'fold'  : 3
##                        }
##
##
##variables['deta_j_j']  = {
##                        'name': 'MHlnjj_deta_jVj',
##                        'range' : (25,0,5),
##                        'xaxis' : '#Delta#eta(j1,j2)',
##                        'fold'  : 3
##                        }
##
##variables['m_lmet']  = {
##                        'name': 'MHlnjj_m_lmet',
##                        'range' : (25,0,500),
##                        'xaxis' : 'm_{lmet} [GeV]',
##                        'fold'  : 3
##                        }
##
##variables['m_jj']  = {
##                        'name': 'MHlnjj_m_jj',
##                        'range' : (25,0,200),
##                        'xaxis' : 'm_{jj} [GeV]',
##                        'fold'  : 3
##                        }
#variables['m_ljj']  = {
#                        'name': 'MHlnjj_m_ljj',
#                        'range' : (25,0,600),
#                        'xaxis' : 'm_{ljj} [GeV]',
#                        'fold'  : 3
#                        }
#variables['m_lmetjj']  = {
#                        'name': 'MHlnjj_m_lmetjj',
#                        'range' : (25,0,1500),
#                        'xaxis' : 'm_{lmetjj} [GeV]',
#                        'fold'  : 3
#                        }
#
##variables['frac_PTljj_D_PTmet']  = {
##                        'name': 'MHlnjj_PTljj_D_PTmet',
##                        'range' : (25,0,3),
##                        'xaxis' : 'p_{T}^{ljj} / p_{T}^{met}',
##                        'fold'  : 3
##                        }
##variables['frac_PTljj_D_Mlmetjj']  = {
##                        'name': 'MHlnjj_PTljj_D_Mlmetjj',
##                        'range' : (25,0,1),
##                        'xaxis' : 'p_{T}^{ljj} / m_{lmetjj}',
##                        'fold'  : 3
##                        }
##variables['frac_MINPTlj_D_PTmet']  = {
##                        'name': 'MHlnjj_MINPTlj_D_PTmet',
##                        'range' : (25,0,0.8),
##                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / p_{T}^{met}',
##                        'fold'  : 3
##                        }
##variables['frac_MINPTlj_D_Mlmetjj']  = {
##                        'name': 'MHlnjj_MINPTlj_D_Mlmetjj',
##                        'range' : (25,0,0.3),
##                        'xaxis' : 'min(p_{T}^{l}, p_{T}^{j2}) / m_{lmetjj}',
##                        'fold'  : 3
##                        }

clean_bins_ada13_fine = [-1., -0.6, -0.4, -0.2, 0., 0.15, 0.25, 0.35, 0.4, 0.45, 0.5, 0.56, 1.]
variables['cleanBDT_NLOAda13Var']  = { 
    'name': 'cleanBDT_NLOAda13[0]*2',
    #'range' : (10,-1.1,1.1),
    'range' : (clean_bins_ada13_fine,),
    'xaxis' : 'new NLO BDT_{Ada13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'ElCh_SR' : [0.4, 1.],
        'MuCh_SR' : [0.4, 1.],
    }
}   


#bdt_bins   = [-1.,-0.8,-0.6,-0.4,-0.2,0.,0.2,0.4,0.6,1.]
#bdt_bins_M = [-1.,-0.2,0.,0.2,0.4,0.6,1.]
#
#variables['newBDT_Ada13Var']  = { 
#                        'name': 'newBDT_Ada13[0]',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['newBDT_Grad11Var']  = { 
#                        'name': 'newBDT_Grad11[0]',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Grad11Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#
#variables['darkHiggsBDT_Ada16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['darkHiggsBDT_Grad16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Grad16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Grad16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['darkHiggsBDT_Ada16Var_M']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins_M,),
#                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['newBDT_Ada13Var_M']  = { 
#                        'name': 'newBDT_Ada13[0]',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins_M,),
#                        'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
