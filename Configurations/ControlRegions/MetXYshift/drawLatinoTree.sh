#SAMPLE_DIR=../../../LatinoTrees/AnalysisStep/test/
#SAMPLE_DIR=../test

SAMPLE_DIR=/u/user/salee/Latino/CMSSW809/src/PlotsConfigurations/Configurations/ControlRegions/MetXYshift
#

#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-50_0000__part0.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorrWithNvtx_MorionV1_DYJetsToLL_M-50_0000__part0.root\"\)
root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorrWithNvtx_MorionV1_Run2016B_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorrWithMulti_MorionV1_Run2016B_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorr_MorionV1_Run2016D_DoubleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorr_MorionV1_Run2016D_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorr_ngoodVtx_Run2016B_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorr_ngoodVtx_Run2016C_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/MEtXYcorr_ngoodVtx_Run2016C_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/latino_Run2016C_PromptReco_SingleMuon.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/latino_DYJetsToLL_M-10to50.root\"\)
#root -l drawLatinoTree.C+\(\"$SAMPLE_DIR/latino_MetCorrected_mc_numEvent10000.root\"\)
#
#rm -rf MEtXYcorrWithMulti_MorionV1_Run2016B_SingleMuon_Cut2mu
#mv Results MEtXYcorrWithMulti_MorionV1_Run2016B_SingleMuon_Cut2mu
#rm -rf MEtXYcorrWithNvtxDouble_MorionV1_DY_CutPt2010_met20
#mv Results MEtXYcorrWithNvtxDouble_MorionV1_DY_CutPt2010_met20
rm -rf MEtXYcorrWithNvtxDouble_MorionV1_Run2016B_SingleMuon_CutPt2010_met20
mv Results MEtXYcorrWithNvtxDouble_MorionV1_Run2016B_SingleMuon_CutPt2010_met20
#rm -rf MEtXYcorr_MorionV1_Run2016D_SingleMuon_CutPt12_2010_met20
#mv Results MEtXYcorr_MorionV1_Run2016D_SingleMuon_CutPt12_2010_met20
#rm -rf Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#mv Results Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#mv Results Plots80XRun2016BSingleMuon_Cuts
#mv Results Plots80XDYm50_Cuts
#mv Results Plots80XDYm50

rm *~ *.d *.so

#tar cvf Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#scp Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar lxplus.cern.ch:www/MEtCtlPlots/
#tar cvf Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20
#scp Plots2016CSingleMuon_ZumumFilter_NoZero_Vtx_CutPt12_2010_Met20.tar lxplus.cern.ch:www/MEtCtlPlots/
