# cuts

#cuts = {}
#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'  
# eleWP='mva_80p_Iso2015'
# eleWP='mva_80p_Iso2016'
# eleWP='mva_90p_Iso2015'
#eleWP='mva_90p_Iso2016'
  
supercut = 'mllmin3l>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]>15 \
            && std_vector_lepton_pt[3]<10 \
            && abs(chlll) == 1 \
           '

cuts['preselection']   = '1'

cuts['zmass_cut'] = ' zveto_3l < 25 '

cuts['2jet_cut'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                 '

cuts['bveto'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                 '

cuts['z4lveto'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                 '

cuts['dphi_cut'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetjj > 3.14159/2 \
                 '

cuts['dphi_cut_Wp'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetjj < 3.14159/2 \
                   && pdgid_notZ > 0 \
                 '

cuts['dphi_cut_Wm'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetjj < 3.14159/2 \
                   && pdgid_notZ < 0 \
                 '

cuts['1jet_cut'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                 '

cuts['bveto_1j'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                 '

cuts['z4lveto_1j'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                 '

cuts['dphi_cut_1j'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj > 3.14159/2 \
                 '

cuts['dphi_cut_1j_Wp'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj > 3.14159/2 \
                   && pdgid_notZ > 0 \
                 '

cuts['dphi_cut_1j_Wm'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj > 3.14159/2 \
                   && pdgid_notZ < 0 \
                 '


'''
cuts['ZH_eee'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && z4lveto > 20 \
                   && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] == -11*-11*-11) \
                  '

cuts['ZH_eemu'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && z4lveto > 20 \
                   && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] == -11*-11*13) \
                  '

cuts['ZH_mumue'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && z4lveto > 20 \
                   && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] *std_vector_lepton_flavour[2] == 13*13*-11) \
                  '

cuts['ZH_mumumu'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && z4lveto > 20 \
                   && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] == 13*13*13) \
                  '
'''


'''
 #11 = e
# 13 = mu
# 15 = tau
'''
