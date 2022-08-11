# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
   
variables['events']   = { 'name': '1',      
                          'range' : (1,0,2),  
                          'xaxis' : 'events', 
                          'fold' : 3,
                          'cuts' : ['zh3l_WZ_CR_1j','zh3l_WZ_CR_2j','zh3l_WZ_CR_1j_met','zh3l_WZ_CR_2j_met']
                      }

variables['mTlmetjj'] = { 'name' : 'ZH3l_mTlmetjj_test[0]', #FIXME
                          'range' : (16,50,450),
                          'xaxis' : 'mTlmetjj',
                          'fold' : 3,
                          'cuts' : ['zh3l_SR_2j','zh3l_SR_2j_met']
                      }

variables['mTlmetj']  = { 'name' : 'ZH3l_mTlmetj_test[0]', #FIXME
                          'range' : (10,0,250),
                          'xaxis' : 'mTlmetj',
                          'fold' : 2,
                          'cuts' : ['zh3l_SR_1j','zh3l_SR_1j_met']
                      }

variables['mtw_fit']  = { 'name' : 'ZH3l_mTlmet_test[0]', #FIXME
                          'range' : (8,0,160),
                          'xaxis' : 'mTlmet',
                          'fold' : 2,
                          'cuts' : ['zh3l_SR_1j','zh3l_SR_2j','zh3l_SR_1j_met','zh3l_SR_2j_met']
                      }

