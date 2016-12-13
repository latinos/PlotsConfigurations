# mkShapes.py      --pycfg=configuration.py  --inputDir=/u/user/sangilpark/Latino_CernBox/80Xv2/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight/
# mkShapes.py      --pycfg=myConfiguration.py  --inputDir=XYshift/
#mkShapes.py --pycfg=configuration.py --inputDir=/u/user/sangilpark/Latino_CernBox/80Xv2/HWWTightMu/
#mkShapes.py --pycfg=configuration.py --inputDir=eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/


#mkdir rootFile
#hadd rootFile/plots_Met.root torqueBatch/rootFile1/plots_Met.root torqueBatch/rootFile2/plots_Met.root torqueBatch/rootFile3/plots_Met.root torqueBatch/rootFile4/plots_Met.root torqueBatch/rootFile5/plots_Met.root torqueBatch/rootFile6/plots_Met.root torqueBatch/rootFile7/plots_Met.root torqueBatch/rootFile8/plots_Met.root torqueBatch/rootFile9/plots_Met.root torqueBatch/rootFile10/plots_Met.root torqueBatch/rootFile11/plots_Met.root torqueBatch/rootFile12/plots_Met.root torqueBatch/rootFile13/plots_Met.root
mv plotMet plotMetOld
rm -rf plotMet
mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Met.root

tar cvf plotMet.tar plotMet
