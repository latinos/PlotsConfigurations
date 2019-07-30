# cuts
# cuts = {}
#Different supercut used

#supercut for test on succesive selections

# supercut='\
# nLepton>1 && nCleanJet > 1 &&\
# Alt$(Lepton_pt[0],0.)>30 && Alt$(Lepton_pt[1],0.)>30 && Alt$(Lepton_pt[2],0.)<10 && mjj >500 && detajj > 2.5\
# && abs(Alt$(CleanJet_eta[1],-9999.))<5 && abs(Alt$(CleanJet_eta[0],-9999.))<5\
# && fabs(Alt$(Lepton_eta[0],-9999.))<2.5 && fabs(Alt$(Lepton_eta[1],-9999.))<2.5 && Alt$(CleanJet_pt[0],-9999.) >30 && Alt$(CleanJet_pt[1],-9999.) >30'

supercut='\
nLepton>=2 && nCleanJet >= 2'
#((Alt$(abs(Lepton_pdgId[0]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || Alt$(abs(Lepton_pdgId[0]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[1]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || Alt$(abs(Lepton_pdgId[1]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[2]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || Alt$(abs(Lepton_pdgId[2]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[3]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[3]],-9999)==2) || Alt$(abs(Lepton_pdgId[3]),-9999)==13)
triple_charge = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13)'
triple_charge_wz = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13) && ((abs(Alt$(Lepton_pdgId[2],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || abs(Alt$(Lepton_pdgId[2],-9999))==13)'
triple_charge_zz = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13) && ((abs(Alt$(Lepton_pdgId[2],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || abs(Alt$(Lepton_pdgId[2],-9999))==13) && ((abs(Alt$(Lepton_pdgId[3],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[3]],-9999)==2) || abs(Alt$(Lepton_pdgId[3],-9999))==13)'
#supercut='1'#for test on raw samples

ww = 'Alt$(Lepton_pt[0],0.)>30 && Alt$(Lepton_pt[1],0.)>30 && Alt$(CleanJet_pt[0],-9999.) >30 && Alt$(CleanJet_pt[1],-9999.) >30 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5 && abs(Alt$(CleanJet_eta[0],-9999.)) <5.0 && abs(Alt$(CleanJet_eta[1],-9999.)) <5.0'  # bveto tauveto zveto zlep
ww1 = 'Alt$(Lepton_pt[0],0.)>=30 && Alt$(Lepton_pt[1],0.)>=30  && Alt$(CleanJet_pt[0],-9999.) >=30 && Alt$(CleanJet_pt[1],-9999.) >=30 && mll >= 20 && MET_pt>= 30 && mjj >= 500 && detajj >= 2.5 && abs(Alt$(CleanJet_eta[0],-9999.)) <=5.0 && abs(Alt$(CleanJet_eta[1],-9999.)) <=5.0'  # bveto tauveto zveto zlep
lep_eta = '(((abs(Alt$(Lepton_pdgId[0],-9999))==11 && abs(Alt$(Lepton_eta[0],-9999.)) <=2.4) || (abs(Alt$(Lepton_pdgId[0],-9999))==13 && abs(Alt$(Lepton_eta[0],-9999.)) <=2.5)) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && abs(Alt$(Lepton_eta[1],-9999.)) <=2.4) || (abs(Alt$(Lepton_pdgId[1],-9999))==13 && abs(Alt$(Lepton_eta[1],-9999.)) <=2.5)))'
veto_l3='Alt$(Lepton_pt[2],0.)<10'
veto_l31='(nVetoLepton<=0 || Alt$(VetoLepton_pt[0],-9999.) <= 10)'
#signal cuts are used as preselections

zveto ='(abs(Alt$(Lepton_pdgId[0],-9999)) * abs(Alt$(Lepton_pdgId[1],-9999)) != 11*11 || abs(mll - 91) > 15)'
zveto1 ='dmZll_veto >= 15' 
zlep='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) <= 0.5) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) <= 0.5)'
ssww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) > 0'
osww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) < 0'

# cuts['WW_BVeto_tauVeto_zlep_zveto']=ww+'&&'+BVeto+'&&'+tauVeto+'&&'+zlep+'&&'+zveto+'&&'+charge_ww

cuts['ww']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
cuts['ww_bVeto1']=ww+'&& bVeto1 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
cuts['ww_bVeto2']=ww+'&& bVeto2 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
cuts['ww_bVeto3']=ww+'&& bVeto3 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
cuts['ww_zveto1']=ww+'&& bVeto &&'+zlep+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
cuts['ww_veto_l31']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l31
cuts['ww_all']=ww+'&& bVeto1 &&'+zlep+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l31
#cuts['ww1']=ww1+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
#cuts['ww1_bVeto1']=ww+'&& bVeto1 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
#cuts['ww1_bVeto2']=ww+'&& bVeto2 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
#cuts['ww1_bVeto3']=ww+'&& bVeto3 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
#cuts['ww1_zveto1']=ww+'&& bVeto &&'+zlep+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l3
#cuts['ww1_lep_eta1']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta1+'&&'+veto_l3
#cuts['ww1_veto_l31']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta+'&&'+veto_l31
