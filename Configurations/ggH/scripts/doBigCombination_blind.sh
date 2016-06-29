

# cd ~/Framework/CMSSW_7_1_15/src/
cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

#
# fix
#

cat ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt  | grep -v "_DY_ibin_1" | grep -v "_Vg_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt

cat ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt   | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt
mv ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.test.txt.pruned.txt ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.v1.txt.pruned.txt

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.em.txt

combineCards.py   me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.0jet.me.txt


combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ICHEP2016.1jet.em.txt

combineCards.py   me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
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


# combine
 
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
cat ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt
#
cat ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt
mv ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.test.txt.pruned.txt    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt


# combine
 
combineCards.py   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.2j.pruned.txt


                  

# fix
# 
cat VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt
#
cat VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt
mv VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.test.txt.pruned.txt    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt

# combine
 
combineCards.py   of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  >   Moriond2016.vbf.pruned.txt

                  
                  
                  

# fix
# 
cat VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt  | grep -v "DY_ibin_2" | grep -v "DY_ibin_4"  &> VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt
mv VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt
#
cat VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt  | grep -v "DY_ibin_1"   &> VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt
mv VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.test.txt.pruned.txt    VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt

# combine
 
combineCards.py   of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Moriond2016.vh2j.pruned.txt
 
 
 
 
 
 
# results

combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.1jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.txt             >   result.MaxLikelihoodFit.ICHEP2016.0jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.0jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.em.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ICHEP2016.1jet.me.txt          >   result.MaxLikelihoodFit.ICHEP2016.1jet.me.txt


combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.txt             >   result.Significance.ICHEP2016.1jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.txt             >   result.Significance.ICHEP2016.0jet.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.em.txt          >   result.Significance.ICHEP2016.0jet.em.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.0jet.me.txt          >   result.Significance.ICHEP2016.0jet.me.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.em.txt          >   result.Significance.ICHEP2016.1jet.em.txt
combine -M ProfileLikelihood --significance -t -1 --expectSignal 1        ICHEP2016.1jet.me.txt          >   result.Significance.ICHEP2016.1jet.me.txt




combine -M MaxLikelihoodFit -t -1 --expectSignal 1    --rMin=-2 --rMax=4     ICHEP2016.v1.txt.pruned.txt             >   result.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
    
combine -M ProfileLikelihood --significance ICHEP2016.v1.txt.pruned.txt -t -1 --expectSignal=1       >   result.Significance.ICHEP2016.v1.txt.pruned.txt

combine -M MultiDimFit ICHEP2016.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEP"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.v1.txt.pruned.txt





 
# combination of ggH 2015 and 2016


combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.v1.txt.pruned.txt

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.1jet.txt

combineCards.py   em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   ggHcombined.0jet.txt



 

combineCards.py   of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   Combined2j.v1.txt.pruned.txt


                  

combineCards.py   em_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_mp_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_1j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                  em_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  me_pm_0j_ICHEP_13=ggH/datacards/hww2l2v_ICHEP_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13Top=ggH/datacards/hww2l2v_ICHEP_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j_ICHEP_13DYtt=ggH/datacards/hww2l2v_ICHEP_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  em1j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                  me1j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                  em0j13=ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                  me0j13=ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                  of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  of2j2j13=ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13=VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvh2j13=VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   superCombination.v1.txt.pruned.txt

 
 
        
 
 
 
 
 
 
 
 
 
# results

combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.1jet.txt             >   result.MaxLikelihoodFit.ggHcombined.1jet.txt
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.0jet.txt             >   result.MaxLikelihoodFit.ggHcombined.0jet.txt

combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.0jet.txt             >   result.Significance.ggHcombined.0jet.txt
combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.1jet.txt             >   result.Significance.ggHcombined.1jet.txt
combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         Combined2j.v1.txt.pruned.txt     >   result.Significance.Combined.2jet.txt
 
 
combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      ggHcombined.v1.txt.pruned.txt    >   result.MaxLikelihoodFit.ggHcombined.v1.txt.pruned.txt

combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         ggHcombined.v1.txt.pruned.txt    >   result.Significance.ggHcombined.v1.txt.pruned.txt


combine -M MultiDimFit ggHcombined.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEPggHcombined"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.ggHcombined.txt.pruned.txt




combine -M MaxLikelihoodFit -t -1 --expectSignal 1  --rMin=-2 --rMax=4      superCombination.v1.txt.pruned.txt    >   result.MaxLikelihoodFit.superCombination.v1.txt.pruned.txt

combine -M ProfileLikelihood --significance  -t -1 --expectSignal 1                         superCombination.v1.txt.pruned.txt    >   result.Significance.superCombination.v1.txt.pruned.txt


combine -M MultiDimFit superCombination.v1.txt.pruned.txt -m 125 --algo=grid --points 200 --setPhysicsModelParameterRanges r=-2,4 -n "LHScanHICHEPggHcombined"   -t -1 --expectSignal=1        >   result.LikelihoodScan.ICHEP2016.superCombination.v1.txt.pruned.txt




     