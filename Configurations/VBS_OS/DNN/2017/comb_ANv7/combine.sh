#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/f/fcetorel/private/work2/combine/CMSSW_10_2_13/
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
workDir=$PWD

datacardDir=datacards
combinedcardsDir=workspaces/
workspaceDir=workspaces/
varL=DNNoutput_lowZ_s2sb5e3
varH=DNNoutput_highZ_s2sb5e3

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/sr_lowZ/${varL}/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/sr_highZ/${varH}/datacard.txt \
                  top=${workDir}/${datacardDir}/topcr/events/datacard.txt \
                  dy=${workDir}/${datacardDir}/dycr/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/_${varL}_${varH}.txt
output=${varL}_${varH}

python RemoveSample.py ${workspaceDir}/_${output}.txt -o ${workspaceDir}/${output}.txt -i inputRemoveAllSamplesBelowThreshold.py -t 0.01
rm ${workspaceDir}/_${output}.txt


text2workspace.py ${combinedcardsDir}/${varL}_${varH}.txt -o ${workspaceDir}/${varL}_${varH}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

echo ${varL} ${varH}" (DF)" >> ${workspaceDir}/significance_${varL}_${varH}.txt
combine -M Significance ${workspaceDir}/${varL}_${varH}.root -t -1 --setParameters r_vbs=1 --redefineSignalPOIs=r_vbs >> ${workspaceDir}/significance_${varL}_${varH}.txt

echo ${varL} ${varH}" (DF)" >> ${workspaceDir}/fitdiagnostic_${varL}_${varH}.txt
combine -M FitDiagnostics ${workspaceDir}/${varL}_${varH}.root -t -1 --setParameters r_vbs=1 --cminDefaultMinimizerStrategy 0 --redefineSignalPOIs=r_vbs --saveNormalizations --saveWithUncertainties >> ${workspaceDir}/fitdiagnostic_${varL}_${varH}.txt

