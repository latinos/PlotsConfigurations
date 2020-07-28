WW 2016 analysis - EFT
=====================

How to run the analysis.

# Produce the shapes:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday

# Hadd the root files:

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=10


# Run a postprocessing script for the correct treatment of DY embedded uncertainties

    python scripts/mkDYvetoUnc.py configuration.py

    ----> what is this about???

 
# Make plots:

    mkPlot.py --pycfg=configuration.py --inputFile rootFile/plots_WW2016_v6_AC.root --onlyPlot=cratio --linearOnly --showIntegralLegend=1

# Make datacards:

    mkDatacards.py --pycfg configuration.py --inputFile rootFile/plots_WW2016_v6_AC.root

# Combine datacards (also removes samples with expected yield below a given threshold) and make workspaces:

    ./scripts/doCombination.sh

# Do the fits:

    ./scripts/doFits.sh


    Summer16_102X_nAODv6.py --> the samples
    Summer16_102X_nAODv5.py --> the samples
    
    ./LatinoAnalysis/NanoGardener/python/framework/Productions_cfg.py
    
    
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6 -T WWTo2L2Nu_aTGC_0-400   -b -Q workday
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6 -T WWTo2L2Nu_aTGC_400-600 -b -Q workday
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6 -T WWTo2L2Nu_aTGC_600-800 -b -Q workday
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6 -T WWTo2L2Nu_aTGC_800-Inf -b -Q workday

    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6                                             -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf   -b -Q workday
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6                          -s MCCorr2016v6    -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q workday
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6__MCCorr2016v6            -s l2loose         -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q tomorrow
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6__MCCorr2016v6__l2loose   -s l2tightOR2016v6 -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q tomorrow

    
    /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6
    Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6
    
### WW anomalous coupling dim 6

    ls -alrth /eos/user/a/amassiro/EFT/latino/Summer16_102X_nAODv5_Full2016v6/

    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6 -T WWTo2L2Nu_aTGC_800-Inf   -b -Q tomorrow
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6 -s MCCorr2016v6   -T WWTo2L2Nu_aTGC_800-Inf -b -Q tomorrow

    
    ls -alrth /eos/user/a/amassiro/EFT/latino/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/
    
    
condor

    condor_status -schedd
    
    export _condor_SCHEDD_HOST="bigbird10.cern.ch"
    export _condor_CREDD_HOST="bigbird10.cern.ch"
    
In case of failed job: 

    condor_submit   blabla.jds
    
    
Check:

    Events = (TTree*) _file0->Get("Events")
    
    Events->Scan("LHEReweightingWeight")

    Events->Scan("LHEReweightingWeight[0]")
    
    Events->Scan("nLHEReweightingWeight")
    
    --> 0 ??
    
    
    
    xrdcp  root://eoscms.cern.ch//store/mc/RunIISummer16NanoAODv6/WWTo2L2Nu_MWW-0To400_aTGC_13TeV-amcatnloFXFX-madspin-pythia8/NANOAODSIM/PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/270000/FBB1A0B6-1ECE-C140-BE6F-2B9246CDB1EA.root .
    
    xrdcp  root://cmsxrootd.fnal.gov//store/mc/RunIISummer16NanoAODv6/WWTo2L2Nu_MWW-0To400_aTGC_13TeV-amcatnloFXFX-madspin-pythia8/NANOAODSIM/PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/270000/FBB1A0B6-1ECE-C140-BE6F-2B9246CDB1EA.root /tmp/amassiro/
    
    xrdcp  root://cmsxrootd.fnal.gov//store/mc/RunIISummer16NanoAODv7/WWTo2L2Nu_MWW-0To400_aTGC_13TeV-amcatnloFXFX-madspin-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/120000/E49148A2-9C9B-694B-BF6B-4943E685D26F.root   /tmp/amassiro/
    
    
    /WWTo2L2Nu_MWW-0To400_aTGC_13TeV-amcatnloFXFX-madspin-pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM
    /WWTo2L2Nu_MWW-0To400_aTGC_13TeV-amcatnloFXFX-madspin-pythia8/RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1/MINIAODSIM
    
    
Private nanoaod

    https://github.com/singh-ramanpreet/VBS-customNanoAODProduction/blob/main/README.md
    
    Get gridpack:
    
    https://cms-pdmv.cern.ch/mcm/requests?prepid=SMP-RunIISummer15wmLHEGS-00108&page=0&shown=127
    
    
    curl -s --insecure https://cms-pdmv.cern.ch/mcm/public/restapi/requests/get_fragment/SMP-RunIISummer15wmLHEGS-00108 --retry 2 --create-dirs -o Configuration/GenProduction/python/SMP-RunIISummer15wmLHEGS-00108-fragment.py
    
    /cvmfs/cms.cern.ch/phys_generator/gridpacks/slc6_amd64_gcc481/13TeV/madgraph/V5_2.4.2/WWTo2L2Nu_aTGC_NLO_FxFx/WWTolnulnu_01j_aTGC_lep_WWmass-0to400_4f_NLO_FXFX_tarball.tar.xz
    
untar
    ./runcmsgrid.sh 100 1 1

    I had to add by hand the mg reweight

run nanoaod

    sh make_config_aQGC_WW.sh
    
Post-process:
    
    https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/samples/fall17_102X_nAODv4.py#L50
    
    /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Samples/NanoAOD/
    /eos/user/a/amassiro/EFT/latinoPriv/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6/    
    

    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -s MCl1loose2016v6                                             -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf   -b -Q tomorrow
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6                          -s MCCorr2016v6    -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q tomorrow
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6__MCCorr2016v6            -s l2loose         -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q tomorrow
    mkPostProc.py -p  Summer16_102X_nAODv5_Full2016v6 -i MCl1loose2016v6__MCCorr2016v6__l2loose   -s l2tightOR2016v6 -T WWTo2L2Nu_aTGC_0-400,WWTo2L2Nu_aTGC_400-600,WWTo2L2Nu_aTGC_600-800,WWTo2L2Nu_aTGC_800-Inf -b -Q workday
    
    /eos/user/a/amassiro/EFT/latinoPriv/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/
    
    
    
    
    
    
    
AC:

Extracted from the range, to be checked

    dim 3 ---> cB
    dim 2 ---> cW
    dim 1 ---> cWW
    
    
    
    
    
    
    