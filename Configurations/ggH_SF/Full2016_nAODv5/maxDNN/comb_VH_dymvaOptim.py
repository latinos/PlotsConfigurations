# Combinations to use

#comb = {}

optim={}

optim={}
optim['dymva0p80']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.80 '
optim['dymva0p805']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.805 '
optim['dymva0p81']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.81 '
optim['dymva0p815']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.815 '
optim['dymva0p82']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.82 '
optim['dymva0p825']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.825 '
optim['dymva0p83']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.83 '
optim['dymva0p835']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.835 '
optim['dymva0p84']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.84 '
optim['dymva0p845']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.845 '
optim['dymva0p85']  = ' && hww_DYmvaDNN_VH(Entry$) > 0.85 '

for iCut in optim:

#  combs['hww2l2v_13TeV_2jee_vh_'+iCut] = {
#                    'hww2l2v_13TeV_2jee_vh_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_WW_2jee_vh_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_top_2jee_vh_'+iCut : 'events' ,
#                  }
#
#  combs['hww2l2v_13TeV_2jmm_vh_'+iCut] = {
#                    'hww2l2v_13TeV_2jmm_vh_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_WW_2jmm_vh_'+iCut : 'events' ,
#                    'hww2l2v_13TeV_top_2jmm_vh_'+iCut : 'events' ,
#                  }
#

  combs['hww2l2v_13TeV_2jsf_vh_'+iCut] = {
                    'hww2l2v_13TeV_2jee_vh_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jee_vh_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jee_vh_'+iCut : 'events' ,
                    'hww2l2v_13TeV_2jmm_vh_'+iCut : 'events' ,
                    'hww2l2v_13TeV_WW_2jmm_vh_'+iCut : 'events' ,
                    'hww2l2v_13TeV_top_2jmm_vh_'+iCut : 'events' ,
                  }
