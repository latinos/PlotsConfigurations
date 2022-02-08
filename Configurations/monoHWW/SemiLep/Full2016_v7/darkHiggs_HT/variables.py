variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

# 200 evts in last 5 bins
variables['BDT_2018bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2016bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}


## Merge last 5 bins for CR
variables['BDT_2018CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
}

variables['BDT_2017CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
}

variables['BDT_2016CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
}

### Test variables

variables['njet']  = {
    'name': 'Sum$(CleanJet_pt > 30)',     
    'range' : (10,0,10),   
    'xaxis' : 'nCleanJet (p_{T} > 30)',
    'fold'  : 3
}

variables['dr_j_j']  = {
    'name': 'MHlnjj_dr_jVj',
    'range' : (25,0,5),   
    'xaxis' : '#Delta R(j,j)',
    'fold'  : 3
}

variables['m_jj']  = {
    'name': 'MHlnjj_m_jj',     
    'range' : (60,0,300),   
    'xaxis' : 'm^{j,j}',
    'fold'  : 3                         
}

njet_bin = [2, 3, 4, 10]
drjj_bin = [0, 2, 6]
variables['dr_jj_V_njet']  = {
    'name': 'Sum$(CleanJet_pt>30):MHlnjj_dr_jVj',     
    'range' : (drjj_bin,njet_bin,),   
    'xaxis' : 'njet : #Delta R(j,j)',
    'fold'  : 3                         
}

## SR cut
variables['BDT_shortSR']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 1, 
}
