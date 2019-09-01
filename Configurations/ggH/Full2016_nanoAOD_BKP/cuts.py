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

#cuts['hww2l2v_13TeV_of0j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                               && mth>60 \
#                               && mtw2>30 \
#                               && Alt$(CleanJet_pt[0],0)<30 \
#                               && bVeto \
#                              '
#
#cuts['hww2l2v_13TeV_of1j']  = '   (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
#                               && mth>60 \
#                               && mtw2>30 \
#                               && Alt$(CleanJet_pt[0],0)>30 \
#                               && Alt$(CleanJet_pt[1],0)<30 \
#                               && bVeto \
#                              '
#

### Fully splitted signal regions

## e+mu- pt2>20 GeV 0 jet
cuts['hww2l2v_13TeV_em_pm_0j_pt2ge20']  = '   Lepton_pdgId[0]==-11 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## e-mu+ pt2>20 GeV 0 jet
cuts['hww2l2v_13TeV_em_mp_0j_pt2ge20']  = '   Lepton_pdgId[0]==11 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## mu+e- pt2>20 GeV 0 jet
cuts['hww2l2v_13TeV_me_pm_0j_pt2ge20']  = '   Lepton_pdgId[0]==-13 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## mu-e+ pt2>20 GeV 0 jet
cuts['hww2l2v_13TeV_me_mp_0j_pt2ge20']  = '   Lepton_pdgId[0]==13 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '


## e+mu- pt2<20 GeV 0 jet
cuts['hww2l2v_13TeV_em_pm_0j_pt2lt20']  = '   Lepton_pdgId[0]==-11 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## e-mu+ pt2<20 GeV 0 jet
cuts['hww2l2v_13TeV_em_mp_0j_pt2lt20']  = '   Lepton_pdgId[0]==11 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## mu+e- pt2<20 GeV 0 jet
cuts['hww2l2v_13TeV_me_pm_0j_pt2lt20']  = '   Lepton_pdgId[0]==-13 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '
## mu-e+ pt2<20 GeV 0 jet
cuts['hww2l2v_13TeV_me_mp_0j_pt2lt20']  = '   Lepton_pdgId[0]==13 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)<30 \
                                           && bVeto \
                                          '

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

## e+mu- pt2>20 GeV 1 jet
cuts['hww2l2v_13TeV_em_pm_1j_pt2ge20']  = '   Lepton_pdgId[0]==-11 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## e-mu+ pt2>20 GeV 1 jet
cuts['hww2l2v_13TeV_em_mp_1j_pt2ge20']  = '   Lepton_pdgId[0]==11 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## mu+e- pt2>20 GeV 1 jet
cuts['hww2l2v_13TeV_me_pm_1j_pt2ge20']  = '   Lepton_pdgId[0]==-13 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## mu-e+ pt2>20 GeV 1 jet
cuts['hww2l2v_13TeV_me_mp_1j_pt2ge20']  = '   Lepton_pdgId[0]==13 \
                                           && Lepton_pt[1]>20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '


## e+mu- pt2<20 GeV 1 jet
cuts['hww2l2v_13TeV_em_pm_1j_pt2lt20']  = '   Lepton_pdgId[0]==-11 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## e-mu+ pt2<20 GeV 1 jet
cuts['hww2l2v_13TeV_em_mp_1j_pt2lt20']  = '   Lepton_pdgId[0]==11 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## mu+e- pt2<20 GeV 1 jet
cuts['hww2l2v_13TeV_me_pm_1j_pt2lt20']  = '   Lepton_pdgId[0]==-13 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '
## mu-e+ pt2<20 GeV 1 jet
cuts['hww2l2v_13TeV_me_mp_1j_pt2lt20']  = '   Lepton_pdgId[0]==13 \
                                           && Lepton_pt[1]<20 \
                                           && mth>60 \
                                           && mtw2>30 \
                                           && Alt$(CleanJet_pt[0],0)>30 \
                                           && Alt$(CleanJet_pt[1],0)<30 \
                                           && bVeto \
                                          '

## 2 jets
## FIXME fix the mjj or additional cuts to make this orthogonal to VH2j and VBF
cuts['hww2l2v_13TeV_of2j']  = '   mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj < 400 \
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

