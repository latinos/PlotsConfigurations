# mkShapes.py      --pycfg=configuration.py  --inputDir=/u/user/sangilpark/Latino_CernBox/80Xv2/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight/

mkdir rootFile
hadd rootFile/plots_Met.root torgueBatch/rootFile1/plots_Met.root torgueBatch/rootFile2/plots_Met.root torgueBatch/rootFile3/plots_Met.root torgueBatch/rootFile4/plots_Met.root torgueBatch/rootFile5/plots_Met.root torgueBatch/rootFile6/plots_Met.root torgueBatch/rootFile7/plots_Met.root torgueBatch/rootFile8/plots_Met.root torgueBatch/rootFile9/plots_Met.root torgueBatch/rootFile10/plots_Met.root torgueBatch/rootFile11/plots_Met.root torgueBatch/rootFile12/plots_Met.root torgueBatch/rootFile13/plots_Met.root

 mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Met.root

