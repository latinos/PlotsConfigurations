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
nLepton>1'
#((Alt$(abs(Lepton_pdgId[0]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || Alt$(abs(Lepton_pdgId[0]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[1]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || Alt$(abs(Lepton_pdgId[1]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[2]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || Alt$(abs(Lepton_pdgId[2]),-9999)==13) && ((Alt$(abs(Lepton_pdgId[3]),-9999)==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[3]],-9999)==2) || Alt$(abs(Lepton_pdgId[3]),-9999)==13)
triple_charge = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13)'
triple_charge_wz = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13) && ((abs(Alt$(Lepton_pdgId[2],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || abs(Alt$(Lepton_pdgId[2],-9999))==13)'
triple_charge_zz = '((abs(Alt$(Lepton_pdgId[0],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[0]],-9999)==2) || abs(Alt$(Lepton_pdgId[0],-9999))==13) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[1]],-9999)==2) || abs(Alt$(Lepton_pdgId[1],-9999))==13) && ((abs(Alt$(Lepton_pdgId[2],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[2]],-9999)==2) || abs(Alt$(Lepton_pdgId[2],-9999))==13) && ((abs(Alt$(Lepton_pdgId[3],-9999))==11 && Alt$(Electron_tightCharge[Lepton_electronIdx[3]],-9999)==2) || abs(Alt$(Lepton_pdgId[3],-9999))==13)'
#supercut='1'#for test on raw samples

ww = 'Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5'  # bveto tauveto zveto zlep
ww1 = 'Alt$(Lepton_pt[0],0.)>30 && Alt$(Lepton_pt[1],0.)>30 && Alt$(Lepton_pt[2],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5'  # bveto tauveto zveto zlep
ww2 = 'Alt$(Lepton_pt[0],0.)>30 && Alt$(Lepton_pt[1],0.)>30 && Alt$(Lepton_pt[2],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >30 && Alt$(CleanJet_pt[1],-9999.) >30 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5'  # bveto tauveto zveto zlep
ww3 = 'Alt$(Lepton_pt[0],0.)>30 && Alt$(Lepton_pt[1],0.)>30 && Alt$(VetoLepton_pt[0],-9999.) <= 10 && Alt$(CleanJet_pt[0],-9999.) >30 && Alt$(CleanJet_pt[1],-9999.) >30 && mll >= 20 && MET_pt>= 30 && mjj >= 500 && abs(detajj) >= 2.5 && abs(Alt$(CleanJet_eta[0],-9999.)) <5.0 && abs(Alt$(CleanJet_eta[1],-9999.)) <5.0'  # bveto tauveto zveto zlep
ww4 = 'Alt$(Lepton_pt[0],0.)>=30 && Alt$(Lepton_pt[1],0.)>=30 && Alt$(VetoLepton_pt[0],-9999.) < 10 && Alt$(CleanJet_pt[0],-9999.) >30 && Alt$(CleanJet_pt[1],-9999.) >30 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5 && abs(Alt$(CleanJet_eta[0],-9999.)) <5.0 && abs(Alt$(CleanJet_eta[1],-9999.)) <5.0'  # bveto tauveto zveto zlep
lep_eta = '(((abs(Alt$(Lepton_pdgId[0],-9999))==11 && abs(Alt$(Lepton_eta[0],-9999.)) <=2.4) || (abs(Alt$(Lepton_pdgId[0],-9999))==13 && abs(Alt$(Lepton_eta[0],-9999.)) <=2.5)) && ((abs(Alt$(Lepton_pdgId[1],-9999))==11 && abs(Alt$(Lepton_eta[1],-9999.)) <=2.4) || (abs(Alt$(Lepton_pdgId[1],-9999))==13 && abs(Alt$(Lepton_eta[1],-9999.)) <=2.5)))'
#signal cuts are used as preselections
bJetTag  = '!(bVeto)'

zveto ='(abs(Alt$(Lepton_pdgId[0],-9999)) * abs(Alt$(Lepton_pdgId[1],-9999)) != 11*11 || abs(mll - 91) > 15)'
zveto1 ='dmZll_veto >= 15' 
zlep='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75)'
zlep1='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.5) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.5)'
ssww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) > 0'
osww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) < 0'

# cuts['WW_BVeto_tauVeto_zlep_zveto']=ww+'&&'+BVeto+'&&'+tauVeto+'&&'+zlep+'&&'+zveto+'&&'+charge_ww

cuts['ww']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww1']=ww1+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww2']=ww2+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww2_zlep1']=ww2+'&& bVeto &&'+zlep1+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww3']=ww3+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww3_zlep1']=ww3+'&& bVeto &&'+zlep1+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww3_zveto1']=ww3+'&& bVeto &&'+zlep+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww3_bVeto1']=ww3+'&& bVeto1 &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww && '+lep_eta
cuts['ww3_tauVeto1']=ww3+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&& tauVeto_ww1 && '+lep_eta
cuts['ww3_all']=ww3+'&& bVeto1 &&'+zlep1+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww1 &&'+lep_eta
cuts['ww4_all']=ww4+'&& bVeto1 &&'+zlep1+'&&'+zveto1+'&&'+ssww+'&& tauVeto_ww1 && '+lep_eta
