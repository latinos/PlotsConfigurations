# Combinations to use

#comb = {}

optim={}
optim['dymva0p935']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.935 '
optim['dymva0p94']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.94 '
optim['dymva0p945'] = ' && hww_DYmvaDNN_2j(Entry$) > 0.945 '
optim['dymva0p95']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.95 '
optim['dymva0p955'] = ' && hww_DYmvaDNN_2j(Entry$) > 0.955 '
optim['dymva0p96']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.96 '
optim['dymva0p965'] = ' && hww_DYmvaDNN_2j(Entry$) > 0.965 '
optim['dymva0p97']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.97 '
optim['dymva0p975'] = ' && hww_DYmvaDNN_2j(Entry$) > 0.975 '
optim['dymva0p98']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.98 '
optim['dymva0p985']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.985 '
optim['dymva0p99']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.99 '
optim['dymva0p995']  = ' && hww_DYmvaDNN_2j(Entry$) > 0.995 '

for iCut in optim:

#  combs['hww2l2v_13TeV_2jee_'+iCut] = {
#                    'hww2l2v_13TeV_2jee_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_WW_2jee_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_top_2jee_'+iCut : 'events' ,
#                  }
#
#  combs['hww2l2v_13TeV_2jmm_'+iCut] = {
#                    'hww2l2v_13TeV_2jmm_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_WW_2jmm_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_top_2jmm_'+iCut : 'events' ,
#                  }
#

  combs['hww2l2v_13TeV_2jsf_'+iCut] = {
                    'hww2l2v_13TeV_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_'+iCut : 'events' ,
                  }
