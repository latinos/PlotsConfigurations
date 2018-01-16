config="/afs/cern.ch/work/p/pyu/HWAnalysis/zh4lFull2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ZH4l/config_Run2016-35pXfbm1_STXS/configuration.py"
samp="/afs/cern.ch/work/p/pyu/HWAnalysis/zh4lFull2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ZH4l/config_Run2016-35pXfbm1_STXS/samples.py"
cut="/afs/cern.ch/work/p/pyu/HWAnalysis/zh4lFull2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ZH4l/config_Run2016-35pXfbm1_STXS/cuts.py"
nui="/afs/cern.ch/work/p/pyu/HWAnalysis/zh4lFull2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ZH4l/config_Run2016-35pXfbm1_STXS/nuisances.py"


#for wps in cut_WP_Tight80X  cut_WP_Tight80X_SS mva_80p_Iso2015 mva_80p_Iso2016 mva_90p_Iso2015 mva_90p_Iso2016
for wps in mva_90p_Iso2016
do
    #sed -i "s/tagName=WPS/tagName='_SG_${wps}'/g" ${config}
    ##sed -i "s/tagName=WPS/tagName='_CR_${wps}'/g" ${config}
    #sed -i "s/eleWP=WPS/eleWP='${wps}'/g" ${samp}
    #sed -i "s/eleWP=WPS/eleWP='${wps}'/g" ${cut}
    #sed -i "s/eleWP=WPS/eleWP='${wps}'/g" ${nui}

    mkShapes.py --pycfg=configuration.py --doBatch=True --batchSplit=AsMuchAsPossible --batchQueue=cmscaf1nh
    #mkShapes.py --pycfg=configuration.py --doBatch=True --batchSplit=AsMuchAsPossible --batchQueue=1nh
    #mkShapes.py --pycfg=configuration.py --doHadd=True  --batchSplit=AsMuchAsPossible --batchQueue=cmscaf1nh
    #mkShapes.py --pycfg=configuration.py --doHadd=True  --batchSplit=AsMuchAsPossible --batchQueue=1nh
    #mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles_SG_${wps}/plots_ZH4l_SG_${wps}.root
    #mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles_CR_${wps}/plots_ZH4l_CR_${wps}.root
    #mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_SG_${wps}/plots_ZH4l_SG_${wps}.root
    #mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_CR_${wps}/plots_ZH4l_CR_${wps}.root

    #sed -i "s/tagName='_SG_${wps}'/tagName=WPS/g" ${config}
    ##sed -i "s/tagName='_CR_${wps}'/tagName=WPS/g" ${config}
    #sed -i "s/eleWP='${wps}'/eleWP=WPS/g" ${samp}
    #sed -i "s/eleWP='${wps}'/eleWP=WPS/g" ${cut}
    #sed -i "s/eleWP='${wps}'/eleWP=WPS/g" ${nui}
done
