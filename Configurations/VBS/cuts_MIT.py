# cuts

#cuts = {}

#VBSCut   = '&& (njet>=2) && (njet<=5) \
VBSCut   = '&& (njet>=2) \
            && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
            && (detajj>2.5 && mjj>500) \
            && metPfType1 >  20 \
            && mll>50 \
            && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.75) \
            && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.75) '            

#VBSCut   = '&& mll>50 \
#           && metPfType1 > 20 \
#           && (detajj>2.5 && mjj>500) \
#           && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.75) \
#           && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.75) '            
#          

  
supercut = 'mll>20  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && ( abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1] * ( 1. + max(0., (std_vector_lepton_chargedHadronIso[1]+max(std_vector_lepton_neutralHadronIso[1] +std_vector_lepton_photonIso[1] - jetRho*std_vector_electron_effectiveArea[1],0))/std_vector_lepton_pt[1] - (0.0588+(abs(std_vector_lepton_eta[1]) > 1.479)*-0.0017))) > 25) \
            && ( abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_pt[1] * ( 1. + max(0., (std_vector_lepton_chargedHadronIso[1]+max(std_vector_lepton_neutralHadronIso[1] +std_vector_lepton_photonIso[1] - 0.5 * std_vector_lepton_sumPUPt[1],0))/std_vector_lepton_pt[1] - 0.15)) > 25 ) \
            && std_vector_lepton_pt[2]<10 ' + VBSCut

#\
#            && (njet>=2) && (njet<=5) \
#            && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#            && (detajj>2.5 && mjj>500) \
#           '

            #&& (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
            #&& metPfType1 > 20 \

BAlgo = 'cmvav2'
#BWP   = '0.875'
BWP   = '0.185'

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

cuts['wwjj_13TeV_ee_pp']  = '(std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  11) \
                             && metPfType1 > 40 \
                             && abs(mll - 91) > 15' + BVeto
cuts['wwjj_13TeV_ee_mm']  = '(std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -11) \
                             && metPfType1 > 40 \
                             && abs(mll - 91) > 15' + BVeto

cuts['wwjj_13TeV_eu_pp']  = '((std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  13) || (std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  11))' + BVeto
cuts['wwjj_13TeV_eu_mm']  = '((std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -13) || (std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -11))' + BVeto

cuts['wwjj_13TeV_uu_pp']  = '(std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  13)' + BVeto
cuts['wwjj_13TeV_uu_mm']  = '(std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -13)' + BVeto

#
# No ++,-- split
#

cuts['wwjj_13TeV_ee']  = '(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]) == 11*11 \
                             && metPfType1 > 40 \
                             && abs(mll - 91) > 15' + BVeto

cuts['wwjj_13TeV_eu']  = '(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]) == 11*13 ' + BVeto
cuts['wwjj_13TeV_uu']  = '(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]) == 13*13 ' + BVeto


#
# Fake control regions (Btag)
#

#cuts['btag_13TeV_ee_pp']  = '(std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  11) \
#                             && metPfType1 > 40 \
#                             && abs(mll - 91) > 15' + BTag
#cuts['btag_13TeV_ee_mm']  = '(std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -11) \
#                             && metPfType1 > 40 \
#                             && abs(mll - 91) > 15' + BTag
#
#cuts['btag_13TeV_eu_pp']  = '((std_vector_lepton_flavour[0] ==  11 && std_vector_lepton_flavour[1] ==  13) || (std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  11))' + BTag
#cuts['btag_13TeV_eu_mm']  = '((std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -13) || (std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -11))' + BTag
#
#cuts['btag_13TeV_uu_pp']  = '(std_vector_lepton_flavour[0] ==  13 && std_vector_lepton_flavour[1] ==  13)' + BTag
#cuts['btag_13TeV_uu_mm']  = '(std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -13)' + BTag

#
# WZ control region
#


