# Configuration for WHSS BDT training

Configurations to train the BDTs used in the WHSS analysis. 

We consider as signals the WH samples:
- WH_plus_hww
- WH_minus_hww
- WH_plus_htt
- WH_minus_htt

And as backgrounds:
- DY
- WZ
- WJets
- Top

The instructions to run the trainings follow.


### Train BDTs

Inclusive in number of jets:

    python ClassificationBDT_WHSS.py _WHSS_btagVariables_zveto_orthogonalsamples

Using TTbar semileptonic as source of fakes:

    do_WHSS_training.jds

Using condor:

    condor_submit do_WHSS_training.jds


### Plot training results

    root -l -b -q 'plotAll.C("./","TMVA_WHSS","plots_BDT_WHSS","dataset_WHSS")'

    root -l -b -q 'plotAll.C("./","TMVA_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_2016HIPM_v9_btagVariables_zveto_orthogonalsamples","dataset_WHSS_btagVariables_zveto_orthogonalsamples")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_TTToSemiLeptonic","plots_BDT_WHSS_TTToSemiLeptonic","dataset_WHSS_TTToSemiLeptonic")'


### Files description

In this directory, few files are used to prepare the configuration.

- `config_WHSS_cfg.py`:
    + List of variables for the training
    + List of samples to be used. The files are defined in samples_BDTTrain.py
- `ClassificationBDT_WHSS.py`:
    + Defines the output file and folder names
    + Defines the hyper-parameters of the trainings