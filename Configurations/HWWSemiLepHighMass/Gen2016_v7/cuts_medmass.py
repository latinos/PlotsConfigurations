# cuts
cuts = {}
# this should be checked in postprocessing, just to be sure
supercut = '\
    LeptonGen_pt[0]>25 \
&&    (Alt$(LeptonGen_pt[1],0)<=10 \
&&  abs(LeptonGen_eta[0])<2.5) \
'
#&& GenEvtFlag>0 \
'''
cuts['ggH'] = {
    'expr': 'mjjGen_max < 150.',
    'categories': {
      'boosted': 'GenEvtFlag==1',
      'resolved': 'GenEvtFlag==2'  
    }
}

cuts['qqH'] = {
    'expr': 'mjjGen_max > 150.',
    'categories': {
      'boosted': 'GenEvtFlag==1',
      'resolved': 'GenEvtFlag==2'
    }

}


cuts['all'] = {
    'expr': '1.',
    'categories': {
      'boosted': 'GenEvtFlag==1',
      'resolved': 'GenEvtFlag==2'
    }

}
'''

cuts['supercut'] = {'expr': '1.'}
