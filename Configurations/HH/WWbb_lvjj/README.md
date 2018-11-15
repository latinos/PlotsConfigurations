HH > WW bb > lvjj bb
====

Transfer data:

    single lepton MC
    
    /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/
    
    gfal-ls srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ | awk '{print "gfal-copy srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"$1"  /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"$1}'
