 # Trasfer script
 
 First of all create two txt files containing the list of files in the source and target dir. 
 
 ``` bash
 gfal-ls srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/  > source.txt 
 
 ls --color=none /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ > target.txt
 ```
 
 Execute the script to copy the files with N parallel workers
 
 ```bash
 python transfer_on_eos.py N
 ```

 
 
Web interface:

    https://webfts.cern.ch/

Origin:

    srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/
    
    srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_Run2016G_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd/
    
Destination:

    srm://storm.mib.infn.it:8444/cms/store/group/OneLepton/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/

    srm://storm.mib.infn.it:8444/cms/store/group/OneLepton/Apr2017_Run2016G_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd/
    


Centrally produced samples:

    https://cmsweb.cern.ch/das/request?input=dataset%3D%2FGluGluToHHTo2B2WToLNu2J_node_SM_TuneCP5_13TeV-madgraph_correctedcfg%2FRunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1%2FMINIAODSIM&instance=prod/global
    
    /GluGluToHHTo2B2WToLNu2J_node_SM_TuneCP5_13TeV-madgraph_correctedcfg/RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1/MINIAODSIM 
       ~ 800k events

    