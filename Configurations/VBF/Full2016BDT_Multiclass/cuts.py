# cuts

#cuts = {}

supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ptll > 30 \
            && metPfType1 > 20 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && mjj > 200 \
            && (njet==2) \
            && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
            '
'''
cuts['hww2l2v_13TeV_of2j_vbf']  = '( mth>60) \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
                                      && '+bVeto+' \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_lowmjj']  = '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
                                      && (mjj>=400 && mjj<700) \
                                      && '+bVeto+' \
                                      '

cuts['hww2l2v_13TeV_of2j_vbf_highmjj']  = '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (mth>=60 && mth<125) \
                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
                                      && (mjj>=700) \
                                      && '+bVeto+' \
                                      '

#
# control regions
#


cuts['hww2l2v_13TeV_of2j_vbf_lowpurity']  = '( mth>60) \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
                                      && (hww_VBF_MYmvaBDTG(Entry$,0)<0.15) \
                                      && '+bVeto+' \
                                     '
'''

cuts['hww2l2v_13TeV_top_of2j_vbf']  = '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                    && mll>50 \
                                    && (detajj>3.5 && mjj>400) \
                                    && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                    '
'''

cuts['hww2l2v_13TeV_dytt_of2j_vbf']  = '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                     && ( mth<60) \
                                     && mll>40 && mll<80 \
                                     && (detajj>3.5 && mjj>400) \
                                     && '+bVeto+' \
                                     '
'''



# 11 = e
# 13 = mu
# 15 = tau
