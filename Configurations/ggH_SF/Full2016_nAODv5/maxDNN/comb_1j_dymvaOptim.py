# Combinations to use

#comb = {}

optim={}
optim['dymva0p805']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.805 '  
#optim['dymva0p81']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.81 '  
#optim['dymva0p82']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.82 '  
optim['dymva0p825']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.825 '  
#optim['dymva0p83']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.83 '  
#optim['dymva0p84']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.84 '  
optim['dymva0p85']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.85 '  
optim['dymva0p875']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.875 '  
#optim['dymva0p88']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.88 '  
#optim['dymva0p885']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.885 '  
#optim['dymva0p89']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.89 '  
#optim['dymva0p895']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.895 '  
optim['dymva0p90']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.90 '  
#optim['dymva0p905']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.905 '  
#optim['dymva0p91']   = ' && hww_DYmvaDNN_1j(Entry$) > 0.91 '  
#optim['dymva0p915']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.915 '  
#optim['dymva0p92']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.92 '  
optim['dymva0p925']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.925 '  
#optim['dymva0p93']   = ' && hww_DYmvaDNN_1j(Entry$) > 0.93 '  
#optim['dymva0p935']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.935 '  
#optim['dymva0p94']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.94 '  
#optim['dymva0p945'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.945 '  
optim['dymva0p95']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.95 '  
#optim['dymva0p955'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.955 '  
#optim['dymva0p96']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.96 '  
#optim['dymva0p965'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.965 '  
#optim['dymva0p97']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.97 '  
optim['dymva0p975'] = ' && hww_DYmvaDNN_1j(Entry$) > 0.975 '  
#optim['dymva0p98']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.98 '  
#optim['dymva0p985']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.985 '  
#optim['dymva0p99']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.99 '  
optim['dymva0p995']  = ' && hww_DYmvaDNN_1j(Entry$) > 0.995 '

for iCut in optim:

  combs['hww2l2v_13TeV_1jee_'+iCut] = {
                    'hww2l2v_13TeV_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jee_'+iCut : 'events' ,
                  }

  combs['hww2l2v_13TeV_1jmm_'+iCut] = {
                    'hww2l2v_13TeV_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jmm_'+iCut : 'events' ,
                  }


  combs['hww2l2v_13TeV_1jsf_'+iCut] = {
                    'hww2l2v_13TeV_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jee_'+iCut : 'events' ,
                    'hww2l2v_13TeV_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_1jmm_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_1jmm_'+iCut : 'events' ,
                  }
