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
LepCats['incl_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 \
                 || (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
LepCats['ElCh_']='( (abs(Lepton_pdgId[0])==11) && Lepton_pt[0]>30 )'
LepCats['MuCh_']='( (abs(Lepton_pdgId[0])==13) && Lepton_pt[0]>27 )'
# FIXME: maybe need to cut > 35 for ele due to fakeW calculation

WvsQCD = 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[idxCleanFatJetW]], -1)'
MD_WvsQCD = 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[idxCleanFatJetW]], -1)'

# mistag rate in permille
DeepTagCats= {
    '25_': '({0} > 0.763)'.format(WvsQCD),
    '10_': '({0} > 0.918)'.format(WvsQCD),
    '05_': '({0} > 0.960)'.format(WvsQCD),

    '25MD_': '({0} > 0.506)'.format(MD_WvsQCD),
    '10MD_': '({0} > 0.731)'.format(MD_WvsQCD),
    '05MD_': '({0} > 0.828)'.format(MD_WvsQCD),
}

BoostProcCats={
    '': '1',
    'VBF_': 'DNN_isVBF_OTF[0] > 0.7',
    'GGF_': 'DNN_isVBF_OTF[0] <= 0.7',
}

BoostCats={
'BoostedSR_': '1 \
            && boostedNoTau21[0] \
            && boostedSignalWMassNoTau21[0] \
            && bVeto[0]',
'BoostedSB_': '1 \
            && boosted[0] \
            && !boostedSignalWMassNoTau21[0] \
            && boostedSidebandWMassNoTau21[0] \
            && bVeto[0]',
'BoostedTopCR_': '1 \
            && boostedNoTau21[0] \
            && boostedSignalWMassNoTau21[0] \
            && !bVeto[0]',
}


##=== Define cuts ===###
for Lep in LepCats:
    for BCat in BoostCats:
        for BProcCat in BoostProcCats:
            for DTCat in DeepTagCats:
                cuts[Lep+DTCat+BProcCat+BCat]=  BoostCats[BCat]\
                                +'&&'+BoostProcCats[BProcCat]\
                                +'&&'+LepCats[Lep]\
                                +'&&'+DeepTagCats[DTCat]
