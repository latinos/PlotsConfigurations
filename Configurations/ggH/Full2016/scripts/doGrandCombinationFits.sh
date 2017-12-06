#!/bin/bash

#combineVersion=7_4_7
combineVersion=8_1_0
## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec

cd $workdir

workspaces="Full2016.root Full2016_0jet_ggH.root Full2016_0jet_SF_ggH.root Full2016_1jet_ggH.root Full2016_1jet_SF_ggH.root Full2016_2jet_ggH.root Full2016_2jet_VBF.root Full2016_2jet_VH2j.root Full2016_WH3l.root Full2016_ZH4l.root"

for ws in $workspaces
do
  if [ ${combineVersion} = '7_4_7' ]
  then
    bsub -q 8nh "combine -M ProfileLikelihood ${workdir}/${ws} -t -1 --expectSignal=1 --signif > ${workdir}/${ws/.root/.signif.out}"
    bsub -q 8nh "combine -M MaxLikelihoodFit ${workdir}/${ws} -t -1 --expectSignal=1 > ${workdir}/${ws/.root/.mu.out}; cp mlfit.root ${workdir}/mlfit.${ws}"
  elif [ ${combineVersion} = '8_1_0' ]
  then  
    bsub -q 8nh "combine -M Significance ${workdir}/${ws} -t -1 --expectSignal=1 --signif  --X-rtd MINIMIZER_analytic > ${workdir}/${ws/.root/.signif.out}"
    bsub -q 8nh "combine -M FitDiagnostics ${workdir}/${ws} -t -1 --expectSignal=1 --robustFit=1 --X-rtd MINIMIZER_analytic > ${workdir}/${ws/.root/.mu.out}; cp fitDiagnostics.root ${workdir}/fitDiagnostics.${ws}"
  fi
done

allChannels=r_of0jet,r_of1jet,r_of2jet,r_sf0jet,r_sf1jet,r_of2jetvbf,r_of2jetvh,r_wh3l,r_zh4l,
allChannels=${allChannels//,/=1,}


if [ ${combineVersion} = '7_4_7' ]
then
  bsub -q 8nh "combine -M MultiDimFit ${workdir}/Full2016.categories.root --algo=singles -t -1 --setPhysicsModelParameters ${allChannels%?} > ${workdir}/Full2016.categories.multidimfit.out"
elif [ ${combineVersion} = '8_1_0' ]
then
  bsub -q 8nh "combine -M MultiDimFit ${workdir}/Full2016.categories.root --algo=singles -t -1 --setParameters ${allChannels%?} --robustFit=1 --X-rtd MINIMIZER_analytic > ${workdir}/Full2016.categories.multidimfit.out"
fi
