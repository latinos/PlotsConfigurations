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
- DY (fakes)
- Top (fakes)
- Wg
- Zg
- Wg*
- Zg*
- ZZ
- WZ

The instructions to run the trainings follow.


### Train BDTs

SS-SF:

    python ClassificationBDTSSSF.py
    python ClassificationBDTSSSF.py no_btag

OS-SF:

    python ClassificationBDTOSSF.py
    python ClassificationBDTOSSF.py even_less_variables

    python ClassificationBDTOSSF.py matched_signal


### Plot training results

SS-SF:

     root -l -b -q 'plotAll.C("./","TMVA_SSSF","plots_BDT_SSSF","datasetSSSF")'
     root -l -b -q 'plotAll.C("./","TMVA_SSSFno_b_tag","plots_BDT_SSSFno_b_tag","datasetSSSFno_b_tag")'
     root -l -b -q 'plotAll.C("./","TMVA_SSSFmatched_signal","plots_BDT_SSSF_matched_signal","datasetSSSFmatched_signal")'

OS-SF:

     root -l -b -q 'plotAll.C("./","TMVA_OSSF","plots_BDT_OSSF","datasetOSSF")'
     root -l -b -q 'plotAll.C("./","TMVA_OSSF","plots_BDT_OSSF","dataset")'
     root -l -b -q 'plotAll.C("./","TMVA_OSSF_even_less_variables","plots_BDT_OSSF_even_less_variables","datasetOSSF_even_less_variables")'
     root -l -b -q 'plotAll.C("./","TMVAmatched_signal","plots_BDT_OSSF_matched_signal","datasetmatched_signal")'

