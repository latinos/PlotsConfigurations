# /xrootd//store/user/jhchoi/Latino/HWWNano/
# Sites_cfg: /xrd/store/group/phys_higgs/cmshww/jhchoi/Latino/HWWNano/
# changed to /xrd/store/user/jhchoi/Latino/HWWNano/
# L1Loose
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i Prod -s MCl1loose2017v2 -b
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i MCl1loose2017v2 -s MCCorr2017_SemiLep -b -n -E DYJetsToLL_M-10to50-LO,GluGluHToWWTo2L2NuPowheg_M125,QCD_Pt-170to300_MuEnrichedPt5,ttHToNonbb_M125,TTTo2L2Nu_PSWeights_CP5Down,TTTo2L2Nu_PSWeights,VBFHToWWTo2L2Nu_M124,VBFHToWWToLNuQQ_M550,VBFHToWWToLNuQQ_M600,VBFHToWWToLNuQQ_M700,VBFHToWWToLNuQQ_M750,VBFHToWWToLNuQQ_M800,VBFHToWWToLNuQQ_M900,Wg_AMCNLOFXFX,Wg_MADGRAPHMLM,WJetsToLNu_HT100_200,WJetsToLNu_HT600_800,WLLJJToLNu_M-4To50_QCD_2Jet,WLLJJToLNu_M-50_QCD_0Jet,WLLJJToLNu_M-50_QCD_1Jet,WLLJJToLNu_M-50_QCD_2Jet,WLLJJToLNu_M-50_QCD_3Jet,WLLJJToLNu_M-60_EWK_4F,WpWmJJ_EWK,WpWmJJ_EWK_QCD_noTop_noHiggs,WpWpJJ_EWK,WWG,ZGToLLG,ZZTo2L2Nu,ZZTo2L2Q,ZZTo4L-ext1,ZZTo4L
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i MCl1loose2017v2 -s MCCorr2017_SemiLep -b -T DYJetsToLL_M-50 -R
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i MCl1loose2017v2 -s MCCorr2017_SemiLep -b -T ttHToNonbb_M125 -R 



##--MCCorr2017_SemiLep--##
#SAMPLES=()
'''
SAMPLES=(GluGluHToWWToLNuQQ_M125 GluGluHToWWToLNuQQ_M200 GluGluHToWWToLNuQQ_M250 GluGluHToWWToLNuQQ_M300 GluGluHToWWToLNuQQ_M350 GluGluHToWWToLNuQQ_M400 GluGluHToWWToLNuQQ_M500 GluGluHToWWToLNuQQ_M550 GluGluHToWWToLNuQQ_M600 GluGluHToWWToLNuQQ_M650 GluGluHToWWToLNuQQ_M700 GluGluHToWWToLNuQQ_M800 GluGluHToWWToLNuQQ_M900 GluGluHToWWToLNuQQ_M1500 GluGluHToWWToLNuQQ_M2000 GluGluHToWWToLNuQQ_M2500 GluGluHToWWToLNuQQ_M3000 \
WW-LO \
WZ \
ZZ \
Wg_AMCNLOFXFX \
Wg_MADGRAPHMLM \
QCD_Pt_20to30_bcToE \
QCD_Pt_30to80_bcToE \
QCD_Pt_80to170_bcToE \
QCD_Pt_170to250_bcToE \
QCD_Pt_250toInf_bcToE \
QCD_Pt-15to20_MuEnrichedPt5 \
QCD_Pt-20to30_MuEnrichedPt5 \
QCD_Pt-30to50_MuEnrichedPt5 \
QCD_Pt-50to80_MuEnrichedPt5 \
QCD_Pt-80to120_MuEnrichedPt5 \
QCD_Pt-120to170_MuEnrichedPt5 \
QCD_Pt-170to300_MuEnrichedPt5 \
TTToSemiLeptonic \
ST_tW_antitop \
ST_tW_top \
TTWjets \
TTWjets_ext1 \
TTZjets \
TTZjets_ext1 \
WJetsToLNu-LO \
WJetsToLNu-LO_ext1 \
WJetsToLNu_HT100_200 \
WJetsToLNu_HT200_400 \
WJetsToLNu_HT400_600 \
WJetsToLNu_HT600_800 \
WJetsToLNu_HT800_1200 \
WJetsToLNu_HT1200_2500 \
WJetsToLNu_HT2500_inf \
DYJetsToLL_M-50-LO \
DYJetsToLL_M-50-LO_ext1 \
DYJetsToLL_M-5to50-LO \
DYJetsToLL_M-10to50-LO \
DYJetsToLL_M-10to50-LO_ext1 \
DYJetsToLL_M-50 \
)
'''

SAMPLES=(
GluGluHToWWToLNuQQ_M125
GluGluHToWWToLNuQQ_M200
GluGluHToWWToLNuQQ_M500
GluGluHToWWToLNuQQ_M900
GluGluHToWWToLNuQQ_M2500
GluGluHToWWToLNuQQ_M4000
GluGluHToWWToLNuQQ_M5000
VBFHToWWToLNuQQ_M125
VBFHToWWToLNuQQ_M200
VBFHToWWToLNuQQ_M500
VBFHToWWToLNuQQ_M900
VBFHToWWToLNuQQ_M2500
VBFHToWWToLNuQQ_M4000
VBFHToWWToLNuQQ_M5000
QCD_Pt-20to30_EMEnriched
QCD_Pt-30to50_EMEnriched
QCD_Pt-50to80_EMEnriched
TTToSemiLeptonic
ST_t-channel_top
ST_t-channel_antitop
ST_tW_antitop
ST_tW_top
ST_s-channel
TTWjets
TTWjets_ext1
TTZjets
TTZjets_ext1
WJetsToLNu-LO
WJetsToLNu-LO_ext1
WJetsToLNu_HT100_200
WJetsToLNu_HT200_400
WJetsToLNu_HT400_600
WJetsToLNu_HT600_800
WJetsToLNu_HT800_1200
WJetsToLNu_HT1200_2500
WJetsToLNu_HT2500_inf
QCD_HT200to300
QCD_HT300to500
QCD_HT500to700
QCD_HT700to1000
QCD_HT1000to1500
)

EXCLUDE=()

#--Run--#
SAMPLE_LIST=''
EXCLUDE_LIST=''
for s in ${SAMPLES[@]};do SAMPLE_LIST=${s}','${SAMPLE_LIST};done
for e in ${EXCLUDE[@]};do EXCLUDE_LIST=${e}','${EXCLUDE_LIST};done
#echo ${SAMPLE_LIST}
#echo ${EXCLUDE_LIST}

#--l1Prod--#
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i Prod -s MCl1loose2017v2 -b -T ${SAMPLE_LIST}
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i Prod -s MCl1loose2017v2 -b
#--Corr--#
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v4 -i MCl1loose2017v2 -s MCCorr2017_SemiLep -b -T ${SAMPLE_LIST} -E ${EXCLUDE_LIST}
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v5 -i MCl1loose2017v5 -s MCCorr2017v5 -b -T ${SAMPLE_LIST}

#--semilep--#
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v5 -i MCl1loose2017v5__MCCorr2017v5 -s HMlnjjSel2017 -T ${SAMPLE_LIST} -b -n
mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v5 -i MCl1loose2017v5__MCCorr2017v5__Semilep2017 -s HMlnjjSel2017 -T ${SAMPLE_LIST} -b
#mkPostProc.py -p Fall2017_102X_nAODv4_Full2017v5 -i MCl1loose2017v5__MCCorr2017v5 -s Semilep2017 -b -T ${SAMPLE_LIST}



SAMPLES=()
EXCLUDE=()
