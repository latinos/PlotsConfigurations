# lourdes:include an argument with the year?cuts page 118 AN2019/249
#cuts = {}
# Aliases in supercut doesnt seem to work!


##=== Define categories ===###
LepCats={}
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 )'
LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'

#cuts['hww2l2v_13TeV_SRBVH'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]>70 && mV[0]<110) && (mth>=30 && mth<125)'

#cuts['hww2l2v_13TeV_SRBVH_nomthcut'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]>70 && mV[0]<110)'

#cuts['hww2l2v_13TeV_SRBVH_nomthcut_outsidemVwindow'] = 'bVeto && CleanFatJet_pt[0]>=200 && abs(CleanFatJet_eta[0])<2.4 && (mV[0]<70 || mV[0]>110)'

# Top control region

cuts['hww2l2v_13TeV_top_CR'] = 'topcr'

# DY control region

#cuts['hww2l2v_13TeV_dytt_CR_outsideZpeak'] = 'mth < 60. && drll < 2. && (mV[0]<70 || mV[0]>110) && bVeto && mll > 40. && mll < 80.'

#cuts['hww2l2v_13TeV_dytt_CR_outsideZpeak_nomthcut'] = 'drll < 2. && (mV[0]<70 || mV[0]>110) && bVeto  && mll > 40. && mll < 80.'

WvsQCD = 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[idxCleanFatJetW]], -1)'
MD_WvsQCD = 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[idxCleanFatJetW]], -1)'

# mistag rate in permille
DeepTagCats= {
    # '25_': '({0} > 0.763)'.format(WvsQCD),
    '10_': '({0} > 0.918)'.format(WvsQCD),
    # '05_': '({0} > 0.960)'.format(WvsQCD),

    # '25MD_': '({0} > 0.506)'.format(MD_WvsQCD),
    # '10MD_': '({0} > 0.731)'.format(MD_WvsQCD),
    # '05MD_': '({0} > 0.828)'.format(MD_WvsQCD),
}

DeepProcCats={
    '': '1',
    'VBF_': '(DNN_isVBF_OTF[0] > 0.7)',
    'GGF_': '(DNN_isVBF_OTF[0] <= 0.7)',
}

DeepCats={
'BoostedSR_': '(1 \
            && boostedNoTau21[0] \
            && boostedSignalWMassNoTau21[0] \
            && bVeto[0])',
'BoostedSB_': '(1 \
            && boosted[0] \
            && !boostedSignalWMassNoTau21[0] \
            && boostedSidebandWMassNoTau21[0] \
            && bVeto[0])',
'BoostedTopCR_': '(1 \
            && boostedNoTau21[0] \
            && boostedSignalWMassNoTau21[0] \
            && !bVeto[0])',
}





# High Mass category
dPhiWWCut  ='&& abs(dPhi_WW_boosted[0]) > 2.2'
sumPtCut   ='&& Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9999) > 850'

HMProcCats={}
HMProcCats['55']='(tau21DDT<0.55'+dPhiWWCut+sumPtCut+')'


HMCats={}
HMCats['HMSR_']='(boostedNoTau21[0] \
                && boostedSignalWMassNoTau21[0] \
                && bVeto[0])'
HMCats['HMSB_']='(boostedNoTau21[0] \
               && !boostedSignalWMassNoTau21[0] \
               && boostedSidebandWMassNoTau21[0] \
               && bVeto[0])'
HMCats['HMTopCR_']='(boostedNoTau21[0] \
               && boostedSignalWMassNoTau21[0] \
               && !bVeto[0])'





ResolveProcCats={}
ResolveProcCats['']='1'
ResolveProcCats['VBF_']='(DNN_isVBF_OTF[0] > 0.75)'
ResolveProcCats['GGF_']='(DNN_isVBF_OTF[0] <= 0.75)'

ResolveCats={}
# ResolveCats['Resolved']='resolved[0]'
ResolveCats['ResolvedSR_']='(resolved[0] && resolvedSignalWMass[0] && bVeto[0])'
ResolveCats['ResolvedSB_']='(resolved[0] \
                           && !resolvedSignalWMass[0] \
                           && resolvedSidebandWMass[0] \
                           && bVeto[0])'
ResolveCats['ResolvedTopCR_']='(resolved[0] && resolvedSignalWMass[0] && !bVeto[0])'


QCDCats={}
# QCDCats['ResolvedQCDcr'] = 'resolvedQCDcr[0]'



##=== Define cuts ===###
for Lep in LepCats:

    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            cuts[Lep+BProcCat+BCat]=  BoostCats[BCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+LepCats[Lep]

    for DCat in DeepCats:
        for DProcCat in DeepProcCats:
            for DTCat in DeepTagCats:
                cuts[Lep+DTCat+DProcCat+DCat]=  DeepCats[DCat]\
                                +'&&'+DeepProcCats[DProcCat]\
                                +'&&'+LepCats[Lep]\
                                +'&&'+DeepTagCats[DTCat]
    
    for HCat in HMCats:
        for BProcCat in BoostProcCats:
            for HProcCat in HMProcCats:
                cuts[Lep+BProcCat+HProcCat+HCat]=  HMCats[HCat]\
                                +'&&'+BoostProcCats[BProcCat]\
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