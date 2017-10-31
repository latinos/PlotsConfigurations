#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/KvKf

cd ${workdir}

datacard=Full2016.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/H_htt:muGGH[1,-1,3]' \
                   --PO 'map=.*/bbH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_htt:muVBF[1,-3,6]'  \
                   --PO 'map=.*/WH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/ZH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*vbf_2j/ggZH*:0' \
                   --PO 'map=.*vbf_2j/ZH*:0' \
                   --PO 'map=.*vbf_2j_Top/Vg:0' \
                   --PO 'map=.*vbf_2j_DYtt/VVV:0' \
                   ${datacard}  -o  ${datacard/.txt/kVkF.root}

#combineTool.py -M MultiDimFit Full2016kVkF.root -t -1 --setPhysicsModelParameters muGGH=1,muVBF=1 --points 1000  --algo grid -n Full2016kVkF --redefineSignalPOIs muGGH,muVBF  --setPhysicsModelParameterRanges muGGH=0,3:muVBF=-2,6 --job-mode lxbatch --split-points 10 --sub-opts='-q 8nh' --task-name Full2016kVkF -n Full2016kVkF
