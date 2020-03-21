# cuts

supercut = ' Lepton_pt[0]>25 \
            && Lepton_pt[1]>15 \
            && Lepton_pt[2]>10 \
            && Lepton_pt[3]>10 \
            && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
            && chllll_zh4l == 0 \
            && z0Mass_zh4l>12 \
            && bVeto \
                        '

cuts['zh4l_preselection_13TeV'] = '((flagZ1SF_zh4l==1)&&(mllll_zh4l > 140)) || (flagZ1SF_zh4l==0)'
## Signal regions


cuts['zh4l_XSF_13TeV']  = '   flagZ1SF_zh4l==1\
                             && mllll_zh4l > 140\
                              && z1Mass_zh4l < 60 && z1Mass_zh4l > 10 \
                             && PuppiMET_pt > 35 \
                             && abs(z0Mass_zh4l-91.1876)< 15\
                                       '

cuts['zh4l_XDF_13TeV']  = 'flagZ1SF_zh4l==0\
                          && z1Mass_zh4l < 70 && z1Mass_zh4l >10 \
                          && PuppiMET_pt > 20 \
                          && abs(z0Mass_zh4l-91.1876)< 15\
                                                     '

cuts['zh4l_ZZ_13TeV']  = ' z1Mass_zh4l < 105 && z1Mass_zh4l >75 \
                           && PuppiMET_pt < 35 \
                           && fabs(z0Mass_zh4l-91.1876)< 15\
                           '
