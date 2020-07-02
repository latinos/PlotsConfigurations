# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
           '

## DY control regions               
cuts['hww2l2v_13TeV_dytt_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && mll>40 && mll<80 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '
'''
cuts['hww2l2v_13TeV_dytt_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && mll>40 && mll<80 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

## Top control regions
cuts['hww2l2v_13TeV_top_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( mtw2>30) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && (   ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
                    || ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.5884 ) \
                    || ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.5884 ) \
                    || ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.5884 ) \
                    || ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.5884 ) \
                    || ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.5884 ) \
                    || ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.5884 ) \
                    || ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.5884 ) \
                    || ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.5884 ) \
                    || ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.5884 ) \
                    ) \
                '

cuts['hww2l2v_13TeV_top_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( mtw2>30) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && std_vector_jet_cmvav2[0]>-0.5884 \
                '

## Signal regions

#cuts['hww2l2v_13TeV_em_pm_0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == 11) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_em_pm_1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == 11) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_em_mp_0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == -11) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_em_mp_1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == -11) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_me_pm_0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == 13) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_me_pm_1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == 13) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_me_mp_0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == -13) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] < 30 ) \
#                && '+bVeto+' \
#                '
#
#cuts['hww2l2v_13TeV_me_mp_1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && (std_vector_lepton_flavour[0] == -13) \
#                && ( mth>=60) \
#                && ( mtw2>30) \
#                && ( std_vector_electron_passConversionVeto[1] == 1) \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] < 30 ) \
#                && '+bVeto+' \
#                '

############# pT2 > 20 GeV

cuts['hww2l2v_13TeV_em_pm_0j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 11) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_pm_1j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 11) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_mp_0j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -11) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_mp_1j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -11) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_pm_0j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 13) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_pm_1j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 13) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_mp_0j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -13) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_mp_1j_pt2ge20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -13) \
                && (std_vector_lepton_pt[1]>=20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '
############# pT2 < 20 GeV

cuts['hww2l2v_13TeV_em_pm_0j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 11) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_pm_1j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 11) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_mp_0j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -11) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_em_mp_1j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -11) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_pm_0j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 13) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_pm_1j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == 13) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_mp_0j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -13) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '+bVeto+' \
                '

cuts['hww2l2v_13TeV_me_mp_1j_pt2lt20']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (std_vector_lepton_flavour[0] == -13) \
                && (std_vector_lepton_pt[1]<20) \
                && ( mth>=60) \
                && ( mtw2>30) \
                && ( std_vector_electron_passConversionVeto[1] == 1) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '+bVeto+' \
                '

# 11 = e
# 13 = mu
# 15 = tau
'''
