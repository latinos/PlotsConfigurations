# Combinations to use

#comb = {}

optim={}

optim={}
optim['dymva0p875']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.875 '
optim['dymva0p88']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.88 '
optim['dymva0p885']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.885 '
optim['dymva0p89']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.89 '
optim['dymva0p895']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.895 '
optim['dymva0p90']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.90 '
optim['dymva0p905']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.905 '
optim['dymva0p91']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.91 '
optim['dymva0p915']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.915 '
optim['dymva0p92']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.92 '
optim['dymva0p925']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.925 '
optim['dymva0p93']  = ' && hww_DYmvaDNN_0j(Entry$) > 0.93 '

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
