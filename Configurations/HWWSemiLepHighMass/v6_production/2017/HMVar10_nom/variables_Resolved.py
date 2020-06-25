isFinal=False
print "isFinal=",isFinal

#-----Variable Deinition-----#
CUTFLOW=False
from WPandCut2017 import *

scriptname=opt.variablesFile

_ALGO="_"+ALGO
_ALGO_="_"+ALGO+"_"
#------End of Variable Definition-----#
#variables={}

variables['Event'] = {
    'name' : '1',
    'range':(1,0,2),
    'xaxis':'1',
    'fold': 0
}
variables['Whad'+_ALGO_+'nom_pt']={
    'name':'Whad'+_ALGO_+'nom_pt',
    'range':(100,0,1000),
    'xaxis':'Whad_pt',
    'fold': 0,

}
variables['Whad'+_ALGO_+'nom_mass']={
    'name':'Whad'+_ALGO_+'nom_mass',
    'range':(42,40,250),
    'xaxis':'Whad_mass',
    'fold': 0,

}


variables['nBJetResol'+_ALGO_+'nom']={
    'name':'nBJetResol'+_ALGO_+'nom',
    'range':(5,0,5),
    'xaxis':'nBJetResol'+_ALGO_+'nom',
    'fold':0,
}


variables['nAddJetResol'+_ALGO_+'nom']={
    'name':'nAddResol'+_ALGO_+'nom',
    'range':(10,0,10),
    'xaxis':'nAddJetResol',
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


variables['Lepton_pt[0]']={
    'name' : 'Lepton_pt[0]',
    'range':(50,25,600),
    'xaxis':'Lepton P_{T} [GeV]',
    'fold':0

}
variables['Lepton_eta[0]']={
    'name' : 'Lepton_eta[0]',
    'range':(100,-5,5),
    'xaxis':'Lepton #eta',
    'fold':0
}


variables ['PV_npvs']={
    'name' : 'PV_npvs',
    'range' : (80,0,80),
    'xaxis' : 'PV_npvs',
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


variables['lnjj'+_ALGO_+'nom_minPtWOverM']={
    'name':'lnjj'+_ALGO_+'nom_minPtWOverM',
    'range':(20,0,1),
    'xaxis':'minPtWOverMlnjj',
    'fold':0
}

for M_MELA in MELA_MASS_RESOL:
    for C in MELA_C_RESOL:
        #'MEKD_'+str(M)        
        C=str(C)
        M=str(M_MELA)
        variables['MEKD_Res_C_'+C+'_M'+str(M)]={
            'name':'MEKD_Res_C_'+C+'_M'+str(M),
            'range':(50,0,1),
            'xaxis':'MEKD_Res_C_'+C+'_M'+str(M),
            'fold':0
        }



if isFinal:
    variables={}


variables['lnjj'+_ALGO_+'nom_mass']={
    'name': 'lnjj'+_ALGO_+'nom_mass',
    'range':([0,200,210,230,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,1500,2000,2500,3000,4000],),
    'divideByBinWidth':1,
    'xaxis': 'lnjj_mass',
    'fold':1
}


variables['MEKD_Res_C_'+MELA_C_RESOL_WP+'_M'+str(MELA_MASS_RESOL_WP)]={
    'name':'MEKD_Res_C_'+MELA_C_RESOL_WP+'_M'+str(MELA_MASS_RESOL_WP),
    'range':(50,0,1),
    'xaxis':'MEKD_Res_C_'+MELA_C_RESOL_WP+'_M'+str(MELA_MASS_RESOL_WP),
    'fold':3
}

if CUTFLOW:
    variables={}
    variables['Event'] = {
        'name' : '1',
        'range':(1,0,2),
        'xaxis':'1',
        'fold': 0
    }





print "len(variables)=",len(variables)
