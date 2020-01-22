# cuts

Anacat={}
cuts={}

#supercut = 'mll>12  \
#            && Lepton_pt[0]>25 && Lepton_pt[1]>20 \
#            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
#            && PuppiMET_pt > 30 \
#            && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
#            '

supercut = 'mll>12  \
            && Lepton_pt[0]>25 && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && bVeto \
            && PuppiMET_pt > 30 \
            && mlljj20_whss > 50. \
            && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 \
            '

#Reco level            
HTSXReco = {
    'PTV_LE150' : 'WlepPt_v3>0 && WlepPt_v3 <= 150',
    'PTV_GT150' : 'WlepPt_v3>150',
}

## 2jets
Anacat['hww2l2v_13TeV_of2j_WH_SS_uu_2j'] = 'uu[0] && twoJetOrMore && mjj < 100'
Anacat['hww2l2v_13TeV_of2j_WH_SS_eu_2j'] = 'eu[0] && twoJetOrMore && mjj < 100'

## 1jet
Anacat['hww2l2v_13TeV_of2j_WH_SS_uu_1j'] = 'uu[0] && oneJet'
Anacat['hww2l2v_13TeV_of2j_WH_SS_eu_1j'] = 'eu[0] && oneJet'

Njet='1==1'
for key,value in Anacat.iteritems():
    for cat,val in HTSXReco.iteritems():
        cuts['%s_%s' %(key,cat)] = '%s && %s' %(value,val)
print cuts
