# Combinations to use

#comb = {}

optim={}

optim={}
optim['dymva0p93']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.93 '
optim['dymva0p935']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.935 '
optim['dymva0p94']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.94 '
optim['dymva0p945'] = ' && hww_DYmvaDNN_VBF(Entry$) > 0.945 '
##optim['dymva0p95']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.95 '
optim['dymva0p955'] = ' && hww_DYmvaDNN_VBF(Entry$) > 0.955 '
optim['dymva0p96']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.96 '
optim['dymva0p965'] = ' && hww_DYmvaDNN_VBF(Entry$) > 0.965 '
optim['dymva0p97']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.97 '

for iCut in optim:

  combs['hww2l2v_13TeV_2jee_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_vbf_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_2jmm_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_vbf_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_2jsf_vbf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_vbf_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_vbf_'+iCut : 'events' ,
                  }
