#-----Variable Deinition-----#                                                                                                                                


METtype='PF'
#METtype='Puppi'

if METtype=='' or METtype=='PF':
    MET_pt='MET_pt'
    MET_phi='MET_phi'
    Wlep_px='Wlep_px_PF'
    Wlep_py='Wlep_py_PF'
    Wlep_pz='Wlep_pz_PF'
    Wlep_E='Wlep_E_PF'
    Wlep_pt='Wlep_pt_PF'
    Wlep_eta='Wlep_eta_PF'
    Wlep_phi='Wlep_phi_PF'
    Wlep_mass='Wlep_mass_PF'


else:
    MET_pt=METtype+'MET_pt'
    MET_phi=METtype+'MET_phi'
    Wlep_px='Wlep_px_'+METtype
    Wlep_py='Wlep_py_'+METtype
    Wlep_pz='Wlep_pz_'+METtype
    Wlep_E='Wlep_E_'+METtype
    Wlep_pt='Wlep_pt_'+METtype
    Wlep_eta='Wlep_eta_'+METtype
    Wlep_phi='Wlep_phi_'+METtype
    Wlep_mass='Wlep_mass_'+METtype



#------End of Variable Definition-----#  





variables['Event'] = {
    'name' : '1',
    'range':(1,0,1),
    'xaxis':'1',
    'fold': 3
}

variables['CleanFatJet_tau21']={
    'name' : 'CleanFatJet_tau21',
    'range':(20,0,1),
    'xaxis':'FatJet #tau_{21}',
    'fold':0
}

variables['CleanFatJet_pt']={
    'name' : 'CleanFatJet_pt',
    'range':(50,100,1000),
    'xaxis':'FatJet P_{T} [GeV]',
    'fold':0
}

variables['CleanFatJet_mass']={
    'name' : 'CleanFatJet_mass',
    'range':(50,40,250),
    'xaxis':'FatJet Mass [GeV]',
    'fold':0
}



variables['CleanFatJetPassMBoostedSB_tau21']={
    'name' : 'CleanFatJetPassMBoostedSB_tau21[0]',
    'range':(20,0,1),
    'xaxis':'FatJet #tau_{21}',
    'fold':0
}

variables['CleanFatJetPassMBoostedSB_pt']={
    'name' : 'CleanFatJetPassMBoostedSB_pt[0]',
    'range':(50,100,1000),
    'xaxis':'FatJet P_{T} [GeV]',
    'fold':0
}

variables['CleanFatJetPassMBoostedSB_mass']={
    'name' : 'CleanFatJetPassMBoostedSB_mass[0]',
    'range':(50,40,250),
    'xaxis':'FatJet Mass [GeV]',
    'fold':0
}

variables['CleanFatJetPassMBoostedSB_WptOvHfatM']={
    'name' : 'CleanFatJetPassMBoostedSB_WptOvHfatM[0]',
    'range':(20,0,1),
    'xaxis':'min(W_{pT})/M(WW)',
    'fold':0
}

variables['CleanFatJetPassMBoostedSB_HlnFat_mass']={
    'name' : 'CleanFatJetPassMBoostedSB_HlnFat_mass[0]',
    'range':(80,0,4000),
    'xaxis':'m_{lnJ} [GeV]',
    'fold':0
}

variables['CleanFatJetPassMBoostedSR_tau21']={
    'name' : 'CleanFatJetPassMBoostedSB_tau21[0]',
    'range':(20,0,1),
    'xaxis':'FatJet #tau_{21}',
    'fold':0
}

variables['CleanFatJetPassMBoostedSR_pt']={
    'name' : 'CleanFatJetPassMBoostedSB_pt[0]',
    'range':(50,100,1000),
    'xaxis':'FatJet P_{T} [GeV]',
    'fold':0
}

variables['CleanFatJetPassMBoostedSR_mass']={
    'name' : 'CleanFatJetPassMBoostedSR_mass[0]',
    'range':(50,40,250),
    'xaxis':'FatJet Mass [GeV]',
    'fold':0
}

variables['CleanFatJetPassMBoostedSR_WptOvHfatM']={
    'name' : 'CleanFatJetPassMBoostedSR_WptOvHfatM[0]',
    'range':(20,0,1),
    'xaxis':'min(Wlep_{pT},WJ_{pT})/M(WW)',
    'fold':0
}
variables['CleanFatJetPassMBoostedSR_HlnFat_mass']={
    'name' : 'CleanFatJetPassMBoostedSB_HlnFat_mass[0]',
    'range':(80,0,4000),
    'xaxis':'m_{lnJ} [GeV]',
    'fold':0
}


variables['WptOvHak4M']={
    'name' : 'WptOvHak4M',
    'range':(20,0,1),
    'xaxis':'min(Wlep_{pT},Wjj_{pT})/M(WW)',
    'fold':0
}

variables['lepton_pt']={
    'name' : 'Lepton_pt[0]',
    'range':(50,25,600),
    'xaxis':'lepton P_{T} [GeV]',
    'fold':0
}

variables['pfMet']={
    'name' : 'MET_pt',
    'range':(50,20,600),
    'xaxis':'MET [GeV]',
    'fold':0
}

variables['Wlep_pt']={
    'name' : 'Wlep_pt_PF',
    'range':(50,50,1000),
    'xaxis':'W_{Lep} P_{T} [GeV]',
    'fold':0
}

variables['lnjj_mt']={
    'name' : 'Hlnjj_mt',
    'range':(50,0,400),
    'xaxis':'lnjj m_{T} [GeV]',
    'fold':0
}





variables ['PV_npvs']={
    'name' : 'PV_npvs',
    'range' : (80,0,80),
    'xaxis' : 'PV_npvs',
    'fold':3
}




variables['jj_mass'] = {
    'name' : 'Whad_mass',
    'range':(50,40,250),
    'xaxis':'m_{jj} [GeV]',
    'fold':0
}

variables['jj_pt'] = {
    'name' : 'Whad_pt',
    'range':(50,50,900),
    'xaxis':'jj P_{T} [GeV]',
    'fold':0
}

variables['LnJJ_mass']={
    'name': 'Hlnjj_mass',
    'range':(80,0,4000),
    'xaxis':'m_{lnjj} [GeV]',
    'fold':0
}


variables['Wlep_mt']={
    'name': 'Wlep_mt',
    'range':(80,0,4000),
    'xaxis':'mt_{Wlep} [GeV]',
    'fold':0
}


variables['vbfFat_jj_dEta']={
    'name': 'vbfFat_jj_dEta',
    'range':(50,0,10),
    'xaxis':'#Delta#eta(jj)',
    'fold':0
}
variables['vbfFat_jj_mass']={
    'name': 'vbfFat_jj_mass',
    'range':(100,0,1000),
    'xaxis':'M(jj) [GeV]',
    'fold':0
}


variables['vbfjj_jj_dEta']={
    'name': 'vbfjj_jj_dEta',
    'range':(50,0,10),
    'xaxis':'#Delta(#eta)(jj)',
    'fold':0
}

variables['vbfjj_jj_mass']={
    'name': 'vbfjj_jj_mass',
    'range':(100,0,1000),
    'xaxis':'M(jj) [GeV]',
    'fold':0
}
