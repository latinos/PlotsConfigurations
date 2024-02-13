# WH charge flip extraction

We include here the workflow to extract charge-flip probabilities in electrons. These probabilities are used to weight MC events in the WHSS analysis.

The instructions to run the workflow follow.

### Produce same-sign and opposite-sign distributions in a DY phase space using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2017_v9_chargeFlip_Mu82_EleUL90/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2017_v9_chargeFlip_Mu82_EleUL90
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

### Plot distributions

    ./do_plots.sh

### Extract charge-flip probabilities

    mkChargeFlip.py --input_file=rootFile/plots_WHSS_2017_v9_chargeFlip_Mu82_EleUL90.root --output_dir=charge_flip_2017_LegacyID_EleUL90 --era=2017

### Validation: weight opposite-sign events according to charge-flip probabilities or scale factors

Validate the SF approach:

    mkShapesMulti.py --pycfg=configuration_cf_SF.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_cf_SF.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    ./do_plots_SF_validation.sh

Validate the efficiency approach:

    mkShapesMulti.py --pycfg=configuration_cf_eff.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_cf_eff.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkDYee_chargeFlip_OS_SS.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=rootFile/plots_WHSS_2017_v9_chargeFlip_eff_validation_Mu82_EleUL90.root --inputFileOS=rootFile/plots_WHSS_2017_v9_chargeFlip_eff_validation_Mu82_EleUL90.root --outputDir=rootFile/ --outputFile=plots_WHSS_2017_v9_chargeFlip_eff_validation_DYflip.root --year=2017

    ./do_plots_eff_validation.sh