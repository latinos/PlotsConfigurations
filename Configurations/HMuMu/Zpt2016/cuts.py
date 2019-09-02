# cuts

supercut = '   (mll > 70 && mll < 110) \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>20 \
            && ((Lepton_isTightMuon_cut_Tight80x[0]==1 && Lepton_pt[0]>26) || (Lepton_isTightMuon_cut_Tight80x[1]==1 && Lepton_pt[1]>26)) \
            && (nLepton>=2 && (Alt$(Lepton_pt[2],0)<10) || Alt$(Lepton_pdgId[2],13)==13) \
            && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
           '

# supercut = '   (mll > 70 && mll < 110) \
#             && Lepton_pt[0]>26 \
#             && Lepton_pt[1]>20 \
#             && (nLepton>=2 && (Alt$(Lepton_pt[2],0)<10) || Alt$(Lepton_pdgId[2],13)==13) \
#             && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
#             && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
#            '

##&& ptll>30 \
##&& MET_pt > 20 \


## Signal regions

cuts['hmm_13TeV_Incl']  = '       bVeto \
                              '

cuts['hmm_13TeV_0j']  = '         Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                              '

cuts['hmm_13TeV_1j']  = '         Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                              '

cuts['hmm_13TeV_2j']  = '         Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && Alt$(CleanJet_pt[2],0)<30 \
                               && bVeto \
                              '
