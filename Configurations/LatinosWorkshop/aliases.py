import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP='mvaFall17V2Iso_WP90'
muWP='cut_Tight_HWWW_tthmva_80'

# the per event weight (baseW is the event weight to 1/fb)
aliases['XSWeight'] = {
    'expr': 'baseW*genWeight',
    'samples': mc
}

# flag that signals if both leptons have passed the tight WP
aliases['LepCut2l__ele_'+eleWP+'__mu_'+muWP] = {
     'expr': '((Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5) && \
             (Lepton_isTightElectron_'+eleWP+'[1]>0.5 || Lepton_isTightMuon_'+muWP+'[1]>0.5))',
     'samples': mc_emb + ['DATA']  
}


# the event SF arising from the Id/Iso efficiency
aliases['LepSF2l__ele_'+eleWP+'__mu_'+muWP] = {
      'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]* \
               Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[1]*\
               Lepton_tightMuon_'+muWP+'_IdIsoSF'+'[0]*\
               Lepton_tightMuon_'+muWP+'_IdIsoSF'+'[1] ',
      'samples': mc_emb + ['DATA']
}

# the Up variation of the above for electron ID/efficiency SF up
aliases['LepSF2l__ele_'+eleWP+'__Up'] = { 
       'expr': '((abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Up[0])/(Lepton_tightElectron_'+eleWP+'_TotSF'+'[0]) + (abs(Lepton_pdgId[0]) == 13)) * \
                ((abs(Lepton_pdgId[1]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Up[1])/(Lepton_tightElectron_'+eleWP+'_TotSF'+'[1]) + (abs(Lepton_pdgId[1]) == 13))',
      'samples': mc_emb + ['DATA']
}

# the down variation of the above for electron ID/efficiency SF down
aliases['LepSF2l__ele_'+eleWP+'__Do'] = { 
       'expr': '((abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Down[0])/(Lepton_tightElectron_'+eleWP+'_TotSF'+'[0]) + (abs(Lepton_pdgId[0]) == 13)) * \
                ((abs(Lepton_pdgId[1]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Down[1])/(Lepton_tightElectron_'+eleWP+'_TotSF'+'[1]) + (abs(Lepton_pdgId[1]) == 13))',
      'samples': mc_emb + ['DATA']
}

# the Up variation of the above for muon ID/efficiency SF up
aliases['LepSF2l__mu_'+muWP+'__Up'] = { 
       'expr': '((abs(Lepton_pdgId[0]) == 11)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Up[0])/(Lepton_tightMuon_'+muWP+'_TotSF'+'[0]) + (abs(Lepton_pdgId[0]) == 13)) * \
                ((abs(Lepton_pdgId[1]) == 11)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Up[1])/(Lepton_tightMuon_'+muWP+'_TotSF'+'[1]) + (abs(Lepton_pdgId[1]) == 13))',
      'samples': mc_emb + ['DATA']
}

# the Up variation of the above for muon ID/efficiency SF down
aliases['LepSF2l__mu_'+muWP+'__Do'] = { 
       'expr': '((abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Down[0])/(Lepton_tightMuon_'+muWP+'_TotSF'+'[0]) + (abs(Lepton_pdgId[0]) == 11)) * \
                ((abs(Lepton_pdgId[1]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Down[1])/(Lepton_tightMuon_'+muWP+'_TotSF'+'[1]) + (abs(Lepton_pdgId[1]) == 11))',
      'samples': mc_emb + ['DATA']
}

# just renaming
aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb + ['DATA']
}

# The reco SF for leptons
aliases['SFweight2lAlt'] = {
    'expr'   : 'Lepton_RecoSF[0]*Lepton_RecoSF[1]*EMTFbug_veto',
    'samples': mc
}

# the full  event weight to apply on MC: includes the request to pass the mu/e WP and their SF
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2lAlt', 'LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP]),
    'samples': mc
}


# variations (just renaming)
#In nuisances, the following are used to multiply the global event weight and achieve up/down variations for the SF
aliases['SFweightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Do',
    'samples': mc_emb
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Do',
    'samples': mc_emb
}


# a variable computed via a macro.
aliases['MLL'] = {
        'linesToAdd': ['.L %s/LatinosWorkshop/MLL.cc+' % configurations],
        'class': 'MLL',
        'samples': mc 
    }
