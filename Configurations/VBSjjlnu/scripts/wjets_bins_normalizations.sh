#!/bin/sh -x 

output_dir=$1
year=$2

python ../scripts/bins_norm_reweights.py -i rootFile_fit_v4_$year/plots_fit_v4_$year.root \
            -o $output_dir/bins_norm_mu_boost_mu.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV VBF-V DY Fake VBS top Vg VgS  --cut boost_wjetcr_mu

python ../scripts/bins_norm_reweights.py -i rootFile_fit_v4_$year/plots_fit_v4_$year.root \
            -o $output_dir/bins_norm_mu_boost_ele.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV VBF-V DY Fake VBS top Vg VgS  --cut boost_wjetcr_ele

python ../scripts/bins_norm_reweights.py -i rootFile_fit_v4_$year/plots_fit_v4_$year.root \
            -o $output_dir/bins_norm_mu_res_ele.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV VBF-V DY Fake VBS top Vg VgS  --cut res_wjetcr_ele

    
python ../scripts/bins_norm_reweights.py -i rootFile_fit_v4_$year/plots_fit_v4_$year.root \
            -o $output_dir/bins_norm_mu_res_mu.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV VBF-V DY Fake VBS top Vg VgS  --cut res_wjetcr_mu

