UseRegroupJES=True
print "UseRegroupJES=",UseRegroupJES
TEST_PS=False
print "TEST_PS=",TEST_PS
TEST_QCD_SCALE=False
TEST_PDF=True

import os
from FatJet_Jet_SysBranches import * 
from WPandCut2017 import *

scriptname=""
samples={}
nuisances={}

SITE=os.uname()[1]


xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

elif  'sdfarm' in SITE:
  xrootdPath = 'root://cms-xrdr.private.lo:2094'
  treeBaseDir = "/xrd/store/user/jhchoi/Latino/HWWNano/"



eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'


mc = [skey for skey in samples if (skey != 'DATA' and skey !='PseudoData')]







nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc )
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc)
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc )
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc )
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc )
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc )
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc )
}


#for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
for shift in ['lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]
    
    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }



trig_syst = ['TriggerEffWeight_1l_u/TriggerEffWeight_1l','TriggerEffWeight_1l_d/TriggerEffWeight_1l']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
}


prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']


nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
}




#eff_e_syst = ['Lepton_tightElectron_'+eleWP+'_IdIsoSF_Up'+'[0]/Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]','Lepton_tightElectron_'+eleWP+'_IdIsoSF_Down'+'[0]/Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]']


eff_e_syst = ['Lepton_tightElectron_'+eleWP+'_TotSF_Up'+'[0]/Lepton_tightElectron_'+eleWP+'_TotSF'+'[0]','Lepton_tightElectron_'+eleWP+'_TotSF_Down'+'[0]/Lepton_tightElectron_'+eleWP+'_TotSF'+'[0]']

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, eff_e_syst) for skey in mc),
}



eff_m_syst = ['Lepton_tightMuon_'+muWP+'_TotSF_Up'+'[0]/Lepton_tightMuon_'+muWP+'_TotSF'+'[0]','Lepton_tightMuon_'+muWP+'_TotSF_Down'+'[0]/Lepton_tightMuon_'+muWP+'_TotSF'+'[0]']

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, eff_m_syst) for skey in mc),
}


eff_tau21_syst = ['tau21SFdown/tau21SFnom','tau21SFup/tau21SFnom']
if 'Boosted' in scriptname: 
  nuisances['eff_tau21'] = {
    
    'name': 'CMS_eff_tau21_2017',
    'kind': 'weight',
    'type': 'shape',
  'samples': dict((skey, eff_tau21_syst) for skey in mc),
  
  }

for s in ['fatjes','fatjer','fatjms','fatjmr']:
  nuisances[s] = {
    'name': 'CMS_'+s+'_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_fatjetsys',
    'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_fatjetsys',
    
  }
  nuisances[s]['BrFromToUp']={}
  nuisances[s]['BrFromToDown']={}
  for br in HMBoostBranches+WBranches:
    nuisances[s]['BrFromToUp'][br]=br.replace("nom",s.replace('fat','')+"up")
    nuisances[s]['BrFromToDown'][br]=br.replace("nom",s.replace('fat','')+"down")

nuisances['mupt'] = {
  'name': 'CMS_scale_muon_2017',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_MupTup',
  'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_MupTdo',
}


nuisances['elept'] = {
  'name': 'CMS_scale_electron_2017',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_ElepTup',
  'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_ElepTdo',

}


nuisances['met'] = {
  'name': 'CMS_scale_met_2017',
  'kind': 'tree',
  'type': 'shape',
  'samples': dict((skey, ['1', '1']) for skey in mc),
  'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_METup',
  'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom_METdo',
}

pu_syst=['puWeightUp/puWeight','puWeightDown/puWeight']


nuisances['PU'] = {
    'name': 'CMS_PU_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, pu_syst) for skey in mc),
}

nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc),
}

from MakeSampleDict import *

samples_value=MakeSampleDict(samples,'LHEScaleWeight',"LHEScaleWeight[0]")

nuisances['QCDscale'] = {
    'name': 'QCDscale',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': samples_value,
}


#CaclLenBranch
nMember_sample=CaclLenBranch(samples,'LHEPdfWeight') ## {33:[DY,Wjets....]}
PDF4LHC15_nnlo_30_pdfas={}
NNPDF31_nnlo_hessian_pdfas={}
for n in nMember_sample:
  if n==33:
    for s in nMember_sample[n]:
      PDF4LHC15_nnlo_30_pdfas[s]=["LHEPdfWeight["+str(i)+"]/LHEPdfWeight[0]" for i in range(n)]
      #PDF4LHC15_nnlo_30_pdfas
  elif n>=102:
    for s in nMember_sample[n]:
      NNPDF31_nnlo_hessian_pdfas[s]=["LHEPdfWeight["+str(i)+"]/LHEPdfWeight[0]" for i in range(n)]


nuisances['PDF4LHC15_nnlo_30_pdfas'] = {
    'name': 'PDF4LHC15_nnlo_30_pdfas',
    'kind': 'weight_rms',
    'type': 'shape',
    'samples': PDF4LHC15_nnlo_30_pdfas
}
nuisances['NNPDF31_nnlo_hessian_pdfas'] = {
    'name': 'NNPDF31_nnlo_hessian_pdfas',
    'kind': 'weight_rms',
    'type': 'shape',
    'samples': NNPDF31_nnlo_hessian_pdfas
}

#    'skipCMS': 1,
if TEST_PS:nuisances={}
nMember_sample=CaclLenBranch(samples,'PSWeight')
PSWeightISR={}
PSWeightFSR={}
for n in nMember_sample:
  if n == 4:
   for s in nMember_sample[n]:
     PSWeightISR[s]=["PSWeight[0]","PSWeight[1]"]
     PSWeightFSR[s]=["PSWeight[2]","PSWeight[3]"]

nuisances['PS_ISR']={
  'name': 'PS_ISR',
  'kind': 'weight',
  'type': 'shape',
  'samples':PSWeightISR,
}

nuisances['PS_FSR']={
  'name': 'PS_FSR',
  'kind': 'weight',
  'type': 'shape',
  'samples':PSWeightFSR,
}





if UseRegroupJES:
  for s in ['jesFlavorQCD','jesRelativeBal','jesHF','jesBBEC1','jesEC2','jesAbsolute']: ##year-correlated
    nuisances[s] = {
      'name': 'CMS_'+s,
      'kind': 'branch_custom',
      'type': 'shape',
      'samples': dict((skey, ['1', '1']) for skey in mc),
      'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysup_correlate',
      'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysdown_correlate',
    }
    nuisances[s]['BrFromToUp']={}
    nuisances[s]['BrFromToDown']={}
    for br in JetBranches+WlepBranches+WjjBranches+HMBoostBranches+HMResolBranches:
      nuisances[s]['BrFromToUp'][br]=br.replace("nom",s+"Up")
      nuisances[s]['BrFromToDown'][br]=br.replace("nom",s+"Down")

  for s in ['jesAbsolute_2017','jesHF_2017','jesEC2_2017','jesRelativeSample_2017','jesBBEC1_2017','jer']: ##year-uncorrelated
    nuisances[s] = {
      'name': 'CMS_'+s,
      'kind': 'branch_custom',
      'type': 'shape',
      'samples': dict((skey, ['1', '1']) for skey in mc),
      'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysup_uncorrelate',
      'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysdown_uncorrelate',
    }
    if s=="jer": nuisances[s]['name']+='_2017'
    nuisances[s]['BrFromToUp']={}
    nuisances[s]['BrFromToDown']={}
    for br in JetBranches+WlepBranches+WjjBranches+HMBoostBranches+HMResolBranches:
      nuisances[s]['BrFromToUp'][br]=br.replace("nom",s+"Up")
      nuisances[s]['BrFromToDown'][br]=br.replace("nom",s+"Down")


else:

  nuisances['jesTotal'] = {
    'name': 'CMS_jesTotal_2017',
    'kind': 'branch_custom',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysup_correlate',
    'folderDown': xrootdPath+'/'+treeBaseDir+'/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_jetsysdown_correlate',
  }
  nuisances['jesTotal']['BrFromToUp']={}
  nuisances['jesTotal']['BrFromToDown']={}
  for br in JetBranches+WlepBranches+WjjBranches+HMBoostBranches+HMResolBranches:
    nuisances['jesTotal']['BrFromToUp'][br]=br.replace("nom","jesTotalUp")
    nuisances['jesTotal']['BrFromToDown'][br]=br.replace("nom","jesTotalDown")
  
  
'''
##ratepaara norm
nuisances['wjets0j_norm'] = {
  'name'  : 'CMS_w_norm0j',
  'samples':{'Wjets0j'},
  'type'  : 'rateParam',
}

nuisances['wjets1j_norm'] = {
  'name'  : 'CMS_w_norm1j',
  'samples':{'Wjets1j'},
  'type'  : 'rateParam',
}
nuisances['wjets2j_norm'] = {
  'name'  : 'CMS_w_norm1j',
  'samples':{'Wjets2j'},
  'type'  : 'rateParam',
}

nuisances['top_norm'] = {
  'name'  : 'CMS_top_norm',
  'samples':{'top'},
  'type'  : 'rateParam',
}
nuisances['cms_qcdem_mc_norm'] = {
  'name': 'cms_qcdem_mc_norm',
  'samples':['QCD_EM'],
  'type'  : 'rateParam',  
}
nuisances['cms_qcdmu_mc_norm'] = {
  'name': 'cms_qcdmu_mc_norm',
  'samples':['QCD_MU'],
  'type'  : 'rateParam',  
}
nuisances['cms_qcdbctoe_mc_norm'] = {
  'name': 'cms_qcdbctoe_mc_norm',
  'samples':['QCD_bcToE'],
  'type'  : 'rateParam',  
}
'''
## Use the following if you want to apply the automatic combine MC stat nuisances.
'''
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}
'''
if TEST_QCD_SCALE: 
  nuisances={}
  
  samples_value=MakeSampleDict(samples,'LHEScaleWeight',"LHEScaleWeight[0]")
  
  nuisances['QCDscale'] = {
    'name': 'QCDscale',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': samples_value,
  }
  
if TEST_PDF:
  nuisances={}
  #CaclLenBranch
  nMember_sample=CaclLenBranch(samples,'LHEPdfWeight') ## {33:[DY,Wjets....]}
  PDF4LHC15_nnlo_30_pdfas={}
  NNPDF31_nnlo_hessian_pdfas={}
  for n in nMember_sample:
    if n==33:
      for s in nMember_sample[n]:
        PDF4LHC15_nnlo_30_pdfas[s]=["LHEPdfWeight["+str(i)+"]/LHEPdfWeight[0]" for i in range(n)]
        #PDF4LHC15_nnlo_30_pdfas
    elif n>=102:
      for s in nMember_sample[n]:
        NNPDF31_nnlo_hessian_pdfas[s]=["LHEPdfWeight["+str(i)+"]/LHEPdfWeight[0]" for i in range(n)]
          

  nuisances['PDF4LHC15_nnlo_30_pdfas'] = {
    'name': 'PDF4LHC15_nnlo_30_pdfas',
    'kind': 'weight_rms',
    'type': 'shape',
    'samples': PDF4LHC15_nnlo_30_pdfas
  }
  nuisances['NNPDF31_nnlo_hessian_pdfas'] = {
    'name': 'NNPDF31_nnlo_hessian_pdfas',
    'kind': 'weight_rms',
    'type': 'shape',
    'samples': NNPDF31_nnlo_hessian_pdfas
  }
  

print "nNuisances=",len(nuisances)
