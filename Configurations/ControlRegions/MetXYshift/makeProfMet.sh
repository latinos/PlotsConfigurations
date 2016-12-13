#SAMPLE_DIR=../../../LatinoTrees/AnalysisStep/test/
#SAMPLE_DIR=../test

#
if [ ! -d "Profiles" ]; then
  mkdir Profiles
fi
# Run2016B
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016B_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/05Jul2016_Run2016B_PromptReco_DoubleMuon.root
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr/
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016B_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/08Jul2016_Run2016B_PromptReco_DoubleMuon.root
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr/
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016B_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/21Jun2016_Run2016B_PromptReco_DoubleMuon.root
rm -f Profiles/MEtXYprofileL2looseRun2016B_PromptReco_DoubleMuon.root
hadd Profiles/MEtXYprofileL2looseRun2016B_PromptReco_DoubleMuon.root Profiles/05Jul2016_Run2016B_PromptReco_DoubleMuon.root Profiles/08Jul2016_Run2016B_PromptReco_DoubleMuon.root Profiles/21Jun2016_Run2016B_PromptReco_DoubleMuon.root

# Run2016C
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016C_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/08Jul2016_Run2016C_PromptReco_DoubleMuon.root
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016C_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/11Jul2016_Run2016C_PromptReco_DoubleMuon.root
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016C_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/15Jul2016_Run2016C_PromptReco_DoubleMuon.root
rm -f Profiles/MEtXYprofileL2looseRun2016C_PromptReco_DoubleMuon.root
hadd Profiles/MEtXYprofileL2looseRun2016C_PromptReco_DoubleMuon.root Profiles/08Jul2016_Run2016C_PromptReco_DoubleMuon.root Profiles/11Jul2016_Run2016C_PromptReco_DoubleMuon.root Profiles/15Jul2016_Run2016C_PromptReco_DoubleMuon.root

# Run2016D
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016D_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/15Jul2016_Run2016D_PromptReco_DoubleMuon.root
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_Run2016D_PromptReco_DoubleMuon.root\"\)
#mv Results/out.root Profiles/26Jul2016_Run2016D_PromptReco_DoubleMuon.root

rm -f Profiles/MEtXYprofileL2looseRun2016D_PromptReco_DoubleMuon.root
hadd Profiles/MEtXYprofileL2looseRun2016D_PromptReco_DoubleMuon.root Profiles/15Jul2016_Run2016D_PromptReco_DoubleMuon.root Profiles/26Jul2016_Run2016D_PromptReco_DoubleMuon.root

# DY
#SAMPLE_DIR=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part0.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0000__part0.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part1.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0000__part1.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part2.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0000__part2.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part3.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0000__part3.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part4.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0000__part4.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0001__part0.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0001__part0.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0001__part1.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0001__part1.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0001__part2.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0001__part2.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0001__part3.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0001__part3.root
#root -l -q makeProfMet.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0001__part4.root\"\)
#mv Results/out.root Profiles/DYJetsToLL_M-50_0001__part4.root
rm -f Profiles/MEtXYprofileL2looseDYJetsToLL.root
hadd Profiles/MEtXYprofileL2looseDYJetsToLL.root Profiles/DYJetsToLL_M-50_0000__part0.root Profiles/DYJetsToLL_M-50_0000__part1.root Profiles/DYJetsToLL_M-50_0000__part2.root Profiles/DYJetsToLL_M-50_0000__part3.root Profiles/DYJetsToLL_M-50_0000__part4.root Profiles/DYJetsToLL_M-50_0001__part0.root Profiles/DYJetsToLL_M-50_0001__part1.root Profiles/DYJetsToLL_M-50_0001__part2.root Profiles/DYJetsToLL_M-50_0001__part3.root Profiles/DYJetsToLL_M-50_0001__part4.root

rm *~ *.d *.so

#tar cvf Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#scp Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar lxplus.cern.ch:www/MEtCtlPlots/
#tar cvf Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#scp Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar lxplus.cern.ch:www/MEtCtlPlots/
