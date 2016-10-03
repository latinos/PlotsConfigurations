#!/bin/sh

# 1.DY, 2.Wjets, 3., 4.Fake, 5. , 8.VgS

rm -f run_torqueBatch_*.sh.*

#Loop
for Idx in 1 2 3 4 5 6 7 8 9 10 11 12 13; do
  cp ../configuration.py configuration${Idx}_AAA.py
  sed "s/rootFile/rootFile${Idx}/"  configuration${Idx}_AAA.py > configuration${Idx}_BBB.py 
  sed "s/variables.py/..\/variables.py/"  configuration${Idx}_BBB.py > configuration${Idx}_AAA.py 
  sed "s/cuts.py/..\/cuts.py/"  configuration${Idx}_AAA.py > configuration${Idx}_BBB.py 
  sed "s/samples.py/samples${Idx}.py/"  configuration${Idx}_BBB.py > configuration${Idx}.py 
  rm -f configuration${Idx}_AAA.py
  rm -f configuration${Idx}_BBB.py
  echo "#!/bin/sh" >& run_torqueBatch_${Idx}.sh
  echo "export SCRAM_ARCH=slc6_amd64_gcc530" >> run_torqueBatch_${Idx}.sh
  echo "source /cvmfs/cms.cern.ch/cmsset_default.sh" >> run_torqueBatch_${Idx}.sh
  echo "cd $PWD" >> run_torqueBatch_${Idx}.sh
  echo "cmsenv" >> run_torqueBatch_${Idx}.sh
  echo "mkShapes.py      --pycfg=configuration${Idx}.py  --inputDir=/d1/scratch/sangilpark/Latino_CernBox/80Xv2/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/" >> run_torqueBatch_${Idx}.sh
  #echo "mkShapes.py      --pycfg=configuration${Idx}.py  --inputDir=/u/user/sangilpark/Latino_CernBox/80Xv2/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight/" >> run_torqueBatch_${Idx}.sh
  chmod u+x run_torqueBatch_${Idx}.sh
  qsub -q short run_torqueBatch_${Idx}.sh
  #qsub -q cms run_${CHANNEL}_${SAMPLE}_${NJET}jet.sh

done
