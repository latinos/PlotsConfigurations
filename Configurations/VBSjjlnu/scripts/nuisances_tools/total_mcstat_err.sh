#!/bin/sh -e

python scripts/nuisances_tools/postfit_mcstat_error.py \
    -i Full2016v7/rootFile_fit_v4.3_2016/plots_fit_v4.3_2016.root Full2017v7/rootFile_fit_v4.3_2017/plots_fit_v4.3_2017.root \
        Full2018v7/rootFile_fit_v4.3_2018/plots_fit_v4.3_2018.root \
    -c res_wjetcr_ele res_wjetcr_mu \
    -v DNNoutput_res_v1 \
    -s top DY VBS VVV VV VBF-V Vg VgS ggWW Wjets_HT_res_1 Wjets_HT_res_2 Wjets_HT_res_3 \
            Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
    -o output_mcstaterr_wjets_res.root \
    -pf PostFitPlots/fit_v4.3/run2_res_wjetDNN_v1/postfit_shapes.root

python scripts/nuisances_tools/postfit_mcstat_error.py \
    -i Full2016v7/rootFile_fit_v4.3_2016/plots_fit_v4.3_2016.root Full2017v7/rootFile_fit_v4.3_2017/plots_fit_v4.3_2017.root \
        Full2018v7/rootFile_fit_v4.3_2018/plots_fit_v4.3_2018.root \
    -c res_topcr_ele res_topcr_mu \
    -v DNNoutput_res_v1 \
    -s top DY VBS VVV VV VBF-V Vg VgS ggWW Wjets_HT_res_1 Wjets_HT_res_2 Wjets_HT_res_3 \
            Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
    -o output_mcstaterr_top_res.root \
    -pf PostFitPlots/fit_v4.3/run2_res_topDNN_v1/postfit_shapes.root

python scripts/nuisances_tools/postfit_mcstat_error.py \
    -i Full2016v7/rootFile_fit_v4.3_2016/plots_fit_v4.3_2016.root Full2017v7/rootFile_fit_v4.3_2017/plots_fit_v4.3_2017.root \
        Full2018v7/rootFile_fit_v4.3_2018/plots_fit_v4.3_2018.root \
    -c boost_wjetcr_ele boost_wjetcr_mu \
    -v DNNoutput_boost \
    -s top DY VBS VVV VV VBF-V Vg VgS ggWW Wjets_HT_boost_1 Wjets_HT_boost_2 Wjets_HT_boost_3 \
            Wjets_HT_boost_4 Wjets_HT_boost_5  \
    -o output_mcstaterr_wjets_boost.root \
    -pf PostFitPlots/fit_v4.3/run2_boost_wjetDNN/postfit_shapes.root

python scripts/nuisances_tools/postfit_mcstat_error.py \
    -i Full2016v7/rootFile_fit_v4.3_2016/plots_fit_v4.3_2016.root Full2017v7/rootFile_fit_v4.3_2017/plots_fit_v4.3_2017.root \
        Full2018v7/rootFile_fit_v4.3_2018/plots_fit_v4.3_2018.root \
    -c boost_topcr_ele boost_topcr_mu \
    -v DNNoutput_boost \
    -s top DY VBS VVV VV VBF-V Vg VgS ggWW Wjets_HT_boost_1 Wjets_HT_boost_2 Wjets_HT_boost_3 \
            Wjets_HT_boost_4 Wjets_HT_boost_5  \
    -o output_mcstaterr_top_boost.root \
    -pf PostFitPlots/fit_v4.3/run2_boost_topDNN/postfit_shapes.root