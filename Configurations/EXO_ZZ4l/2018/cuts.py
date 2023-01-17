# cuts

supercut = ' Lepton_pt[0]>25 \
            && Lepton_pt[1]>15 \
            && Lepton_pt[2]>10 \
            && Lepton_pt[3]>10 \
            && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
            && chllll_zh4l == 0 \
            && z0Mass_zh4l>12 \
            && Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0 \
                  '

#cuts['zh4l_preselection_13TeV'] = '((flagZ1SF_zh4l==1)&&(mllll_zh4l > 140)) || (flagZ1SF_zh4l==0)'

                          
cuts['inclusive']  = {
    #'expr' : 'flagZ1SF_zh4l==1 && mllll_zh4l > 140 && z1Mass_zh4l < 60 && z1Mass_zh4l > 10 && abs(z0Mass_zh4l-91.1876)< 15 && PuppiMET_pt > 35',
    'expr' : ' abs(z0Mass_zh4l-91.1876)< 15',
    'categories' : {
        'nomet1' : 'PuppiMET_pt < 35 ',
        'highpt' : 'Lepton_pt[3]>20',
    }
}





