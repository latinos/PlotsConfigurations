#mkShapes.py --pycfg=configuration.py --inputDir=eosuser2/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight/ --doThreads=True
#mkShapes.py --pycfg=configuration.py --inputDir=eos1/cms/store/group/phys_higgs/cmshww/amassiro/HWW2015/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/ --doThreads=True
# mkShapes.py --pycfg=configuration.py --inputDir=eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/ --doThreads=True

# ICHEP
mkShapes.py --pycfg=configuration.py --inputDir=eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/ --doThreads=True


mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_BpogSF.root
