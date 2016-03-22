# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
'

#mll > 12GeV
cuts['ww_mll_em'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
'

cuts['ww_mll_mm'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
'

cuts['ww_mll_ee'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
'

#MET > 20GeV
cuts['ww_met_em'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                     && metPfType1 > 20 \
'

cuts['ww_met_mm'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                     && metPfType1 > 20 \
'

cuts['ww_met_ee'] = 'mll>12  \
                     && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                     && metPfType1 > 20 \
'


#ZVeto (only ee and mm)
cuts['ww_ZVeto_em'] = 'mll>12  \
                       && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                       && metPfType1 > 20 \
                       && abs(mll - 91.1876) > 15 \
'

cuts['ww_ZVeto_mm'] = 'mll>12  \
                       && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                       && metPfType1 > 20 \
                       && abs(mll - 91.1876) > 15 \
'

cuts['ww_ZVeto_ee'] = 'mll>12  \
                       && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                       && metPfType1 > 20 \
                       && abs(mll - 91.1876) > 15 \
'


#Delta Phi Veto
cuts['ww_DPhiVeto_em'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
'

cuts['ww_DPhiVeto_mm'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
'

cuts['ww_DPhiVeto_ee'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
'


#MetVar > 20/45 GeV - Still to be implemented
cuts['ww_metvar_em'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 20 \
'

cuts['ww_metvar_mm'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
'

cuts['ww_metvar_ee'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
'


#BVeto
cuts['ww_BVeto_em'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 20 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
'

cuts['ww_BVeto_mm'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
'

cuts['ww_BVeto_ee'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
'

#0 Jet Bin
cuts['ww_BVeto0j_em'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 20 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 0 \
'

cuts['ww_BVeto0j_mm'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 0 \
'

cuts['ww_BVeto0j_ee'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 0 \
'

#1 Jet Bin
cuts['ww_BVeto1j_em'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 20 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 1 \
'

cuts['ww_BVeto1j_mm'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 1 \
'

cuts['ww_BVeto1j_ee'] = 'mll>12  \
                         && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                         && metPfType1 > 20 \
                         && abs(mll - 91.1876) > 15 \
                         && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
                         && mpmet > 45 \
                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                         && njet == 1 \
'

# 11 = e
# 13 = mu
# 15 = tau

