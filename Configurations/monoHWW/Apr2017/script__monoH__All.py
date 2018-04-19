# Minitrees using gardener: /eos/user/f/fernanpe/trees_DF

# /eos/user/c/calderon/monoH/Full2016_Apr17//Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel/ muccaMonoH_All_em __wwSel__muccaApr2017_em

#MC wwSel (/eos/user/c/calderon/monoH/Full2016_Apr17/):
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b

# Alternative trees for Systematics
# (Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__*__wwSel/)

# JES 
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESup__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__JESdo__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh

# Ele pT 
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTup__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepElepTdo__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh

# Muon pT
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTup__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__LepMupTdo__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh

# MET scale
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METup__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh
mkGardener.py -p Apr2017_summer16 -s muccaAll_em -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__METdo__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b -Q 8nh

#DATA wwSel (/eos/user/f/fernanpe/trees_DF/Full2016_Apr17/):
mkGardener.py -p Apr2017_Run2016B_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016C_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016D_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016E_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016F_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016G_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016H_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b

# /eos/user/f/fernanpe/trees_DF/Full2016_Apr17//Apr2017_Run2016B_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel/
#DATA fake wwSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
mkGardener.py -p Apr2017_Run2016B_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016C_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016D_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016E_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016F_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016G_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b
mkGardener.py -p Apr2017_Run2016H_RemAOD -s muccaAll_em -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd__wwSel__monohSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -I /eos/user/f/fernanpe/trees_DF/Full2016_Apr17/ -b


# #MC ssSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_summer16 -s ssSel -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b -Q 1nd

# #DATA ssSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_Run2016B_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016C_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016D_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016E_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016F_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016G_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016H_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd

# #DATA fake ssSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_Run2016B_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016C_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016D_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016E_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016F_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016G_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd
# mkGardener.py -p Feb2017_Run2016H_RemAOD -s ssSel -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b -Q 1nd


# # #MC sfSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b

# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESup__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESdo__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutup__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutdo__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutup__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutdo__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METup__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b
# # mkGardener.py -p Feb2017_summer16 -s muccaAll_em -i MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METdo__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016 -b

# #DATA sfSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_Run2016B_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016C_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016D_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016E_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016F_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016G_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016H_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__l2tight__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b

# #DATA fake sfSel (/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016):
# mkGardener.py -p Feb2017_Run2016B_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016C_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016D_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016E_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016F_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016G_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
# mkGardener.py -p Feb2017_Run2016H_RemAOD -s muccaAll_em -i l2looseCut__hadd__EpTCorr__TrigMakerData__fakeWCut__sfSel -S Target -O /eos/user/f/fernanpe/trees_DF/Full2016/ -I /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/ -b
