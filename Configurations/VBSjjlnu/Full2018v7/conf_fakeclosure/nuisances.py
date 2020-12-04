# nuisances
# # # name of samples here must match keys in samples.py 

mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "VBF-V", "Vg", "VgS"]
# mc_norm = [m for m in mc if m not in ["VBS", "VV"]]
# mc_sep =  ["VBS", "VV"]


phase_spaces_ele = [ c for c in cuts if 'ele' in c]
phase_spaces_mu = [ c for c in cuts if 'mu' in c]



# # ################################ EXPERIMENTAL UNCERTAINTIES  #################################

# # #### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['top',"Wjets_HT"])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['top', "Wjets_HT"])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['top', "Wjets_HT"])
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['top', "Wjets_HT"])
}


##########Fakes

fakeW_jetUp       = '( fakeWeight_45 / fakeWeight_35  )'
fakeW_jetDown     =  '( fakeWeight_25 / fakeWeight_35  )'
fakeW_statUp        =  '( fakeWeight_35_statUp / fakeWeight_35  )'
fakeW_statDown      =  '( fakeWeight_35_statDo / fakeWeight_35  )'

nuisances['fake_syst']  = {
               'name'  : 'CMS_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_ele_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_jetUp , fakeW_jetDown ],
                             },
                'cuts':  phase_spaces_ele
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_ele_stat_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statUp , fakeW_statDown ],
                             },
                'cuts':  phase_spaces_ele
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_mu_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_jetUp , fakeW_jetDown ],
                             },
                'cuts':  phase_spaces_mu
}


nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_mu_stat_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     :[ fakeW_statUp , fakeW_statDown ],
                             },
                'cuts':  phase_spaces_mu
}

# # ##### Trigger Efficiency

trig_syst = ['( SingleLepton_trigEff_corrected_up[0] / SingleLepton_trigEff_corrected[0] )*(SingleLepton_trigEff_corrected[0]>0.02) + (SingleLepton_trigEff_corrected[0]<=0.02)', 
            '(SingleLepton_trigEff_corrected_down[0]/SingleLepton_trigEff_corrected[0])']

nuisances['trigg']  = {
                'name'  : 'CMS_eff_trigger_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' :  dict((skey, trig_syst) for skey in mc)
}


# # ##### Electron Efficiency and energy scale

ele_id_syst_up = '(abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Up[0])/\
                    (Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 13)'
ele_id_syst_do = '(abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Down[0])/\
                    (Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 13)'
mu_id_syst_up = '(abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Up[0])/\
                    (Lepton_tightMuon_'+muWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 11)'
mu_id_syst_do = '(abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Down[0])/\
                    (Lepton_tightMuon_'+muWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 11)'

id_syst_ele = [ ele_id_syst_up, ele_id_syst_do ]
id_syst_mu = [ mu_id_syst_up, mu_id_syst_do ]

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  :   dict((skey, id_syst_ele) for skey in mc ),
                'cuts': phase_spaces_ele
}


# # ##### Muon Efficiency and energy scale


nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc ),
                'cuts': phase_spaces_mu
}


##################
# PU jet id

# nuisances['JetPUID_sf']  = {
#                 'name'  : 'CMS_jetpuid_2018',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : dict((skey, ['PUJetIdSF_up/PUJetIdSF','PUJetIdSF_down/PUJetIdSF']) for skey in mc ),
# }


# ##### Jet energy scale

# ## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }


nuisances['Norm']  = {
                'name'  : 'norm',
                'type'  : 'lnN',
               'samples'  : {
                             'Wjets_HT' : '1.10',
                             'top' : '1.10',
                             },
                }


# nuisances = { k:v for k,v in nuisances.items() if k in ['fake_syst','fake_ele','fake_ele_stat','fake_mu','fake_mu_stat',
#                                                     'eff_e','eff_m','electronpt_0','muonpt_0','electronpt_1','muonpt_1' ] }