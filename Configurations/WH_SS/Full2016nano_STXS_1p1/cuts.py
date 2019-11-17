# cuts

whcuts={}
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

categorization_wh = {
    'FWDH' : '1==1',
    'PTV_0_75' : 'WlepPt_whssv1>0 && WlepPt_whssv1 <= 75',
    'PTV_75_150' : 'WlepPt_whssv1 > 75 && WlepPt_whssv1 <= 150',
    'PTV_150_250_0J' : 'WlepPt_whssv1 > 150 && WlepPt_whssv1 <= 250',
    'PTV_150_250_GE1J' : 'WlepPt_whssv1 > 150 && WlepPt_whssv1 <= 250',
    'PTV_GT250' : 'WlepPt_whssv1 > 250',
    }

## 2jets
whcuts['hww2l2v_13TeV_of2j_WH_SS_uu_2j'] = 'uu[0] && twoJetOrMore && mjj < 100'
whcuts['hww2l2v_13TeV_of2j_WH_SS_ee_2j'] = 'ee[0] && twoJetOrMore && abs(mll-91.2)>15 && mjj < 100'
whcuts['hww2l2v_13TeV_of2j_WH_SS_eu_2j'] = 'eu[0] && twoJetOrMore && mjj < 100'

## 1jet
whcuts['hww2l2v_13TeV_of2j_WH_SS_uu_1j'] = 'uu[0] && oneJet'
whcuts['hww2l2v_13TeV_of2j_WH_SS_ee_1j'] = 'ee[0] && oneJet && abs(mll-91.2)>15'
whcuts['hww2l2v_13TeV_of2j_WH_SS_eu_1j'] = 'eu[0] && oneJet'

for key,value in whcuts.iteritems():
    for cat,val in categorization_wh.iteritems():
        cuts['%s_%s' %(key,cat)] = '%s && %s' %(value,val)
