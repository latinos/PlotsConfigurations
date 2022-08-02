from pprint import pprint
# # # name of samples here must match keys in samples.py 

mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "VBF-V", "Vg", "VgS", "VBS"]

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
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                'folderUp' : directory_mc+'_ElepTup',
                'folderDown' : directory_mc+'_ElepTdo',
}
# nuisances['electronpt']  = {
#                 'name'  : 'CMS_scale_e_2018',
#                 'type'  : 'lnN',
#                 'samples'  :   dict((skey, '1.03') for skey in mc if skey not in ['top', 'Fake','Wjets_HT']),
#                 'cuts': phase_spaces_tot_ele
# }


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
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                'folderUp' : directory_mc+'_MupTup',
                'folderDown' : directory_mc+'_MupTdo',
}


# nuisances['muonpt']  = {
#                 'name'  : 'CMS_scale_m_2017',
#                 'type'  : 'lnN',
#                 'samples'  : dict((skey, '1.03') for skey in mc if skey not in ['top', 'Fake','Wjets_HT']),
#                 'cuts':   phase_spaces_tot_mu
# }

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
jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2',
            'JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal',
            'JESRelativeSample_2018']

for js in jes_systs:
    nuisances[js]  = {
                    'name': 'CMS_j_scale_'+js,
                    'kind': 'suffix',
                    'type': 'shape',
                    'mapUp': js+'up',
                    'mapDown': js+'do',
                    'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                    'folderUp' : directory_mc+'_JESup',
                    'folderDown' : directory_mc+'_JESdo',
                    'AsLnN'      : '1',
                    
    }

### Only total variation for fatjetJES
    nuisances['fatjet' +js]  = {
                    'name': 'CMS_fj_scale_'+js,
                        'kind': 'suffix',
                        'type': 'shape',
                        'mapUp': 'fatjet' + js+'up',
                        'mapDown': 'fatjet' + js+'do',
                        'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category 
                        'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                        'folderUp' : directory_mc+'_fatjetJESup',
                        'folderDown' : directory_mc+'_fatjetJESdo',
                        'AsLnN'      : '1',
    }
    
##### Jet energy resolution
nuisances['JER'] = {
                'name': 'CMS_res_j_2018',
                'kind': 'suffix',
                'type': 'shape',
                'mapUp': 'JERup',
                'mapDown': 'JERdo',
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                'folderUp' : directory_mc+'_JERup',
                'folderDown' : directory_mc+'_JERdo',
                'AsLnN'      : '1',
}

nuisances['fatjetJER'] = {
                'name': 'CMS_fatjet_res_2018',
                'kind': 'suffix',
                'type': 'shape',
                'mapUp': 'fatjetJERup',
                'mapDown': 'fatjetJERdo',
                'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS"]),
                'folderUp' : directory_mc+'_fatjetJERup',
                'folderDown' : directory_mc+'_fatjetJERdo',
                'AsLnN'      : '1',
}

# # ##### MET energy scale
nuisances['MET']  = {
                'name'  : 'CMS_scale_met_2018',
                'kind'  : 'suffix',
                'type'  : 'shape',
                'mapUp':   'METup',
                'mapDown': 'METdo', 
                'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ['Vg', 'VgS']),
                'folderUp' : directory_mc+'_METup',
                'folderDown' : directory_mc+'_METdo',
                'AsLnN'      : '1',
}


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
nuisances['fatjetJMR']  = {
    'name': 'CMS_fatjet_jmr_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'fatjetJMRup',
    'mapDown': 'fatjetJMRdo',
    'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
    'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS"]),
    'folderUp' : directory_mc+'_fatjetJMRup',
    'folderDown' : directory_mc+'_fatjetJMRdo',
    'AsLnN'      : '1',

}

nuisances['fatjetJMS']  = {
    'name': 'CMS_fatjet_jms_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'fatjetJMSup',
    'mapDown': 'fatjetJMSdo',
    'cuts': phase_spaces_boost, #because we are vetoing fatjets anyway in resolved category
    'samples': dict((skey, ['1.','1.']) for skey in mc if skey not in ["Vg","VgS", "VV"]),
    'folderUp' : directory_mc+'_fatjetJMSup',
    'folderDown' : directory_mc+'_fatjetJMSdo',
    'AsLnN'      : '1',
}


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

for jtype in ["quark", "gluon"]:
      for  jeta in ["higheta", "loweta"]:
        nuisances['QGLmorphing_{}_{}'.format(jtype, jeta)]  = {
            'name': 'QGLmorph_{}_{}_1718'.format(jtype, jeta),
            'kind': 'suffix',
            'type': 'shape',
            'samples': dict((skey, ['1.','1.']) for skey in mc),
        }

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


## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
qcdscale_variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

for sample in mc :
    if sample == 'VBS':
        nuisances['QCD_scale_VBS'] = {
            'name'  : 'QCDscale_VBS_accept',
            'kind'  : 'weight',
            'type'  : 'shape',
            # Normalization effect removed from 1l inclusive phase space
            'samples'  :  { "VBS": ["0.982225136519* LHEScaleWeight[0]", "1.0224891031 * LHEScaleWeight[8]"] }
        }
        # nuisances['QCD_scale_VBS_accept'] = {
        #     'name'  : 'QCDscale_VBS_accept',
        #     'type'  : 'lnN',
        #     'samples'  :  { "VBS": "1.0180965/0.97800553" }
        # }
        # nuisances['QCD_scale_VBS_env'] = {
        #     'name'  : 'QCDscale_VBS_env',
        #     'type'  : 'lnN',
        #     'samples'  :  { "VBS": qcdscale_variations }
        # }
    else:
        nuisances['QCD_scale_'+sample] = {
            'name'  : 'QCDscale_'+sample,
            'kind'  : 'weight',
            'type'  : 'shape',
            'samples'  :  { sample: ["LHEScaleWeight[0]", "LHEScaleWeight[8]"] }
        }
        # nuisances['QCD_scale_'+sample+"_env"] = {
        #     'name'  : 'QCDscale_'+sample + "_env",
        #     'kind'  : 'weight_envelope',
        #     'type'  : 'shape',
        #     'samples'  :  { sample: qcdscale_variations }
        # }
        
wjets_bins = []
for ir in range(1,7):
    wjets_bins.append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins.append("Wjets_HT_boost_"+str(ir))


# #
# # PS and UE
# # #
for sample in ['top','DY','VV','VVV','Vg','VgS','VBF-V'] + wjets_bins:
    nuisances['PS_ISR_'+sample]  = {
                    'name'  : 'CMS_PS_ISR_'+sample,
                    'kind'  : 'weight',
                    'type'  : 'shape',
                    'samples'  : {
                        sample :      ['PSWeight[2]', 'PSWeight[0]'],
                    }
                }
    nuisances['PS_FSR_'+sample]  = {
                    'name'  : 'CMS_PS_FSR_'+sample,
                    'kind'  : 'weight',
                    'type'  : 'shape',
                    'samples'  : {
                        sample :      ['PSWeight[2]', 'PSWeight[0]'],
                    }
                }

for wbin in wjets_bins:
    nuisances['PS_ISR_'+wbin]  = {
                'name'  : 'CMS_PS_ISR_'+wbin,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    wbin : ['PSWeight[2]', 'PSWeight[0]'],
                }
            }
    nuisances['PS_FSR_'+wbin]  = {
                'name'  : 'CMS_PS_FSR_'+wbin,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    wbin : ['PSWeight[3]', 'PSWeight[1]'],
                }
            }

# Keep VBS uncorrelated
nuisances['PS_ISR_VBS']  = {
                'name'  : 'CMS_PS_ISR_VBS',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    "VBS"  :     ['1.0305848645*PSWeight[2]', '0.961661000508*PSWeight[0]'],
                }
            }
# Keep VBS uncorrelated
nuisances['PS_FSR_VBS']  = {
                'name'  : 'CMS_PS_FSR_VBS',
                'kind'  : 'weight',
                'type'  : 'shape',
                 'samples'  : {
                    "VBS"  :     ['0.986080624716*PSWeight[3]', '1.02220160621*PSWeight[1]'],
                }
            }

#########################################

nuisances['PU']  = {
                'name'  : 'CMS_PU_2018',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    "Wjets_HT" : ['0.983251695148 * (puWeightUp/puWeight)','1.0168913615 * (puWeightDown/puWeight)'],
                    "top" :      ['0.994086559794 * (puWeightUp/puWeight)','1.00594961774 * (puWeightDown/puWeight)'],
                    "DY" :       ['0.973747991721 * (puWeightUp/puWeight)','1.02692487122 * (puWeightDown/puWeight)'],
                    "VV" :       ['0.993645838554 * (puWeightUp/puWeight)','1.00655724449 * (puWeightDown/puWeight)'],
                    "VVV" :      ['0.989856734822 * (puWeightUp/puWeight)','1.01001361488 * (puWeightDown/puWeight)'],
                    "Vg" :       ['0.980622272259 * (puWeightUp/puWeight)','1.01976694136 * (puWeightDown/puWeight)'],
                    "VgS" :      ['0.972831108836 * (puWeightUp/puWeight)','1.02801095581 * (puWeightDown/puWeight)'],
                    "VBF-V" :    ['0.988438840863 * (puWeightUp/puWeight)','1.01146288807 * (puWeightDown/puWeight)'],
                    "VBS" :      ['0.994664864312 * (puWeightUp/puWeight)','1.0054663756 * (puWeightDown/puWeight)'],
                },
                'AsLnN'      : '1',
}


# # nuisances['UE']  = {
# #                 'name'  : 'UE', 
# #                 'skipCMS' : 1,
# #                 'kind'  : 'tree',
# #                 'type'  : 'shape',
# #                 'samples'  : {
# # #                  'WW'      : ['1.12720771849', '1.13963144574'],
# #                   'ggH_hww' : ['1.00211385568', '0.994966378288'], 
# #                   'qqH_hww' : ['1.00367895901', '0.994831373195']
# #                 },
# #                 'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2018v2/MCl1loose2018v2__MCCorr2018__btagPerEvent__l2loose__l2tightOR2018__UEup',
# #                 'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2018v2/MCl1loose2018v2__MCCorr2018__btagPerEvent__l2loose__l2tightOR2018__UEdo',
# #                 'AsLnN'      : '1',
# # }

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

   
# print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))

# nuisances = {k:v for k,v in nuisances.items() if 'PS' in k} #if 'PS' in k or 'QCD' in k