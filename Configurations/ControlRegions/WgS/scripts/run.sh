#source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
#eosmount eos
#mkShapes.py --pycfg=configuration.py --inputDir=eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/
#mkShapes.py --pycfg=configuration.py --inputDir=eos/user/a/amassiro/HWW2015/  # for Fake
#mkShapes.py --pycfg=configuration.py --inputDir=eos/user/j/jlauwers/HWW2015/  # for Fake [OLD]


# NoCut Ploting
#mkPlot.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root
#mkdir ~/www/WgS/NoCut
#rm -f ~/www/WgS/NoCut/*.png
#rm -f ~/www/WgS/NoCut/*.root
#rm -f ~/www/WgS/NoCut/*.C
#cp plotWgS/*.* ~/www/WgS/NoCut


## Cuts Ploting
mkPlot.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root
rm -f ~/www/WgS/ICHEP/*.png
rm -f ~/www/WgS/ICHEP/*.root
rm -f ~/www/WgS/ICHEP/*.C
cp plotWgS/*.png ~/www/WgS/ICHEP
