#!/bin/bash

THISDIR=$(dirname $(readlink -f $0))

WORKDIR=$1
OBSERVABLE=$2
CARD_TAG=$3
COMMAND=$4

if ! [ $COMMAND ]
then
  echo "Usage: dofit.sh WORKDIR OBSERVABLE CARD_TAG COMMAND [ARGS]"
  echo "  WORKDIR, OBSERVABLE, CARD_TAG: Workspace ROOT file is expected at ${WORKDIR}/${OBSERVABLE}_${CARD_TAG}/fullmodel.root"
  echo "  OBSERVABLE: ptH or njet"
  echo "  COMMAND: Fit task to perform"
  exit 0
fi

if ! which combine > /dev/null 2>&1
then
  if ! [ $COMBINE_INSTALLATION ]
  then
    echo "Combine installation not found."
    echo "export COMBINE_INSTALLATION=<Combine CMSSW workspace path>"
    exit 1
  fi
  
  cd $COMBINE_INSTALLATION
  eval `scram runtime -sh`
fi

ulimit -s unlimited

function dofit() {
  echo combine $CARD -M $METHOD $@ -n $NAME
  combine $CARD -M $METHOD $@ -n $NAME
}

cd $TMPDIR

CARDDIR=$WORKDIR/${OBSERVABLE}_${CARD_TAG}
RETURNDIR=$CARDDIR

if [ $OBSERVABLE = njet ]
then
  NPOI=5
  SETMU="r_0=1,r_1=1,r_2=1,r_3=1,r_4=1"
  ZEROMU="r_0=0,r_1=0,r_2=0,r_3=0,r_4=0"
  SETDELTA="delta=9.52"
  OBSNAME="NJ"
else
  NPOI=6
  SETMU="r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1"
  ZEROMU="r_0=0,r_1=0,r_2=0,r_3=0,r_4=0,r_5=0"
  SETDELTA="delta=2.5"
  OBSNAME="PTH"
fi

FITOPT="--X-rtd MINIMIZER_analytic"
CARD=$CARDDIR/fullmodel.root
METHOD=MultiDimFit

if [ $COMMAND = AsimovReg ]
then
  # Generate an Asimov dataset and perform a regularized fit.

  NAME=AsimovReg
  dofit --algo singles -t -1 --setParameters ${SETMU},regularize=1,${SETDELTA} $FITOPT --saveFitResult
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = AsimovUnreg ]
then
  # Generate an Asimov dataset and perform an unregularized fit.

  NAME=AsimovUnreg
  dofit --algo singles -t -1 --setParameters ${SETMU},regularize=0 $FITOPT --saveFitResult
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = AsimovUnregStat ]
then
  # Generate an Asimov dataset and perform an unregularized fit, freezing all nuisance parameters.

  NAME=AsimovUnregStat
  dofit --algo singles -t -1 --setParameters ${SETMU},regularize=0 $FITOPT --freezeParameters allConstrainedNuisances,'rgx{CMS_hww_.*norm_'$OBSNAME'_.*}'

elif [ $COMMAND = AsimovUnregNoMCStat ]
then
  # Generate an Asimov dataset and perform an unregularized fit, freezing bin-by-bin nuisance parameters for the template statistical uncertainty.

  NAME=AsimovUnregNoMCStat
  dofit --algo singles -t -1 --setParameters ${SETMU},regularize=0 $FITOPT --freezeNuisanceGroups group_autoMCStats

elif [ $COMMAND = Reg ]
then
  # Perform a regularized fit. Save the fit results in multdimFitReg.root and the workspace containing the best-fit snapshot in higgsCombineReg.MultiDimFit.mH120.root.

  NAME=Reg
  #dofit --algo singles --setParameters regularize=1,${SETDELTA} $FITOPT --saveFitResult --saveWorkspace
  dofit --algo none --setParameters regularize=1,${SETDELTA} $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = Unreg ]
then
  # Perform an unregularized fit. Save the fit results in multdimFitUnreg.root and the workspace containing the best-fit snapshot in higgsCombineUnreg.MultiDimFit.mH120.root.

  NAME=Unreg
  dofit --algo singles --setParameters regularize=0 $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = AltUnreg ]
then

  DATASOURCE=$5
  TAG=$6 

  NAME=AltUnreg_${TAG}
  dofit --algo none -D $DATASOURCE $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = AltReg ]
then

  DATASOURCE=$5
  TAG=$6 

  NAME=AltReg_${TAG}
  dofit --algo none --setParameters regularize=1,${SETDELTA} -D $DATASOURCE $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = RegUncert ] || [ $COMMAND = RegStatOnly ]
then

  if [ $COMMAND = RegUncert ]
  then
    UNCERT=$5
    NAME=RegUncert_${UNCERT}
    if [ $UNCERT = "experimental" ]
    then
      # float experimental AND autoMCStats
      FREEZENUISANCES="--freezeNuisanceGroups luminosity,theoretical"
    else
      FREEZENUISANCES="--freezeNuisanceGroups ^$UNCERT"
    fi
  else
    NAME=RegStatOnly
    FREEZENUISANCES="--freezeParameters allConstrainedNuisances"
  fi

  CARD=$CARDDIR/higgsCombineReg.MultiDimFit.mH120.root

  dofit --snapshotName MultiDimFit --algo singles --setParameters regularize=0 $FREEZENUISANCES $FITOPT

elif [ $COMMAND = IntegratedUnreg ] || [ $COMMAND = IntegratedReg ]
then

  DEPENDENT=$5
  POIS=r
  for I in $(seq 0 $(($NPOI-1)))
  do
    [ $I -ne $DEPENDENT ] && POIS=${POIS},f_${I}
  done

  if [ $COMMAND = IntegratedUnreg ]
  then
    NAME=IntegratedUnregF${DEPENDENT}Dep
    REGULARIZE="--setParameters regularize=0"
  elif [ $COMMAND = IntegratedReg ]
  then
    NAME=IntegratedRegF${DEPENDENT}Dep
    REGULARIZE="--setParameters regularize=1,${SETDELTA}"
  fi

  CARD=$CARDDIR/integrated/fullmodel_integrated_f${DEPENDENT}dep.root

  [ -e $CARD ] || $THISDIR/make_integrated_cards.py $OBSERVABLE $CARDDIR $DEPENDENT

  dofit --algo singles $REGULARIZE --redefineSignalPOIs $POIS $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root
  RETURNDIR=$CARDDIR/integrated

elif [ $COMMAND = AltIntegratedUnreg ] || [ $COMMAND = AltIntegratedReg ]
then

  DEPENDENT=$5
  DATASOURCE=$6
  TAG=$7
    
  POIS=r
  for I in $(seq 0 $(($NPOI-1)))
  do
    [ $I -ne $DEPENDENT ] && POIS=${POIS},f_${I}
  done

  if [ $COMMAND = AltIntegratedUnreg ]
  then
    NAME=AltIntegratedUnregF${DEPENDENT}Dep_${TAG}
    REGULARIZE="--setParameters regularize=0"
  elif [ $COMMAND = AltIntegratedReg ]
  then
    NAME=AltIntegratedRegF${DEPENDENT}Dep_${TAG}
    REGULARIZE="--setParameters regularize=1,${SETDELTA}"
  fi

  CARD=$CARDDIR/integrated/fullmodel_integrated_f${DEPENDENT}dep.root

  [ -e $CARD ] || $THISDIR/make_integrated_cards.py $OBSERVABLE $CARDDIR $DEPENDENT

  dofit --algo none $REGULARIZE --redefineSignalPOIs $POIS -D $DATASOURCE $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root
  RETURNDIR=$CARDDIR/integrated

elif [ $COMMAND = IntegratedRegRPFix ]
then

  if [ $OBSERVABLE = njet ]
  then
    RPVALUES="CMS_hww_DYnorm_NJ_0=9.9029e-01,CMS_hww_DYnorm_NJ_1=9.2352e-01,CMS_hww_DYnorm_NJ_2=8.3777e-01,CMS_hww_DYnorm_NJ_3=8.0307e-01,CMS_hww_DYnorm_NJ_GE4=1.0546e+00,CMS_hww_WWnorm_NJ_0=1.0759e+00,CMS_hww_WWnorm_NJ_1=8.0400e-01,CMS_hww_WWnorm_NJ_2=6.7620e-01,CMS_hww_WWnorm_NJ_3=4.6647e-01,CMS_hww_WWnorm_NJ_GE4=-2.1399e-01,CMS_hww_topnorm_NJ_0=1.0670e+00,CMS_hww_topnorm_NJ_1=1.0253e+00,CMS_hww_topnorm_NJ_2=9.9943e-01,CMS_hww_topnorm_NJ_3=9.6874e-01,CMS_hww_topnorm_NJ_GE4=9.1328e-01"
  elif [ $OBSERVABLE = ptH ]
  then
    RPVALUES="CMS_hww_DYnorm_PTH_0_20=1.2019e+00,CMS_hww_DYnorm_PTH_120_200=9.7657e-01,CMS_hww_DYnorm_PTH_20_45=9.1191e-01,CMS_hww_DYnorm_PTH_45_80=1.0040e+00,CMS_hww_DYnorm_PTH_80_120=9.9842e-01,CMS_hww_DYnorm_PTH_GT200=9.8090e-01,CMS_hww_WWnorm_PTH_0_20=1.2184e+00,CMS_hww_WWnorm_PTH_120_200=9.0063e-01,CMS_hww_WWnorm_PTH_20_45=8.9164e-01,CMS_hww_WWnorm_PTH_45_80=8.3227e-01,CMS_hww_WWnorm_PTH_80_120=7.6859e-01,CMS_hww_WWnorm_PTH_GT200=7.4628e-01,CMS_hww_topnorm_PTH_0_20=9.9039e-01,CMS_hww_topnorm_PTH_120_200=9.8518e-01,CMS_hww_topnorm_PTH_20_45=9.8428e-01,CMS_hww_topnorm_PTH_45_80=9.8055e-01,CMS_hww_topnorm_PTH_80_120=9.7224e-01,CMS_hww_topnorm_PTH_GT200=9.8455e-01"
  fi

  DEPENDENT=0
  POIS=r
  for I in $(seq 0 $(($NPOI-1)))
  do
    [ $I -ne $DEPENDENT ] && POIS=${POIS},f_${I}
  done

  CARD=$CARDDIR/fullmodel_integrated.root

  NAME=IntegratedRegRPFix
  dofit --algo singles --setParameters regularize=1,${SETDELTA},$RPVALUES --redefineSignalPOIs $POIS --freezeParameters 'var{CMS_hww_.*norm_.*}' $FITOPT --saveFitResult --saveWorkspace -v 1
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = IntegratedUnregUncert ] || [ $COMMAND = IntegratedUnregStatOnly ]
then

  if [ $COMMAND = IntegratedUnregUncert ]
  then
    UNCERT=$5
    NAME=IntegratedUnregUncert_${UNCERT}
    if [ $UNCERT = "experimental" ]
    then
      # float experimental AND autoMCStats
      FREEZENUISANCES="--freezeNuisanceGroups luminosity,theoretical"
    else
      FREEZENUISANCES="--freezeNuisanceGroups ^$UNCERT"
    fi
  else
    NAME=IntegratedUnregStatOnly
    FREEZENUISANCES="--freezeParameters allConstrainedNuisances"
  fi

  CARD=$CARDDIR/integrated/higgsCombineIntegratedUnregF0Dep.MultiDimFit.mH120.root

  dofit --snapshotName MultiDimFit --algo singles --setParameters regularize=0 --redefineSignalPOIs r $FREEZENUISANCES $FITOPT

elif [ $COMMAND = Inclusive ]
then

  CARD=$CARDDIR/fullmodel_inclusive.root

  if ! [ -e $CARD ]
  then
    text2workspace.py $CARDDIR/fullmodel_unreg.txt -o $CARD
  fi

  NAME=Inclusive
  dofit --algo singles $FITOPT --saveFitResult --saveWorkspace
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = AsimovGen ]
then

  METHOD=GenerateOnly
  SEED=123456

  NAME=Asimov
  dofit -t -1 --expectSignal 1 --saveToys -s $SEED

elif [ $COMMAND = BestFitUnregAsimovGen ]
then

  BKGONLY=$5

  METHOD=GenerateOnly
  SEED=123456

  CARD=$CARDDIR/higgsCombineUnreg.MultiDimFit.mH120.root

  if [ $BKGONLY -eq 1 ]
  then
    NAME=BestFitUnregAsimovBkgOnly
    dofit --snapshotName MultiDimFit -t -1 --setParameters $ZEROMU --saveToys -s $SEED
  else
    NAME=BestFitUnregAsimov
    dofit --snapshotName MultiDimFit -t -1 --expectSignal 1 --saveToys -s $SEED
  fi

elif [ $COMMAND = DeltaScan ]
then
  # Generate an Asimov dataset and perform a regularized fit with a test delta value. Compute the global correlation coefficients and save them in the combine output.

  DELTAMIN=$5
  DELTAMAX=$6
  NDELTA=$7
  IDELTA=$8
  DELTA=$(echo "scale=4; ($DELTAMAX - $DELTAMIN) / $NDELTA * $IDELTA + $DELTAMIN" | bc)

  NAME=DeltaScan${IDELTA}
  dofit --algo none -t -1 --setParameters ${SETMU},regularize=1,delta=$DELTA $FITOPT --freezeNuisanceGroups group_autoMCStats --saveFitResult

  python $THISDIR/compute_gcc.py multidimfit${NAME}.root higgsCombine${NAME}.${METHOD}.mH120.root $DELTA

  RETURNDIR=$CARDDIR/deltascan
  ADDITIONAL=multidimfit${NAME}.root

elif [ $COMMAND = GOFObs ]
then
  # Compute the saturated-model test statistic (-2lnlambda or "generalized chi square") for the observation.

  METHOD=GoodnessOfFit

  NAME=Obs
  dofit --algo saturated --setParameters regularize=0 $FITOPT

elif [ $COMMAND = GOFGen ]
then
  # Generate post-fit toys for goodness-of-fit tests.

  NTOYSPERJOB=$5
  ITOYSET=$6

  CARD=$CARDDIR/higgsCombineUnreg.MultiDimFit.mH120.root
  METHOD=GenerateOnly

  NAME=PostfitFreq${ITOYSET}
  SEED=$(($ITOYSET+12345))
  dofit --snapshotName MultiDimFit -t $NTOYSPERJOB --toysFreq --expectSignal 1 --bypassFrequentistFit -s $SEED --saveToys

  python $THISDIR/resample_mcstats.py $CARDDIR/fullmodel.root higgsCombine$NAME.GenerateOnly.mH120.$SEED.root tmp.root
  mv tmp.root higgsCombine$NAME.GenerateOnly.mH120.$SEED.root
  RETURNDIR=$CARDDIR/gof

elif [ $COMMAND = GOFFreqToy ]
then
  # Perform frequentist toy fits.

  NTOYSPERJOB=$5
  ITOYSET=$6

  METHOD=GoodnessOfFit

  NAME=FreqFit${ITOYSET}
  SEED=$(($ITOYSET+12345))
  dofit --algo saturated --setParameters regularize=0 $FITOPT -t $NTOYSPERJOB --toysFreq --expectSignal 1 -s $SEED --toysFile $CARDDIR/gof/higgsCombinePostfitFreq${ITOYSET}.GenerateOnly.mH120.root
  RETURNDIR=$CARDDIR/gof

elif [ $COMMAND = GOFKSToy ]
then
  # Perform frequentist toy fits.

  NTOYSPERJOB=$5
  ITOYSET=$6

  METHOD=GoodnessOfFit

  NAME=KSTest${ITOYSET}
  SEED=$(($ITOYSET+12345))
  dofit --algo KS --setParameters $SETMU,regularize=0 $FITOPT -t $NTOYSPERJOB --expectSignal 1 -s $SEED
  RETURNDIR=$CARDDIR/gof_ks

elif [ $COMMAND = GOFNom ]
then
  # Fit to post-fit toys with the nominal model.

  NTOYSPERJOB=$5
  ITOYSET=$6

  METHOD=GoodnessOfFit

  NAME=Nom${ITOYSET}
  for ITOY in $(seq 1 $NTOYSPERJOB)
  do
    TOYNAME=Nom${ITOYSET}_${ITOY}
    dofit --algo saturated --setParameters regularize=0 $FITOPT -D $CARDDIR/gof/higgsCombinePostfitFreq${ITOYSET}.GenerateOnly.mH120.root:toys/toy_${ITOY}
    mv higgsCombine{$NAME,$TOYNAME}.$METHOD.mH120.root
    SOURCE=$SOURCE"higgsCombine${TOYNAME}.$METHOD.mH120.root "
  done
  hadd -f higgsCombine${NAME}.$METHOD.mH120.root $SOURCE
  rm $SOURCE
  RETURNDIR=$CARDDIR/gof

elif [ $COMMAND = GOFNomMDF ]
then
  # Fit to post-fit toys with the nominal model and report the mu values.

  NTOYSPERJOB=$5
  ITOYSET=$6

  METHOD=MultiDimFit

  NAME=Nom${ITOYSET}
  for ITOY in $(seq 1 $NTOYSPERJOB)
  do
    TOYNAME=Nom${ITOYSET}_${ITOY}
    dofit --algo none --setParameters regularize=0 $FITOPT -D $CARDDIR/gof/higgsCombinePostfitFreq${ITOYSET}.GenerateOnly.mH120.root:toys/toy_${ITOY}
    mv higgsCombine{$NAME,$TOYNAME}.$METHOD.mH120.root
    SOURCE=$SOURCE"higgsCombine${TOYNAME}.$METHOD.mH120.root "
  done
  hadd -f higgsCombine${NAME}.$METHOD.mH120.root $SOURCE
  rm $SOURCE
  RETURNDIR=$CARDDIR/gof

elif [ $COMMAND = GOFShift ]
then
  # Fit to observed data with frequentist models (nuisance parameter constraint minima sampled around the best-fit values of the corresponding parameters).

  NTOYSPERJOB=$5
  ITOYSET=$6

  METHOD=GoodnessOfFit

  NAME=Shift${ITOYSET}
  for ITOY in $(seq 1 $NTOYSPERJOB)
  do
    python $THISDIR/load_toy_snapshot.py $CARDDIR/fullmodel.root $CARDDIR/gof/higgsCombinePostfitFreq${ITOYSET}.GenerateOnly.mH120.root $ITOY tmp.root
    TOYNAME=Shift${ITOYSET}_${ITOY}
    CARD=tmp.root
    dofit --snapshotName toygen --algo saturated --setParameters regularize=0 $FITOPT
    mv higgsCombine{$NAME,$TOYNAME}.$METHOD.mH120.root
    SOURCE=$SOURCE"higgsCombine${TOYNAME}.$METHOD.mH120.root "
    rm tmp.root
  done
  hadd -f higgsCombine${NAME}.$METHOD.mH120.root $SOURCE
  rm $SOURCE
  RETURNDIR=$CARDDIR/gof

elif [ $COMMAND = AsimovImpact ]
then
  # Compute the best-fit Hessian matrix for approximate nuisance parameter impact calculation with Asimov dataset.

  NAME=_approxFit_Asimov
  combineTool.py -M Impacts -d $CARD -m 120 --doFits --approx robust --setParameters ${SETMU},regularize=0 -t -1 $FITOPT --name Asimov
  ADDITIONAL=robustHesse${NAME}.root

  #combineTool.py -M Impacts -d fullmodel.root -m 120 --approx robust --name Asimov -o Asimov.json
  #plotImpacts.py -i Asimov.json -o Asimov

elif [ $COMMAND = Impact ]
then
  # Compute the best-fit Hessian matrix for approximate nuisance parameter impact calculation.

  NAME=_approxFit_Observed
  combineTool.py -M Impacts -d $CARD -m 120 --doFits --approx robust --setParameters regularize=0 $FITOPT --name Observed
  ADDITIONAL=robustHesse${NAME}.root

  #combineTool.py -M Impacts -d fullmodel.root -m 120 --approx robust --name Observed -o Observed.json
  #plotImpacts.py -i Observed.json -o Observed

elif [ $COMMAND = AsimovFullImpact ]
then
  # Do the initial fit for full nuisance parameter impact calculation with Asimov dataset.

  NAME=_initialFit_Asimov
  combineTool.py -M Impacts -d $CARD -m 120 --doInitialFit --setParameters ${SETMU},regularize=0 -t -1 $FITOPT --name Asimov
  echo combineTool.py -M Impacts -d $CARD -m 120 --doFits --setParameters ${SETMU},regularize=0 -t -1 $FITOPT --name Asimov --job-mode condor
  RETURNDIR=$CARDDIR/impact_asimov

elif [ $COMMAND = FullImpact ]
then
  # Do the initial fit for full nuisance parameter impact calculation.

  NAME=_initialFit_Observed
  combineTool.py -M Impacts -d $CARD -m 120 --doInitialFit --setParameters regularize=0 $FITOPT --name Observed
  echo combineTool.py -M Impacts -d $CARD -m 120 --doFits --setParameters regularize=0 $FITOPT --name Observed --job-mode condor
  RETURNDIR=$CARDDIR/impact_obs

elif [ $COMMAND = IntegratedImpact ]
then

  # Compute the best-fit Hessian matrix for approximate nuisance parameter impact calculation.

  CARD=$CARDDIR/integrated/fullmodel_integrated_f0dep.root

  [ -e $CARD ] || $THISDIR/make_integrated_cards.py $OBSERVABLE $CARDDIR $DEPENDENT

  NAME=_approxFit_ObservedIntegrated
  combineTool.py -M Impacts -d $CARD -m 120 --doFits --approx robust --setParameters regularize=0 $FITOPT --name ObservedIntegrated
  ADDITIONAL=robustHesse${NAME}.root

  #combineTool.py -M Impacts -d integrated/fullmodel_integrated_f0dep.root -m 120 --approx robust --name ObservedIntegrated -o ObservedIntegrated.json
  #plotImpacts.py -i ObservedIntegrated.json -o ObservedIntegrated

elif [ $COMMAND = IntegratedFullImpact ]
then
    # Do the initial fit for full nuisance parameter impact calculation.

  CARD=$CARDDIR/integrated/fullmodel_integrated_f0dep.root

  [ -e $CARD ] || $THISDIR/make_integrated_cards.py $OBSERVABLE $CARDDIR $DEPENDENT

  NAME=_initialFit_ObservedIntegrated
  combineTool.py -M Impacts -d $CARD -m 120 --doInitialFit --setParameters regularize=0 $FITOPT --name ObservedIntegrated
  echo combineTool.py -M Impacts -d $CARD -m 120 --doFits --setParameters regularize=0 $FITOPT --name ObservedIntegrated --job-mode condor
  RETURNDIR=$CARDDIR/impact_obs

fi
  
[ $SEED ] && mv higgsCombine${NAME}.$METHOD.mH120.$SEED.root higgsCombine${NAME}.$METHOD.mH120.root    

OUTNAME=higgsCombine${NAME}.$METHOD.mH120.root

mkdir -p $RETURNDIR

cp $OUTNAME $RETURNDIR/

for F in $ADDITIONAL
do
  cp $ADDITIONAL $RETURNDIR/
done

mkdir -p $CARDDIR/logs
cp combine_logger.out $CARDDIR/logs/combine_logger.$OUTNAME.out
