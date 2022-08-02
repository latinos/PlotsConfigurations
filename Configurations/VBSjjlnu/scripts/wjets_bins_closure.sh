#!/bin/sh -x 

output_dir=$1
name=$2

mkdir $output_dir;

########################
# Closure test

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_mu_mext.txt --vars fit_bins_boost \
            -s Wjets_boost_1  Wjets_boost_2 Wjets_boost_3 Wjets_boost_4 Wjets_boost_5 \
            Wjets_boost_6 Wjets_boost_7 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut boost_wjetcr_mu_mext  -c $3


python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_ele_mext.txt --vars fit_bins_boost \
            -s Wjets_boost_1  Wjets_boost_2 Wjets_boost_3 Wjets_boost_4 Wjets_boost_5 \
            Wjets_boost_6 Wjets_boost_7 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut boost_wjetcr_ele_mext -c $3

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_ele_mext.txt --vars fit_bins_res \
            -s Wjets_res_1  Wjets_res_2 Wjets_res_3 Wjets_res_4 Wjets_res_5 Wjets_res_6 \
            Wjets_res_7 Wjets_res_8 Wjets_res_9 Wjets_res_10 Wjets_res_11 Wjets_res_12 \
            Wjets_res_13 Wjets_res_14 Wjets_res_15 Wjets_res_16 Wjets_res_17 Wjets_res_18 \
            Wjets_res_19 Wjets_res_20 Wjets_res_21 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut res_wjetcr_ele_mext -c $3

    
python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_mu_mext.txt --vars fit_bins_res \
            -s Wjets_res_1  Wjets_res_2 Wjets_res_3 Wjets_res_4 Wjets_res_5 Wjets_res_6 \
            Wjets_res_7 Wjets_res_8 Wjets_res_9 Wjets_res_10 Wjets_res_11 Wjets_res_12 \
            Wjets_res_13 Wjets_res_14 Wjets_res_15 Wjets_res_16 Wjets_res_17 Wjets_res_18 \
            Wjets_res_19 Wjets_res_20 Wjets_res_21 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut res_wjetcr_mu_mext -c $3

# ########################


python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_mu_mint.txt --vars fit_bins_boost \
            -s Wjets_boost_1  Wjets_boost_2 Wjets_boost_3 Wjets_boost_4 Wjets_boost_5 \
            Wjets_boost_6 Wjets_boost_7 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut boost_wjetcr_mu_mint  -c $3


python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_boost_ele_mint.txt --vars fit_bins_boost \
            -s Wjets_boost_1  Wjets_boost_2 Wjets_boost_3 Wjets_boost_4 Wjets_boost_5 \
            Wjets_boost_6 Wjets_boost_7 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut boost_wjetcr_ele_mint -c $3

python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_ele_mint.txt --vars fit_bins_res \
            -s Wjets_res_1  Wjets_res_2 Wjets_res_3 Wjets_res_4 Wjets_res_5 Wjets_res_6 \
            Wjets_res_7 Wjets_res_8 Wjets_res_9 Wjets_res_10 Wjets_res_11 Wjets_res_12 \
            Wjets_res_13 Wjets_res_14 Wjets_res_15 Wjets_res_16 Wjets_res_17 Wjets_res_18 \
            Wjets_res_19 Wjets_res_20 Wjets_res_21 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut res_wjetcr_ele_mint -c $3

    
python ../scripts/bins_norm_reweights_withsyst.py -i rootFile_$name/plots_$name.root \
            -o $output_dir/bins_norm_res_mu_mint.txt --vars fit_bins_res \
            -s Wjets_res_1  Wjets_res_2 Wjets_res_3 Wjets_res_4 Wjets_res_5 Wjets_res_6 \
            Wjets_res_7 Wjets_res_8 Wjets_res_9 Wjets_res_10 Wjets_res_11 Wjets_res_12 \
            Wjets_res_13 Wjets_res_14 Wjets_res_15 Wjets_res_16 Wjets_res_17 Wjets_res_18 \
            Wjets_res_19 Wjets_res_20 Wjets_res_21 \
            --other-samples VV VVV  DY Fake VBS_dipoleRecoil top Vg VgS VBF-V_dipole ggWW --cut res_wjetcr_mu_mint -c $3