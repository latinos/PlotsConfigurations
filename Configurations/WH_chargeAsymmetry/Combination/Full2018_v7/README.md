# WH charge asymmetry datacards combination

Instructions to combine the results from the WHSS and WH3l analyses. Here, just Full 2018 datacards are considered.

### Combine datacards

Load combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

Actually combine datacards:

    mkdir -p Combination

    combineCards.py \
    WH_SS_em_2j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_em_2j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_mm_2j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_mm_2j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_ee_2j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_ee_2j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_em_1j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_em_1j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_mm_1j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_mm_1j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_ee_1j_minus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_ee_1j_plus=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_em_2j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_em_2j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_mm_2j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_mm_2j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_ee_2j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_ee_2j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
    WH_SS_em_1j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_em_1j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_mm_1j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_mm_1j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_ee_1j_minus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_SS_ee_1j_plus_low_pt=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
    WH_3l_ossf_minus=../../WH3l/Full2018_v7/datacards/wh3l_13TeV_ossf_minus/BDTG_OSSF_bin2/datacard.txt \
    WH_3l_ossf_plus=../../WH3l/Full2018_v7/datacards/wh3l_13TeV_ossf_plus/BDTG_OSSF_bin2/datacard.txt \
    WH_3l_sssf_minus=../../WH3l/Full2018_v7/datacards/wh3l_13TeV_sssf_minus/BDTG_SSSF_bin2/datacard.txt \
    WH_3l_sssf_plus=../../WH3l/Full2018_v7/datacards/wh3l_13TeV_sssf_plus/BDTG_SSSF_bin2/datacard.txt \
    Zg_CR=../../WH3l/Full2018_v7/datacards/wh3l_zg_13TeV/events/datacard.txt \
    WZ_CR_0j=../../WH3l/Full2018_v7/datacards/wh3l_wz_13TeV/events/datacard.txt \
    WZ_CR_1j=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
    WZ_CR_2j=../../WHSS/Full2018_v7/datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
    > Combination/WH_chargeAsymmetry_Full2018_v7.txt

### Create workspace for combine and do the fit

Considering W+ and W- as separate signals:

     text2workspace.py Combination/WH_chargeAsymmetry_Full2018_v7.txt -o Combination/WH_chargeAsymmetry_Full2018_v7.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_Full2018_v7.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults.txt

### Extract the asymmetry from a physics model in combine

First, we need to create the workspace. We want to use define one of the WH signal strengths in terms of the asymmetry:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_Full2018_v7.txt \
     -o Combination/WH_chargeAsymmetry_Full2018_v7_physicsModel.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-20,20]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-20,20]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-20,20]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus[1,-20,20]' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("0.8380/0.5313*@0*(1-@1)/(1+@1)",r_WH_plus,r_Asym[0.224,-20,20])' \
     --PO verbose

Then, do the actual fit:

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_Full2018_v7_physicsModel.root \
     -t -1 \
     --setParameters r_WH_plus=1,r_Asym=0.224,r_higgs=1 \
     --setParameterRanges r_WH_plus=-20,20:r_Asym=-20,20:r_higgs=-20,20 \
     --redefineSignalPOIs r_WH_plus,r_Asym,r_higgs