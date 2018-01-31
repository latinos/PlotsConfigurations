# cuts

#cuts = {}
  
supercut = 'veto_EMTFBug \
            && mll>20  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30 \
            && detajj>2.5 \
            && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
            && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
            && metPfType1 > 30 \
            && mjj>500'
            #&& (abs(std_vector_jet_eta[0])<5.0) && (abs(std_vector_jet_eta[1])<5.0) \
            #&& dmZllRecoMuon > 15 \
            
tauVeto = ' \
            && ( std_vector_tau_pt[0] < 18 || std_vector_tau_looseIso_dbeta[0] < 1. || (sqrt( pow(std_vector_tau_eta[0] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[0] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[0] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[0] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[1] < 18 || std_vector_tau_looseIso_dbeta[1] < 1. || (sqrt( pow(std_vector_tau_eta[1] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[1] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[1] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[1] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[2] < 18 || std_vector_tau_looseIso_dbeta[2] < 1. || (sqrt( pow(std_vector_tau_eta[2] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[2] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[2] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[2] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[3] < 18 || std_vector_tau_looseIso_dbeta[3] < 1. || (sqrt( pow(std_vector_tau_eta[3] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[3] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[3] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[3] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[4] < 18 || std_vector_tau_looseIso_dbeta[4] < 1. || (sqrt( pow(std_vector_tau_eta[4] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[4] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[4] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[4] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[5] < 18 || std_vector_tau_looseIso_dbeta[5] < 1. || (sqrt( pow(std_vector_tau_eta[5] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[5] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[5] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[5] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[6] < 18 || std_vector_tau_looseIso_dbeta[6] < 1. || (sqrt( pow(std_vector_tau_eta[6] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[6] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[6] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[6] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[7] < 18 || std_vector_tau_looseIso_dbeta[7] < 1. || (sqrt( pow(std_vector_tau_eta[7] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[7] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[7] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[7] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[8] < 18 || std_vector_tau_looseIso_dbeta[8] < 1. || (sqrt( pow(std_vector_tau_eta[8] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[8] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[8] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[8] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) \
            && ( std_vector_tau_pt[9] < 18 || std_vector_tau_looseIso_dbeta[9] < 1. || (sqrt( pow(std_vector_tau_eta[9] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_tau_phi[9] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3 || sqrt( pow(std_vector_tau_eta[9] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_tau_phi[9] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) )\
            '
            

BVeto = ' && ( std_vector_jet_pt[0] < 20 || (std_vector_jet_csvv2ivf[0] < 0.8484 )  ) \
          && ( std_vector_jet_pt[1] < 20 || (std_vector_jet_csvv2ivf[1] < 0.8484 )  ) \
          && ( std_vector_jet_pt[2] < 20 || (std_vector_jet_csvv2ivf[2] < 0.8484 )  ) \
          && ( std_vector_jet_pt[3] < 20 || (std_vector_jet_csvv2ivf[3] < 0.8484 )  ) \
          && ( std_vector_jet_pt[4] < 20 || (std_vector_jet_csvv2ivf[4] < 0.8484 )  ) \
          && ( std_vector_jet_pt[5] < 20 || (std_vector_jet_csvv2ivf[5] < 0.8484 )  ) \
          && ( std_vector_jet_pt[6] < 20 || (std_vector_jet_csvv2ivf[6] < 0.8484 )  ) \
          && ( std_vector_jet_pt[7] < 20 || (std_vector_jet_csvv2ivf[7] < 0.8484 )  ) \
          && ( std_vector_jet_pt[8] < 20 || (std_vector_jet_csvv2ivf[8] < 0.8484 )  ) \
          && ( std_vector_jet_pt[9] < 20 || (std_vector_jet_csvv2ivf[9] < 0.8484 )  ) \
          '
softMuVeto = '\
            && ( std_vector_softMuPt[0] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[0] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[0] - std_vector_lepton_phi[0])-pi)-pi, 2) )< 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[0] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[0] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[1] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[1] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[1] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[1] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[1] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[2] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[2] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[2] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[2] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[2] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[3] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[3] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[3] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[3] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[3] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[4] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[4] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[4] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[4] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[4] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[5] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[5] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[5] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[5] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[5] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[6] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[6] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[6] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[6] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[6] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[7] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[7] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[7] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[7] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[7] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[8] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[8] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[8] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[8] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[8] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) ) \
            && ( std_vector_softMuPt[9] < 3 || ((abs(std_vector_lepton_flavour[0]) == 13. && sqrt( pow(std_vector_softMuEta[9] - std_vector_lepton_eta[0], 2) + pow(abs(abs(std_vector_softMuPhi[9] - std_vector_lepton_phi[0])-pi)-pi, 2) ) < 0.3) || (abs(std_vector_lepton_flavour[1]) == 13. && sqrt( pow(std_vector_softMuEta[9] - std_vector_lepton_eta[1], 2) + pow(abs(abs(std_vector_softMuPhi[9] - std_vector_lepton_phi[1])-pi)-pi, 2) ) < 0.3 ) ) )\
            '
bJetVeto = BVeto + softMuVeto
bJetTag  = ' && !( 1' + bJetVeto + ')'

#
# Signal Regions
#


#cuts['wwjj_13TeV_ee']  = 'abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*11 \
                             #&& abs(mll - 91) > 15' + tauVeto + bJetVeto
#cuts['wwjj_13TeV_uu']  = 'abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 13*13' + tauVeto + bJetVeto

#cuts['wwjj_13TeV_eu']  = 'abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == 11*13' + tauVeto + bJetVeto

#cuts['wwjj_13TeV_all']  = '(abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != 11*11 || abs(mll - 91) > 15)' + tauVeto + bJetVeto

mjj0 = 'mjj<=800'
mjj1 = 'mjj>800 && mjj<=1100'
mjj2 = 'mjj>1100 && mjj<=1500'
mjj3 = 'mjj>1500'

# 20,100,180,400,600
mll0 = '&& mll<=100'
mll1 = '&& mll>100 && mll<=180'
mll2 = '&& mll>180 && mll<=300'
mll3 = '&& mll>300'

zveto = '&& (abs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) != 11*11 || abs(mll - 91) > 15)'

cuts['wwjj_bin0']  = mjj0 + mll0 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin1']  = mjj1 + mll0 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin2']  = mjj2 + mll0 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin3']  = mjj3 + mll0 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin4']  = mjj0 + mll1 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin5']  = mjj1 + mll1 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin6']  = mjj2 + mll1 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin7']  = mjj3 + mll1 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin8']  = mjj0 + mll2 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin9']  = mjj1 + mll2 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin10']  = mjj2 + mll2 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin11']  = mjj3 + mll2 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin12']  = mjj0 + mll3 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin13']  = mjj1 + mll3 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin14']  = mjj2 + mll3 + zveto + tauVeto + bJetVeto
cuts['wwjj_bin15']  = mjj3 + mll3 + zveto + tauVeto + bJetVeto
