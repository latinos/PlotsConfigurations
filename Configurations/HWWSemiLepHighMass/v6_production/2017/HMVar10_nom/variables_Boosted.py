isFinal=False
print "isFinal=",isFinal
#-----Variable Deinition-----#
from WPandCut2017 import *

scriptname=opt.variablesFile

#------End of Variable Definition-----#
#variables={}

variables['Event'] = {
    'name' : '1',
    'range':(1,0,2),
    'xaxis':'1',
    'fold': 0
}
##Wtagger kin##
variables['WtaggerFatjet_'+WTAG+'_nom_pt']={
    'name':'WtaggerFatjet_'+WTAG+'_nom_pt[lnJ_'+WTAG+'_nom_widx]',
    'range':(100,0,1000),
    'xaxis':'WtaggerFatjet_pt',
    'fold': 0,

}
variables['WtaggerFatjet_'+WTAG+'_nom_mass']={
    'name':'WtaggerFatjet_'+WTAG+'_nom_mass[lnJ_'+WTAG+'_nom_widx]',
    'range':(42,40,250),
    'xaxis':'WtaggerFatjet_mass',
    'fold': 0,

}
variables['WtaggerFatjet_'+WTAG+'_nom_tau21ddt']={
    'name':'WtaggerFatjet_'+WTAG+'_nom_tau21ddt[lnJ_'+WTAG+'_nom_widx]',
    'range':(20,0,1),
    'xaxis':'WtaggerFatjet_tau21(DDT)',
    'fold': 0,

}
##--Bjet
variables['nBJetBoost_'+WTAG+'_nom']={
    'name':'nBJetBoost_'+WTAG+'_nom',
    'range':(5,0,5),
    'xaxis':'nBJetBoost',
    'fold':0,
}


variables['JetMultplicity']={
    'name':'JetMultplicity',
    'range':(10,0,10),
    'xaxis':'JetMultplicity',
    'fold':0,
}
variables['JetMultplicity_eta4p7']={
    'name':'JetMultplicity_eta4p7',
    'range':(10,0,10),
    'xaxis':'JetMultplicity_eta4p7',
    'fold':0,
}
variables['nAddBoost_'+WTAG+'_nom']={
    'name':'nAddBoost_'+WTAG+'_nom',
    'range':(10,0,10),
    'xaxis':'nAddionalJets',
    'fold':0,
}

variables['AddJetBoost_'+WTAG+'_nom_pt']={
    'name':'AddJetBoost_'+WTAG+'_nom_pt',
    'range':(50,25,600),
    'xaxis':'pT(AddionalJets)',
    'fold':0,
}


variables['AddJetBoost_'+WTAG+'_nom_eta']={
    'name':'AddJetBoost_'+WTAG+'_nom_eta',
    'range':(50,-5,5),
    'xaxis':'eta(AddionalJets)',
    'fold':0,
}

variables['Lepton_pt[0]']={
    'name' : 'Lepton_pt[0]',
    'range':(50,25,600),
    'xaxis':'Lepton P_{T} [GeV]',
    'fold':0

}
variables['Lepton_eta[0]']={
    'name' : 'Lepton_eta[0]',
    'range':(50,-5,5),
    'xaxis':'Lepton #eta',
    'fold':0
}



variables[bAlgo]={
    'name' : 'Jet_btag'+bAlgo+'[CleanJet_jetIdx[AddJetBoost_'+WTAG+'_nom_cjidx]]',
    'range':(25,0,1),
    'xaxis':bAlgo,
    'fold':0

}

variables['PuppiMet']={
    'name' : 'PuppiMET_nom_pt',
    'range':(50,0,600),
    'xaxis':'MET [GeV]',
    'fold':0
}

variables['Wlep_Mt']={
    'name' : 'Wlep_nom_Mt',
    'range':(60,0,300),
    'xaxis':'Wlep_Mt',
    'fold':0
}
variables['Wlep_nom_mass']={
    'name' : 'Wlep_nom_mass',
    'range':(60,0,300),
    'xaxis':'Wlep_mass',
    'fold':0
}
variables['Wlep_nom_pt']={
    'name' : 'Wlep_nom_pt',
    'range':(100,0,300),
    'xaxis':'Wlep_pt',
    'fold':0
}

variables ['PV_npvs']={
    'name' : 'PV_npvs',
    'range' : (80,0,80),
    'xaxis' : 'PV_npvs',
    'fold':0
}


variables['lnJ_'+WTAG+'_nom_minPtWOverM']={
    'name':'lnJ_'+WTAG+'_nom_minPtWOverM',
    'range':(20,0,1),
    'xaxis':'minPtWOverMlnJ',
    'fold':0
}

for M_MELA in MELA_MASS_BOOST:
    for C in MELA_C_BOOST:
        
        #'MEKD_'+str(M)    
        M=str(M_MELA)
        C=str(C)
        variables['MEKD_Bst_C_'+C+'_M'+str(M)]={
            'name':'MEKD_Bst_C_'+C+'_M'+str(M),
            'range':(50,0,1),
            'xaxis':'MEKD_Bst_C_'+C+'_M'+str(M),
            'fold':0
        }


if isFinal: variables={}

variables['lnJ_'+WTAG+'_nom_mass']={
    'name': 'lnJ_'+WTAG+'_nom_mass',
    'range':([0,400,450,500,550,600,650,700,750,800,900,1000,1500,2000,2500,3000,4000],),
    'divideByBinWidth':1,
    'xaxis': 'lnJ_mass',
    'fold':3
}
variables['MEKD_Bst_C_'+MELA_C_BOOST_WP+'_M'+str(MELA_MASS_BOOST_WP)]={
    'name':'MEKD_Bst_C_'+MELA_C_BOOST_WP+'_M'+str(MELA_MASS_BOOST_WP),
    'range':(50,0,1),
    'xaxis':'MEKD_Bst_C_'+MELA_C_BOOST_WP+'_M'+str(MELA_MASS_BOOST_WP),
    'fold':3
}



'''
##--For cut stury
variables['dR_l_F_MW']={
    'name': 'dR_l_F_MW',
    'range':(50,0,5),
    'xaxis': 'dR_l_F_MW',
    'fold':1
}
variables['dR_Wlep_F_MW']={
    'name': 'dR_Wlep_F_MW',
    'range':(50,0,5),
    'xaxis': 'dR_Wlep_F_MW',
    'fold':1
}
variables['dPhi_l_F_MW']={
    'name': 'dPhi_l_F_MW',
    'range':(50,0,5),
    'xaxis': 'dR_l_F_MW',
    'fold':1
}
variables['dPhi_Wlep_F_MW']={
    'name': 'dR_Wlep_F_MW',
    'range':(50,0,5),
    'xaxis': 'dR_Wlep_F_MW',
    'fold':1
}
'''
'''
for sel in FatSel:
    #CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx]
    variables['CleanFatJet_pt[FinalFatJet_'+sel+'_cfjidx']={
        'name':'CleanFatJet_pt[FinalFatJet_'+sel+'_cfjidx]',
        'range':(100,0,1000),
        'xaxis':'CleanFatJet_pt[FinalFatJet_'+sel+'_cfjidx]',
        'fold': 0,

    }
    variables['CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx]']={
        'name':'CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx]',
        'range':(42,40,250),
        'xaxis':'CleanFatJet_mass[FinalFatJet_'+sel+'_cfjidx]',
        'fold': 0,

    }
    variables['CleanFatJet_tau21[FinalFatJet_'+sel+'_cfjidx]']={
        'name':'CleanFatJet_tau21[FinalFatJet_'+sel+'_cfjidx]',
        'range':(100,0,1),
        'xaxis':'CleanFatJet_tau21[FinalFatJet_'+sel+'_cfjidx]',
        'fold': 0,

    }

    variables['lnJ_mass_'+sel]={
        'name': 'lnJ_mass_'+sel,
        'range':([0,200,210,230,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,1500,2000,2500,3000,4000],),
        'divideByBinWidth':1,
        'xaxis': 'lnJ_mass_'+sel,
        'fold':1
    }
'''



print "len(variables)=",len(variables)
