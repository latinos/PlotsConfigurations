# Combinations to use

#comb = {}

#

optim={}
#optim['dymva0p80']  = ' && dymvaggh > 0.80 '
#optim['dymva0p85']  = ' && dymvaggh > 0.85 '
#optim['dymva0p90']  = ' && dymvaggh > 0.90 '
#optim['dymva0p91']  = ' && dymvaggh > 0.91 '
#optim['dymva0p92']  = ' && dymvaggh > 0.92 '
#optim['dymva0p93']  = ' && dymvaggh > 0.93 '
#optim['dymva0p94']  = ' && dymvaggh > 0.94 '
#optim['dymva0p945'] = ' && dymvaggh > 0.945 '
#optim['dymva0p95']  = ' && dymvaggh > 0.95 '
#optim['dymva0p955'] = ' && dymvaggh > 0.955 '
#optim['dymva0p96']  = ' && dymvaggh > 0.96 '
#optim['dymva0p965'] = ' && dymvaggh > 0.965 '
#optim['dymva0p97']  = ' && dymvaggh > 0.97 '
#optim['dymva0p975'] = ' && dymvaggh > 0.975 '
#optim['dymva0p98']  = ' && dymvaggh > 0.98 '
optim['dymva0p99']  = ' && dymvaggh > 0.99 '


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
  
