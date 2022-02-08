# variables

#variables = {}

cutdictCR = [c for c in cuts if "dy" in c or "top" in c]
cutdictSRhigh = [c for c in cuts if "high" in c and c not in cutdictCR]
cutdictSR = [c for c in cuts if c not in cutdictSRhigh and c not in cutdictCR]

#variables['events']  = {   'name': '1',
#                        'range' : (1,0,2),
#                        'xaxis' : 'events',
#                        'fold' : 3
#                        }

### Discriminants:
#variables['mTi_binning']  = {   'name': 'mTi',
#                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],), # Note: Leaving this comma after the list is important!
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

#variables['mTi_highbinning']  = {   'name': 'mTi',
#                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],),
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

#variables['mTi_binning_finer']  = {   'name': 'mTi',
#                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2250,2500,2750,3000,3250,3500,3750,4000],),
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

#variables['mTi_highbinning_finer']  = {   'name': 'mTi',
#                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2250,2500,2750,3000,3250,3500,3750,4000],),
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

#variables['DNN_mth_binning']  = {   'name': 'DNN_mth_OTF',
#                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1,
#                        'cuts'  : cutdictSR
#                        }

#variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth_OTF',
#                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1,
#                        'cuts'  : cutdictSRhigh
#                        }

#variables['DNN_mth_binning_finer']  = {   'name': 'DNN_mth_OTF',
#                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2200,2400,2600,2800,3000,3250,3500,3750,4000,4250,4500,4750,5000],),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

#variables['DNN_mth_highbinning_finer']  = {   'name': 'DNN_mth_OTF',
#                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2200,2400,2600,2800,3000,3250,3500,3750,4000,4250,4500,4750,5000],),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1
#                        }

### Kinematics:
variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (20,0,200),
                        'xaxis' : 'p_{T} 1st lep. [GeV]',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (20,0,100),
                        'xaxis' : 'p_{T} 2nd lep. [GeV]',
                        'fold'  : 3
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',
                        'range' : (20,-3,3),
                        'xaxis' : '#eta 1st lep.',
                        'fold'  : 3
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',
                        'range' : (20,-3,3),
                        'xaxis' : '#eta 2nd lep.',
                        'fold'  : 3
                        }

variables['jetpt1']  = {   'name': 'CleanJet_pt[0]',
                        'range' : (20,0,300),
                        'xaxis' : 'p_{T} 1st jet [GeV]',
                        'fold'  : 2
                        }

variables['jetpt2']  = {   'name': 'CleanJet_pt[1]',
                        'range' : (20,0,200),
                        'xaxis' : 'p_{T} 2nd jet [GeV]',
                        'fold'  : 2
                        }

variables['jeteta1']  = {  'name': 'CleanJet_eta[0]',
                        'range' : (20,-5,5),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 2
                        }

variables['jeteta2']  = {  'name': 'CleanJet_eta[1]',
                        'range' : (20,-5,5),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 2
                        }
variables['jetpt1_30']  = {   'name': '(CleanJet_pt[0]*(CleanJet_pt[0]>=30))-(100*(CleanJet_pt[0]<30))',
                        'range' : (20,0,300),
                        'xaxis' : 'p_{T} 1st jet [GeV]',
                        'fold'  : 2
                        }

variables['jetpt2_30']  = {   'name': '(CleanJet_pt[1]*(CleanJet_pt[1]>=30))-(100*(CleanJet_pt[1]<30))',
                        'range' : (20,0,200),
                        'xaxis' : 'p_{T} 2nd jet [GeV]',
                        'fold'  : 2
                        }

variables['jeteta1_30']  = {  'name': '(CleanJet_eta[0]*(CleanJet_pt[0]>=30))-(100*(CleanJet_pt[0]<30))',
                        'range' : (20,-5,5),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 2
                        }

variables['jeteta2_30']  = {  'name': '(CleanJet_eta[1]*(CleanJet_pt[1]>=30))-(100*(CleanJet_pt[1]<30))',
                        'range' : (20,-5,5),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 2
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20,0,400),
                        'xaxis' : 'm_{T,ll+MET} [GeV]',
                        'fold' : 3
                        }

variables['mth-DY']  = {   'name': 'mth',
                        'range' : (12, 0, 60),
                        'xaxis' : 'm_{T,ll+MET} [GeV]',
                        'fold' : 3
                        }

#variables['mTi']  = {   'name': 'mTi',
#                        'range' : (30,0,600),
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3
#                        }

#variables['DNN_mth_OTF']  = {
#                        'name': 'DNN_mth_OTF',
#                        'range' : (30,0,900),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold'  : 3
#                        }

#variables['DNN_mth_OTF_wide']  = {
#                        'name': 'DNN_mth_OTF',
#                        'range' : (30,0,1800),
#                        'xaxis' : 'DNN m_{T} [GeV]',
#                        'fold'  : 3
#                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (25, 0,500),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20, 0,300),
                        'xaxis' : 'p_{T,ll} [GeV]',
                        'fold' : 3
                        }

#variables['pTWW']  = {   'name': 'pTWW',
#                        'range' : (20, 0,300),
#                        'xaxis' : 'p_{T,WW} [GeV]',
#                        'fold' : 3
#                        }

#variables['mtw1']  = {   'name': 'mtw1',
#                        'range' : (20, 0,400),
#                        'xaxis' : 'm_{T,l1+MET} [GeV]',
#                        'fold' : 3
#                        }

#variables['pfmet']  = { 
#                        'name': 'MET_pt',
#                        'range' : (20,0,300),
#                        'xaxis' : 'PF MET [GeV]',
#                        'fold'  : 3
#                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (20,0,300),
                        'xaxis' : 'PUPPI MET [GeV]',
                        'fold'  : 3
                        }

### VBF:
#variables['mjj']  = {
#                        'name': 'mjj',
#                        'range' : (30,0,600),
#                        'xaxis' : 'm_{jj} [GeV]',
#                        'fold'  : 2
#                        }

#variables['detajj']  = {
#                        'name': 'detajj',
#                        'range' : (20,0,5),
#                        'xaxis' : '#Delta#eta_{jj}',
#                        'fold'  : 2
#                        }

### DNN:
variables['DNN_isVBFnew']  = {
                        'name': 'DNN_isVBFnew_OTF',
                        'range' : (20,0,1),
                        'xaxis' : 'DNN VBF discriminator',
                        'fold'  : 2
                        }

variables['DNN_isggFnew']  = {
                        'name': 'DNN_isggFnew_OTF',
                        'range' : (20,0,1),
                        'xaxis' : 'DNN ggF discriminator',
                        'fold'  : 2
                        }

### HM cuts:
#variables['back2back_OTF']  = {
#                        'name': 'back2back_OTF',
#                        'range' : (20,0,5),
#                        'xaxis' : '#DeltaR^{-1}',
#                        'fold'  : 2
#                        }

#variables['dphill']  = {
#                        'name': 'dphill',
#                        'range' : (20,0,3.141592),
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold'  : 2
#                        }

#variables['dphilmet']  = {
#                        'name': 'dphilmet',
#                        'range' : (20,0,3.141592),
#                        'xaxis' : 'min(#Delta#phi_{l,MET})',
#                        'fold'  : 2
#                        }

#variables['dphilmet2']  = {
#                        'name': 'dphilmet2',
#                        'range' : (20,0,3.141592),
#                        'xaxis' : '#Delta#phi_{l2,MET}',
#                        'fold'  : 2
#                        }

#variables['ht']  = {   'name': 'Lepton_pt[0]+Lepton_pt[0]+PuppiMET_pt[0]',
#                        'range' : (20,0,600),
#                        'xaxis' : 'p_{T} 1st, 2nd lep. + PUPPI MET [GeV]',
#                        'fold'  : 3
#                        }
