# Configuration for WH3l BDT training

Configurations to train the BDTs used in the WH3l analysis. We prepare two separate trainings, for two final states:
- same-sign same flavor (SSSF)
- opposite-sign same flavor (OSSF)

We consider as signals the WH samples:
- WH_plus_hww
- WH_minus_hww
- WH_plus_htt
- WH_minus_htt

And as backgrounds:
- Wg
- Zg
- Wg*
- Zg*
- ZZ
- WZ
- VVV

The instructions to run the trainings follow.


### Train BDTs

SS-SF:

    python ClassificationBDTSSSF.py

OS-SF:

    python ClassificationBDTOSSF.py


### Plot training results

SS-SF:

     root -l -b -q 'plotAll.C("./","TMVA_SSSF","plots_BDT_SSSF","datasetSSSF")'

OS-SF:

     root -l -b -q 'plotAll.C("./","TMVA_OSSF","plots_BDT_OSSF","datasetOSSF")'

