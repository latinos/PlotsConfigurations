# variables

#variables = {}
variables['deepcsv1']  = {   'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-99)', 
                             'range' : ([0, 0.2217, 1],),
                             'xaxis' : 'DeepCSV 1st jet', 
                             'fold' : 0
                         }

variables['deepcsv2_ptgt30']  = {   'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-99)*(CleanJet_pt[1]>=30)',
                             'range' : ([0, 0.2217, 1],),
                             'xaxis' : 'DeepCSV 2nd jet',
                             'fold' : 0
                         }

variables['deepcsv2_ptlt30']  = {   'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-99)*(CleanJet_pt[1]<30)',
                             'range' : ([0, 0.2217, 1],),
                             'xaxis' : 'DeepCSV 2nd jet',
                             'fold' : 0
                         }


variables['deepcsv1_more']  = {   'name': 'Jet_btagDeepB[CleanJet_jetIdx[0]]',
                             'range' : (10,0,1),
                             'xaxis' : 'DeepCSV 1st jet',
                             'fold' : 0
                         }

variables['deepcsv2_ptgt30_more']  = {   'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-99)*(CleanJet_pt[1]>=30)',
                             'range' : (10,0,1),
                             'xaxis' : 'DeepCSV 2nd jet',
                             'fold' : 0
                         }

variables['deepcsv2_ptlt30_more']  = {   'name': 'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-99)*(CleanJet_pt[1]<30)',
                             'range' : (10,0,1),
                             'xaxis' : 'DeepCSV 2nd jet',
                             'fold' : 0
                         }



