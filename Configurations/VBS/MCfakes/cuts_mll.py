# cuts

#cuts = {}
  
supercut = 'mll>20  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && ( abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1] * ( 1. + max(0., (std_vector_lepton_chargedHadronIso[1]+max(std_vector_lepton_neutralHadronIso[1] +std_vector_lepton_photonIso[1] - jetRho*std_vector_electron_effectiveArea[1],0))/std_vector_lepton_pt[1] - (0.0588+(abs(std_vector_lepton_eta[1]) > 1.479)*-0.0017))) > 25) \
            && ( abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_pt[1] * ( 1. + max(0., (std_vector_lepton_chargedHadronIso[1]+max(std_vector_lepton_neutralHadronIso[1] +std_vector_lepton_photonIso[1] - 0.5 * std_vector_lepton_sumPUPt[1],0))/std_vector_lepton_pt[1] - 0.15)) > 25 ) \
            && std_vector_lepton_pt[2]<10 '

# Optimization on dEtajj

optim={}
optim['mll20'] = ' &&  mll > 20.0 ' 
optim['mll30'] = ' &&  mll > 30.0 ' 
optim['mll40'] = ' &&  mll > 40.0 ' 
optim['mll50'] = ' &&  mll > 50.0 ' 
optim['mll60'] = ' &&  mll > 60.0 ' 
optim['mll70'] = ' &&  mll > 70.0 ' 
optim['mll80'] = ' &&  mll > 80.0 ' 


for iCut in optim:

  # VBS Cut
  
  VBSCut =   '&& (njet>=2) \
              && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
              && metPfType1 > 20 \
              && detajj>2.5 \
              && mjj>500 ' + optim[iCut]
             
  #           && mll>50 \
  #           && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.75) \
  #           && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.75) '
  
  BAlgo = 'cmvav2'
  BWP   = '0.875'
  #BWP   = '0.185'
  
  BVeto = ' && ( std_vector_jet_pt[0] < 20 || std_vector_jet_'+BAlgo+'[0] < '+BWP+' ) \
            && ( std_vector_jet_pt[1] < 20 || std_vector_jet_'+BAlgo+'[1] < '+BWP+' ) \
            && ( std_vector_jet_pt[2] < 20 || std_vector_jet_'+BAlgo+'[2] < '+BWP+' ) \
            && ( std_vector_jet_pt[3] < 20 || std_vector_jet_'+BAlgo+'[3] < '+BWP+' ) \
            && ( std_vector_jet_pt[4] < 20 || std_vector_jet_'+BAlgo+'[4] < '+BWP+' ) \
            && ( std_vector_jet_pt[5] < 20 || std_vector_jet_'+BAlgo+'[5] < '+BWP+' ) \
            && ( std_vector_jet_pt[6] < 20 || std_vector_jet_'+BAlgo+'[6] < '+BWP+' ) \
            && ( std_vector_jet_pt[7] < 20 || std_vector_jet_'+BAlgo+'[7] < '+BWP+' ) \
            && ( std_vector_jet_pt[8] < 20 || std_vector_jet_'+BAlgo+'[8] < '+BWP+' ) \
            && ( std_vector_jet_pt[9] < 20 || std_vector_jet_'+BAlgo+'[9] < '+BWP+' ) '
  
  Btag  = ' && (    ( std_vector_jet_pt[0] > 20 && std_vector_jet_'+BAlgo+'[0] > '+BWP+' ) \
                 || ( std_vector_jet_pt[1] > 20 && std_vector_jet_'+BAlgo+'[1] > '+BWP+' ) \
                 || ( std_vector_jet_pt[2] > 20 && std_vector_jet_'+BAlgo+'[2] > '+BWP+' ) \
                 || ( std_vector_jet_pt[3] > 20 && std_vector_jet_'+BAlgo+'[3] > '+BWP+' ) \
                 || ( std_vector_jet_pt[4] > 20 && std_vector_jet_'+BAlgo+'[4] > '+BWP+' ) \
                 || ( std_vector_jet_pt[5] > 20 && std_vector_jet_'+BAlgo+'[5] > '+BWP+' ) \
                 || ( std_vector_jet_pt[6] > 20 && std_vector_jet_'+BAlgo+'[6] > '+BWP+' ) \
                 || ( std_vector_jet_pt[7] > 20 && std_vector_jet_'+BAlgo+'[7] > '+BWP+' ) \
                 || ( std_vector_jet_pt[8] > 20 && std_vector_jet_'+BAlgo+'[8] > '+BWP+' ) \
                 || ( std_vector_jet_pt[9] > 20 && std_vector_jet_'+BAlgo+'[9] > '+BWP+' ) \
               ) '
  
  
  
  #
  # Signal Regions
  #
  
  cuts['wwjj_13TeV_ee_mm_'+iCut]  = '(std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  11) \
                               && metPfType1 > 40 \
                               && abs(mll - 91) > 15' + BVeto + VBSCut
  cuts['wwjj_13TeV_ee_pp_'+iCut]  = '(std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -11) \
                               && metPfType1 > 40 \
                               && abs(mll - 91) > 15' + BVeto + VBSCut
  
  cuts['wwjj_13TeV_eu_mm_'+iCut]  = '((std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  13) || (std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  11))' + BVeto + VBSCut
  cuts['wwjj_13TeV_eu_pp_'+iCut]  = '((std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -13) || (std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -11))' + BVeto + VBSCut
  
  cuts['wwjj_13TeV_uu_mm_'+iCut]  = '(std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  13)' + BVeto + VBSCut
  cuts['wwjj_13TeV_uu_pp_'+iCut]  = '(std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -13)' + BVeto + VBSCut


#
# Fake control regions (Btag)
#

#cuts['btag_13TeV_ee_mm']  = '(std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  11) \
#                             && metPfType1 > 40 \
#                             && abs(mll - 91) > 15' + BTag
#cuts['btag_13TeV_ee_pp']  = '(std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -11) \
#                             && metPfType1 > 40 \
#                             && abs(mll - 91) > 15' + BTag
#
#cuts['btag_13TeV_eu_mm']  = '((std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  13) || (std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  11))' + BTag
#cuts['btag_13TeV_eu_pp']  = '((std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -13) || (std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -11))' + BTag
#
#cuts['btag_13TeV_uu_mm']  = '(std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  13)' + BTag
#cuts['btag_13TeV_uu_pp']  = '(std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -13)' + BTag

#
# WZ control region
#


