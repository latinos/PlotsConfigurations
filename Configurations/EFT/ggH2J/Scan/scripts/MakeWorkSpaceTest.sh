
cmsenv
ulimit -s unlimited

printf "HGG 18 \n"

combineCards.py \
hww2l2v_13TeV_of2j_ggh_thmip_18=../Full2018Test/datacards/hww2l2v_13TeV_of2j_ggh_thmip/HGG_H0M/datacard.txt \
hww2l2v_13TeV_of2j_ggh_thmin_18=../Full2018Test/datacards/hww2l2v_13TeV_of2j_ggh_thmin/HGG_H0M/datacard.txt \
hww2l2v_13TeV_WW_of2j_18=../Full2018Test/datacards/hww2l2v_13TeV_WW_of2j/HGG_H0M/datacard.txt \
hww2l2v_13TeV_top_of2j_18=../Full2018Test/datacards/hww2l2v_13TeV_top_of2j/HGG_H0M/datacard.txt \
hww2l2v_13TeV_dytt_of2j_18=../Full2018Test/datacards/hww2l2v_13TeV_dytt_of2j/HGG_H0M/datacard.txt \
hww2l2v_13TeV_0j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_1j_18=2018/hww2l2v_13TeV_orig_mth125_mllCut_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_0j_18=2018/hww2l2v_13TeV_top_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_top_1j_18=2018/hww2l2v_13TeV_top_1j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_0j_18=2018/hww2l2v_13TeV_dytt_0j/varH0M/datacard_pruned.txt \
hww2l2v_13TeV_dytt_1j_18=2018/hww2l2v_13TeV_dytt_1j/varH0M/datacard_pruned.txt \
> cards/HGG_18t.txt

text2workspace.py cards/HGG_18t.txt -o cards/HGG_18t.root -P HiggsAnalysis.CombinedLimit.HggHWWCouplings:HggHWWCouplings > cards/scale_HGG_18t.txt


