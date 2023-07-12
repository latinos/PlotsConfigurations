# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
   

variables['pt_subleadinglepton'] = { 'name': 'Lepton_pt[1]',
                                     'range' : (10,0.,200),
                                     'xaxis' : 'lept2_p_{T} [GeV]',
                                     'fold' : 3
}


