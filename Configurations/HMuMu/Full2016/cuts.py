# cuts

supercut = '   ((Lepton_isTightMuon_cut_Tight80x[0]==1 && Lepton_pt[0]>26) \
            ||  (Lepton_isTightMuon_cut_Tight80x[1]==1 && Lepton_pt[1]>26)) \
            && (nLepton>=2 && (Alt$(Lepton_pt[2],0)<10) || Alt$(Lepton_pdgId[2],13)==13) \
            && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
            '

# supercut = '   Lepton_pt[0]>26 \
#             && Lepton_pt[1]>20 \
#             && (nLepton>=2 && (Alt$(Lepton_pt[2],0)<10) || Alt$(Lepton_pdgId[2],13)==13) \
#             && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
#             && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
#           '

##&& ptll>30 \
##&& MET_pt > 20 \

doCR = True

## Signal regions

cuts['hmm_13TeV_Incl']  = '         (mll>105 && mll<160) \
                                 && bVeto \
                              '

cuts['hmm_13TeV_0j']    = '       (mll>105 && mll<160) \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                              '

cuts['hmm_13TeV_1j']    = '       (mll>105 && mll<160) \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                              '

cuts['hmm_13TeV_2j']    = '       (mll>105 && mll<160) \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && Alt$(CleanJet_pt[2],0)<30 \
                               && bVeto \
                              '
## DY control regions

if doCR == True :

    cuts['hmm_13TeV_DY_Incl']  = '      (mll>76 && mll<106) \
                                     && bVeto \
                                    '

    cuts['hmm_13TeV_DY_0j']    = '    (mll>76 && mll<106) \
                                   && Alt$(CleanJet_pt[0],0)<30 \
                                   && bVeto \
                                  '

    cuts['hmm_13TeV_DY_1j']    = '    (mll>76 && mll<106) \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)<30 \
                                   && bVeto \
                                  '

    cuts['hmm_13TeV_DY_2j']    = '    (mll>76 && mll<106) \
                                   && Alt$(CleanJet_pt[0],0)>30 \
                                   && Alt$(CleanJet_pt[1],0)>30 \
                                   && Alt$(CleanJet_pt[2],0)<30 \
                                   && bVeto \
                                  '
