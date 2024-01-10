
cmsenv
ulimit -s unlimited


printf "HGG All \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_16=../Full2016/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_16=../Full2016/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_16=../Full2016/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_16=2016/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_16=2016/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_16=2016/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_16=2016/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_of2j_ggh_thmip_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_17=../Full2017/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_17=../Full2017/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_17=../Full2017/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_17=2017/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_17=2017/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_17=2017/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_17=2017/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_of2j_ggh_thmip_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_18=../Full2018/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_18=../Full2018/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_18=../Full2018/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_18=2018/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_18=2018/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_18=2018/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_18=2018/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_All.txt

text2workspace.py cards/HGG_All.txt -o cards/HGG_All.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_All.txt


printf "HGG 16 \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_16=../Full2016/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_16=../Full2016/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_16=../Full2016/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_16=2016/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_16=2016/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_16=2016/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_16=2016/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_16.txt

text2workspace.py cards/HGG_16.txt -o cards/HGG_16.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_16.txt

printf "HGG 17 \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_17=../Full2017/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_17=../Full2017/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_17=../Full2017/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_17=2017/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_17=2017/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_17=2017/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_17=2017/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_17.txt

text2workspace.py cards/HGG_17.txt -o cards/HGG_17.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_17.txt

printf "HGG 18 \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_18=../Full2018/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_18=../Full2018/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_18=../Full2018/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_0j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_18=2018/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_18=2018/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_18=2018/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_18=2018/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_18.txt

text2workspace.py cards/HGG_18.txt -o cards/HGG_18.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_18.txt


printf "DONE \n"


"""
printf "HGG 01J \n"

combineCards.py \
hww2l2v_13TeV_0j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_16=2016/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_16=2016/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_0j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_17=2017/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_17=2017/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_0j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_18=2018/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_18=2018/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_16=2016/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_16=2016/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_17=2017/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_17=2017/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_18=2018/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_18=2018/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_01j.txt

text2workspace.py cards/HGG_01j.txt -o cards/HGG_01j.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_01j.txt

printf "HGG 0J \n"

combineCards.py \
hww2l2v_13TeV_0j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_16=2016/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_16=2016/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_0j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_17=2017/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_17=2017/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_0j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_18=2018/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_18=2018/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
> cards/HGG_0j.txt

text2workspace.py cards/HGG_0j.txt -o cards/HGG_0j.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_0j.txt

printf "HGG 1J \n"

combineCards.py \
hww2l2v_13TeV_1j_16=2016/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_16=2016/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_16=2016/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_17=2017/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_17=2017/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_17=2017/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_18=2018/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_18=2018/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_1j.txt

text2workspace.py cards/HGG_1j.txt -o cards/HGG_1j.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_1j.txt


printf "HGG 2J \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_16=../Full2016/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_16=../Full2016/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_16=../Full2016/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_16=../Full2016/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmip_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_17=../Full2017/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_17=../Full2017/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_17=../Full2017/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_17=../Full2017/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmip_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_of2j_ggh_thmin_18=../Full2018/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_WW_of2j_18=../Full2018/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_top_of2j_18=../Full2018/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard_fpruned.txt \
hww2l2v_13TeV_dytt_of2j_18=../Full2018/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard_fpruned.txt \
> cards/HGG_2j.txt

text2workspace.py cards/HGG_2j.txt -o cards/HGG_2j.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_2j.txt


"""

#############################

# emacs -nw ../../../../../HiggsAnalysis/CombinedLimit/python/NegList.py

# source scripts/MakeWorkSpace.sh 
# source scripts/Scan.sh HGG 16
# python scripts/PlotScan.py
