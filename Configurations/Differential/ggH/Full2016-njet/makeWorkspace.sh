#!/bin/bash

#FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/l/lenzip/work/Combine_autoMC_regularization/CMSSW_8_1_0/
eval `scram runtime -sh`
cd -

workdir=`pwd`
datacardDir=datacards

outputdir=`pwd`/combine
if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi

cd $outputdir

variable_pt2lt20=mllVSmth_pt2lt20
variable_pt2ge20=mllVSmth_pt2ge20

combineCards.py   em_mp_1j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_0j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_0j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_0j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_0j_pt2lt20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_mp_0j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_0j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_0j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_0j_pt2ge20_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of2j_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j/mllVSmth_2j/datacard.txt \
                  of3j_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_of3j/mllVSmth_2j/datacard.txt \
                  of4j_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_of4j/mllVSmth_2j/datacard.txt \
                  of0j_Top_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1j_Top_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2j_Top_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of3j_Top_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of3j/events/datacard.txt \
                  of4j_Top_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of4j/events/datacard.txt \
                  of0j_DYtt_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1j_DYtt_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  of2j_DYtt_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  of3j_DYtt_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of3j/events/datacard.txt \
                  of4j_DYtt_2016=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of4j/events/datacard.txt \
                  > combined_2016.txt

echo "nuisance edit drop qqH_hww_0j_nonfid * CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_1j_nonfid * CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_nonfid * CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_3j_nonfid * CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_4j_nonfid * CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_nonfid * CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_nonfid * CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_nonfid * CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_3j_nonfid * CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_4j_nonfid * CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_nonfid * CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_1j_nonfid * CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_nonfid * CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_3j_nonfid * CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_4j_nonfid * CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_nonfid * CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_1j_nonfid * CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_nonfid * CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_3j_nonfid * CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_4j_nonfid * CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_2j_fid of1j_Top_2016 CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop DY of4j_Top_2016 CMS_scale_e_2016" >> combined_2016.txt
echo "nuisance edit drop DY of4j_Top_2016 CMS_scale_m_2016" >> combined_2016.txt
echo "nuisance edit drop DY of4j_Top_2016 CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_1j_fid of0j_DYtt_2016 CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_1j_fid of0j_DYtt_2016 CMS_scale_met_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_fid of0j_DYtt_2016 CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_fid of2j_DYtt_2016 CMS_scale_j_2016" >> combined_2016.txt
echo "nuisance edit drop qqH_hww_0j_fid of2j_DYtt_2016 CMS_scale_met_2016" >> combined_2016.txt

cp combined_2016.txt combined_2016.reg.txt
cat << EOT >> combined_2016.reg.txt
constr1 constr const1_In[0.],RooFormulaVar::fconstr1("r_0+r_2-2*r_1",{r_0,r_1,r_2}),delta[9.52]
constr2 constr const2_In[0.],RooFormulaVar::fconstr2("r_1+r_3-2*r_2",{r_1,r_2,r_3}),delta[9.52]
constr3 constr const3_In[0.],RooFormulaVar::fconstr3("r_2+r_4-2*r_3",{r_2,r_3,r_4}),delta[9.52]
EOT

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*H_hww_0j_fid:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_1j_fid:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_2j_fid:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_3j_fid:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_4j_fid:r_4[1, -10, 10]' \
                  combined_2016.txt -o workspace_2016.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*H_hww_0j_fid:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_1j_fid:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_2j_fid:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_3j_fid:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*H_hww_4j_fid:r_4[1, -10, 10]' \
                  combined_2016.reg.txt -o workspace_2016.reg.root
                  
