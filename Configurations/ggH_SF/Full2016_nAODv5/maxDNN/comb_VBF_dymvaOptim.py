# Combinations to use

#comb = {}

optim={}

optim={}
optim['dymva0p885']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.885 '
##optim['dymva0p89']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.89 '
optim['dymva0p895']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.895 '
##optim['dymva0p90']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.90 '
optim['dymva0p905']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.905 '
optim['dymva0p91']   = ' && hww_DYmvaDNN_VBF(Entry$) > 0.91 '
optim['dymva0p915']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.915 '
optim['dymva0p92']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.92 '
##optim['dymva0p925']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.925 '
optim['dymva0p93']   = ' && hww_DYmvaDNN_VBF(Entry$) > 0.93 '
optim['dymva0p935']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.935 '
optim['dymva0p94']  = ' && hww_DYmvaDNN_VBF(Entry$) > 0.94 '
optim['dymva0p945'] = ' && hww_DYmvaDNN_VBF(Entry$) > 0.945 '

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
