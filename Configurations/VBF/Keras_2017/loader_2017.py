import os
import ROOT
import root_numpy

def load_dataset_vbf ( max_entries = -1 ):
  _branches = [
    "mjj",
    "mll",
    "ptll",
    "detajj",
    "dphill",
    "PuppiMET_pt",
    "PuppiMET_phi",
    "mTi",
    "dphilljet",
    "dphillmet",
    "drll",
    "dphilmet",
    "mR",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    "Lepton_phi[0]",
    "Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    "CleanJet_phi[0]",
    "CleanJet_phi[1]",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
    #"Jet_btagDeepB",
    
  ]




  chain = ROOT.TChain('Events')
  '''
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part4.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part5.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part6.root') 
  '''
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETDown__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETUp__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETUp__part1.root')
  _dataset = root_numpy.tree2array (chain,
      branches = _branches,
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0',
      stop = max_entries
     )

  return { b : _dataset[b] for b in _branches }


def load_dataset_top ( max_entries = -1 ):
  _branches = [
    "mjj",
    "mll",
    "ptll",
    "detajj",
    "dphill",
    "PuppiMET_pt",
    "PuppiMET_phi",
    "mTi",
    "dphilljet",
    "dphillmet",
    "drll",
    "dphilmet",
    "mR",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    "Lepton_phi[0]",
    "Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    "CleanJet_phi[0]",
    "CleanJet_phi[1]",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
    #"Jet_btagDeepB",

  ]




  chain = ROOT.TChain('Events')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part4.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part5.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part6.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part7.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part8.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part9.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part10.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part11.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part12.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part13.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part14.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part15.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part16.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part17.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part18.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part19.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part20.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part21.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part22.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part23.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part24.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part25.root')
  
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part4.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part5.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part6.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_TTTo2L2Nu_PSWeights__part7.root')
  _dataset = root_numpy.tree2array (chain, 
      #selection = 'mll>12 && PuppiMET_pt>20 && (abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0',
      branches = _branches,
      stop = max_entries
     )

  return { b : _dataset[b] for b in _branches }


def load_dataset_ww ( max_entries = -1 ):
  _branches = [
    "mjj",
    "mll",
    "ptll",
    "detajj",
    "dphill",
    "PuppiMET_pt",
    "PuppiMET_phi",
    "mTi",
    "dphilljet",
    "dphillmet",
    "drll",
    "dphilmet",
    "mR",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    "Lepton_phi[0]",
    "Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    "CleanJet_phi[0]",
    "CleanJet_phi[1]",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
    #"Jet_btagDeepB",

  ]




  chain = ROOT.TChain('Events')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETUp__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETUp__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part2.root')

  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_WWTo2L2Nu_CP5Down__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_WWTo2L2Nu_CP5Up__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_WWTo2L2Nu_CP5Up__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_WWTo2L2Nu_CP5Up__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_WWTo2L2Nu_CP5Up__part3.root')
 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Up__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Up__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Up__part2.root')
  #chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Up__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Down__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Down__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Down__part2.root')
  #chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv5_Full2018v5/MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5/nanoLatino_WWTo2L2Nu_CP5Down__part3.root')
  _dataset = root_numpy.tree2array (chain, 
      #selection = 'mll>12 && PuppiMET_pt>20 && (abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0',
      branches = _branches,
      stop = max_entries
     )

  return { b : _dataset[b] for b in _branches }


def load_dataset_ggh ( max_entries = -1 ):
  _branches = [
    "mjj",
    "mll",
    "ptll",
    "detajj",
    "dphill",
    "PuppiMET_pt",
    "PuppiMET_phi",
    "mTi",
    "dphilljet",
    "dphillmet",
    "drll",
    "dphilmet",
    "mR",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    "Lepton_phi[0]",
    "Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    "CleanJet_phi[0]",
    "CleanJet_phi[1]",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
    #"Jet_btagDeepB",

  ]




  chain = ROOT.TChain('Events')  
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part4.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part5.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part6.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part7.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETDown__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETUp__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part1.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part2.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part3.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part4.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part5.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part6.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part7.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part8.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part9.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part10.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part11.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part12.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part13.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part14.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part15.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part16.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part17.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part18.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part19.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part20.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125_PrivateNano__part21.root')
   
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part1.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part0.root')

  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part0.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part1.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part2.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part3.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part4.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part5.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part6.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part7.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part8.root') 
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part9.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part10.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part11.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part12.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part13.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part14.root')
  '''
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part15.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part16.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part17.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part18.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part19.root')
  chain.Add('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_PrivateNano__part20.root')
  '''
  _dataset = root_numpy.tree2array (chain, 
      #selection = 'mll>12 && PuppiMET_pt>20 && (abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0',
      branches = _branches,
      stop = max_entries
     )

  return { b : _dataset[b] for b in _branches }



if __name__ == '__main__':
  print load_dataset ( 100 )

