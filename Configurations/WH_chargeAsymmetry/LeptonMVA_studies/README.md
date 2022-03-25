# Lepton MVA Studies

We use this directory to perform studies on the ttHMVA discriminant selection. We want to get the signal and background efficiencies we obtain using the Legacy (NANOAODv7) selections, and tune the Ultra Legacy (UL, NANOAODv9) selections in order to get the same background efficiency or maximize the signal significance: S/B, S/#sqrt{B}. In the current implementation, we look at 2018 MC samples.

Here, we consider, as signal and background, the following datasets:
- Legacy: 
  + Signal:
    * /HWminusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    (XS = 0.5406 pb, nEvents=1M)
    * /HWplusJ_HToWW_M125_13TeV_powheg_jhugen724_pythia8_TuneCP5/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    (XS = 0.868 pb, nEvents=1M)
  + Background:
    * /WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    (XS = 53300 pb, nEvents=200M)
    * /WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    (XS = 8875 pb, nEvents=200M)
    * /WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM
    (XS = 3338 pb, nEvents=100M)

- Ultra Legacy:
  + Signal:
    * Not ready yet!
  + Background:
    * /WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM
    * /WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM
    * /WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM

The Lepton MVA weights are stored in gitlab, at:

    https://gitlab.cern.ch/ntrevisa/ttH-UL-leptonMVA

The instructions to perform the analysis follow.


### Lepton MVA training

We also wanted to check if it is possible to lower the lepton pT threshold below 10 GeV in some WH3l categories. The Legacy implementation of the ttHMVA discriminant does not allow that, since the discriminant was trained using lepton pT > 10 GeV, giving low score values below the threshold. We plan to re-train the discriminant also for muons (for electrons it was already done). We will use the same dataset, both for signal and background (TTToSemiLeptonic):

    2016 preVFP: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODAPVv9-106X_mcRun2_asymptotic_preVFP_v11-v1/NANOAODSIM

    2016 postVFP: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL16NanoAODv9-106X_mcRun2_asymptotic_v17-v1/NANOAODSIM

    2017: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL17NanoAODv9-106X_mc2017_realistic_v9-v1/NANOAODSIM

    2018: /TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM

### Produce distributions using mkShapesMulti.py in batch mode

To run on the UL samples:

    mkShapesMulti.py --pycfg=configuration_UL.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_UL.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

To run on the Legacy samples:

    mkShapesMulti.py --pycfg=configuration_Legacy.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_Legacy.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8
