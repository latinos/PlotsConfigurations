Offshell Dilep analysis
======================

Configurations for H to WW to 2L2Nu 2Jet category. Signal regions are VBF and ggH with two Jets. Dominant backgrounds are WW and Top. 

Plots for running:
```
mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/ --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=100

mkPlot.py  --pycfg=configuration.py  --inputFile=rootFile/plots_hww_offshell_UL_2016_noHIPM.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=png,pdf --showIntegralLegend=
```

## DNN Tools

The DNN is located in the `Tools` directory. The DNN is trained and tested in python using Tensor Flow and Keras and is saved as a JSON. The model is converted to a C++ script by a Python script.

```
python make_DNN_code_six_cats_v2.py
```

## Binning Optimization

Binning for variables of interest are optimized using [Combine Rebin](https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/WHSS_Mu82_EleUL90/Rebin.py). Variables are plotted with many fine bins and bins are combined until they all have equal uncertainty. 
