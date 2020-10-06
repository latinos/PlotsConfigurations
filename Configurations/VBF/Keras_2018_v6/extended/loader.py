import os
import ROOT
import root_numpy

dir16 = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/'
dir17 = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6/'
dir18 = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6/'







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
    "ht",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    #"Lepton_phi[0]",
    #"Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    #"CleanJet_phi[0]",
    #"CleanJet_phi[1]",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
  ]



  ROOT.gROOT.ProcessLineSync(".L mlj.C+")

  chain = ROOT.TChain('Events')

  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2Nu_alternative_M125__part0.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2Nu_alternative_M125__part1.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2Nu_M125_CUETDown__part0.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2Nu_M125_CUETUp__part0.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp__part0.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2NuAMCNLO_M125__part0.root')
  #chain.Add(dir16+'nanoLatino_VBFHToWWTo2L2NuAMCNLO_M125__part1.root')

  chain.Add(dir17+'nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part0.root')
  chain.Add(dir17+'nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part0.root')
  chain.Add(dir17+'nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part0.root')
  chain.Add(dir17+'nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part1.root')
  
  #chain.Add(dir18+'nanoLatino_VBFHToWWTo2L2Nu_M125_CP5Down__part0.root')
  #chain.Add(dir18+'nanoLatino_VBFHToWWTo2L2Nu_M125_CP5Down__part1.root')
  #chain.Add(dir18+'nanoLatino_VBFHToWWTo2L2Nu_M125_CP5Down__part2.root')
  #chain.Add(dir18+'nanoLatino_VBFHToWWTo2L2Nu_M125_CP5Up__part0.root')
  #chain.Add(dir18+'nanoLatino_VBFHToWWTo2L2Nu_M125_CP5Up__part1.root')

  print chain.GetEntries()
  
  _dataset = root_numpy.tree2array (chain,
      branches = _branches,
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>13 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
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
    "ht",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    #"Lepton_phi[0]",
    #"Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    #"CleanJet_phi[0]",
    #"CleanJet_phi[1]",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
  ]



  ROOT.gROOT.ProcessLineSync(".L mlj.C+")

  chain = ROOT.TChain('Events')
  
  for i in range(0,37,1): #up to 73
    chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights__part'+str(i)+'.root')

  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part0.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part1.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part2.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part3.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part4.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part5.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part6.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Down__part7.root')
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part0.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part1.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part2.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part3.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part4.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part5.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part6.root') 
  chain.Add(dir17+'nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part7.root') 
  
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part0.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part1.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part2.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part3.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part4.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part5.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part6.root')
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Down__part7.root')
 
  #FIN QUA SONO 30K
  chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part0.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part1.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part2.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part3.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part4.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part5.root')
  #chain.Add(dir18+'nanoLatino_TTTo2L2Nu_CP5Up__part6.root')
  
  
  
  print chain.GetEntries()
  
  _dataset = root_numpy.tree2array (chain, 
      #selection = 'mll>12 && PuppiMET_pt>20 && (abs(Lepton_pdgId[0] == 13) || Lepton_pt[1]>13) && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>13 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
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
    "ht",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    #"Lepton_phi[0]",
    #"Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    #"CleanJet_phi[0]",
    #"CleanJet_phi[1]",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
  ]



  ROOT.gROOT.ProcessLineSync(".L mlj.C+")

  chain = ROOT.TChain('Events')
 
  chain.Add(dir16+'nanoLatino_WWTo2L2NuHerwigPS__part0.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2NuHerwigPS__part1.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2NuHerwigPS__part2.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2NuHerwigPS__part3.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2Nu_CUETDown__part0.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2Nu_CUETDown__part1.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2Nu_CUETUp__part0.root')
  chain.Add(dir16+'nanoLatino_WWTo2L2Nu_CUETUp__part1.root')

  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down_ext1__part0.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down_ext1__part1.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part0.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part1.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part2.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part3.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part4.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part5.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part6.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part7.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part8.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part9.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part10.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part11.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part12.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part13.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part14.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part15.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part16.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part17.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part18.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part19.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part20.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part21.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Down__part22.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Up__part0.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Up__part1.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Up__part2.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Up__part3.root')
  chain.Add(dir17+'nanoLatino_WWTo2L2Nu_CP5Up__part4.root')

  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part0.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part1.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part2.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part3.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part4.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part5.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part6.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part7.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part8.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part9.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part10.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Down__part11.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part0.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part1.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part2.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part3.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part4.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part5.root')
  chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part6.root')
 
  #FIN QUA SONO 30K
  #chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part7.root')
  #chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part8.root')
  #chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part9.root')
  #chain.Add(dir18+'nanoLatino_WWTo2L2Nu_CP5Up__part10.root')
 
  print chain.GetEntries()

  _dataset = root_numpy.tree2array (chain, 
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>13 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
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
    "ht",
    "Lepton_pt[0]",
    "Lepton_pt[1]",
    "Lepton_eta[0]",
    "Lepton_eta[1]",
    #"Lepton_phi[0]",
    #"Lepton_phi[1]",
    "CleanJet_pt[0]",
    "CleanJet_pt[1]",
    "CleanJet_eta[0]",
    "CleanJet_eta[1]",
    #"CleanJet_phi[0]",
    #"CleanJet_phi[1]",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",
    "mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",
    "log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)",
    "CleanJet_jetIdx[0]",
    "CleanJet_jetIdx[1]", 
    "Jet_qgl",
  ]



  ROOT.gROOT.ProcessLineSync(".L mlj.C+")

  chain = ROOT.TChain('Events')  
 

  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part1.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part1.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETDown__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETUp__part0.root') 
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_M125__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_M125__part1.root')
  
  #for i in range(0,22,1): #up to 22
  #  chain.Add(dir16+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part'+str(i)+'.root')
  
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_alternative_M125__part0.root')
  chain.Add(dir16+'nanoLatino_GluGluHToWWTo2L2Nu_alternative_M125__part1.root')

  chain.Add(dir17+'nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part0.root')
  chain.Add(dir17+'nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part0.root')
  chain.Add(dir17+'nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part1.root')
  for i in range(0,115,1): #up to 115
    chain.Add(dir17+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part'+str(i)+'.root')


  #for i in range(0,64,1): #up to 64
  #  chain.Add(dir17+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part'+str(i)+'.root')

  #chain.Add(dir18+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part0.root')
  #chain.Add(dir18+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part1.root')
  #chain.Add(dir18+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part2.root')
  #chain.Add(dir18+'nanoLatino_GGHjjToWWTo2L2Nu_minloHJJ_M125__part3.root')

  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part0.root')
  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part0.root')
  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125__part1.root')
  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125__part2.root')
  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125__part3.root')
  chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125__part4.root')
  #chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125__part5.root')
  for i in range(0,10,1): #up to 63
      chain.Add(dir18+'nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part'+str(i)+'.root')
  
  print chain.GetEntries()

  _dataset = root_numpy.tree2array (chain, 
      selection = 'mll>12 && PuppiMET_pt>20 && (mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>13 && Alt$(Lepton_pt[2],0)<10 && ptll>30 && Sum$(CleanJet_pt>30)==2 && mjj>200 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0',
      branches = _branches,
      stop = max_entries
     )

  return { b : _dataset[b] for b in _branches }



if __name__ == '__main__':
  print load_dataset ( 100 )

