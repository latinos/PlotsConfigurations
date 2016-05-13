# cuts

#cuts = {}

CutVBF = '(jetpt1>30 && jetpt2>30) && (abs(jeteta1)<4.7 && abs(jeteta2)<4.7) \
           && (njet>=2 && njet<=3) \
           && (std_vector_jet_pt[2]<=30 \
               || !(std_vector_jet_pt[2]>30 \
                    && ( ((jeteta1 - std_vector_jet_eta[2])>0 && (jeteta2 - std_vector_jet_eta[2])<0) \
                      || ((jeteta2 - std_vector_jet_eta[2])>0 && (jeteta1 - std_vector_jet_eta[2])<0) ))) \
         '

CutVBFextra = '(abs(std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2))/detajj < 0.5 \
                && (abs(std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2))/detajj < 0.5 \
                && detajj>2.5 && mjj>500 && ptll>45 \
              '
              # && detajj>3.5

CutWWcommon = '(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10) \
                && mll>12 && metPfType1 > 20 \
                && trigger==1. && mpmet>20. && nextra==0 \
                && bveto_ip==1 && nbjettche==0 \
                && (njet==0 || njet==1 || (dphilljetjet<pi/180.*165. || !sameflav)) \
                && (!sameflav \
                || ( (njet!=0 && njet!=1) && (njet==0 || njet==1 || (pfmet>45)) )) \
              '
              # || ( (njet!=0 || dymva1>0.88) && (njet!=1 || dymva1>0.84) && (njet==0 || njet==1 || (pfmet>45)) )) \
              # && min(projpfmet,projtkmet)>20
              # && (zveto==1 || !sameflav)
              # && bveto_mu==1
              # && (ch1*ch2)<0

supercut =  '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
              && (abs(std_vector_lepton_flavour[1]) == 11 || abs(std_vector_lepton_eta[1])<2.4) \
              && (abs(std_vector_lepton_flavour[0]) == 11 || abs(std_vector_lepton_eta[0])<2.4) \
            '
            # && (abs(std_vector_lepton_flavour[1]) == 13 || abs(std_vector_lepton_eta[1])<2.5) \

cuts['hww2l2v_13TeV_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                && ( mth>=60) \
                                && ( std_vector_jet_pt[1] > 30 ) \
                                && ( std_vector_jet_pt[2] > 30 ) \
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

# CutsCut  = '( (!sameflav) && '+ CutWWcommon+CutVBF+CutVBFextra' ) '

# jetpt1 = std_vector_jet_pt[0]
# jetpt2 = std_vector_jet_pt[1]
# jeteta1 = std_vector_jet_eta[0]
# jeteta2 = std_vector_jet_eta[1]

# 11 = e
# 13 = mu
# 15 = tau

