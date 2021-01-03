#!/bin/sh -x 

output_dir=$1
name=$2

# python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_mu_boost_mu.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS  --cut boost_wjetcr_mu

# python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_mu_boost_ele.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS  --cut boost_wjetcr_ele

# python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_mu_res_ele.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS  --cut res_wjetcr_ele

    
# python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_mu_res_mu.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS  --cut res_wjetcr_mu


#######################

python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_mu_boost_mu.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V --cut boost_wjetcr_mu_mext


python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_mu_boost_ele.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V --cut boost_wjetcr_ele_mext

python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_mu_res_ele.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V --cut res_wjetcr_ele_mext

    
python ../scripts/bins_norm_reweights.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_mu_res_mu.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V --cut res_wjetcr_mu_mext

