Nlep=1
eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'






mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2017',
               'samples': dict((skey, '1.023') for skey in mc),
               'type'  : 'lnN',
}
'''
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']) for skey in mc),
}
nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']) for skey in mc),
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']) for skey in mc),
}
'''

trig_syst = ['((TriggerEffWeight_'+str(Nlep)+'l_u)/(TriggerEffWeight_'+str(Nlep)+'l))*(TriggerEffWeight_'+str(Nlep)+'l>0.02) + (TriggerEffWeight_'+str(Nlep)+'l<=0.02)', '(Trigge\
rEffWeight_'+str(Nlep)+'l_d)/(TriggerEffWeight_'+str(Nlep)+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
}


nuisances['RecoEff_e'] = {
    'name' : 'RecoEff_e',
    'kind' : 'weight',
    'type' : 'shape',
    'samples' :  dict((skey, ['(Lepton_RecoSF_Up[0])/(Lepton_RecoSF[0])','(Lepton_RecoSF_Down[0])/(Lepton_RecoSF[0])']) for skey in mc),    
}




ele_Eff_Up='(Lepton_isTightElectron_'+eleWP+'[0]>0.5)*(Lepton_tightElectron_'+eleWP+'_IdIsoSF_Up[0]/Lepton_tightElectron_'+eleWP+'_IdIsoSF[0])'
ele_Eff_Down='(Lepton_isTightElectron_'+eleWP+'[0]>0.5)*(Lepton_tightElectron_'+eleWP+'_IdIsoSF_Down[0]/Lepton_tightElectron_'+eleWP+'_IdIsoSF[0])'

mu_Eff_Up='(Lepton_isTightMuon_'+muWP+'[0]>0.5)*(Lepton_tightMuon_'+muWP+'_IdIsoSF_Up[0]/Lepton_tightMuon_'+muWP+'_IdIsoSF[0])'
mu_Eff_Down='(Lepton_isTightMuon_'+muWP+'[0]>0.5)*(Lepton_tightMuon_'+muWP+'_IdIsoSF_Down[0]/Lepton_tightMuon_'+muWP+'_IdIsoSF[0])'


nuisances['Lepton_Eff'] = {
    'name' : 'Lepton_Eff',
    'kind' : 'weight',
    'type' : 'shape',
    'samples' : dict((skey, [ele_Eff_Up+'+'+mu_Eff_Up, ele_Eff_Down+'+'+mu_Eff_Down]) for skey in mc),    

}




nuisances['PU']  = {
                'name'  : 'PU_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(puWeightUp/puWeight)','(puWeightDown/puWeight)']) for skey in mc),
                'AsLnN'      : '1',
}

