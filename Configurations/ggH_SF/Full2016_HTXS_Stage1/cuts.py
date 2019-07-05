
supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
           '

# Some cuts

dymva0jet = 'dymvaggh > 0.991'
dymva1jet = 'dymvaggh > 0.95'

Higgs0jet = 'std_vector_lepton_pt[1] < 50 && abs(dphill) < 1.70 && mll < 55 && mth > 50'
Higgs1jet = 'std_vector_lepton_pt[0] < 50 && abs(dphill) < 1.75 && mll < 57 && mth > 50 && mth <155'

# Higgs Signal Regions: ee/uu * 0/1 jet

cuts['hww2l2v_13TeV_0jee_pt2ge20'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_pt[1]>=20) \
             && '+bVeto+' \
             && '+dymva0jet+' \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_0jee_pt2lt20'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_pt[1]<20) \
             && '+bVeto+' \
             && '+dymva0jet+' \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_1jee'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && '+dymva1jet+' \
             && '+Higgs1jet+' \
             '
               
#cuts['hww2l2v_13TeV_1jee_pt2ge20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_pt[1]>=20) \
#             && '+bVeto+' \
#             && '+dymva1jet+' \
#             && '+Higgs1jet+' \
#             '
 
#cuts['hww2l2v_13TeV_1jee_pt2lt20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_pt[1]<20) \
#             && '+bVeto+' \
#             && '+dymva1jet+' \
#             && '+Higgs1jet+' \
#             '

cuts['hww2l2v_13TeV_0jmm_pt2ge20'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_pt[1]>=20) \
             && '+bVeto+' \
             && '+dymva0jet+' \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_0jmm_pt2lt20'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_pt[1]<20) \
             && '+bVeto+' \
             && '+dymva0jet+' \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_1jmm'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && '+dymva1jet+' \
             && '+Higgs1jet+' \
             '

#cuts['hww2l2v_13TeV_1jmm_pt2ge20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_pt[1]>=20) \
#             && '+bVeto+' \
#             && '+dymva1jet+' \
#             && '+Higgs1jet+' \
#             '

#cuts['hww2l2v_13TeV_1jmm_pt2lt20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_pt[1]<20) \
#             && '+bVeto+' \
#             && '+dymva1jet+' \
#             && '+Higgs1jet+' \
#             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_0jee_HAccNum_pt2ge20'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && (std_vector_lepton_pt[1]>=20) \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_0jee_HAccNum_pt2lt20'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && (std_vector_lepton_pt[1]<20) \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_1jee_HAccNum'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs1jet+' \
             '

#cuts['hww2l2v_13TeV_1jee_HAccNum_pt2ge20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#             && (std_vector_lepton_pt[1]>=20) \
#             && '+bVeto+' \
#             && dymvaggh > 0.6 \
#             && '+Higgs1jet+' \
#             '

#cuts['hww2l2v_13TeV_1jee_HAccNum_pt2lt20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
#             && (std_vector_lepton_pt[1]<20) \
#             && '+bVeto+' \
#             && dymvaggh > 0.6 \
#             && '+Higgs1jet+' \
#             '

cuts['hww2l2v_13TeV_0jmm_HAccNum_pt2ge20'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && (std_vector_lepton_pt[1]>=20) \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_0jmm_HAccNum_pt2lt20'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && (std_vector_lepton_pt[1]<20) \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs0jet+' \
             '

cuts['hww2l2v_13TeV_1jmm_HAccNum'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             && '+Higgs1jet+' \
             '

#cuts['hww2l2v_13TeV_1jmm_HAccNum_pt2ge20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#             && (std_vector_lepton_pt[1]>=20) \
#             && '+bVeto+' \
#             && dymvaggh > 0.6 \
#             && '+Higgs1jet+' \
#             '

#cuts['hww2l2v_13TeV_1jmm_HAccNum_pt2lt20'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
#             && fabs(91.1876 - mll) > 15  \
#             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
#             && (std_vector_lepton_pt[1]<20) \
#             && '+bVeto+' \
#             && dymvaggh > 0.6 \
#             && '+Higgs1jet+' \
#             '


## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_top_0jee'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) > 15  \
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
              && '+dymva0jet+' \
              '

cuts['hww2l2v_13TeV_top_0jmm'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) > 15  \
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
              && '+dymva0jet+' \
              '

cuts['hww2l2v_13TeV_top_1jsf'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && ((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)) \
             && fabs(91.1876 - mll) > 15  \
             && std_vector_jet_cmvav2[0]>-0.5884 \
             && '+dymva1jet+' \
             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_WW_0jee'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && '+dymva0jet+' \
             '

cuts['hww2l2v_13TeV_WW_0jmm'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && '+dymva0jet+' \
             '
 
cuts['hww2l2v_13TeV_WW_1jee'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && '+dymva1jet+' \
             '

cuts['hww2l2v_13TeV_WW_1jmm'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && '+dymva1jet+' \
             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_0jee'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) < 7.5  \
             && '+bVeto+' \
             && '+dymva0jet+' \
             '
 
cuts['hww2l2v_13TeV_DYin_1jee'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) < 7.5 \
             && '+bVeto+' \
             && '+dymva1jet+' \
             '

cuts['hww2l2v_13TeV_DYin_0jmm'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) < 7.5  \
             && '+bVeto+' \
             && '+dymva0jet+' \
             '
 
cuts['hww2l2v_13TeV_DYin_1jmm'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) < 7.5 \
             && '+bVeto+' \
             && '+dymva1jet+' \
             '

cuts['hww2l2v_13TeV_DYin_0jdf'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
             && fabs(91.1876 - mll) < 7.5  \
             && '+bVeto+' \
             && '+dymva0jet+' \
             '

cuts['hww2l2v_13TeV_DYin_1jdf'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
             && fabs(91.1876 - mll) < 7.5 \
             && '+bVeto+' \
             && '+dymva1jet+' \
             '

## DY Background IN with btag : Split ee/mm , No H cut !
#  0jet only: Negligible DY background in 1jet bTag region

cuts['hww2l2v_13TeV_DYin_btag_0jee'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && fabs(91.1876 - mll) < 7.5  \
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
             && '+dymva0jet+' \
             '

cuts['hww2l2v_13TeV_DYin_btag_0jmm'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && fabs(91.1876 - mll) < 7.5  \
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
             && '+dymva0jet+' \
             '

cuts['hww2l2v_13TeV_DYin_btag_0jdf'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
             && fabs(91.1876 - mll) < 7.5  \
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
             && '+dymva0jet+' \
             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_0jee_AccDen'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             '

cuts['hww2l2v_13TeV_1jee_AccDen'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             '

cuts['hww2l2v_13TeV_0jmm_AccDen'] = '( std_vector_jet_pt[0] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             '

cuts['hww2l2v_13TeV_1jmm_AccDen'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && fabs(91.1876 - mll) > 15  \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
             && '+bVeto+' \
             && dymvaggh > 0.6 \
             '

## Loose dymva + WW sel for DY Acc


cuts['hww2l2v_13TeV_WW_0jee_WWAccNum'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && dymvaggh > 0.6  \
             '

cuts['hww2l2v_13TeV_WW_0jmm_WWAccNum'] = '( std_vector_jet_pt[0] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && dymvaggh > 0.6  \
             '
 
cuts['hww2l2v_13TeV_WW_1jee_WWAccNum'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && dymvaggh > 0.6  \
             '

cuts['hww2l2v_13TeV_WW_1jmm_WWAccNum'] = '( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) \
             && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
             && fabs(91.1876 - mll) > 15  \
             && '+bVeto+' \
             && mll > 80 \
             && dymvaggh > 0.6  \
             '

