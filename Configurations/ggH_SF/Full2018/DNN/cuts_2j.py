
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && 2jggH \
           '

# Some cuts

dymva2jetee = 'hww_DYmvaDNN_2j(Entry$) > 0.970'
dymva2jetmm = 'hww_DYmvaDNN_2j(Entry$) > 0.970'

# Higgs Signal Regions: ee/uu * 0/1 jet
cuts['hww2l2v_13TeV_2018_2jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && '+dymva2jetee+' \
                             '

cuts['hww2l2v_13TeV_2018_2jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && '+dymva2jetmm+' \
                             '

## Loose dymva + H sel for DY Acc
cuts['hww2l2v_13TeV_2018_2jee_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetee \
                             && hww_DYmvaDNN_2j(Entry$)>0.8 \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_HAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && Higgs2jetmm \
                             && hww_DYmvaDNN_2j(Entry$)>0.8 \
                             '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_2018_top_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && topcr \
                             && ZVeto \
                             && '+dymva2jetee+' \
                             '

cuts['hww2l2v_13TeV_2018_top_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && topcr \
                             && ZVeto \
                             && '+dymva2jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva

cuts['hww2l2v_13TeV_2018_WW_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && '+dymva2jetee+' \
                             '

cuts['hww2l2v_13TeV_2018_WW_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && '+dymva2jetmm+' \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_2018_DYin_2jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && '+dymva2jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_2jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && '+dymva2jetmm+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

cuts['hww2l2v_13TeV_2018_DYin_2jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                             && bVeto \
                             && '+dymva2jetee+' \
                             && fabs(91.1876 - mll) < 7.5  \
                             '

## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2018_2jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && bVeto \
                             && ZVeto \
                             && hww_DYmvaDNN_2j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2018_2jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && bVeto \
                             && ZVeto \
                             && hww_DYmvaDNN_2j(Entry$) > 0.8 \
                             '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_2018_WW_2jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
                             && wwcr \
                             && hww_DYmvaDNN_2j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2018_WW_2jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) \
                             && wwcr \
                             && hww_DYmvaDNN_2j(Entry$) > 0.8 \
                             '
