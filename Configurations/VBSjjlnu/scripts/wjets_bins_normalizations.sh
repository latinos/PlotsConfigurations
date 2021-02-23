#!/bin/sh -x 

output_dir=$1
name=$2

mkdir $output_dir;

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_mu.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV  DY Fake top Vg VgS VBF-V ggWW --cut boost_wjetcr_mu -c $3 

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_ele.txt --vars fit_bins_boost \
            -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
            --other-samples VV VVV  DY Fake top Vg VgS VBF-V ggWW --cut boost_wjetcr_ele -c $3 

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_ele.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV  DY Fake top Vg VgS VBF-V ggWW --cut res_wjetcr_ele -c $3 

    
python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_mu.txt --vars fit_bins_res \
            -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
            --other-samples VV VVV  DY Fake top Vg VgS VBF-V ggWW  --cut res_wjetcr_mu -c $3 

########################
# Closure test

# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_boost_mu_mext.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut boost_wjetcr_mu_mext  -c $3


# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_boost_ele_mext.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut boost_wjetcr_ele_mext -c $3

# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_res_ele_mext.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut res_wjetcr_ele_mext -c $3

    
# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_res_mu_mext.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut res_wjetcr_mu_mext -c $3

# ########################


# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_boost_mu_mint.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut boost_wjetcr_mu_mint -c $3


# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_boost_ele_mint.txt --vars fit_bins_boost \
#             -s Wjets_HT_boost_1  Wjets_HT_boost_2 Wjets_HT_boost_3 Wjets_HT_boost_4 Wjets_HT_boost_5 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut boost_wjetcr_ele_mint -c $3

# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_res_ele_mint.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut res_wjetcr_ele_mint -c $3

    
# python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
#             -o $output_dir/bins_norm_res_mu_mint.txt --vars fit_bins_res \
#             -s Wjets_HT_res_1  Wjets_HT_res_2 Wjets_HT_res_3 Wjets_HT_res_4 Wjets_HT_res_5 Wjets_HT_res_6 \
#             --other-samples VV VVV  DY Fake VBS top Vg VgS VBF-V ggWW --cut res_wjetcr_mu_mint -c $3