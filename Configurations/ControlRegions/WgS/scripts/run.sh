#source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
#eosmount eos
#mkShapes.py --pycfg=configuration.py --inputDir=eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/
#mkShapes.py --pycfg=configuration.py --inputDir=eos/user/a/amassiro/HWW2015/  # for Fake
#mkShapes.py --pycfg=configuration.py --inputDir=eos/user/j/jlauwers/HWW2015/  # for Fake [OLD]

#mkdir rootFile
rm -f rootFile/plots_WgS.root
hadd rootFile/plots_WgS.root torqueBatch/rootFile1/plots_WgS.root torqueBatch/rootFile2/plots_WgS.root torqueBatch/rootFile3/plots_WgS.root torqueBatch/rootFile4/plots_WgS.root torqueBatch/rootFile5/plots_WgS.root torqueBatch/rootFile6/plots_WgS.root torqueBatch/rootFile7/plots_WgS.root torqueBatch/rootFile8/plots_WgS.root torqueBatch/rootFile9/plots_WgS.root torqueBatch/rootFile10/plots_WgS.root torqueBatch/rootFile11/plots_WgS.root torqueBatch/rootFile12/plots_WgS.root torqueBatch/rootFile13/plots_WgS.root


# Ploting
rm -rf plotWgS.old
mv plotWgS plotWgS.old
mkdir plotWgS
mkPlot.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root

# mv plot somewhere
tar cvf plotWgS.tar plotWgS
scp plotWgS.tar lxplus.cern.ch:www/WgS/
#mkdir ~/www/WgS/NoCut
#rm -f ~/www/WgS/NoCut/*.png
#rm -f ~/www/WgS/NoCut/*.root
#rm -f ~/www/WgS/NoCut/*.C
#cp plotWgS/*.* ~/www/WgS/NoCut


