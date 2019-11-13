Nlep='1'
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'



mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2016',
               'samples': dict((skey, '1.025') for skey in mc ),
               'type'  : 'lnN',
}
##### Trigger Efficiency                                                                                                                                                                                    

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2016',
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
                'name'  : 'PU_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, ['(puWeightUp/puWeight)','(puWeightDown/puWeight)']) for skey in mc),
                'AsLnN'      : '1',
}

