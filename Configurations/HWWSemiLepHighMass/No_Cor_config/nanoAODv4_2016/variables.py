'''variables['mll']  = {   'name': '',
                        'range' : (90,150,1500),
                        'xaxis' : 'p_{T} 1st fatjet',
                        'fold'  : 3
                        }

'''

##For checking##
variables['run'] = {
'name' : 'run',
'range':(50,20,120),
'xaxis':'p_{T1}(e)',
'fold': 0
}

##--Electron Momentum--##
variables['electron_pt1'] = { 
'name' : 'Electron_pt[0]',
'range':(50,20,120),
'xaxis':'p_{T1}(e)',
'fold': 0
}
                     

variables['electron_pt2'] = {
'name' : 'Electron_pt[2]',
'range':(50,20,120),
'xaxis':'p_{T2}(e)',
'fold':0
}

variables['electron_eta1'] = {
'name' : 'Electron_eta[0]',
'range':(40,-3,3),
'xaxis':'#eta_{T1}(e)',
'fold':0
}
variables['electron_eta2'] = {
'name' : 'Electron_eta[1]',
'range':(40,-3,3),
'xaxis':'#eta_{T2}(e)',
'fold':0
}
variables['electron_phi1'] = {
'name' : 'Electron_phi[0]',
'range':(40,-3,3),
'xaxis':'#phi_{T1}(e)',
'fold':0
}
variables['electron_phi2'] = {
'name' : 'Electron_phi[1]',
'range':(40,-3,3),
'xaxis':'#phi_{T2}(e)',
'fold':0
}




variables['muon_pt1'] = {
'name' : 'Muon_pt[0]',
'range':(50,20,120),
'xaxis':'p_{T1}(#mu)',
'fold':0
}


variables['muon_pt2'] = {
'name' : 'Muon_pt[2]',
'range':(50,20,120),
'xaxis':'p_{T2}(#mu)',
'fold':0
}

variables['muon_eta1'] = {
'name' : 'Muon_eta[0]',
'range':(40,-3,3),
'xaxis':'#eta_{T1}(#mu)',
'fold':0
}
variables['muon_eta2'] = {
'name' : 'Muon_eta[1]',
'range':(40,-3,3),
'xaxis':'#eta_{T2}(#mu)',
'fold':0
}
variables['muon_phi1'] = {
'name' : 'Muon_phi[0]',
'range':(40,-3,3),
'xaxis':'#phi_{T1}(#mu)',
'fold':0
}
variables['muon_phi2'] = {
'name' : 'Muon_phi[1]',
'range':(40,-3,3),
'xaxis':'#phi_{T2}(#mu)',
'fold':0
}
