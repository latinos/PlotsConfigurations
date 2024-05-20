
rm -r ../../../../../../jobs/mkShapes__hww_offshell_UL_2018__ALL/

mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/ --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
