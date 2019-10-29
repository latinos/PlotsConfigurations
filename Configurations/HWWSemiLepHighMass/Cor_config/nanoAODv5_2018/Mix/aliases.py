aliases['nbjet'] = {
    'expr': '(Sum$(Jet_jetId>0 && Jet_pt>20 && fabs(Jet_eta) < 2.4 && Jet_btagDeepB > 0.2217 &&  ( sqrt( pow(Jet_eta - PreselFatJet_eta[0],2) + pow(Jet_phi - PreselFatJet_phi[0],2)) > 0.8) ))'

}


aliases['wlep_mass']={
    'expr':'(80.4)'
}
aliases['mu']    = {
    'expr': '(pow(wlep_mass,2)/2 + Lepton_pt[0]*MET_pt*cos(Lepton_phi[0]-MET_phi))'
}

#wlep_z = wlep_pz_part1 +- sqrt(wlep_pz_part2)

aliases['Lepton_pz1'] = {
    'expr': '(Lepton_pt[0]*sinh(Lepton_eta[0]))'
}
aliases['Lepton_E1'] = {
    'expr': '(Lepton_pt[0]*cosh(Lepton_eta[0]))'
}
aliases['wlep_pz_part1'] =  {
    'expr': '(mu*Lepton_pz1*/pow(Lepton_pt[0],2))'
}

aliases['wlep_pz_part2'] = {
    'expr': '( pow(mu*Lepton_pz1/pow(Lepton_pt[0],2) ,2) -  ( (pow(Lepton_E1*MET_pt,2)-pow(mu,2))/pow(Lepton_pt[0],2)   ))'
}

aliases['iscomplex'] = {
    'expr': '(wlep_pz_part2<0  )'
}
aliases['wlep_pz_sol1'] = {
    'expr': '(wlep_pz_part1 + sqrt(wlep_pz_part2))'
}
aliases['wlep_pz_sol2'] = {
    'expr': '(wlep_pz_part1 - sqrt(wlep_pz_part2))'
}
aliases['sol1_smaller'] = {
    'expr': '(fabs(wlep_pz_sol1) < fabs(wlep_pz_sol2))'
}
aliases['wlep_pz']={
    'expr': '( iscomplex*wlep_pz_part1 + (!iscomplex)*( sol1_smaller*wlep_pz_sol1 + (!sol1_smaller)*wlep_pz_sol2   ) )'
}

aliases['wlep_px']={
    'expr':' (Lepton_pt[0]*cos(Lepton_phi[0]) + MET_pt*cos(MET_phi))'
}

aliases['wlep_py']={
    'expr':' (Lepton_pt[0]*sin(Lepton_phi[0]) + MET_pt*sin(MET_phi))'
}
aliases['wlep_E'] = {
    'expr':' (sqrt( pow(wlep_px,2) + pow(wlep_py,2) + pow(wlep_pz,2)+pow(wlep_,mass,2)   ))'
}

aliases['whad_px']={
    'expr': '(PreselFatJet_pt[0]*cos(PreselFatJet_phi[0]))'
}
aliases['whad_py']={
    'expr': '(PreselFatJet_pt[0]*sin(PreselFatJet_phi[0]))'

}
aliases['whad_pz']={
    'expr': '(PreselFatJet_pt[0]*sinh(PreselFatJet_eta[0]))'

}
aliases['whad_mass']={
    'expr' : '(PreselFatJet_msoftdrop[0])'
}
aliases['whad_E'] = {
    'expr': '( sqrt( pow(whad_px,2) + pow(whad_py,2) + pow(whad_pz,2)  + pow(whad_mass,2)    )  )'
}

aliaes['mww'] = {
    'expr' : '( sqrt(  pow(whad_E+wlep_E,2) -pow(whad_px - wlep_px ,2) - pow(whad_py+wlep_py, 2) - pow(whad_pz+wlep_pz,2)  )    )'
}
aliases['whad_pt']={
    'expr' = '(FelselFatJet_pt[0])'
}
aliases['wlep_pt']={
    'sqrt( pow(wlep_px,2) + pow(wlep_py,2)  )'
}
