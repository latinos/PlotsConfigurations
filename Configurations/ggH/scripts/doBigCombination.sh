

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -




# 
# fix ggH


cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1" | grep -v "CMS_fake_ele_stat_hww"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# 
# fix VH2j
# 

cat VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
mv VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt


cat VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt
mv VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt


# 
# fix VBF
# 
cat VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt




# 
cat VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt



# 
# fix ggH2j
# 

cat ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
#
cat ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt
# 
cat ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt  | grep -v "Vg_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt








# combine
 
combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.v1.txt.pruned.txt

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.em.txt

combineCards.py   me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.me.txt


combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.em.txt

combineCards.py   me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.me.txt

 
 
# 2015 ggH


# fix
# 

cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt



#
# combine
#  
 
combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.v1.txt.pruned.txt

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.em.txt

combineCards.py   me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.0jet.me.txt

                  
combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.em.txt

combineCards.py   me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.1jet.me.txt

 
 
 
# fix
# 
# cat ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
# mv ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
#
cat ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
mv ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
#
# cat ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
# mv ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt
#
cat ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt



# combine
 
combineCards.py   of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.2j.pruned.txt

                  
combineCards.py   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.2j.pruned.txt

                  
combineCards.py   of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   Combined.2j.pruned.txt




                  

# fix
# 
# cat VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt | grep -v "CMS_idiso" | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "CMS_scale_j"  | grep -v "trigger" | grep -v "DY_ibin_2"  | grep -v "DY_ibin_4"  &> VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.test.txt.pruned.txt
# mv VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt
#
# cat VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt | grep -v "CMS_idiso" | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "trigger"  | grep -v "CMS_scale_j" | grep -v "DY_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt
#
# cat VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt | grep -v "Vg_ibin_1" | grep -v "CMS_idiso" | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "trigger"  | grep -v "CMS_scale_j" | grep -v "DY_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt

# 
cat VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt
#
cat VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   ICHEP2016.vbf.pruned.txt

                  
combineCards.py   of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  >   Moriond2016.vbf.pruned.txt
                  
                  

combineCards.py   of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Combined.vbf.pruned.txt
                  
                  
                  
                  

# fix
# 
# cat VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt  | grep -v "CMS_idiso" | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "CMS_scale_j"  | grep -v "trigger" | grep -v "CMS_scale_e" | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt
# mv VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt
# #
# cat VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "CMS_met" | grep -v "CMS_idiso"  | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "CMS_scale_j"  | grep -v "trigger" | grep -v "DY_ibin_1" | grep -v "Vg_ibin"  &> VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
# mv VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt
# #
# cat VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "Vg_ibin_1" | grep -v "CMS_idiso" | grep -v "CMS_ICHEP_btag" | grep -v "CMS_scale_e" | grep -v "CMS_scale_m"  | grep -v "CMS_scale_j"  | grep -v "trigger" | grep -v "Fake_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt
# mv VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt
# 
cat VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt
mv VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt    VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt
#
cat VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin"   &> VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
mv VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.vh2j.pruned.txt
 

combineCards.py   of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.vh2j.pruned.txt
 

combineCards.py   of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Combined.vh2j.pruned.txt
 
 

 # wh3l

combineCards.py   wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   ICHEP2016.wh3l.pruned.txt
                  

combineCards.py   wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   Moriond2016.wh3l.pruned.txt

                  

combineCards.py   wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   Combined.wh3l.pruned.txt

                                
                  
                  


 
# combination of ggH 2015 and 2016


combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.v1.txt.pruned.txt

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.1jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.0jet.txt



 

combineCards.py   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Combined2j.v1.txt.pruned.txt


#                   
# 
# combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
#                   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
#                   em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
#                   em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
#                   of0j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   of1j_ICHEP_13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
#                   me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
#                   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
#                   me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
#                   of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
#                   of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
#                   of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
#                   of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
#                   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
#                   of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
#                   of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
#                   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
#                   of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
#                   of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
#                   of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
#                   >   superCombination.v1.txt.pruned.txt

 
 
        
 

                  

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.2015.txt.pruned.txt
 
 
 
 
       

combineCards.py   ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.2016.txt.pruned.txt
 
   
   
       

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  of2j2j13=ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                 >   superCombination.Total.txt.pruned.txt
 
 
 
 
 
 

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   Combined.v1.txt.pruned.txt

combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >  Combined.1jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >  Combined.0jet.txt

combineCards.py   em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_em_mp_0j_13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_0j_13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >  Combined.0jet.em.txt

combineCards.py   me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_me_mp_0j_13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_0j_13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >  Combined.0jet.me.txt

                  
combineCards.py   em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_em_mp_1j_13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_em_pm_1j_13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >  Combined.1jet.em.txt

combineCards.py   me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_me_mp_1j_13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_me_pm_1j_13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >  Combined.1jet.me.txt

                  
                  
                  
 
 
python ggH/scripts/diffNuisances.py -a mlfitsuperCombination.Total.txt.pruned.txt.root   -g plots.root  -o total.diffnuis.root   -i ggH/scripts/listNuisances.json

python ggH/scripts/diffNuisances.py -a mlfitsuperCombination.Total.txt.pruned.txt.root   -g plots.total.root  -o total.diffnuis.root
python ggH/scripts/diffNuisances.py -a mlfitsuperCombination.2016.txt.pruned.txt.root    -g plots.2016.root   -o 2016.diffnuis.root
python ggH/scripts/diffNuisances.py -a mlfitsuperCombination.2015.txt.pruned.txt.root    -g plots.2015.root   -o 2015.diffnuis.root



 
 
 
 
# 2015 combination
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      superCombination.2015.txt.pruned.txt   -n  superCombination.2015.txt.pruned.txt    >   result.data.MaxLikelihoodFit.superCombination.2015.txt.pruned.txt

# combine -M ProfileLikelihood --significance                           superCombination.2015.txt.pruned.txt    >   result.data.Significance.superCombination.2015.txt.pruned.txt


# combine -M MultiDimFit superCombination.2015.txt.pruned.txt -m 125 --algo=grid --points 100 --setPhysicsModelParameterRanges r=-1,3 -n "LHScanDATAHICHEP2015combined"           >   /tmp/amassiro/result.data.LikelihoodScan.ICHEP2016.superCombination.2015.txt.pruned.txt
  
text2workspace.py superCombination.2015.txt.pruned.txt   -o  superCombination.2015.txt.pruned.txt.root  
#      superCombination.2015.txt.pruned.txt.workspace.root
     
combineTool.py -d superCombination.2015.txt.pruned.txt.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanDATAHICHEP2015combinedLXBATCH"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-superCombination2015 --sub-opts='-q 1nd' --split-points 1 

   
   
   
# 
# 
# 
# 
# 
# # 2016 combination
# # 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      superCombination.2016.txt.pruned.txt    -n  superCombination.2016.txt.pruned.txt  --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"   >   result.data.MaxLikelihoodFit.superCombination.2016.txt.pruned.txt

# combine -M ProfileLikelihood --significance                           superCombination.2016.txt.pruned.txt    >   result.data.Significance.superCombination.2016.txt.pruned.txt

# 
# combine -M MultiDimFit superCombination.2016.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=0,2 -n "LHScanDATAHICHEP2016combined"           >   /tmp/amassiro/result.data.LikelihoodScan.ICHEP2016.superCombination.2016.txt.pruned.txt



# # 
# # 
# # 
# # 2015+2016 combination
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      superCombination.Total.txt.pruned.txt    -n  superCombination.Total.txt.pruned.txt   --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"  >   result.data.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt

combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      superCombination.Total.txt.pruned.txt    -n  superCombination.Total.txt.pruned.txt   --robustFit 1  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"  >   result.data.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt

# 


# combine -M ProfileLikelihood --significance      -m 125                     superCombination.Total.txt.pruned.txt    >   result.data.Significance.superCombination.Total.txt.pruned.txt


combine -M ProfileLikelihood --significance           \
--bruteForce   \
                superCombination.Total.txt.pruned.txt    >   result.data.Significance.superCombination.Total.txt.pruned.bis.txt


                
                
#                 --cminOldRobustMinimize=0  --minimizerStrategy 1 --minimizerTolerance 0.2  --cminFallback "Minuit2,Migrad,0:0.2"
                

                
                
text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.BIS.root                


combine -M ProfileLikelihood --significance    -t -1 --expectSignal=1.05 --toysFreq  superCombination.Total.txt.pruned.txt    >   result.MC.1.05.Significance.superCombination.Total.txt.pruned.txt

                

                
                
combine -M ProfileLikelihood --significance      superCombination.Total.txt.pruned.txt.workspace.root    >   result.data.Significance.superCombination.Total.txt.pruned.BIS.fromWorkspacetxt



      
                
combine -M ProfileLikelihood --significance   --minimizerTolerance 0.1     superCombination.Total.txt.pruned.txt.workspace.BIS.root    >   result.data.Significance.superCombination.Total.txt.pruned.BIS.fromWorkspace.BIS.txt




# 
# 
# combine -M MultiDimFit superCombination.Total.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=0,2 -n "LHScanDATAHICHEPTotalcombined"           >   /tmp/amassiro/result.data.LikelihoodScan.ICHEPTotal.superCombination.Total.txt.pruned.txt
# combine -M MultiDimFit superCombination.Total.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=0,2 -n "LHScanDATAHICHEPTotalcombined"           >   /tmp/amassiro/result.data.LikelihoodScan.ICHEPTotal.superCombination.Total.txt.pruned.txt





#
# to run on grid
# 
# cd ~/Framework/Combine/CMSSW_7_4_7/src/
# cmsenv
# eval `scramv1 runtime -sh`
# git clone https://github.com/cms-analysis/CombineHarvester.git CombineHarvester
# scramv1 b -j 20
# cd -

# text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.root
# text2workspace.py superCombination.2016.txt.pruned.txt   -o    superCombination.2016.txt.pruned.txt.workspace.root


# combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.root -M MultiDimFit    \
#                --algo=grid  --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanDATAHICHEPTotalcombinedLXBATCH"   \
#                --points 100    --job-mode lxbatch --task-name lxbatch-superCombination --sub-opts='-q 1nd' --split-points 1  


combineTool.py -d superCombination.2016.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanDATAHICHEP2016combinedLXBATCH"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-superCombination2016 --sub-opts='-q 1nd' --split-points 1 

               
               
               
                              
               

# hadd higgsCombineLHScanDATAHICHEP2016combinedLXBATCH.POINTS.root    higgsCombineLHScanDATAHICHEP2016combinedLXBATCH.POINTS.*.MultiDimFit.mH120.root
# hadd higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCH.POINTS.root   higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCH.POINTS.*.MultiDimFit.mH120.root
               
      

      

combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=-0.1,2.5    -n "LHScanDATAHICHEPcombinedLXBATCHtotal"   \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total --sub-opts='-q 1nd' --split-points 1 


               
combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.BIS.root -M MultiDimFit    \
               --algo=grid  --saveSpecifiedNuis all  --setPhysicsModelParameterRanges  r=-0.1,2.5    -n "LHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-superCombination-total-newAGcode --sub-opts='-q 1nd' --split-points 1 



          
r99t ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.root \
        scripts/Draw2DLine.cxx\(\"#mu\",\"WW0j\",\"r\",\"WWnorm0j\",\"WWnorm0j\",\"1\"\)
 
    
python  scripts/plot2Dscan.py -i ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.root
          
          
                    
                  
               
               
               
               
   
               
#    ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.POINTS.*.MultiDimFit.mH120.root  | grep -v 116K | grep -v 124K | grep -v 123K | awk '{print "rm "$9}' | /bin/sh
#    hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.root   higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.POINTS.*.MultiDimFit.mH120.root
   
              
  
  
  
  
  

  
  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   superCombination.Total.txt.pruned.txt  -o  workspace.superCombination.Total.txt.pruned.txt.kvkf.root
                   
                   
  

combineTool.py -d workspace.superCombination.Total.txt.pruned.txt.kvkf.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  muVBF=-3,6    -n "LHScanDATAHICHEPcombinedLXBATCHtotalkvkfmugghfixed"   \
               --freezeNuisances  muGGH --setPhysicsModelParameters muGGH=0.85  \
               --redefineSignalPOIs muVBF  \
               --points 200    --job-mode lxbatch --task-name lxbatch-superCombination-total-kvkfmugghfixed --sub-opts='-q 1nd' --split-points 1 

               
#    ls -alrth higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalkvkfmugghfixed.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
#    hadd higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalkvkfmugghfixed.POINTS.root   higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalkvkfmugghfixed.POINTS.*.MultiDimFit.mH120.root
   
  
  
   
 

r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsWithPrefit.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

 
 
               

combineTool.py -d superCombination.2016.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanDATAHICHEP2016combinedLXBATCHTheoryFrozen"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-superCombination2016-TheoryFrozen --sub-opts='-q 1nd' --split-points 1  \
               --freezeNuisances  \
               CMS_tttwTh,\
PS_ICHEP,\
PS_wh3l,\
QCDscale_CRSR_accept_dytt,\
QCDscale_CRSR_accept_top,\
QCDscale_CRSR_accept_wz,\
QCDscale_WH,\
QCDscale_WWewk,\
QCDscale_ZH,\
QCDscale_ggH,\
QCDscale_ggH0j,\
QCDscale_ggH1j,\
QCDscale_ggH2j,\
QCDscale_ggH2jvbf,\
QCDscale_ggH2jvh,\
QCDscale_ggZH,\
QCDscale_gg_accept,\
QCDscale_qqH,\
QCDscale_qqbar_accept,\
UE_ICHEP,\
UE_wh3l,\
pdf_gg,\
pdf_gg_accept,\
pdf_qqbar,\
pdf_qqbar_accept,\
CMS_PS,\
CMS_UE,\
CMS_WWqscale0j,\
CMS_WWqscale1j,\
CMS_WWqscale2j,\
CMS_WWqscale2jvbf,\
CMS_WWqscale2jvh,\
CMS_WWresum0j,\
CMS_WWresum1j,\
CMS_WWresum2j,\
CMS_WWresum2jvbf,\
CMS_WWresum2jvh






combineTool.py -d superCombination.2016.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid    -t -1 --expectSignal 1   --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanHICHEP2016combinedLXBATCHTheoryFrozen"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-MC-superCombination2016-TheoryFrozen --sub-opts='-q 1nd' --split-points 1  \
               --freezeNuisances  \
               CMS_tttwTh,\
PS_ICHEP,\
PS_wh3l,\
QCDscale_CRSR_accept_dytt,\
QCDscale_CRSR_accept_top,\
QCDscale_CRSR_accept_wz,\
QCDscale_WH,\
QCDscale_WWewk,\
QCDscale_ZH,\
QCDscale_ggH,\
QCDscale_ggH0j,\
QCDscale_ggH1j,\
QCDscale_ggH2j,\
QCDscale_ggH2jvbf,\
QCDscale_ggH2jvh,\
QCDscale_ggZH,\
QCDscale_gg_accept,\
QCDscale_qqH,\
QCDscale_qqbar_accept,\
UE_ICHEP,\
UE_wh3l,\
pdf_gg,\
pdf_gg_accept,\
pdf_qqbar,\
pdf_qqbar_accept,\
CMS_PS,\
CMS_UE,\
CMS_WWqscale0j,\
CMS_WWqscale1j,\
CMS_WWqscale2j,\
CMS_WWqscale2jvbf,\
CMS_WWqscale2jvh,\
CMS_WWresum0j,\
CMS_WWresum1j,\
CMS_WWresum2j,\
CMS_WWresum2jvbf,\
CMS_WWresum2jvh



hadd higgsCombineLHScanDATAHICHEP2016combinedLXBATCHTheoryFrozen.root     higgsCombineLHScanDATAHICHEP2016combinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLHScanHICHEP2016combinedLXBATCHTheoryFrozen.root         higgsCombineLHScanHICHEP2016combinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root



               

###############################               
               

combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-superCombinationTotal-TheoryFrozen --sub-opts='-q 1nd' --split-points 1  \
               --freezeNuisances  \
               CMS_tttwTh,\
PS_ICHEP,\
PS_wh3l,\
QCDscale_CRSR_accept_dytt,\
QCDscale_CRSR_accept_top,\
QCDscale_CRSR_accept_wz,\
QCDscale_WH,\
QCDscale_WWewk,\
QCDscale_ZH,\
QCDscale_ggH,\
QCDscale_ggH0j,\
QCDscale_ggH1j,\
QCDscale_ggH2j,\
QCDscale_ggH2jvbf,\
QCDscale_ggH2jvh,\
QCDscale_ggZH,\
QCDscale_gg_accept,\
QCDscale_qqH,\
QCDscale_qqbar_accept,\
UE_ICHEP,\
UE_wh3l,\
pdf_gg,\
pdf_gg_accept,\
pdf_qqbar,\
pdf_qqbar_accept,\
CMS_PS,\
CMS_UE,\
CMS_WWqscale0j,\
CMS_WWqscale1j,\
CMS_WWqscale2j,\
CMS_WWqscale2jvbf,\
CMS_WWqscale2jvh,\
CMS_WWresum0j,\
CMS_WWresum1j,\
CMS_WWresum2j,\
CMS_WWresum2jvbf,\
CMS_WWresum2jvh

    


combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid    -t -1 --expectSignal 1    --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanHICHEPTotalcombinedLXBATCHTheoryFrozen"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-MC-superCombinationTotal-TheoryFrozen --sub-opts='-q 1nd' --split-points 1  \
               --freezeNuisances  \
               CMS_tttwTh,\
PS_ICHEP,\
PS_wh3l,\
QCDscale_CRSR_accept_dytt,\
QCDscale_CRSR_accept_top,\
QCDscale_CRSR_accept_wz,\
QCDscale_WH,\
QCDscale_WWewk,\
QCDscale_ZH,\
QCDscale_ggH,\
QCDscale_ggH0j,\
QCDscale_ggH1j,\
QCDscale_ggH2j,\
QCDscale_ggH2jvbf,\
QCDscale_ggH2jvh,\
QCDscale_ggZH,\
QCDscale_gg_accept,\
QCDscale_qqH,\
QCDscale_qqbar_accept,\
UE_ICHEP,\
UE_wh3l,\
pdf_gg,\
pdf_gg_accept,\
pdf_qqbar,\
pdf_qqbar_accept,\
CMS_PS,\
CMS_UE,\
CMS_WWqscale0j,\
CMS_WWqscale1j,\
CMS_WWqscale2j,\
CMS_WWqscale2jvbf,\
CMS_WWqscale2jvh,\
CMS_WWresum0j,\
CMS_WWresum1j,\
CMS_WWresum2j,\
CMS_WWresum2jvbf,\
CMS_WWresum2jvh

hadd higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen.root     higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root
hadd higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.root         higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root



#    ls -alrth higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
#     ls -alrth higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6K | grep -v 6.7K | awk '{print "rm "$9}' | /bin/sh
       
     
  
  

  
  
  
 
  
  
  
  
  
  
  
  

#                
# text2workspace.py Combined.wh3l.pruned.txt   -o     Combined.wh3l.pruned.txt.workspace.root
# 
combineTool.py -d Combined.wh3l.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=-3,2.0    -n "LHScanDATAWH3lLXBATCH"   \
               --points 100    --job-mode lxbatch --task-name lxbatch-wh3l-data --sub-opts='-q 1nd' --split-points 1 
# 
#                
               
#  hadd higgsCombineLHScanDATAWH3lLXBATCH.POINTS.root   higgsCombineLHScanDATAWH3lLXBATCH.POINTS.*.MultiDimFit.mH120.root
#  hadd higgsCombineLHScanWH3lLXBATCH.POINTS.root   higgsCombineLHScanWH3lLXBATCH.POINTS.*.MultiDimFit.mH120.root
#             





    

#                
# text2workspace.py Combined.vh2j.pruned.txt   -o     Combined.vh2j.pruned.txt.workspace.root
# 
combineTool.py -d Combined.vh2j.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid  --setPhysicsModelParameterRanges  r=0.0,7.0    -n "LHScanDATAVH2jLXBATCH"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-vh2j-data --sub-opts='-q 1nd' --split-points 1 

combineTool.py -d Combined.vh2j.pruned.txt.workspace.root -M MultiDimFit    \
               --algo=grid   -t -1 --expectSignal 1     --setPhysicsModelParameterRanges  r=0.0,7.0    -n "LHScanVH2jLXBATCH"   \
               --points 400    --job-mode lxbatch --task-name lxbatch-vh2j-mc --sub-opts='-q 8nh' --split-points 1 
               
# 
#                
               
#  hadd higgsCombineLHScanDATAVH2jLXBATCH.POINTS.root   higgsCombineLHScanDATAVH2jLXBATCH.POINTS.*.MultiDimFit.mH120.root
#  hadd higgsCombineLHScanVH2jLXBATCH.POINTS.root   higgsCombineLHScanVH2jLXBATCH.POINTS.*.MultiDimFit.mH120.root
#             

           
           
           
           
           

# 
# 
# 
# 
# 
# #######################
# #### for the table ####
# 
# 
# # combined
# 
# 
# 
# combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Combined.vbf.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.vh2j.txt
# combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Combined.2j.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.wh3l.txt
# 
# 
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.txt             >   result.data.MaxLikelihoodFit.Combined.1jet.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.txt             >   result.data.MaxLikelihoodFit.Combined.0jet.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.em.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.me.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.em.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.me.txt
# 
# 
# 
# combine -M ProfileLikelihood --significance         Combined.vbf.pruned.txt             >   result.data.Significance.Combined.vbf.txt
# combine -M ProfileLikelihood --significance         Combined.vh2j.pruned.txt            >   result.data.Significance.Combined.vh2j.txt
# combine -M ProfileLikelihood --significance         Combined.2j.pruned.txt              >   result.data.Significance.Combined.2j.txt
# combine -M ProfileLikelihood --significance         Combined.wh3l.pruned.txt              >   result.data.Significance.Combined.wh3l.txt
# 
# 
# combine -M ProfileLikelihood --significance      --setPhysicsModelParameterRanges r=-10,10     Combined.1jet.txt             >   result.data.Significance.Combined.1jet.txt
# combine -M ProfileLikelihood --significance         Combined.0jet.txt             >   result.data.Significance.Combined.0jet.txt
# combine -M ProfileLikelihood --significance         Combined.0jet.em.txt          >   result.data.Significance.Combined.0jet.em.txt
# combine -M ProfileLikelihood --significance         Combined.0jet.me.txt          >   result.data.Significance.Combined.0jet.me.txt
# combine -M ProfileLikelihood --significance         Combined.1jet.em.txt          >   result.data.Significance.Combined.1jet.em.txt
# combine -M ProfileLikelihood --significance         Combined.1jet.me.txt          >   result.data.Significance.Combined.1jet.me.txt
# 

# 
# # 
# # 
# # #
# # # 2015 separate
# # #
# # 
# # # 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Moriond2016.vbf.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.vh2j.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Moriond2016.2j.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.wh3l.txt
# # 
# # 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.Data.MaxLikelihoodFit.Moriond2016.vbf.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.vh2j.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.Data.MaxLikelihoodFit.Moriond2016.2j.txt
# combine -M MaxLikelihoodFit   --rMin=-13 --rMax=14    Moriond2016.wh3l.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.wh3l.txt
# 
# combine -M ProfileLikelihood --significance     Moriond2016.vbf.pruned.txt             >   result.data.Data.Significance.Moriond2016.vbf.txt
# combine -M ProfileLikelihood --significance     Moriond2016.vh2j.pruned.txt            >   result.data.Data.Significance.Moriond2016.vh2j.txt
# combine -M ProfileLikelihood --significance     Moriond2016.2j.pruned.txt              >   result.data.Data.Significance.Moriond2016.2j.txt
# combine -M ProfileLikelihood --significance     Moriond2016.wh3l.pruned.txt            >   result.data.Data.Significance.Moriond2016.wh3l.txt
# 
# combine -M ProfileLikelihood --significance        Moriond2016.vbf.pruned.txt             >   result.data.Significance.Moriond2016.vbf.txt
# combine -M ProfileLikelihood --significance        Moriond2016.vh2j.pruned.txt            >   result.data.Significance.Moriond2016.vh2j.txt
# combine -M ProfileLikelihood --significance        Moriond2016.2j.pruned.txt              >   result.data.Significance.Moriond2016.2j.txt
# combine -M ProfileLikelihood --significance        Moriond2016.wh3l.pruned.txt            >   result.data.Significance.Moriond2016.wh3l.txt
# #                                             
# #                                             
# 
# # 
# #  
# # #  
# # #  
# # # # 2016 separate
# # # 
# # 
# # 
# 
# combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.vbf.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      ICHEP2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.vh2j.txt
# combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.ICHEP2016.2j.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      ICHEP2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.wh3l.txt
# 
# 
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.me.txt
# 
# 
# combine -M ProfileLikelihood --significance         ICHEP2016.vbf.pruned.txt             >   result.data.Significance.ICHEP2016.vbf.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.vh2j.pruned.txt            >   result.data.Significance.ICHEP2016.vh2j.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.2j.pruned.txt              >   result.data.Significance.ICHEP2016.2j.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.wh3l.pruned.txt              >   result.data.Significance.ICHEP2016.wh3l.txt
# 
# 
# combine -M ProfileLikelihood --significance         ICHEP2016.1jet.txt             >   result.data.Significance.ICHEP2016.1jet.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.0jet.txt             >   result.data.Significance.ICHEP2016.0jet.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.0jet.em.txt          >   result.data.Significance.ICHEP2016.0jet.em.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.0jet.me.txt          >   result.data.Significance.ICHEP2016.0jet.me.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.1jet.em.txt          >   result.data.Significance.ICHEP2016.1jet.em.txt
# combine -M ProfileLikelihood --significance         ICHEP2016.1jet.me.txt          >   result.data.Significance.ICHEP2016.1jet.me.txt

# # # 
# 
# 
# 
# 
# 
# 
# 
# 
# 
# 
# 
# 


# 
# #######################
# #### for the table ####
#     likelihood scan
# 
# 
# # combined
# 

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.vbf.pruned.txt     -o  workspace.forLLscan.Combined.vbf.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.vh2j.pruned.txt    -o  workspace.forLLscan.Combined.vh2j.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.2j.pruned.txt      -o  workspace.forLLscan.Combined.2j.pruned.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.wh3l.pruned.txt    -o  workspace.forLLscan.Combined.wh3l.pruned.txt.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.txt           -o  workspace.forLLscan.Combined.1jet.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.txt           -o  workspace.forLLscan.Combined.0jet.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.em.txt        -o  workspace.forLLscan.Combined.0jet.em.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.0jet.me.txt        -o  workspace.forLLscan.Combined.0jet.me.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.em.txt        -o  workspace.forLLscan.Combined.1jet.em.txt.root
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  Combined.1jet.me.txt        -o  workspace.forLLscan.Combined.1jet.me.txt.root



combine -M MultiDimFit    Combined.vbf.pruned.txt      -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanDATA.Combined.vbf.pruned.txt"
combine -M MultiDimFit    Combined.vh2j.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-6,8 -n "LHScanDATA.Combined.vh2j.pruned.txt"
combine -M MultiDimFit    Combined.2j.pruned.txt       -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanDATA.Combined.2j.pruned.txt"
combine -M MultiDimFit    Combined.wh3l.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,6 -n "LHScanDATA.Combined.wh3l.pruned.txt"

combine -M MultiDimFit    Combined.1jet.txt            -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Combined.1jet.fix.txt"

combine -M MultiDimFit    Combined.1jet.txt            -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Combined.1jet.txt"
combine -M MultiDimFit    Combined.0jet.txt            -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Combined.0jet.txt"
combine -M MultiDimFit    Combined.0jet.em.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Combined.0jet.em.txt"
combine -M MultiDimFit    Combined.0jet.me.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Combined.0jet.me.txt"
combine -M MultiDimFit    Combined.1jet.em.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4  --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1 -n "LHScanDATA.Combined.1jet.em.txt"
combine -M MultiDimFit    Combined.1jet.me.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4  --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1 -n "LHScanDATA.Combined.1jet.me.txt"
                                                       




combine -M MultiDimFit    Combined.vbf.pruned.txt      -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,6 -n "LHScanMC.Combined.vbf.pruned.txt"
combine -M MultiDimFit    Combined.vh2j.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-6,8 -n "LHScanMC.Combined.vh2j.pruned.txt"
combine -M MultiDimFit    Combined.2j.pruned.txt       -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,6 -n "LHScanMC.Combined.2j.pruned.txt"
combine -M MultiDimFit    Combined.wh3l.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,6 -n "LHScanMC.Combined.wh3l.pruned.txt"
                                                                                                                                                  
combine -M MultiDimFit    Combined.1jet.txt            -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.1jet.txt"
combine -M MultiDimFit    Combined.0jet.txt            -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.0jet.txt"
combine -M MultiDimFit    Combined.0jet.em.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.0jet.em.txt"
combine -M MultiDimFit    Combined.0jet.me.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.0jet.me.txt"
combine -M MultiDimFit    Combined.1jet.em.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.1jet.em.txt"
combine -M MultiDimFit    Combined.1jet.me.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Combined.1jet.me.txt"
                                                       



text2workspace.py Combined.1jet.me.txt   -o  Combined.1jet.me.txt.root  
text2workspace.py Combined.1jet.em.txt   -o  Combined.1jet.em.txt.root  

          

combineTool.py -d Combined.1jet.me.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  -n "lxbatch.combined.1jet.me.mc"   \
               --setPhysicsModelParameterRanges r=-2,4  -t  -1  --expectSignal 1    \
               --points 400    --job-mode lxbatch --task-name lxbatch-combined-1jet-me-mc   --sub-opts='-q 1nd' --split-points 1 

               

combineTool.py -d Combined.1jet.me.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  -n "lxbatch.combined.1jet.me.data"   \
               --setPhysicsModelParameterRanges r=-2,4      \
               --points 400    --job-mode lxbatch --task-name lxbatch-combined-1jet-me-data   --sub-opts='-q 1nd' --split-points 1 

     

combineTool.py -d Combined.1jet.em.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  -n "lxbatch.combined.1jet.em.mc"   \
               --setPhysicsModelParameterRanges r=-2,4  -t  -1  --expectSignal 1    \
               --points 400    --job-mode lxbatch --task-name lxbatch-combined-1jet-em-mc   --sub-opts='-q 1nd' --split-points 1 

               

combineTool.py -d Combined.1jet.em.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0  --saveSpecifiedNuis all  -n "lxbatch.combined.1jet.em.data"   \
               --setPhysicsModelParameterRanges r=-2,4      \
               --points 400    --job-mode lxbatch --task-name lxbatch-combined-1jet-em-data   --sub-opts='-q 1nd' --split-points 1 


               
               
               
               
               
               
               
# hadd higgsCombinelxbatch.combined.1jet.me.mc.POINTS.root     higgsCombinelxbatch.combined.1jet.me.mc.POINTS.*.MultiDimFit.mH120.root
# hadd higgsCombinelxbatch.combined.1jet.me.data.POINTS.root   higgsCombinelxbatch.combined.1jet.me.data.POINTS.*.MultiDimFit.mH120.root

# ls -alrth higgsCombinelxbatch.combined.1jet.me.mc.POINTS.*.MultiDimFit.mH120.root  | grep -v 36K | grep -v 35K | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombinelxbatch.combined.1jet.me.data.POINTS.*.MultiDimFit.mH120.root  | grep -v 36K | grep -v 35K | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh


    
               
# hadd higgsCombinelxbatch.combined.1jet.em.mc.POINTS.root     higgsCombinelxbatch.combined.1jet.em.mc.POINTS.*.MultiDimFit.mH120.root
# hadd higgsCombinelxbatch.combined.1jet.em.data.POINTS.root   higgsCombinelxbatch.combined.1jet.em.data.POINTS.*.MultiDimFit.mH120.root

# ls -alrth higgsCombinelxbatch.combined.1jet.em.mc.POINTS.*.MultiDimFit.mH120.root  | grep -v 36K | grep -v 35K | grep -v 34K | awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombinelxbatch.combined.1jet.em.data.POINTS.*.MultiDimFit.mH120.root  | grep -v 36K | grep -v 35K | grep -v 34K | awk '{print "rm "$9}' | /bin/sh



python  scripts/plot2Dscan.py -i ../higgsCombinelxbatch.combined.1jet.me.data.POINTS.root
python  scripts/plot2Dscan.py -i ../higgsCombinelxbatch.combined.1jet.em.data.POINTS.root
          


               


root -l ../higgsCombineLHScanMC.Combined.0jet.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.0jet.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/0jet.png

root -l ../higgsCombineLHScanMC.Combined.0jet.em.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.0jet.em.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/0jet.em.png


root -l ../higgsCombineLHScanMC.Combined.0jet.me.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.0jet.me.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/0jet.me.png


            
root -l ../higgsCombineLHScanMC.Combined.1jet.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.1jet.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/1jet.png

         
        
root -l ../higgsCombineLHScanMC.Combined.1jet.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.1jet.fix.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
        
        
        
        
         
root -l ../higgsCombinelxbatch.combined.1jet.em.mc.POINTS.root   \
        ../higgsCombinelxbatch.combined.1jet.em.data.POINTS.root  \
            scripts/drawNLLObs.C
         
         
root -l ../higgsCombineLHScanMC.Combined.1jet.em.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.1jet.em.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/1jet.em.png



root -l ../higgsCombinelxbatch.combined.1jet.me.mc.POINTS.root   \
        ../higgsCombinelxbatch.combined.1jet.me.data.POINTS.root  \
            scripts/drawNLLObs.C
         
root -l ../higgsCombineLHScanMC.Combined.1jet.me.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.1jet.me.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/1jet.me.png


root -l ../higgsCombineLHScanMC.Combined.2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/2j.png

            
root -l ../higgsCombineLHScanMC.Combined.vbf.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.vbf.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/vbf.png

            
root -l ../higgsCombineLHScanMC.Combined.vh2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.vh2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/vh2j.png

            
root -l ../higgsCombineLHScanMC.Combined.wh3l.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Combined.wh3l.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/wh3l.png

            
            
            
            
root -l ../higgsCombineLHScanHICHEPTotalcombinedLXBATCH.POINTS.root  \
           ../higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCH.POINTS.root   \
            scripts/drawNLLObs.C
        
          

          
root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
           ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal.root   \
            scripts/drawNLLObs.C

   
root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
           ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal.root   \
            scripts/drawNLLObs.C

            
root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalWithNewNuisancesScan.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL/0jet.png

 
            
            
            
combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.Total.txt.pruned.txt    >   result.Significance.superCombination.Total.txt.pruned.txt
combine -M ProfileLikelihood --significance                                                 superCombination.Total.txt.pruned.txt    >   result.data.Significance.superCombination.Total.txt.pruned.txt
           
                                                       
                                                       
                   

combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Combined.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Combined.2j.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Combined.wh3l.txt



combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.txt             >   result.data.MaxLikelihoodFit.Combined.1jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.txt             >   result.data.MaxLikelihoodFit.Combined.0jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.0jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.0jet.me.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.em.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Combined.1jet.me.txt          >   result.data.MaxLikelihoodFit.Combined.1jet.me.txt



combine -M ProfileLikelihood --significance         Combined.vbf.pruned.txt             >   result.data.Significance.Combined.vbf.txt
combine -M ProfileLikelihood --significance         Combined.vh2j.pruned.txt            >   result.data.Significance.Combined.vh2j.txt
combine -M ProfileLikelihood --significance         Combined.2j.pruned.txt              >   result.data.Significance.Combined.2j.txt
combine -M ProfileLikelihood --significance         Combined.wh3l.pruned.txt              >   result.data.Significance.Combined.wh3l.txt


combine -M ProfileLikelihood --significance         Combined.1jet.txt             >   result.data.Significance.Combined.1jet.txt
combine -M ProfileLikelihood --significance         Combined.0jet.txt             >   result.data.Significance.Combined.0jet.txt
combine -M ProfileLikelihood --significance         Combined.0jet.em.txt          >   result.data.Significance.Combined.0jet.em.txt
combine -M ProfileLikelihood --significance         Combined.0jet.me.txt          >   result.data.Significance.Combined.0jet.me.txt
combine -M ProfileLikelihood --significance         Combined.1jet.em.txt          >   result.data.Significance.Combined.1jet.em.txt
combine -M ProfileLikelihood --significance         Combined.1jet.me.txt          >   result.data.Significance.Combined.1jet.me.txt



# 
# 
# #
# # 2015 separate
# #
# 
# # 
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.Moriond2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.Moriond2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.Moriond2016.wh3l.txt
# 
# 
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.data.Data.MaxLikelihoodFit.Moriond2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.data.Data.MaxLikelihoodFit.Moriond2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-13 --rMax=14    Moriond2016.wh3l.pruned.txt            >   result.data.Data.MaxLikelihoodFit.Moriond2016.wh3l.txt

combine -M ProfileLikelihood --significance     Moriond2016.vbf.pruned.txt             >   result.data.Data.Significance.Moriond2016.vbf.txt
combine -M ProfileLikelihood --significance     Moriond2016.vh2j.pruned.txt            >   result.data.Data.Significance.Moriond2016.vh2j.txt
combine -M ProfileLikelihood --significance     Moriond2016.2j.pruned.txt              >   result.data.Data.Significance.Moriond2016.2j.txt
combine -M ProfileLikelihood --significance     Moriond2016.wh3l.pruned.txt            >   result.data.Data.Significance.Moriond2016.wh3l.txt

combine -M ProfileLikelihood --significance        Moriond2016.vbf.pruned.txt             >   result.data.Significance.Moriond2016.vbf.txt
combine -M ProfileLikelihood --significance        Moriond2016.vh2j.pruned.txt            >   result.data.Significance.Moriond2016.vh2j.txt
combine -M ProfileLikelihood --significance        Moriond2016.2j.pruned.txt              >   result.data.Significance.Moriond2016.2j.txt
combine -M ProfileLikelihood --significance        Moriond2016.wh3l.pruned.txt            >   result.data.Significance.Moriond2016.wh3l.txt








combine -M MultiDimFit    Moriond2016.vbf.pruned.txt      -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Moriond2016.vbf.pruned.txt"
combine -M MultiDimFit    Moriond2016.vh2j.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-6,7 -n "LHScanDATA.Moriond2016.vh2j.pruned.txt"
combine -M MultiDimFit    Moriond2016.2j.pruned.txt       -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-6,7 -n "LHScanDATA.Moriond2016.2j.pruned.txt"
combine -M MultiDimFit    Moriond2016.wh3l.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-13,14 -n "LHScanDATA.Moriond2016.wh3l.pruned.txt"
                                     
combine -M MultiDimFit    Moriond2016.vbf.pruned.txt      -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Moriond2016.vbf.pruned.txt"
combine -M MultiDimFit    Moriond2016.vh2j.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-6,7 -n "LHScanMC.Moriond2016.vh2j.pruned.txt"
combine -M MultiDimFit    Moriond2016.2j.pruned.txt       -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-6,7 -n "LHScanMC.Moriond2016.2j.pruned.txt"
combine -M MultiDimFit    Moriond2016.wh3l.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-13,14 -n "LHScanMC.Moriond2016.wh3l.pruned.txt"
                                                        
                                                       
                                                       
                                                       
                                                       
                                                       
 
 
root -l ../higgsCombineLHScanMC.Moriond2016.2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Moriond2016.2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_Moriond2016//2j.png

            
root -l ../higgsCombineLHScanMC.Moriond2016.vbf.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Moriond2016.vbf.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_Moriond2016//vbf.png

            
root -l ../higgsCombineLHScanMC.Moriond2016.vh2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Moriond2016.vh2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_Moriond2016//vh2j.png

            
root -l ../higgsCombineLHScanMC.Moriond2016.wh3l.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Moriond2016.wh3l.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_Moriond2016//wh3l.png

            

            
combine -M MultiDimFit    superCombination.2015.txt.pruned.txt.root     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.Moriond2016.combine.pruned.txt"
combine -M MultiDimFit    superCombination.2015.txt.pruned.txt.root     -m 125 --algo=grid --points 400                              --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.Moriond2016.combine.pruned.txt"


combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4    superCombination.2015.txt.pruned.txt.root                                      >   result.data.Data.MaxLikelihoodFit.Moriond2016.combined.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4    superCombination.2015.txt.pruned.txt.root     -t  -1  --expectSignal 1         >   result.data.MC.MaxLikelihoodFit.Moriond2016.combined.txt

combine -M ProfileLikelihood --significance     superCombination.2015.txt.pruned.txt.root                                      >   result.data.Data.Significance.Moriond2016.combined.txt
combine -M ProfileLikelihood --significance     superCombination.2015.txt.pruned.txt.root     -t  -1  --expectSignal 1         >   result.data.MC.Significance.Moriond2016.combined.txt



            
            
 
root -l ../higgsCombineLHScanMC.Moriond2016.combine.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.Moriond2016.combine.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
 
 
 
 
 
 
 
 
 
 
#                                             
#                                             

# 
#  
# #  
# #  
# # # 2016 separate
# # 
# 
# 

combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.vbf.pruned.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.vbf.txt
combine -M MaxLikelihoodFit   --rMin=-6 --rMax=8      ICHEP2016.vh2j.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.vh2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.2j.pruned.txt              >   result.data.MaxLikelihoodFit.ICHEP2016.2j.txt
combine -M MaxLikelihoodFit   --rMin=-4 --rMax=6      ICHEP2016.wh3l.pruned.txt            >   result.data.MaxLikelihoodFit.ICHEP2016.wh3l.txt



combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.data.MaxLikelihoodFit.ICHEP2016.1jet.me.txt


combine -M ProfileLikelihood --significance         ICHEP2016.vbf.pruned.txt             >   result.data.Significance.ICHEP2016.vbf.txt
combine -M ProfileLikelihood --significance         ICHEP2016.vh2j.pruned.txt            >   result.data.Significance.ICHEP2016.vh2j.txt
combine -M ProfileLikelihood --significance         ICHEP2016.2j.pruned.txt              >   result.data.Significance.ICHEP2016.2j.txt
combine -M ProfileLikelihood --significance         ICHEP2016.wh3l.pruned.txt              >   result.data.Significance.ICHEP2016.wh3l.txt


combine -M ProfileLikelihood --significance         ICHEP2016.1jet.txt             >   result.data.Significance.ICHEP2016.1jet.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.txt             >   result.data.Significance.ICHEP2016.0jet.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.em.txt          >   result.data.Significance.ICHEP2016.0jet.em.txt
combine -M ProfileLikelihood --significance         ICHEP2016.0jet.me.txt          >   result.data.Significance.ICHEP2016.0jet.me.txt
combine -M ProfileLikelihood --significance         ICHEP2016.1jet.em.txt          >   result.data.Significance.ICHEP2016.1jet.em.txt
combine -M ProfileLikelihood --significance         ICHEP2016.1jet.me.txt          >   result.data.Significance.ICHEP2016.1jet.me.txt

# # 



combine -M MultiDimFit    ICHEP2016.vbf.pruned.txt      -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanDATA.ICHEP2016.vbf.pruned.txt"
combine -M MultiDimFit    ICHEP2016.vh2j.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-6,8 -n "LHScanDATA.ICHEP2016.vh2j.pruned.txt"
combine -M MultiDimFit    ICHEP2016.2j.pruned.txt       -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanDATA.ICHEP2016.2j.pruned.txt"
combine -M MultiDimFit    ICHEP2016.wh3l.pruned.txt     -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,6 -n "LHScanDATA.ICHEP2016.wh3l.pruned.txt"
                                                                                                                                               
combine -M MultiDimFit    ICHEP2016.1jet.txt            -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1    -n "LHScanDATA.ICHEP2016.1jet.txt"
combine -M MultiDimFit    ICHEP2016.0jet.txt            -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.ICHEP2016.0jet.txt"
combine -M MultiDimFit    ICHEP2016.0jet.em.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.ICHEP2016.0jet.em.txt"
combine -M MultiDimFit    ICHEP2016.0jet.me.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.ICHEP2016.0jet.me.txt"
combine -M MultiDimFit    ICHEP2016.1jet.em.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-2,4  --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1 -n "LHScanDATA.ICHEP2016.1jet.em.txt"
combine -M MultiDimFit    ICHEP2016.1jet.me.txt         -m 125 --algo=grid --points 400 --setPhysicsModelParameterRanges r=-4,4  --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1 -n "LHScanDATA.ICHEP2016.1jet.me.txt"
                                                       




combine -M MultiDimFit    ICHEP2016.vbf.pruned.txt      -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,6 -n "LHScanMC.ICHEP2016.vbf.pruned.txt"
combine -M MultiDimFit    ICHEP2016.vh2j.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-6,8 -n "LHScanMC.ICHEP2016.vh2j.pruned.txt"
combine -M MultiDimFit    ICHEP2016.2j.pruned.txt       -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,6 -n "LHScanMC.ICHEP2016.2j.pruned.txt"
combine -M MultiDimFit    ICHEP2016.wh3l.pruned.txt     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,6 -n "LHScanMC.ICHEP2016.wh3l.pruned.txt"
                                                                                                                                                  
combine -M MultiDimFit    ICHEP2016.1jet.txt            -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 --X-rtd OPTIMIZE_BOUNDS=0  --robustFit 1  -n "LHScanMC.ICHEP2016.1jet.txt"
combine -M MultiDimFit    ICHEP2016.0jet.txt            -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.ICHEP2016.0jet.txt"
combine -M MultiDimFit    ICHEP2016.0jet.em.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.ICHEP2016.0jet.em.txt"
combine -M MultiDimFit    ICHEP2016.0jet.me.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.ICHEP2016.0jet.me.txt"
combine -M MultiDimFit    ICHEP2016.1jet.em.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.ICHEP2016.1jet.em.txt"
combine -M MultiDimFit    ICHEP2016.1jet.me.txt         -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-4,4 -n "LHScanMC.ICHEP2016.1jet.me.txt"
                                                       

     
text2workspace.py ICHEP2016.1jet.txt   -o  ICHEP2016.1jet.txt.root  
      

combineTool.py -d ICHEP2016.1jet.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "lxbatch.ICHEP2016.1jet.mc"   \
               --setPhysicsModelParameterRanges r=-2,4  -t  -1  --expectSignal 1    \
               --points 400    --job-mode lxbatch --task-name lxbatch-ICHEP2016-1jet-mc   --sub-opts='-q 1nd' --split-points 1 

               

combineTool.py -d ICHEP2016.1jet.txt.root -M MultiDimFit    \
               --algo=grid   --X-rtd OPTIMIZE_BOUNDS=0   -n "lxbatch.ICHEP2016.1jet.data"   \
               --setPhysicsModelParameterRanges r=-2,4      \
               --points 400    --job-mode lxbatch --task-name lxbatch-ICHEP2016-1jet-data   --sub-opts='-q 1nd' --split-points 1 

# hadd higgsCombinelxbatch.ICHEP2016.1jet.data.POINTS.root   higgsCombinelxbatch.ICHEP2016.1jet.data.POINTS.*.MultiDimFit.mH120.root
# hadd higgsCombinelxbatch.ICHEP2016.1jet.mc.POINTS.root   higgsCombinelxbatch.ICHEP2016.1jet.mc.POINTS.*.MultiDimFit.mH120.root

# ls -alrth higgsCombinelxbatch.ICHEP2016.1jet.data.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh
# ls -alrth higgsCombinelxbatch.ICHEP2016.1jet.mc.POINTS.*.MultiDimFit.mH120.root  | grep -v 6.6 | grep -v 6.7 | grep -v 6.8 | awk '{print "rm "$9}' | /bin/sh




root -l ../higgsCombineLHScanMC.ICHEP2016.0jet.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.0jet.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//0jet.png

root -l ../higgsCombineLHScanMC.ICHEP2016.0jet.em.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.0jet.em.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//0jet.em.png


root -l ../higgsCombineLHScanMC.ICHEP2016.0jet.me.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.0jet.me.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//0jet.me.png



root -l ../higgsCombinelxbatch.ICHEP2016.1jet.mc.POINTS.root  \
        ../higgsCombinelxbatch.ICHEP2016.1jet.data.POINTS.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//1jet.png


root -l ../higgsCombineLHScanMC.ICHEP2016.1jet.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.1jet.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//1jet.png

            
root -l ../higgsCombineLHScanMC.ICHEP2016.1jet.em.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.1jet.em.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//1jet.em.png


root -l ../higgsCombineLHScanMC.ICHEP2016.1jet.me.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.1jet.me.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//1jet.me.png


root -l ../higgsCombineLHScanMC.ICHEP2016.2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//2j.png

            
root -l ../higgsCombineLHScanMC.ICHEP2016.vbf.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.vbf.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//vbf.png

            
root -l ../higgsCombineLHScanMC.ICHEP2016.vh2j.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.vh2j.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//vh2j.png

            
root -l ../higgsCombineLHScanMC.ICHEP2016.wh3l.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.wh3l.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
mv ll.png plotLL_ICHEP2016//wh3l.png

            
            
            
            
TO BE DONE
            
combine -M MultiDimFit    superCombination.2016.txt.pruned.txt.workspace.root     -m 125 --algo=grid --points 400 -t  -1  --expectSignal 1     --setPhysicsModelParameterRanges r=-2,4 -n "LHScanMC.ICHEP2016.combine.pruned.txt"
combine -M MultiDimFit    superCombination.2016.txt.pruned.txt.workspace.root     -m 125 --algo=grid --points 400                              --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATA.ICHEP2016.combine.pruned.txt"


combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4    superCombination.2016.txt.pruned.txt.workspace.root                                      >   result.data.Data.MaxLikelihoodFit.ICHEP2016.combined.txt
combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4    superCombination.2016.txt.pruned.txt.workspace.root     -t  -1  --expectSignal 1         >   result.data.MC.MaxLikelihoodFit.ICHEP2016.combined.txt

combine -M ProfileLikelihood --significance     superCombination.2016.txt.pruned.txt.workspace.root                                      >   result.data.Data.Significance.ICHEP2016.combined.txt
combine -M ProfileLikelihood --significance     superCombination.2016.txt.pruned.txt.workspace.root     -t  -1  --expectSignal 1         >   result.data.MC.Significance.ICHEP2016.combined.txt



            
            
 
root -l ../higgsCombineLHScanMC.ICHEP2016.combine.pruned.txt.MultiDimFit.mH125.root  \
        ../higgsCombineLHScanDATA.ICHEP2016.combine.pruned.txt.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
 
 
 
 
 
 
 
            

# 
# 





#### OLD, do not use 





# # 
# # 
# combine -M MaxLikelihoodFit     --rMin=-2 --rMax=4     ICHEP2016.v1.txt.pruned.txt             >   result.data.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
# #     
# combine -M ProfileLikelihood --significance ICHEP2016.v1.txt.pruned.txt        >   result.data.Significance.ICHEP2016.v1.txt.pruned.txt
# 
# combine -M MultiDimFit ICHEP2016.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATAHICHEP"           >   result.data.LikelihoodScan.ICHEP2016.v1.txt.pruned.txt
# 
# 
# 
#  
#  
#  
# # mix 2015 and 2016
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ggHcombined.1jet.txt             >   result.data.MaxLikelihoodFit.ggHcombined.1jet.txt
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ggHcombined.0jet.txt             >   result.data.MaxLikelihoodFit.ggHcombined.0jet.txt
# 
# combine -M ProfileLikelihood --significance                           ggHcombined.0jet.txt             >   result.data.Significance.ggHcombined.0jet.txt
# combine -M ProfileLikelihood --significance                           ggHcombined.1jet.txt             >   result.data.Significance.ggHcombined.1jet.txt
# combine -M ProfileLikelihood --significance                           Combined2j.v1.txt.pruned.txt     >   result.data.Significance.Combined.2jet.txt
#  
#  
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      ggHcombined.v1.txt.pruned.txt    >   result.data.MaxLikelihoodFit.ggHcombined.v1.txt.pruned.txt
# 
# combine -M ProfileLikelihood --significance                           ggHcombined.v1.txt.pruned.txt    >   result.data.Significance.ggHcombined.v1.txt.pruned.txt
# 
# 
# combine -M MultiDimFit ggHcombined.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATAHICHEPggHcombined"           >   result.data.LikelihoodScan.ICHEP2016.ggHcombined.txt.pruned.txt
# 
# 
# 
# # super-combination 2015 and 2016
# 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      superCombination.v1.txt.pruned.txt    >   result.data.MaxLikelihoodFit.superCombination.v1.txt.pruned.txt
# 
# combine -M ProfileLikelihood --significance                           superCombination.v1.txt.pruned.txt    >   result.data.Significance.superCombination.v1.txt.pruned.txt
# 
# 
# combine -M MultiDimFit superCombination.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanDATAHICHEPggHcombined"           >   /tmp/amassiro/result.data.LikelihoodScan.ICHEP2016.superCombination.v1.txt.pruned.txt
# 
# 
# 
# 
# 
# 



     