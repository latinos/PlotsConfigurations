# cuts

supercut = 'mll>60 && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'



# cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                '

cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 && CleanJet_pt[0]>20\
               '

# cuts['Zee_highpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] > 30 \
#                '

# cuts['Zmm_highpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] > 30 \
#                '

# cuts['Zee_lowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] < 30 \
#                '

# cuts['Zmm_lowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] < 30 \
#                '

# ################ Low pt bins

# cuts['Zee_lowpt20']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] < 20 \
#                '

# cuts['Zmm_lowpt20']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] < 20 \
#                '

# cuts['Zee_lowpt20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                 && CleanJet_pt[0] > 20  && CleanJet_pt[0] < 30 \
#                '

cuts['Zmm_lowpt20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && CleanJet_pt[0] > 20  && CleanJet_pt[0] < 30 \
               '
###############################################################################

# cuts['Zmm_bigeta']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3 \
#                 '

# cuts['Zmm_smalleta']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 \
#                 '

# cuts['Zee_bigeta']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3 \
#                 '

# cuts['Zee_smalleta']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 \
#                 '

# cuts['Zmm_bigetalowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3 && CleanJet_pt[0] < 30 \
#                 '

# cuts['Zmm_smalletalowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 && CleanJet_pt[0] < 30 \
#                 '

# cuts['Zee_bigetalowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3  && CleanJet_pt[0] < 30 \
#                 '

# cuts['Zee_smalletalowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 && CleanJet_pt[0] < 30\
#                 '


# cuts['Zmm_bigetahighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3 && CleanJet_pt[0] > 30 \
#                 '

# cuts['Zmm_smalletahighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 && CleanJet_pt[0] > 30 \
#                 '

# cuts['Zee_bigetahighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) > 3  && CleanJet_pt[0] > 30 \
#                 '

# cuts['Zee_smalletahighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <2.5 && CleanJet_pt[0] > 30\
#                 '
  
################# 
# horns

# cuts['Zmm_horn']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                 '

# cuts['Zmm_hornlowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 30 \
#                  '


# cuts['Zmm_hornlowpt20']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 20 \
#                  '


cuts['Zmm_hornlowpt20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
                 && CleanJet_pt[0] > 20  && CleanJet_pt[0] < 30 \
                 '


# cuts['Zmm_hornhighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 30 \
#                  '

# cuts['Zee_horn']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                 '


# cuts['Zee_hornlowpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 30 \
#                 '

# cuts['Zee_hornlowpt20']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 20 \
#                 '

# cuts['Zee_hornlowpt20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 20 && CleanJet_pt[0] < 30 \
#                 '

# cuts['Zee_hornhighpt']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 30 \
#                 '

# ###################
# # Horns with fixing cut

# cuts['Zmm_hornlowptfixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2\
#                  '

# cuts['Zee_hornlowptfixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] < 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2 \
#                  '

# cuts['Zmm_hornhighptfixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2\
#                  '

# cuts['Zee_hornhighptfixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2 \
#                  '



cuts['Zmm_hornlowptfixed20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
                 && CleanJet_pt[0] > 20  && CleanJet_pt[0] < 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2\
                 '

# cuts['Zee_hornlowptfixed20_30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && abs(CleanJet_eta[0]) <= 3 && abs(CleanJet_eta[0]) >= 2.5 \
#                  && CleanJet_pt[0] > 20  && CleanJet_pt[0] < 30 && Jet_neHEF[CleanJet_jetIdx[0]] < 0.2 \
#                  '


#####################
# Fixing cut

# cuts['Zee_fixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 && CleanJet_pt[0]>20\
#                  && (abs(CleanJet_eta[0]) > 3 || abs(CleanJet_eta[0]) < 2.5 || \
#                    CleanJet_pt[0] > 30 || Jet_neHEF[CleanJet_jetIdx[0]] < 0.2)\
#                 '

cuts['Zmm_fixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 && CleanJet_pt[0]>20\
                 && (abs(CleanJet_eta[0]) > 3 || abs(CleanJet_eta[0]) < 2.5 || \
                   CleanJet_pt[0] > 30 || Jet_neHEF[CleanJet_jetIdx[0]] < 0.2)\
                '
