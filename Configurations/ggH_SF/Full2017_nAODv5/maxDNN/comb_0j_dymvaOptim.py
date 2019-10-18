# Combinations to use

#comb = {}

optim={}

optim={}
optim['dymva0p905']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.905 '
optim['dymva0p91']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.91 '
optim['dymva0p915']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.915 '
optim['dymva0p92']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.92 '
##optim['dymva0p925']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.925 ' 
optim['dymva0p93']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.93 '
optim['dymva0p935']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.935 '
optim['dymva0p94']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.94 '
optim['dymva0p945'] = ' && hww_DYmvaDNN_0j(Entry$) > 0.945 '

for iCut in optim:

  combs['hww2l2v_13TeV_0jee_'+iCut] = {
                    'hww2l2v_13TeV_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jee_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_0jmm_'+iCut] = {
                    'hww2l2v_13TeV_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jmm_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_0jsf_'+iCut] = {
                    'hww2l2v_13TeV_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_0jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_0jmm_'+iCut : 'events' ,
                  }
