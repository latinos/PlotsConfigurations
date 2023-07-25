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

    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables
    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables_zveto
    python ClassificationBDT_WHSS.py _WHSS_noCorrelatedVariables_zveto_orthogonalsamples
    python ClassificationBDT_WHSS.py _WHSS_btagVariables_zveto_orthogonalsamples

Only 1-jet events:

    python ClassificationBDT_WHSS_1j.py _WHSS_btagVariables_zveto_orthogonalsamples
    python ClassificationBDT_WHSS_1j.py _WHSS_btagVariables_noZveto_orthogonalsamples

Only 2-jet events:

    python ClassificationBDT_WHSS_2j.py _WHSS_btagVariables_zveto_orthogonalsamples
    python ClassificationBDT_WHSS_2j.py _WHSS_btagVariables_noZveto_orthogonalsamples

Using TTbar semileptonic as source of fakes:

    do_WHSS_training.jds
    do_WHSS_training_1j.jds
    do_WHSS_training_2j.jds

### Plot training results

Inclusive in number of jets:

    root -l -b -q 'plotAll.C("./","TMVA_WHSS","plots_BDT_WHSS","dataset_WHSS")'

    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables","plots_BDT_WHSS_noCorrelatedVariables","dataset_WHSS_noCorrelatedVariables")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables_zveto","plots_BDT_WHSS_noCorrelatedVariables_zveto","dataset_WHSS_noCorrelatedVariables_zveto")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_noCorrelatedVariables_zveto_orthogonalsamples","plots_BDT_WHSS_noCorrelatedVariables_zveto_orthogonalsamples","dataset")'
    root -l -b -q 'plotAll.C("./","TMVA_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_btagVariables_zveto_orthogonalsamples","dataset_btagVariables_zveto_orthogonalsamples")'

Inclusive in number of jets and using TTbar semileptonic as top source of fakes:

    root -l -b -q 'plotAll.C("./","TMVA_WHSS_TTToSemiLeptonic","plots_BDT_WHSS_TTToSemiLeptonic","dataset_WHSS_TTToSemiLeptonic")'
    root -l -b -q 'plotAll.C("./","TMVA_1j_WHSS_TTToSemiLeptonic_1j","plots_BDT_WHSS_TTToSemiLeptonic_1j","dataset_1j_WHSS_TTToSemiLeptonic_1j")'
    root -l -b -q 'plotAll.C("./","TMVA_2j_WHSS_TTToSemiLeptonic_2j","plots_BDT_WHSS_TTToSemiLeptonic_2j","dataset_2j_WHSS_TTToSemiLeptonic_2j")'

Only 1-jet events:

    root -l -b -q 'plotAll.C("./","TMVA_1j_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_1j_btagVariables_zveto_orthogonalsamples","dataset_1j_WHSS_btagVariables_zveto_orthogonalsamples")'
    root -l -b -q 'plotAll.C("./","TMVA_1j_WHSS_btagVariables_noZveto_orthogonalsamples","plots_BDT_WHSS_1j_btagVariables_noZveto_orthogonalsamples","dataset_1j_WHSS_btagVariables_noZveto_orthogonalsamples")'

Only 2-jet events:

    root -l -b -q 'plotAll.C("./","TMVA_2j_WHSS_btagVariables_zveto_orthogonalsamples","plots_BDT_WHSS_2j_btagVariables_zveto_orthogonalsamples","dataset_2j_WHSS_btagVariables_zveto_orthogonalsamples")'
    root -l -b -q 'plotAll.C("./","TMVA_2j_WHSS_btagVariables_noZveto_orthogonalsamples","plots_BDT_WHSS_2j_btagVariables_noZveto_orthogonalsamples","dataset_2j_WHSS_btagVariables_noZveto_orthogonalsamples")'

### Files description

In this directory, few files are used to prepare the configuration.

- `config_WHSS_cfg.py`:
    + List of variables for the training
    + List of samples to be used. The files are defined in samples_BDTTrain.py
- `ClassificationBDT_WHSS.py`:
    + Defines the output file and folder names
    + Defines the hyper-parameters of the trainings