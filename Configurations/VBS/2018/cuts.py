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
wz = 'nLepton>2 && Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>20 && Alt$(Lepton_pt[3],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5'    # mlll bveto tauveto anti_zveto zlep_wz
wzb = 'nLepton>2 && Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>20 && Alt$(Lepton_pt[3],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5' # mlll btag tauveto zlep_wz anti_zveto
loose_wz = 'nLepton>2 && Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>20 && Alt$(Lepton_pt[3],0.)<10 && MET_pt > 30' # zveto mlll bveto tauveto
nonprompt = 'Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && mll > 20 && MET_pt > 30 && mjj > 500 && abs(detajj) > 2.5' # btag tauveto zlep zveto
zz = 'nLepton>3 && Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>10 && Alt$(Lepton_pt[3],0.)>10 && Alt$(Lepton_pt[4],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && mjj > 500 && abs(detajj) > 2.5' #  zlep_zz zveto
loose_zz = 'nLepton>3 && Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)>10 && Alt$(Lepton_pt[3],0.)>10 && Alt$(Lepton_pt[4],0.)<10' # ztag
loose_dijet = 'Alt$(Lepton_pt[0],0.)>25 && Alt$(Lepton_pt[1],0.)>20 && Alt$(Lepton_pt[2],0.)<10 && Alt$(CleanJet_pt[0],-9999.) >50 && Alt$(CleanJet_pt[1],-9999.) >50 && mll > 20 && MET_pt > 30 && mjj > 500 && !('+ww+')' # zveto tauveto
#complete supercut
# supercut='\
# abs(std_vector_jet_eta[1])<5 && abs(std_vector_jet_eta[0])<5 \
# && metPfType1 > 30 \
# && std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30 \
# && (abs((std_vector_lepton_eta[0] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5) \
# && (abs((std_vector_lepton_eta[1] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj) < 0.5) \
# && veto_EMTFBug '

#&& (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0 '


#signal cuts are used as preselections
bJetTag  = '!(bVeto)'

zveto ='(abs(Alt$(Lepton_pdgId[0],-9999)) * abs(Alt$(Lepton_pdgId[1],-9999)) != 11*11 || abs(mll - 91) > 15)'
# ztag and mlll
ztag ='Alt$(WH3l_mlll,-9999.) > 100 \
&& abs(Alt$(Lepton_pdgId[0],-9999) + Alt$(Lepton_pdgId[1],-9999) + Alt$(Lepton_pdgId[2],-9999)) < 20 \
&& ((abs(mll - 91) < 15 && Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) <0) \
|| (abs(mllOneThree - 91) < 15 && Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[2],-9999) < 0) \
|| (abs(mllTwoThree - 91) < 15 && Alt$(Lepton_pdgId[1],-9999) * Alt$(Lepton_pdgId[2],-9999) < 0))'
ztag_zz = 'abs(z0Mass_zh4l-91) < 15 && abs(z1Mass_zh4l-91) < 15 '
ztag_zz_loose = 'abs(z0Mass_zh4l-91) < 30 && abs(z1Mass_zh4l-91) < 30 '

zlep='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75)'

zlep_wz='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 1.0) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 1.0) \
&&(abs((Alt$(Lepton_eta[2],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 1.0)'

zlep_zz='\
(abs((Alt$(Lepton_eta[0],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75) \
&&(abs((Alt$(Lepton_eta[1],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75) \
&&(abs((Alt$(Lepton_eta[2],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75) \
&&(abs((Alt$(Lepton_eta[3],-9999.) - (Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))/2)/abs(detajj)) < 0.75)'
ssww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) > 0'
osww='Alt$(Lepton_pdgId[0],-9999) * Alt$(Lepton_pdgId[1],-9999) < 0'

# cuts['WW_BVeto_tauVeto_zlep_zveto']=ww+'&&'+BVeto+'&&'+tauVeto+'&&'+zlep+'&&'+zveto+'&&'+charge_ww
cuts['ssww_tri']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&&'+triple_charge
cuts['ssww_ee_tri'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 &&'+triple_charge
cuts['ssww_mumu_tri'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 &&'+triple_charge
cuts['ssww_emu_tri'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == 13*11 &&'+triple_charge
cuts['ssww_tri_os']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+osww+'&&'+triple_charge
cuts['ssww_ee_tri_os'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+osww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 &&'+triple_charge
cuts['ssww_mumu_tri_os'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+osww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13 &&'+triple_charge
cuts['ssww_emu_tri_os'] =ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+osww + '&& Lepton_pdgId[0]*Lepton_pdgId[1] == -13*11 &&'+triple_charge

cuts['ssww_tri_tauVeto']=ww+'&& bVeto &&'+zlep+'&&'+zveto+'&&'+ssww+'&&'+triple_charge+'&& tauVeto_ww'

cuts['WZ_tri']=wz+'&& bVeto &&'+zlep_wz+'&&'+ztag+'&&'+triple_charge_wz # mlll
cuts['WZ_tri_tauVeto']=wz+'&& bVeto &&'+zlep_wz+'&&'+ztag+'&&'+triple_charge_wz+'&& tauVeto_wz' # mlll
cuts['WZb_tri']=wzb+'&&'+bJetTag+'&&'+zlep_wz+'&&'+ztag+'&&'+triple_charge_wz # mlll
cuts['WZb_tri_tauVeto']=wzb+'&&'+bJetTag+'&&'+zlep_wz+'&&'+ztag+'&&'+triple_charge_wz+'&& tauVeto_wz' # mlll
cuts['LOOSEWZ_tri']=loose_wz+'&& bVeto &&'+ztag+'&&'+triple_charge_wz # mlll
cuts['NONPROMPT_tri']=nonprompt+'&&'+bJetTag+'&&'+zveto+'&&'+zlep+'&&'+triple_charge
cuts['ZZ_tri']=zz+'&&'+zlep_zz+'&&'+ztag_zz+'&&'+triple_charge_zz # ztag_zz
cuts['ZZ_tri_tauVeto']=zz+'&&'+zlep_zz+'&&'+ztag_zz+'&&'+triple_charge_zz+'&& tauVeto_zz' # ztag_zz
cuts['LOOSEZZ_tri']=loose_zz+'&&'+ztag_zz_loose+'&&'+triple_charge_zz # ztag_zz
cuts['LOOSEDIJET_tri']=loose_dijet+'&&'+zveto+'&&'+triple_charge #