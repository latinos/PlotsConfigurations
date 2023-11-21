Offshell Dilep analysis
======================

Configurations for H to WW to 2L2Nu 2Jet category. Signal regions are VBF and ggH with two Jets. Dominant backgrounds are WW and Top. 

Plots for running:
```
mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/ --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=100

mkPlot.py  --pycfg=configuration.py  --inputFile=rootFile/plots_offshell2018_UL_v9.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=png,pdf --showIntegralLegend=
```

## DNN Tools

The DNN is located in the `Tools` directory. The DNN is trained and tested in python using Tensor Flow and Keras and is saved as a JSON. The model is converted to a C++ script by a Python script.

```
python make_DNN_code_six_cats_v2.py
``` 
