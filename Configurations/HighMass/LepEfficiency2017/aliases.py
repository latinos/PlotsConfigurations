import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # LepEfficiency
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]


##=== Define differences between years ===###
#year = '17'

if   year == '16':
    minElePt = '35'
    # FIXME are these correct?
    eleIso   = 'Electron_pfRelIso03_all[0] < 0.06'
    muIso    = 'Muon_pfRelIso04_all[0] < 0.15'
    eleWP    = 'mvaFall17V1Iso_WP90'
    muWP     = 'cut_Tight_HWWW'
    eleHLT   = 'HLT_Ele27_WPTight_Gsf'
    muHLT    = 'HLT_IsoMu24'

elif year == '17' or year == '18':
    minElePt = '40'
    eleIso   = 'Electron_pfRelIso03_all[0] < 0.06'
    muIso    = 'Muon_pfRelIso04_all[0] < 0.15'
    eleWP    = 'mvaFall17V1Iso_WP90'
    muWP     = 'cut_Tight_HWWW'
    eleHLT   = 'HLT_Ele35_WPTight_Gsf'
    muHLT    = 'HLT_IsoMu27'

else: raise ValueError("year is none of '16', '17' or '18'")

# same across all years:
minMuPt = '30'


##=== Define aliases ===###

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 \
            || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'

aliases['LepWPCut'] = {
    'expr': LepWPCut
}

aliases['LepWPCut1'] = {
    'expr':'(Lepton_isTightElectron_'+eleWP+'[1] > 0.5 \
            || Lepton_isTightMuon_'+muWP+'[1] > 0.5)'
}

aliases['tag'] = {
    'expr': '( (abs(Lepton_pdgId[0]) == 11 \
                && Lepton_pt[0] > '+minElePt+' \
                && '+eleHLT+'[0] > 0.5 \
                && '+eleIso+') \
            \
            || (abs(Lepton_pdgId[0]) == 13 \
                && Lepton_pt[0] > '+minMuPt+' \
                && '+muHLT+'[0] > 0.5\
                && '+muIso+') \
             )'
}

aliases['probe'] = {
    'expr': 'LepWPCut1'
}
