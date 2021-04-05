from pprint import pprint
# # # name of samples here must match keys in samples.py 

mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "VBF-V", "Vg", "VgS", "VBS", "ggWW","VBS_dipoleRecoil"]

phasespaces = ["res_wjetcr_ele","res_wjetcr_mu" ,"boost_wjetcr_ele" ,"boost_wjetcr_mu",
        "res_topcr_ele","res_topcr_mu" ,"boost_topcr_ele" ,"boost_topcr_mu",
        "res_sig_ele","res_sig_mu" ,"boost_sig_ele" ,"boost_sig_mu" ]

def getSamplesWithout(samples, samples_to_remove):
    return [m for m in samples if m not in samples_to_remove]


phase_spaces_boost = [ c for c in phasespaces if 'boost' in c]
phase_spaces_res = [ c for c in phasespaces if 'res' in c]

phase_spaces_res_ele = [ c for c in phase_spaces_res if 'ele' in c]
phase_spaces_res_mu = [ c for c in phase_spaces_res if 'mu' in c]
phase_spaces_boost_ele = [ c for c in phase_spaces_boost if 'ele' in c]
phase_spaces_boost_mu =  [ c for c in phase_spaces_boost if 'mu' in c]

phase_spaces_tot_ele = phase_spaces_res_ele + phase_spaces_boost_ele
phase_spaces_tot_mu = phase_spaces_res_mu + phase_spaces_boost_mu
phase_spaces_tot_res = phase_spaces_res_ele + phase_spaces_res_mu
phase_spaces_tot_boost = phase_spaces_boost_ele + phase_spaces_boost_mu

phase_spaces_dict = {"boost": phase_spaces_boost, "res": phase_spaces_res}
phase_spaces_tot = phase_spaces_tot_ele + phase_spaces_tot_mu

# Function to split a nuisance on different folders for different group of samples
# keeping the same nuisance name
# groups = [ (list of samples, folder), ...  ]
def split_nuisance_samples_dir(nuisance_name, nuisance_options, variation, groups):
    for ig, (samples_list, folder) in enumerate(groups):
        n = {}
        n.update(nuisance_options)
        n["samples"] = dict((skey, ['1.','1.']) for skey in samples_list)
        n["folderUp"] = folder +'_'+variation + 'up'
        n["folderDown"] = folder +'_'+variation + 'do'
        nuisances['{}_{}'.format(nuisance_name, ig)] = n

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

nuisances['fake_syst_ele']  = {
               'name'  : 'CMS_fake_syst_ele',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
                'cuts': phase_spaces_tot_ele
               }

nuisances['fake_syst_mu']  = {
               'name'  : 'CMS_fake_syst_mu',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
                'cuts': phase_spaces_tot_mu
               }

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_ele_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_jetUp , fakeW_jetDown ],
                             },
                'cuts':  phase_spaces_tot_ele
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_ele_stat_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statUp , fakeW_statDown ],
                             },
                'cuts':  phase_spaces_tot_ele
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_mu_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_jetUp , fakeW_jetDown ],
                             },
                'cuts':  phase_spaces_tot_mu
}


nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_mu_stat_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     :[ fakeW_statUp , fakeW_statDown ],
                             },
                'cuts':  phase_spaces_tot_mu
}

# ##### Btag nuisances

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2018'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc)
    }

# # ##### Trigger Efficiency

trig_syst = ['( SingleLepton_trigEff_corrected_up / SingleLepton_trigEff_corrected )*(SingleLepton_trigEff_corrected>0.02) + (SingleLepton_trigEff_corrected<=0.02)', 
            '(SingleLepton_trigEff_corrected_down/SingleLepton_trigEff_corrected)']

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
                'cuts': phase_spaces_tot_ele
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp': 'ElepTup',
                'mapDown': 'ElepTdo',
                'cuts': phase_spaces_tot_ele,
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
                'folderUp' : directory_mc+'_ElepTup',
                'folderDown' : directory_mc+'_ElepTdo',
}


# # ##### Muon Efficiency and energy scale


nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc ),
                'cuts': phase_spaces_tot_mu
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp': 'MupTup',
                'mapDown': 'MupTdo',
                'cuts': phase_spaces_tot_mu,
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
                'folderUp' : directory_mc+'_MupTup',
                'folderDown' : directory_mc+'_MupTdo',
}

##################
# PU jet id

nuisances['JetPUID_sf']  = {
                'name'  : 'CMS_jetpuid_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['PUJetIdSF_up/PUJetIdSF','PUJetIdSF_down/PUJetIdSF']) for skey in mc ),
}


# ##### Jet energy scale

##### Jet energy scale
jes_systs = ['JES']

for js in jes_systs:
    nuisances[js]  = {
                    'name': 'CMS_j_scale_'+js,
                    'kind': 'suffix',
                    'type': 'shape',
                    'mapUp': js+'up',
                    'mapDown': js+'do',
                    'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
                    'folderUp' : directory_mc+'_JESup',
                    'folderDown' : directory_mc+'_JESdo',
                    'AsLnN'      : '1',
                    
    }

### Only total variation for fatjetJES
    # nuisances['fatjet' +js]  = {
    #                 'name': 'CMS_fj_scale_'+js,
    #                     'kind': 'suffix',
    #                     'type': 'shape',
    #                     'mapUp': 'fatjet' + js+'up',
    #                     'mapDown': 'fatjet' + js+'do',
    #                     'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category 
    #                     'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
    #                     'folderUp' : directory_mc+'_fatjetJESup',
    #                     'folderDown' : directory_mc+'_fatjetJESdo',
    #                     'AsLnN'      : '1',
    # }
    
##### Jet energy resolution
nuisances['JER'] = {
                'name': 'CMS_res_j_2018',
                'kind': 'suffix',
                'type': 'shape',
                'mapUp': 'JERup',
                'mapDown': 'JERdo',
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
                'folderUp' : directory_mc+'_JERup',
                'folderDown' : directory_mc+'_JERdo',
                'AsLnN'      : '1',
}

# nuisances['fatjetJER'] = {
#                 'name': 'CMS_fatjet_res_2018',
#                 'kind': 'suffix',
#                 'type': 'shape',
#                 'mapUp': 'fatjetJERup',
#                 'mapDown': 'fatjetJERdo',
#                 'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
#                 'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS", "ggWW"]),
#                 'folderUp' : directory_mc+'_fatjetJERup',
#                 'folderDown' : directory_mc+'_fatjetJERdo',
#                 'AsLnN'      : '1',
# }

# # # ##### MET energy scale
# nuisances['MET']  = {
#                 'name'  : 'CMS_scale_met_2018',
#                 'kind'  : 'suffix',
#                 'type'  : 'shape',
#                 'mapUp':   'METup',
#                 'mapDown': 'METdo', 
#                 'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS', "ggWW"]),
#                 'folderUp' : directory_mc+'_METup',
#                 'folderDown' : directory_mc+'_METdo',
#                 'AsLnN'      : '1',
# }


##################################
######## Fatjet uncertainties

# Wtagging uncertainties enters also resolved region
fatjet_eff = ['BoostedWtagSF_up/BoostedWtagSF_nominal', 'BoostedWtagSF_down/BoostedWtagSF_nominal']
nuisances['Wtagging_eff'] = {
                'name': 'CMS_fatjet_tau21eff_2018',
                'kind' : 'weight', 
                'type' : 'shape',
                'samples': dict( (skey, fatjet_eff) for skey in mc)
}

fatjet_eff_ptextr = ['BoostedWtagSF_ptextr[0]', 'BoostedWtagSF_ptextr[1]']
nuisances['Wtagging_ptextr'] = {
                'name': 'CMS_fj_tau21ptextr_2018',
                'kind' : 'weight', 
                'type' : 'shape',
                'samples': dict( (skey, fatjet_eff_ptextr) for skey in mc)
}

#FatJet mass scale and resolution
# nuisances['fatjetJMR']  = {
#     'name': 'CMS_fatjet_jmr_2018',
#     'kind': 'suffix',
#     'type': 'shape',
#     'mapUp': 'fatjetJMRup',
#     'mapDown': 'fatjetJMRdo',
#     'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
#     'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS", "ggWW"]),
#     'folderUp' : directory_mc+'_fatjetJMRup',
#     'folderDown' : directory_mc+'_fatjetJMRdo',
#     'AsLnN'      : '1',

# }

# nuisances['fatjetJMS']  = {
#     'name': 'CMS_fatjet_jms_2018',
#     'kind': 'suffix',
#     'type': 'shape',
#     'mapUp': 'fatjetJMSup',
#     'mapDown': 'fatjetJMSdo',
#     'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
#     'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS", "VV", "ggWW"]),
#     'folderUp' : directory_mc+'_fatjetJMSup',
#     'folderDown' : directory_mc+'_fatjetJMSdo',
#     'AsLnN'      : '1',
# }


## Top pT reweighting uncertainty

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': { 
       'top': [
        'isSingleTop * 1.0816 + isTTbar',
        'isSingleTop * 0.9184 + isTTbar']
      }
}

## Top pT reweighting uncertainty

nuisances['TopPtRew'] = {
   'name': 'CMS_topPtRew',   # Theory uncertainty
   'kind': 'weight',
   'type': 'shape',
   'samples': {'top': ["Top_pTrw*Top_pTrw", "1."]},
   'symmetrize': True
}

###########################################

# for jtype in ["quark", "gluon"]:
#       for  jeta in ["higheta", "loweta"]:
#         nuisances['QGLmorphing_{}_{}'.format(jtype, jeta)]  = {
#             'name': 'QGLmorph_{}_{}_1718'.format(jtype, jeta),
#             'kind': 'suffix',
#             'type': 'shape',
#             'samples': dict((skey, ['1.','1.']) for skey in mc),
#         }

#####################
# Njets Herwig/Pythia for signal
# nuisances['njets_signal'] = {
#    'name': 'VBS_PhytiaToHerwig',   
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': {'VBS': ["njets_herwig_signal"]},
#    'OneSided': True
# }


# ######################
# # Theory nuisance


import json, os
#VBS_pdf_factors = json.load(open("/afs/cern.ch/work/d/dvalsecc/private/CMSSW_11_1_4" + "/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2018v7/conf_fit_v4.3/pdf_normcorr_VBS.json"))
nuis_factors = json.load(open("/afs/cern.ch/work/d/dvalsecc/private/CMSSW_11_1_4" + "/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2018v7/conf_fit_v4.4/nuisance_incl_norm_factors_2018.json"))

for sample in mc :
    if sample == "ggWW": continue
    if 'VBS' in sample:
        nuisances['QCD_scale_VBS'] = {
            'name'  : 'QCDscale_VBS_accept',
            'kind'  : 'weight',
            'type'  : 'shape',
            # Normalization effect removed from 1l inclusive phase space
            'samples'  :  { "VBS": ["QCDscale_normalized[0]", "QCDscale_normalized[8]"],
                            "VBS_dipoleRecoil": ["QCDscale_normalized[0]", "QCDscale_normalized[8]"]  }
        }
    else:
        nuisances['QCD_scale_'+sample] = {
            'name'  : 'QCDscale_'+sample,
            'kind'  : 'weight',
            'type'  : 'shape',
            'samples'  :  { sample: ["LHEScaleWeight[0]", "LHEScaleWeight[8]"] }
        }


# #
# # PS and UE
# # #
# #### USE this for producing shapes
# nuisances['PS_ISR']  = {
#                 'name'  : 'CMS_PS_ISR',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {   
#                     s : ['PSWeight[2] * {}'.format(nuis_factors[s]["PS_ISR"][0]),
#                          'PSWeight[0] * {}'.format(nuis_factors[s]["PS_ISR"][1]) ] for s in mc }
#             }

# nuisances['PS_FSR']  = {
#                 'name'  : 'CMS_PS_FSR',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {   
#                     s : ['PSWeight[3] * {}'.format(nuis_factors[s]["PS_FSR"][0]),
#                          'PSWeight[1] * {}'.format(nuis_factors[s]["PS_FSR"][1]) ] for s in mc}
#             }

        
wjets_bins = []
for ir in range(1,11):
    wjets_bins.append("Wjets_HT_res_"+str(ir))
# for ir in range(1,6):
#     wjets_bins.append("Wjets_HT_boost_"+str(ir))

####### Use this for datacards
# samples_PS = ['VBS_dipoleRecoil','top','DY','VV','VVV','Vg','VgS','VBF-V','ggWW','Wjets_HT']  #+['VBS_dipoleRecoil']
# # #
# # # PS and UE
# # # #
# for sample in samples_PS:
#     nuisances['PS_ISR_'+sample]  = {
#                     'name'  : 'CMS_PS_ISR_'+sample,
#                     'kind'  : 'weight',
#                     'type'  : 'shape',
#                     'samples'  : {
#                         sample : ['PSWeight[2]', 'PSWeight[0]'],
#                     }
#                 }
#     nuisances['PS_FSR_'+sample]  = {
#                     'name'  : 'CMS_PS_FSR_'+sample,
#                     'kind'  : 'weight',
#                     'type'  : 'shape',
#                     'samples'  : {
#                         sample :  ['PSWeight[3]', 'PSWeight[1]'], 
#                     }
#                 }


##############

nuisances['PU']  = {
                'name'  : 'CMS_PU_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    s : ['(puWeightUp/puWeight) * {}'.format(nuis_factors[s]["CMS_PU_2018"][0]),
                         '(puWeightDown/puWeight) * {}'.format(nuis_factors[s]["CMS_PU_2018"][1])] for s in mc },
                'AsLnN'      : '1',
}

######## PDF uncertainty
# nuisances['pdf_weight'] = {
#     'name'  : 'pdf_weight_1718',
#     'kind'  : 'weight_envelope',
#     'type'  : 'shape',
#     'samples' :  { s: [' Alt$(LHEPdfWeight['+str(i)+'], 1.)' for i in range(0,103)] for s in mc if s not in ["VBS", "top","Wjets_HT"]},
#     'AsLnN':  '1'
# }

# nuisances['pdf_weight_VBS'] = {
#     'name'  : 'pdf_weight_1718_accept',
#     'kind'  : 'weight_envelope',
#     'type'  : 'shape',
#     'samples' :  { "VBS": [ 'Alt$(PDFweight_normalized['+str(i)+'], 1.)' for i in range(0,103) ],
#                    "VBS_dipoleRecoil": [ 'Alt$(PDFweight_normalized['+str(i)+'], 1.)' for i in range(0,103) ]}
# }


# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# # And we don't observe any dependency of UE variations on njet
# nuisances['UE']  = {
#                 'name'  : 'UE_CP5',
#                 'skipCMS' : 1,
#                 'type': 'lnN',
#                 'samples': dict((skey, '1.015') for skey in mc if skey not in ["Wjets_HT","top"]), 
# }


###############
# Normalization factors

for fl in ['ele','mu']:
    nuisances['Top_norm_boost_'+fl]  = {
                'name'  : 'CMS_Top_norm_{}_boost_2018'.format(fl),
                'samples'  : {
                    'top' : '1.00',
                    },
                'type'  : 'rateParam',
                'cuts'  : [f for f in phase_spaces_dict["boost"] if fl in f ]
                }

    nuisances['Top_norm_res_'+fl]  = {
                'name'  : 'CMS_Top_norm_{}_res_2018'.format(fl),
                'samples'  : {
                    'top' : '1.00',
                    },
                'type'  : 'rateParam',
                'cuts'  : [f for f in phase_spaces_dict["res"] if fl in f ]
                }


regrouped_Wjets = False
for wjbin in wjets_bins:
    for fl in ["ele", "mu"]:
        if "boost" in wjbin:
            nuisances["{}_norm_{}_boost_2018".format(wjbin, fl)]  = {
                'name'  : 'CMS_{}_norm_{}_boost_2018'.format(wjbin, fl),
                'samples'  : {wjbin: '1.00'},
                'type'  : 'rateParam',
                'cuts'  : [f for f in phase_spaces_dict["boost"] if fl in f ]
            }
            if regrouped_Wjets: 
                nuisances["{}_norm_{}_boost_2018".format(wjbin, fl)]['name'] = 'CMS_Wjets_norm_{}_boost_2018'.format(fl)
        else:
            nuisances["{}_norm_{}_res_2018".format(wjbin, fl)] = {
                'name'  : 'CMS_{}_norm_{}_res_2018'.format(wjbin, fl),
                'samples'  : { wjbin: '1.00' },
                'type'  : 'rateParam',
                'cuts'  : [f for f in phase_spaces_dict["res"] if fl in f]
            }
            if regrouped_Wjets: 
                nuisances["{}_norm_{}_res_2018".format(wjbin, fl)]['name'] = 'CMS_Wjets_norm_{}_res_2018'.format(fl)


# ## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }


for n in nuisances.values():
    n['skipCMS'] = 1

   

# nuisances = {k:v for k,v in nuisances.items() if 'fake' in k or k in ["pdf_weight_VBS","QCD_scale_VBS"]} #if 'PS' in k or 'QCD' in k


print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))