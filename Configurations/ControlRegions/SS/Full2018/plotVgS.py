#!/usr/bin/env python

from ROOT import *
from LatinoAnalysis.Tools.commonTools import *

def getChain(directory, samples):
  files=[]
  for sample in samples:
    files.extend(getSampleFiles(directory,sample,False,'nanoLatino_'))
  chain=TChain("Events")
  n=0
  for file in files:
    chain.Add(file.replace("###", ""))
    n+=1
    #if n>20:
    #  break
  return chain  

samples = [
('Wg',   ['Wg_MADGRAPHMLM'], "(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)"),
#('WZ01', ['WZTo3LNu_mllmin01'], '(Gen_ZGstar_mass>=0.1 && Gen_ZGstar_mass < 4)'),
('WZ01', ['WZTo3LNu_mllmin01'], '(Gen_ZGstar_mass>=0.1)'),
#('WZ',   ['WZTo3LNu'], '(Gen_ZGstar_mass<0 || Gen_ZGstar_mass > 4)'),
('WZ',   ['WZTo3LNu'], '(Gen_ZGstar_mass > 4)'),
]

directory='/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017'

supercut = '(   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30) \
          '

out = TFile("ciao.root", "recreate")
out.cd()
var='Gen_ZGstar_mass'
plots=[]
for sample in samples:
  chain = getChain(directory,     sample[1])
  cut = sample[2]
  h = TH1F(sample[0], sample[0], 500, 0, 200)
  chain.Draw(var+">>"+sample[0], supercut+"*"+cut+"*XSWeight")
  plots.append(h)
  h.Write()
  #if (len(plots)==1):
  #  plots[-1].Draw()
  #else:
  #  plots[-1].Draw("sames")

a=raw_input("a") 
