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
    'FWDH' : '1==1',
    'PTV_0_75' : 'WlepPt_whssv1>0 && WlepPt_whssv1 <= 75',
    'PTV_75_150' : 'WlepPt_whssv1 > 75 && WlepPt_whssv1 <= 150',
    'PTV_150_250_0J' : 'WlepPt_whssv1 > 150 && WlepPt_whssv1 <= 250 && twoJet',
    'PTV_150_250_GE1J' : 'WlepPt_whssv1 > 150 && WlepPt_whssv1 <= 250 && threeJetOrMore',
    'PTV_GT250' : 'WlepPt_whssv1 > 250',
    }

## 2jets
Anacat['hww2l2v_13TeV_of2j_WH_SS_uu_2j'] = 'uu[0] && twoJetOrMore && mjj < 100'
Anacat['hww2l2v_13TeV_of2j_WH_SS_ee_2j'] = 'ee[0] && twoJetOrMore && abs(mll-91.2)>15 && mjj < 100'
Anacat['hww2l2v_13TeV_of2j_WH_SS_eu_2j'] = 'eu[0] && twoJetOrMore && mjj < 100'

## 1jet
Anacat['hww2l2v_13TeV_of2j_WH_SS_uu_1j'] = 'uu[0] && oneJetOrMore'
Anacat['hww2l2v_13TeV_of2j_WH_SS_ee_1j'] = 'ee[0] && oneJetOrMore && abs(mll-91.2)>15'
Anacat['hww2l2v_13TeV_of2j_WH_SS_eu_1j'] = 'eu[0] && oneJetOrMore'

for key,value in Anacat.iteritems():
    for cat,val in HTSXReco.iteritems():
        cuts['%s_%s' %(key,cat)] = '%s && %s' %(value,val)

