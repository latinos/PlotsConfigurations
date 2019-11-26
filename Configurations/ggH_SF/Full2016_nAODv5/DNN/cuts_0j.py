
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && zeroJet \
           '

# Some cuts

dymva0jetee = 'hww_DYmvaDNN_0j(Entry$) > 0.975'
dymva0jetmm = 'hww_DYmvaDNN_0j(Entry$) > 0.975'

# Higgs Signal Regions: ee/uu * 0/1 jet
cuts['hww2l2v_13TeV_2016_0jee_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_0jee_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && Lepton_pt[1]<20 \
                             && Higgs0jetmm \
                             && '+dymva0jetmm+' \
                             '

## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_2016_top_0jee'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && topcr && ZVeto \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_top_0jmm'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && topcr && ZVeto \
                             && '+dymva0jetmm+' \
                             '

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_2016_WW_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && wwcr \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_WW_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && wwcr \
                             && '+dymva0jetmm+' \
                             '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Zpeak && bVeto \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Zpeak && bVeto \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && Zpeak && bVeto \
                             && '+dymva0jetee+' \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_btag_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && topcr && Zpeak \
                             && '+dymva0jetee+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && topcr && Zpeak \
                             && '+dymva0jetmm+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jdf'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && topcr && Zpeak \
                             && '+dymva0jetee+' \
                             '

## Acc Denominator
cuts['hww2l2v_13TeV_2016_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '

## H Acc Numerator: loose dymva + H sel
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && Lepton_pt[1]>=20 \
                             && Higgs0jetee \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && sr && Lepton_pt[1]<20 \
                             && Higgs0jetee \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_2016_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && wwcr \
                             && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && wwcr \
                             && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '

