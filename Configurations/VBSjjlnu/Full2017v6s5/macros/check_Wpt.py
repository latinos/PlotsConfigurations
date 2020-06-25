from __future__ import print_function
import ROOT as R 
import os
import sys

basepath= "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_Full2017v6/MCl1loose2017v6__MCCorr2017v6__VBSjjlnuSkim2017v5"

files = [ basepath+"/"+f  for f in os.listdir(basepath) if "nanoLatino_WJetsToLNu_HT1200_2500" in f]

tree = R.TChain("Events")

for i in range(1):
    print(files[i])
    tree.Add(files[i])
hwpt = R.TH1F("wpt", "W Pt", 100, 0, 300)

for ev in tree:
    print(">>>")
    ele = None
    mu =None
    vele = None
    vmu =  None
    tau = None
    vtau = None
    for pdgid,pt,eta,phi,mass in zip(ev.LHEPart_pdgId, 
                ev.LHEPart_pt, ev.LHEPart_eta, ev.LHEPart_phi, ev.LHEPart_mass):
        if abs(pdgid)==11:
            ele = R.TLorentzVector()
            ele.SetPtEtaPhiM(pt,eta,phi,mass)
        if abs(pdgid)==13:
            mu = R.TLorentzVector()
            mu.SetPtEtaPhiM(pt,eta,phi,mass)
        if abs(pdgid)==15:
            tau = R.TLorentzVector()
            tau.SetPtEtaPhiM(pt,eta,phi,mass)
        if abs(pdgid)==12:
            vele = R.TLorentzVector()
            vele.SetPtEtaPhiM(pt,eta,phi,mass)
        if abs(pdgid)==14:
            vmu = R.TLorentzVector()
            vmu.SetPtEtaPhiM(pt,eta,phi,mass)
        if abs(pdgid)==16:
            vtau = R.TLorentzVector()
            vtau.SetPtEtaPhiM(pt,eta,phi,mass)
    if ele!=None and vele!=None:
        W = ele+vele
        hwpt.Fill(W.Pt())
        print("Wpt: ", W.Pt())
    if mu!=None and vmu!=None:
        W = mu+vmu
        hwpt.Fill(W.Pt())
        print("Wpt:", W.Pt())
    if tau!=None and vtau!=None:
        W = tau+vtau
        hwpt.Fill(W.Pt())
        print("TAU!")
        print("Wpt:", W.Pt())

c = R.TCanvas()
hwpt.Draw("hist")
c.Draw()