# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '


### Unsplitted signal regions

cuts['hww2l2v_13TeV_of0j_pth0-10']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                               && pTWW <= 10 \
                              '

cuts['hww2l2v_13TeV_of0j_pth10-200']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                               && pTWW <= 200 \
                               && pTWW > 10 \
                              '

cuts['hww2l2v_13TeV_of1j_pth0-60']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW <= 60 \
                              '

cuts['hww2l2v_13TeV_of1j_pth60-120']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW <= 120 \
                               && pTWW > 60 \
                              '

cuts['hww2l2v_13TeV_of1j_pth120-200']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                               && mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW <= 200 \
                               && pTWW > 120 \
                              '

# FIXME Define pTHjj reco variable to do a finer splitting
cuts['hww2l2v_13TeV_of2j_lowmjj_pth0-60']  = '   mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj < 350 \
                               && bVeto \
                               && pTWW <= 60 \
                              '

# FIXME Define pTHjj reco variable to do a finer splitting
cuts['hww2l2v_13TeV_of2j_lowmjj_pth60-120']  = '   mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj < 350 \
                               && bVeto \
                               && pTWW <= 120 \
                               && pTWW > 60 \
                              '

# FIXME Define pTHjj reco variable to do a finer splitting
cuts['hww2l2v_13TeV_of2j_lowmjj_pth120-200']  = '   mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj < 350 \
                               && bVeto \
                               && pTWW <= 200 \
                               && pTWW > 120 \
                              '

# FIXME Define pTHjj reco variable to do a finer splitting
cuts['hww2l2v_13TeV_of2j_mjj350-750']  = '   mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj > 350 \
                               && mjj < 700 \
                               && bVeto \
                              '


#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


## Top control regions
cuts['hww2l2v_13TeV_top_of0j']  = '    mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && btag0 \
                                  '

cuts['hww2l2v_13TeV_top_of1j']  = '    mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && btag1 \
                                  '

cuts['hww2l2v_13TeV_top_of2j']  = '    mll>50 \
                                    && mtw2>30 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && mjj < 400 \
                                    && btag2 \
                                  '

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

## DYtt control regions
cuts['hww2l2v_13TeV_dytt_of0j']  = '   mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)<30 \
                                    && bVeto \
                                   '

cuts['hww2l2v_13TeV_dytt_of1j']  = '   mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)<30 \
                                    && bVeto \
                                   '

cuts['hww2l2v_13TeV_dytt_of2j']  = '   mth<60 \
                                    && mll>40 && mll<80 \
                                    && Alt$(CleanJet_pt[0],0)>30 \
                                    && Alt$(CleanJet_pt[1],0)>30 \
                                    && mjj < 400 \
                                    && bVeto \
                                   '

