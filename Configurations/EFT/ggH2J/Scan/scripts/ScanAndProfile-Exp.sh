
cmsenv
ulimit -s unlimited

names=(H1)
faiVs=(0.0)
faiFs=(0.0)
muvs=(1.0)
mufs=(1.0)
ran=(1.0)

nH=${#faiFs[@]}

for (( i=0; i<${nH}; i++ ));
do

  echo "Hypothesis: ${names[$i]}, muv: ${muvs[$i]}, muf: ${mufs[$i]}, fai; ${faiFs[$i]}, range: ${ran[$i]}"

  ./scripts/parallelScan.py -n HGG_$1e_"${names[$i]}" -d cards/HGG_$1.root -m 125 --algo=grid --points 101 --setParameters muV=${muvs[$i]},muF=${mufs[$i]},FaiV=${faiVs[$i]},FaiF=${faiFs[$i]} --setParameterRanges muF=0,100:muV=0,100 --cminDefaultMinimizerTolerance=0.1 --cminDefaultMinimizerStrategy=1 --cminDefaultMinimizerType Minuit2 --cminDefaultMinimizerAlgo Migrad --cminFallbackAlgo Minuit2,Migrad,0:0.6 --cminPreFit=1 --cminApproxPreFitStrategy=2 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd MINIMIZER_analytic --redefineSignalPOIs=FaiF,FaiV,muV,muF -P FaiF --floatOtherPOIs 1 -M MultiDimFit -t -1 -s 1 --alignEdges 1 --saveNLL --X-rtd REMOVE_CONSTANT_ZERO_POINT=1 

#  combineTool.py -n HGG_$1e_"${names[$i]}" -d cards/HGG_$1.root -m 125 --algo=grid --points 101 --setParameters muV=${muvs[$i]},muF=${mufs[$i]},Fai=${fais[$i]} --setParameterRanges muF=0,100:muV=0,100:Fai=-${ran[$i]},${ran[$i]} --autoBoundsPOIs muV,muF --cminDefaultMinimizerTolerance=0.1 --cminDefaultMinimizerStrategy=1 --cminDefaultMinimizerType Minuit2 --cminDefaultMinimizerAlgo Migrad --cminFallbackAlgo Minuit2,Migrad,0:0.6 --cminPreFit=1 --cminApproxPreFitStrategy=2 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd MINIMIZER_analytic --redefineSignalPOIs=Fai,muV,muF -P Fai --floatOtherPOIs 1 -M MultiDimFit -t -1 -s 1 --alignEdges 1 --saveNLL --X-rtd REMOVE_CONSTANT_ZERO_POINT=1 --job-mode=condor --split-points 10 --sub-opt '+JobFlavour = "workday"' --task-name HGG_$1e_"${names[$i]}"


  hadd higgsCombineHGG_$1e_"${names[$i]}".MultiDimFit.mH125.root higgsCombineHGG_$1e_"${names[$i]}".*.MultiDimFit.mH125*.root 
  mv higgsCombineHGG_$1e_"${names[$i]}".MultiDimFit.mH125.root hists/
  mv higgsCombineHGG_$1e_"${names[$i]}".*.MultiDimFit.mH125*.root hists/store/

done



