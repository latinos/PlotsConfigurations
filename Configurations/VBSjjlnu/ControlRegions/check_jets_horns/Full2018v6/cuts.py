# cuts

supercut = 'mll>60 && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'


cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
               '

cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
               '


cuts['Zee_jpt30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 30) \
               '

cuts['Zmm_jpt30']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 30) \
               '

cuts['Zee_jpt40']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 40) \
               '

cuts['Zmm_jpt40']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 40) \
               '

cuts['Zee_jpt50']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 50) \
               '

cuts['Zmm_jpt50']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 50) \
               '

cuts['Zee_jpt60']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 60) \
               '

cuts['Zmm_jpt60']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 60) \
               '

cuts['Zee_jpt80']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 80) \
               '

cuts['Zmm_jpt80']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 80) \
               '

cuts['Zee_jpt100']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 100) \
               '

cuts['Zmm_jpt100']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
                 && nCleanJet>=1 \
                && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 100) \
               '
