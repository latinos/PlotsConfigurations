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

The instructions to run the trainings follow.


### Train BDTs

    python ClassificationBDT_WHSS.py _WHSS_btagVariables_zveto_orthogonalsamples

### Plot training results

    root -l -b -q 'plotAll.C("./","TMVA_WHSS","plots_BDT_WHSS","dataset_WHSS")'

    root -l -b -q 'plotAll.C("./","TMVA_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_2017_v9_btagVariables_zveto_orthogonalsamples","dataset_WHSS_btagVariables_zveto_orthogonalsamples")'

### Files description

In this directory, few files are used to prepare the configuration.

- `config_WHSS_cfg.py`:
    + List of variables for the training
    + List of samples to be used. The files are defined in samples_BDTTrain.py
- `ClassificationBDT_WHSS.py`:
    + Defines the output file and folder names
    + Defines the hyper-parameters of the trainings