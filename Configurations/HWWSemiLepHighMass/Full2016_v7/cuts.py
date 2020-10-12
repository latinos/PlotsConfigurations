# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    Alt$(Lepton_pt[1],0)<=10 \
&&  abs(Lepton_eta[0])<2.5 \
'
# LepWPCut already implemented in Steps.py

##=== Define categories ===###
LepCats={}
# LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 \
#                  || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 )'
LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
# FIXME: probably need to cut > 35 for ele due to fakeW calculation


BoostProcCats={}
BoostProcCats['']='1'
BoostProcCats['VBF_']='(DNN_isVBF_OTF[0] > 0.70)'
BoostProcCats['GGF_']='(DNN_isVBF_OTF[0] <= 0.70)'


BoostCats={}
# BoostCats['Boosted']='boosted[0]'
BoostCats['BoostedSR_']='1 \
                        && boosted[0] \
                        && boostedSignalWMass[0] \
                        && bVeto[0]'
BoostCats['BoostedSB_']='1 \
                       && boosted[0] \
                       && !boostedSignalWMassNoTau21[0] \
                       && boostedSidebandWMassNoTau21[0] \
                       && bVeto[0]'
BoostCats['BoostedTopCR_']='1 \
                       && boosted[0] \
                       && boostedSignalWMass[0] \
                       && !bVeto[0]'



# High Mass category
dPhiWWCut  ='&& (abs(dPhi_WW_boosted[0]) > 2.2)'
sumPtCut   ='&& (Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9999) > 850)'

HMProcCats={}

# HMProcCats['58']='tau21DDT<0.58'+dPhiWWCut+sumPtCut
HMProcCats['55_VBF']='(DNN_isVBF_OTF[0]  > 0.68) && (tau21DDT<0.55)'+dPhiWWCut+sumPtCut
HMProcCats['55_GGF']='(DNN_isVBF_OTF[0] <= 0.68) && (tau21DDT<0.55)'+dPhiWWCut+sumPtCut
# HMProcCats['52']='tau21DDT<0.52'+dPhiWWCut+sumPtCut


HMCats={}
HMCats['HMSR_']='boostedNoTau21[0] \
                && boostedSignalWMassNoTau21[0] \
                && bVeto[0]'
# HMCats['HMSB_']='boostedNoTau21[0] \
#                && !boostedSignalWMassNoTau21[0] \
#                && boostedSidebandWMassNoTau21[0] \
#                && bVeto[0]'
# HMCats['HMTopCR_']='boostedNoTau21[0] \
#                && boostedSignalWMassNoTau21[0] \
#                && !bVeto[0]'


ResolveProcCats={}
ResolveProcCats['']='1'
ResolveProcCats['DNNVBF_']='DNN_isVBF_OTF[0] > 0.75'
ResolveProcCats['DNNGGF_']='DNN_isVBF_OTF[0] <= 0.75'

ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR_']='resolved[0] && resolvedSignalWMass[0] && bVeto[0]'
ResolveCats['ResolvedSB_']='resolved[0] \
                           && !resolvedSignalWMass[0] \
                           && resolvedSidebandWMass[0] \
                           && bVeto[0]'
ResolveCats['ResolvedTopCR_']='resolved[0] && resolvedSignalWMass[0] && !bVeto[0]'


QCDCats={}
# QCDCats['ResolvedQCDcr'] = 'resolvedQCDcr[0]'



##=== Define cuts ===###
for Lep in LepCats:

    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+LepCats[Lep]

    for HCat in HMCats:
        for HProcCat in HMProcCats:
            cuts[Lep+HProcCat+HCat]=  HMCats[HCat]\
                                +'&&'+HMProcCats[HProcCat]\
                                +'&&'+LepCats[Lep]

    for RCat in ResolveCats:
        for RProcCat in ResolveProcCats:
            cuts[Lep+RProcCat+RCat]=  ResolveCats[RCat]\
                                +'&&'+ResolveProcCats[RProcCat]\
                                +'&&'+LepCats[Lep]

    # for QCat in QCDCats:
    #     cuts[Lep+QCat] = QCDCats[QCat] + '&&' + LepCats[Lep]
# cuts['inclusive'] = '1'
