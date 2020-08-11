# cuts

supercut = """Lepton_pt[0] > 25. && Lepton_pt[1] > 20.
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10)
&& (Lepton_pdgId[0]*Lepton_pdgId[1]) < 0 
&& abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5
&& (mll > 20.)
&& (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || PuppiMET_pt > 50.)
&& (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll < 76 || mll > 106))
&& nbJet > 0
&& Alt$(CleanJet_pt[0], 0) >= 30."""

cuts['topCR_ll']  = '1'
cuts['topCR_ee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['topCR_mm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['topCR_df']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

#BDT control regions
cuts['topCR_ll_BDT_signal0'] = 'BDT_output_category == 0'
cuts['topCR_ee_BDT_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 0'
cuts['topCR_mm_BDT_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 0'
cuts['topCR_df_BDT_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 0'

cuts['topCR_ll_BDT_signal1'] = 'BDT_output_category == 1'
cuts['topCR_ee_BDT_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 1'
cuts['topCR_mm_BDT_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 1'
cuts['topCR_df_BDT_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 1'

cuts['topCR_ll_BDT_bkg'] = 'BDT_output_category == 2'
cuts['topCR_ee_BDT_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 2'
cuts['topCR_mm_BDT_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 2'
cuts['topCR_df_BDT_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && BDT_output_category == 2'

#DNN control regions
cuts['topCR_ll_DNN_signal0'] = 'DNN_output_category == 0'
cuts['topCR_ee_DNN_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 0'
cuts['topCR_mm_DNN_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 0'
cuts['topCR_df_DNN_signal0'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 0'

cuts['topCR_ll_DNN_signal1'] = 'DNN_output_category == 1'
cuts['topCR_ee_DNN_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 1'
cuts['topCR_mm_DNN_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 1'
cuts['topCR_df_DNN_signal1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 1'

cuts['topCR_ll_DNN_bkg'] = 'DNN_output_category == 2'
cuts['topCR_ee_DNN_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 2'
cuts['topCR_mm_DNN_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 2'
cuts['topCR_df_DNN_bkg'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && DNN_output_category == 2'

#cuts['Zee']  = {
#   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
#   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#      '2j' : 'multiJet',
#   }
#}
#
#cuts['Zmm']  = {
#   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)',
#   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#      '2j' : 'multiJet',
#   }
#}



