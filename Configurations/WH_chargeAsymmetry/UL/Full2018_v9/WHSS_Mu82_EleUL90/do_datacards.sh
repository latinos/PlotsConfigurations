# Scaling the signal by a factor 10, to test different strategies in single eras:

# ee and em
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip --structureFile=structure_DYflip_1j.py --cutsFile=cuts_1j.py --variablesFile=variables_datacard.py --samplesFile=samples_control_plots_CF_data.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip --structureFile=structure_DYflip_2j.py --cutsFile=cuts_2j.py --variablesFile=variables_datacard.py --samplesFile=samples_control_plots_CF_data.py

# mm
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip --structureFile=structure_1j.py --cutsFile=cuts_1j_mm.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip --structureFile=structure_2j.py --cutsFile=cuts_2j_mm.py --variablesFile=variables_datacard.py


# Using the correct signal scaling, for global combination:

# ee and em
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_DYflip_1j_original_signal_scale.py --cutsFile=cuts_1j.py --variablesFile=variables_datacard.py --samplesFile=samples_control_plots_CF_data.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_DYflip_2j_original_signal_scale.py --cutsFile=cuts_2j.py --variablesFile=variables_datacard.py --samplesFile=samples_control_plots_CF_data.py

# mm
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_1j_original_signal_scale.py --cutsFile=cuts_1j_mm.py --variablesFile=variables_datacard.py
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_2j_original_signal_scale.py --cutsFile=cuts_2j_mm.py --variablesFile=variables_datacard.py
