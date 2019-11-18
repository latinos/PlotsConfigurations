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
            
if os.path.exists('HTXS_stage1_categories.py'):
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

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
        njet='1==1'
        if '_2j' in key:
            if '_0J' in cat:
                njet='Sum$(CleanJet_pt>30)==2'
            elif '_GE1J' in cat:
                njet='Sum$(CleanJet_pt>30)>=3'
        elif '_1j' in key:
            if '_0J' in cat:
                njet='Sum$(CleanJet_pt>30)==1'
            elif '_GE1J' in cat:
                njet='Sum$(CleanJet_pt>30)>=2'
        cuts['%s_%s' %(key,cat)] = '%s && %s && %s' %(value,val,njet)
