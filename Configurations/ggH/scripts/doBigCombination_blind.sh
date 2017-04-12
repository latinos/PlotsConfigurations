

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -



# 
# fix ggH

# 
# cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1" | grep -v "CMS_fake_ele_stat_hww"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt
# 
# 
# # 
# # fix VH2j
# # 
# 
# cat VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
# mv VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt
# 
# 
# cat VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt
# mv VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt
# 
# 
# # 
# # fix VBF
# # 
# cat VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
# mv VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
# #
# cat VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt
# 
# 
# 
# 
# # 
# cat VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
# #
# cat VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt
# #
# cat VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt
# 
# 
# 
# # 
# # fix ggH2j
# # 
# 
# cat ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
# mv ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
# #
# cat ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
# mv ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt
# # 
# cat ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt  | grep -v "Vg_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt
# mv ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt
# 
# 
# 
# 
# 
# 
# 
# # combine
#  
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
# 
#  
#  
# # 2015 ggH
# 
# 
# # fix
# # 
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt
# 
# cat ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
# mv ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt
# 
# 
# 
#  
#  
# # fix
# #
# cat ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
# mv ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
# #
# cat ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
# mv ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt
# 
# 
# 
# # combine
#  
                  
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

# 
# 
# 
#                   
# 
# # fix
# # 
# #
# # 
# cat VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
# #
# cat VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt
# #
# cat VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt
# mv VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt
# 
# 
# # combine
#                    

combineCards.py   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   ICHEP2016.vbf.pruned.txt

                                    

combineCards.py   of2jvbf13=VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   Combined.vbf.pruned.txt
                  
#                   
#                   
#                   
# 
# # fix
# # 
# # 
# cat VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt
# mv VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt    VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt
# #
# cat VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1" | grep -v "Vg_ibin"   &> VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
# mv VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt
# #
# 
# # combine
# 

combineCards.py   of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.vh2j.pruned.txt
 


combineCards.py   of2jvh2j13=VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Combined.vh2j.pruned.txt
 
#  
# 
#  # wh3l
# 
#            
# 
# 
                  
combineCards.py   wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   ICHEP2016.wh3l.pruned.txt
                          

combineCards.py   wh3lossf=WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  wh3lsssf=WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       \
                  wh3lwz=WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  wh3lzg=WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  ICHEP_wh3lossf=WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  \
                  ICHEP_wh3lsssf=WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       \
                  ICHEP_wh3lwz=WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       \
                  ICHEP_wh3lzg=WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            \
                  >   Combined.wh3l.pruned.txt

                                
                  

                  
#                   
# 
# 
#  
# # combination of ggH 2015 and 2016
# 

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

                  
                  
                  
 
 
 
 
# 2015 combination
# # 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      superCombination.2015.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.2015.txt.pruned.txt
# 
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.2015.txt.pruned.txt    >   result.Significance.superCombination.2015.txt.pruned.txt
# 
# 
# combine -M MultiDimFit superCombination.2015.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=-1,3 -n "LHScanHICHEP2015combined"   -t -1 --expectSignal=1        >   /tmp/amassiro/result.LikelihoodScan.ICHEP2016.superCombination.2015.txt.pruned.txt
# 
# 
# 
# 
# # 
# 
# # 2016 combination

# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      superCombination.2016.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.2016.txt.pruned.txt

# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.2016.txt.pruned.txt    >   result.Significance.superCombination.2016.txt.pruned.txt


# combine -M MultiDimFit superCombination.2016.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEP2016combined"   -t -1 --expectSignal=1        >   /tmp/amassiro/result.LikelihoodScan.ICHEP2016.superCombination.2016.txt.pruned.txt

# # 
# # 
# # 2015+2016 combination
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      superCombination.Total.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=0 --rMax=2  \
#       --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO  --X-rtd FITTER_NEVER_GIVE_UP  --X-rtd FITTER_BOUND \
#       superCombination.Total.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=0.5 --rMax=1.5  \
#                  --robustFit=1    \
#                  --minimizerAlgo=Minuit2    \
#                  --minimizerAlgoForMinos=Minuit2    \
#                  --minimizerStrategy=1    \
#                  --minimizerTolerance=0.001    \
#                  --minimizerToleranceForMinos=0.001    \
#                  --cminFallbackAlgo Minuit,0.0001    \
#                  --stepSize=0.01    \
#                  --X-rtd FITTER_NEW_CROSSING_ALGO    \
#                  --X-rtd FITTER_NEVER_GIVE_UP    \
#                  --X-rtd FITTER_BOUND    \
#                  --X-rtd TMCSO_AdaptivePseudoAsimov=50  \
#                   superCombination.Total.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
# 

                 
                 

# combineTool.py -d superCombination.Total.txt.pruned.txt.workspace.root -M MultiDimFit    \
#                --algo=grid -t -1 --expectSignal 1     --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanHICHEPTotalcombinedLXBATCH"   \
#                --points 100    --job-mode lxbatch --task-name lxbatch-superCombination --sub-opts='-q 1nd' --split-points 1  
# 
# 
# combineTool.py -d superCombination.2016.txt.pruned.txt.workspace.root -M MultiDimFit    \
#                --algo=grid -t -1 --expectSignal 1     --setPhysicsModelParameterRanges  r=0,2.5    -n "LHScanHICHEP2016combinedLXBATCH"   \
#                --points 100    --job-mode lxbatch --task-name lxbatch-superCombination2016 --sub-opts='-q 1nd' --split-points 1 
# 
#                
# 
# # hadd higgsCombineLHScanHICHEP2016combinedLXBATCH.POINTS.root        higgsCombineLHScanHICHEP2016combinedLXBATCH.POINTS.*.MultiDimFit.mH120.root
# # hadd higgsCombineLHScanHICHEPTotalcombinedLXBATCH.POINTS.root       higgsCombineLHScanHICHEPTotalcombinedLXBATCH.POINTS.*.MultiDimFit.mH120.root
# 
# 
# combineTool.py -d Combined.wh3l.pruned.txt.workspace.root -M MultiDimFit    \
#                --algo=grid  -t -1 --expectSignal 1     --setPhysicsModelParameterRanges r=-3,2.0    -n "LHScanWH3lLXBATCH"   \
#                --points 100    --job-mode lxbatch --task-name lxbatch-wh3l --sub-opts='-q 1nd' --split-points 1 
# 


# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.Total.txt.pruned.txt    >   result.Significance.superCombination.Total.txt.pruned.txt


# combine -M MultiDimFit superCombination.Total.txt.pruned.txt -m 125 --algo=grid --points 40 --setPhysicsModelParameterRanges r=0,2 -n "LHScanHICHEPTotalcombined"   -t -1 --expectSignal=1        >   /tmp/amassiro/result.LikelihoodScan.ICHEPTotal.superCombination.Total.txt.pruned.txt
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
# # 
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      Combined.vbf.pruned.txt             >   result.MaxLikelihoodFit.Combined.vbf.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=8      Combined.vh2j.pruned.txt            >   result.MaxLikelihoodFit.Combined.vh2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      Combined.2j.pruned.txt              >   result.MaxLikelihoodFit.Combined.2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=6      Combined.wh3l.pruned.txt            >   result.MaxLikelihoodFit.Combined.wh3l.txt
# 
# 
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.1jet.txt             >   result.MaxLikelihoodFit.Combined.1jet.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.0jet.txt             >   result.MaxLikelihoodFit.Combined.0jet.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.0jet.em.txt          >   result.MaxLikelihoodFit.Combined.0jet.em.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.0jet.me.txt          >   result.MaxLikelihoodFit.Combined.0jet.me.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.1jet.em.txt          >   result.MaxLikelihoodFit.Combined.1jet.em.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Combined.1jet.me.txt          >   result.MaxLikelihoodFit.Combined.1jet.me.txt
# 
# 
# 
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.vbf.pruned.txt             >   result.Significance.Combined.vbf.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.vh2j.pruned.txt            >   result.Significance.Combined.vh2j.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.2j.pruned.txt              >   result.Significance.Combined.2j.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.wh3l.pruned.txt              >   result.Significance.Combined.wh3l.txt
# 
# 
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.1jet.txt             >   result.Significance.Combined.1jet.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.0jet.txt             >   result.Significance.Combined.0jet.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.0jet.em.txt          >   result.Significance.Combined.0jet.em.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.0jet.me.txt          >   result.Significance.Combined.0jet.me.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.1jet.em.txt          >   result.Significance.Combined.1jet.em.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        Combined.1jet.me.txt          >   result.Significance.Combined.1jet.me.txt
# # 
# # 

# # 
# # 
# # #
# # # 2015 separate
# # #
# # # 
# # # # 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.MaxLikelihoodFit.Moriond2016.vbf.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.MaxLikelihoodFit.Moriond2016.vh2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.MaxLikelihoodFit.Moriond2016.2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=7      Moriond2016.wh3l.pruned.txt            >   result.MaxLikelihoodFit.Moriond2016.wh3l.txt
# # 
# # 
# combine -M MaxLikelihoodFit   --rMin=-2 --rMax=4      Moriond2016.vbf.pruned.txt             >   result.Data.MaxLikelihoodFit.Moriond2016.vbf.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.vh2j.pruned.txt            >   result.Data.MaxLikelihoodFit.Moriond2016.vh2j.txt
# combine -M MaxLikelihoodFit   --rMin=-6 --rMax=7      Moriond2016.2j.pruned.txt              >   result.Data.MaxLikelihoodFit.Moriond2016.2j.txt
# combine -M MaxLikelihoodFit   --rMin=-13 --rMax=14    Moriond2016.wh3l.pruned.txt            >   result.Data.MaxLikelihoodFit.Moriond2016.wh3l.txt
# 
# combine -M ProfileLikelihood --significance     Moriond2016.vbf.pruned.txt             >   result.Data.Significance.Moriond2016.vbf.txt
# combine -M ProfileLikelihood --significance     Moriond2016.vh2j.pruned.txt            >   result.Data.Significance.Moriond2016.vh2j.txt
# combine -M ProfileLikelihood --significance     Moriond2016.2j.pruned.txt              >   result.Data.Significance.Moriond2016.2j.txt
# combine -M ProfileLikelihood --significance     Moriond2016.wh3l.pruned.txt            >   result.Data.Significance.Moriond2016.wh3l.txt
# 
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1      Moriond2016.vbf.pruned.txt             >   result.Significance.Moriond2016.vbf.txt
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1      Moriond2016.vh2j.pruned.txt            >   result.Significance.Moriond2016.vh2j.txt
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1      Moriond2016.2j.pruned.txt              >   result.Significance.Moriond2016.2j.txt
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1      Moriond2016.wh3l.pruned.txt            >   result.Significance.Moriond2016.wh3l.txt
#                                             
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
# # # # 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      ICHEP2016.vbf.pruned.txt             >   result.MaxLikelihoodFit.ICHEP2016.vbf.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-6 --rMax=8      ICHEP2016.vh2j.pruned.txt            >   result.MaxLikelihoodFit.ICHEP2016.vh2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-4 --rMax=6      ICHEP2016.2j.pruned.txt              >   result.MaxLikelihoodFit.ICHEP2016.2j.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=6      ICHEP2016.wh3l.pruned.txt            >   result.MaxLikelihoodFit.ICHEP2016.wh3l.txt
# 
# 
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.1jet.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.0jet.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.me.txt
# 
# 
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.vbf.pruned.txt             >   result.Significance.ICHEP2016.vbf.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.vh2j.pruned.txt            >   result.Significance.ICHEP2016.vh2j.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.2j.pruned.txt              >   result.Significance.ICHEP2016.2j.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.wh3l.pruned.txt              >   result.Significance.ICHEP2016.wh3l.txt
# 
# 
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.txt             >   result.Significance.ICHEP2016.1jet.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.txt             >   result.Significance.ICHEP2016.0jet.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.em.txt          >   result.Significance.ICHEP2016.0jet.em.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.me.txt          >   result.Significance.ICHEP2016.0jet.me.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.em.txt          >   result.Significance.ICHEP2016.1jet.em.txt
# combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.me.txt          >   result.Significance.ICHEP2016.1jet.me.txt
# # # # # 
# # # # 
# # # 



























# # 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1    --rMin=-2 --rMax=4     ICHEP2016.v1.txt.pruned.txt             >   result.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
# #     
# combine -M ProfileLikelihood --significance ICHEP2016.v1.txt.pruned.txt -t -1 --expectSignal=1       >   result.Significance.ICHEP2016.v1.txt.pruned.txt
# 
# combine -M MultiDimFit ICHEP2016.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEP"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.v1.txt.pruned.txt
# 
# 
# 
#  
#  
#  
# # mix 2015 and 2016
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.1jet.txt             >   result.MaxLikelihoodFit.ggHcombined.1jet.txt
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.0jet.txt             >   result.MaxLikelihoodFit.ggHcombined.0jet.txt
# 
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.0jet.txt             >   result.Significance.ggHcombined.0jet.txt
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.1jet.txt             >   result.Significance.ggHcombined.1jet.txt
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         Combined2j.v1.txt.pruned.txt     >   result.Significance.Combined.2jet.txt
#  
#  
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.v1.txt.pruned.txt    >   result.MaxLikelihoodFit.ggHcombined.v1.txt.pruned.txt
# 
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.v1.txt.pruned.txt    >   result.Significance.ggHcombined.v1.txt.pruned.txt
# 
# 
# combine -M MultiDimFit ggHcombined.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEPggHcombined"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.ggHcombined.txt.pruned.txt
# 
# 
# 
# # super-combination 2015 and 2016
# 
# combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      superCombination.v1.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.v1.txt.pruned.txt
# 
# combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.v1.txt.pruned.txt    >   result.Significance.superCombination.v1.txt.pruned.txt
# 
# 
# combine -M MultiDimFit superCombination.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEPggHcombined"   -t -1 --expectSignal=1        >   /tmp/amassiro/result.LikelihoodScan.ICHEP2016.superCombination.v1.txt.pruned.txt
# 
# 
# 
# 
# 
# 



     