
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && oneJet \
           '

# Some cuts

dymva1jetee = 'hww_DYmvaDNN_1j(Entry$) > 0.975'
dymva1jetmm = 'hww_DYmvaDNN_1j(Entry$) > 0.975'

# Higgs Signal Regions: ee/uu * 0/1 jet
cuts['hww2l2v_13TeV_2016_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr \
                             && Higgs1jetee \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr \
                             && Higgs1jetmm \
                             && '+dymva1jetmm+' \
                             '

## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_2016_top_1jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && topcr && ZVeto \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_top_1jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && topcr && ZVeto \
                             && '+dymva1jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_2016_WW_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && wwcr \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_WW_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && wwcr \
                             && '+dymva1jetmm+' \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak && bVeto \
                             && '+dymva1jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak && bVeto \
                             && '+dymva1jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak && bVeto \
                             && '+dymva1jetee+' \
                             '

## Acc Denominator
cuts['hww2l2v_13TeV_2016_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '

## H Acc Numerator: loose dymva + H sel
cuts['hww2l2v_13TeV_2016_1jee_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr \
                             && Higgs1jetee \
                             && hww_DYmvaDNN_1j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr \
                             && Higgs1jetee \
                             && hww_DYmvaDNN_1j(Entry$)>0.8 \
                             '

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_2016_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && wwcr \
                             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && wwcr \
                             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '
