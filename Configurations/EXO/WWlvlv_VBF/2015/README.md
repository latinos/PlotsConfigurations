HWW high mass analysis
==============

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

  cd your-path/PlotsConfigurations/master/Configurations/EXO/WWlvlv_VBF
  
  edit massesAndModels.py to add the mass points and the models you want (c' and BRnew)

  mkShapes.py --pycfg=configuration.py --inputDir=eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/ --doThreads=True
  mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_HWWhighMass.root
  mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_HWWhighMass.root


Combine the cards and put them in a new directory (need to specify the directory inside te script)

  bash scripts/doWW.sh


Remove some useless stat nuisances from the datacards, make the workspaces and perform the fit
Before doing this you need to setup Combine:

  cd ~
  mkdir Combine
  cd Combine
  export SCRAM_ARCH=slc6_amd64_gcc491
  cmsrel CMSSW_7_4_7
  cd CMSSW_7_4_7/src 
  cmsenv
  git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
  cd HiggsAnalysis/CombinedLimit
  git fetch origin
  git checkout v6.2.1
  scramv1 b clean; scramv1 b

  cd your-path/PlotsConfigurations/master/Configurations/EXO/WWlvlv_VBF
  cmsenv
  mkdir combine

  bash scripts/subCombinev2.sh directory-with-datacards

  this one calls the fitLSFv2.sh script
  

Finally draw the limit plots:

  cd scripts
  python plotLimit.py (0jet|1jet|2jet|all)
  python plotLimitModels.py (0jet|1jet|2jet|all)
  python plotSignificance.py (0jet|1jet|2jet|all)

