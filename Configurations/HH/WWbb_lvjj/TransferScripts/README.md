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
    
Destination:

    srm://storm.mib.infn.it:8444/cms/store/group/OneLepton/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/

