# cuts

supercut = '   Lepton_pt[0]>25 \
            && Lepton_pt[1]>15 \
            && Lepton_pt[2]>10 \
            && Lepton_pt[3]>10 \
            && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
            && chllll_zh4l == 0 \
            && z0Mass_zh4l>12 \
            && Sum$(CleanJet_pt > 30. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) <= 1 \
                  '


            #&& Sum$(CleanJet_pt > 30. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0 \



#cuts['zh4l_preselection_13TeV'] = '((flagZ1SF_zh4l==1)&&(mllll_zh4l > 140)) || (flagZ1SF_zh4l==0)'

#
# chllll_zh4l = sum of 4 charges    
#
#
#

    
#cuts['inclusive']  = {
    ##'expr' : 'flagZ1SF_zh4l==1 && mllll_zh4l > 140 && z1Mass_zh4l < 60 && z1Mass_zh4l > 10 && abs(z0Mass_zh4l-91.1876)< 15 && PuppiMET_pt > 35',
    #'expr' : ' abs(z0Mass_zh4l-91.1876)< 15',
    #'categories' : {
        #'nomet1' : 'PuppiMET_pt < 35 ',
        #'highpt' : 'Lepton_pt[3]>20',
    #}
#}


#
# e = 11
# mu = 13
#

# 'eeee' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*11*11)',
# 'eemm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*13*13)',
# 'mmmm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 13*13*13*13)',


   
cuts['inclusive-ZZ']  = {
    'expr' : ' abs(z0Mass_zh4l-91.1876)< 20 && abs(z1Mass_zh4l-91.1876)< 20',
    'categories' : {
           'eeee' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*11*11)',
           'eemm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*13*13)',
           'mmmm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 13*13*13*13)',
    }
}

 
cuts['inclusive-ZZ-all']  = {
    'expr' : ' abs(z0Mass_zh4l-91.1876)< 20 && abs(z1Mass_zh4l-91.1876)< 20',
    'categories' : {
           '1' : '1',
    }
}

    
cuts['inclusive-Z']  = {
    'expr' : ' abs(z0Mass_zh4l-91.1876)< 20 ',
    'categories' : {
           'eeee' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*11*11)',
           'eemm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*13*13)',
           'mmmm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 13*13*13*13)',
    }
}

   
cuts['inclusive-Z-all']  = {
    'expr' : ' abs(z0Mass_zh4l-91.1876)< 20 ',
    'categories' : {
           '1' : '1',
    }
}



cuts['noH125']  = {
    'expr' : 'mllll_zh4l>150',
    'categories' : {
           'eeee' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*11*11)',
           'eemm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 11*11*13*13)',
           'mmmm' : '(Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]*Lepton_pdgId[3] == 13*13*13*13)',
    }
}



cuts['noH125-all']  = {
    'expr' : ' mllll_zh4l>150',
    'categories' : {
           '1' : '1',
    }
}


