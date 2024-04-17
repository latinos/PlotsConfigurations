# Scaling the signal by a factor 10, to test different strategies in single eras:

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure_ossf.py --cutsFile=cuts_ossf.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure_sssf.py --cutsFile=cuts_sssf.py --variablesFile=variables_datacard.py

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure_WZ0j.py --cutsFile=cuts_WZ0j.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure_WZ1j.py --cutsFile=cuts_WZ1j.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure_WZ2j.py --cutsFile=cuts_WZ2j.py --variablesFile=variables_datacard.py

# Using the correct signal scaling, for global combination:

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_ossf_original_signal_scale.py --cutsFile=cuts_ossf.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_sssf_original_signal_scale.py --cutsFile=cuts_sssf.py --variablesFile=variables_datacard.py

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_WZ0j_original_signal_scale.py --cutsFile=cuts_WZ0j.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_WZ1j_original_signal_scale.py --cutsFile=cuts_WZ1j.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_WZ2j_original_signal_scale.py --cutsFile=cuts_WZ2j.py --variablesFile=variables_datacard.py
