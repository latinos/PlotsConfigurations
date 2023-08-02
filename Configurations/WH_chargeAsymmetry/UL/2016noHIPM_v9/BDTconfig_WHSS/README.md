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

    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables
    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables_zveto
    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables_zveto_orthogonalsamples
    python ClassificationBDT_WHSS.py _WHSS_btagVariables_zveto_orthogonalsamples

### Plot training results

    root -l -b -q 'plotAll.C("./","TMVA_WHSS","plots_BDT_WHSS","dataset_WHSS")'

    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables","plots_BDT_WHSS_noCorrelatedVariables","dataset_WHSS_noCorrelatedVariables")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables_zveto","plots_BDT_WHSS_noCorrelatedVariables_zveto","dataset_WHSS_noCorrelatedVariables_zveto")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables_zveto_orthogonalsamples","plots_BDT_WHSS_noCorrelatedVariables_zveto_orthogonalsamples","dataset")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_btagVariables_zveto_orthogonalsamples","dataset_WHSS_2016noHIPM_v9_btagVariables_zveto_orthogonalsamples")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_TTToSemiLeptonic","plots_BDT_WHSS_TTToSemiLeptonic","dataset_WHSS_TTToSemiLeptonic")'

### Files description

In this directory, few files are used to prepare the configuration.

- `config_WHSS_cfg.py`:
    + List of variables for the training
    + List of samples to be used. The files are defined in samples_BDTTrain.py
- `ClassificationBDT_WHSS.py`:
    + Defines the output file and folder names
    + Defines the hyper-parameters of the trainings