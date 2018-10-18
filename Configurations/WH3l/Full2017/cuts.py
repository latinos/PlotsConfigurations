# cuts

supercut = 'mllmin3l>12  \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>20 \
            && Alt$(Lepton_pt[2],0)>15 \
            && Alt$(Lepton_pt[3],0)<10 \
            && abs(chlll) == 1 \
           '

cuts['wh3l_13TeV_sssf']  = 'njet_3l == 0 \
                       && Alt$(Jet_pt[0],0) < 30 \
                       && ( Alt$(Jet_pt[0],0) < 20 || Alt$(Jet_btagDeepB[0],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[1],0) < 20 || Alt$(Jet_btagDeepB[1],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[2],0) < 20 || Alt$(Jet_btagDeepB[2],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[3],0) < 20 || Alt$(Jet_btagDeepB[3],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[4],0) < 20 || Alt$(Jet_btagDeepB[4],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[5],0) < 20 || Alt$(Jet_btagDeepB[5],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[6],0) < 20 || Alt$(Jet_btagDeepB[6],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[7],0) < 20 || Alt$(Jet_btagDeepB[7],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[8],0) < 20 || Alt$(Jet_btagDeepB[8],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[9],0) < 20 || Alt$(Jet_btagDeepB[9],-1) < 0.0521 ) \
                       && dphilllmet > 2.5 \
                       && mllmin3l < 100\
                       && flagOSSF == 0\
                       '

cuts['wh3l_13TeV_ossf']  = 'njet_3l == 0 \
                       && Alt$(Jet_pt[0],0) < 30 \
                       && ( Alt$(Jet_pt[0],0) < 20 || Alt$(Jet_btagDeepB[0],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[1],0) < 20 || Alt$(Jet_btagDeepB[1],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[2],0) < 20 || Alt$(Jet_btagDeepB[2],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[3],0) < 20 || Alt$(Jet_btagDeepB[3],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[4],0) < 20 || Alt$(Jet_btagDeepB[4],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[5],0) < 20 || Alt$(Jet_btagDeepB[5],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[6],0) < 20 || Alt$(Jet_btagDeepB[6],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[7],0) < 20 || Alt$(Jet_btagDeepB[7],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[8],0) < 20 || Alt$(Jet_btagDeepB[8],-1) < 0.0521 ) \
                       && ( Alt$(Jet_pt[9],0) < 20 || Alt$(Jet_btagDeepB[9],-1) < 0.0521 ) \
                       && dphilllmet > 2.2 \
                       && MET_pt > 50\
                       && zveto_3l > 25\
                       && mllmin3l < 100\
                       && flagOSSF == 1\
                       '

cuts['wh3l_wz_13TeV'] = 'njet_3l == 0\
                         && ( Alt$(Jet_pt[0],0) < 20 || Alt$(Jet_btagDeepB[0],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[1],0) < 20 || Alt$(Jet_btagDeepB[1],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[2],0) < 20 || Alt$(Jet_btagDeepB[2],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[3],0) < 20 || Alt$(Jet_btagDeepB[3],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[4],0) < 20 || Alt$(Jet_btagDeepB[4],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[5],0) < 20 || Alt$(Jet_btagDeepB[5],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[6],0) < 20 || Alt$(Jet_btagDeepB[6],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[7],0) < 20 || Alt$(Jet_btagDeepB[7],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[8],0) < 20 || Alt$(Jet_btagDeepB[8],-1) < 0.0521 ) \
                         && ( Alt$(Jet_pt[9],0) < 20 || Alt$(Jet_btagDeepB[9],-1) < 0.0521 ) \
                         && MET_pt > 45\
                         && zveto_3l < 20\
                         && mlll > 100\
                        '

cuts['wh3l_zg_13TeV'] = 'njet_3l == 0\
                        && ( Alt$(Jet_pt[0],0) < 20 || Alt$(Jet_btagDeepB[0],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[1],0) < 20 || Alt$(Jet_btagDeepB[1],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[2],0) < 20 || Alt$(Jet_btagDeepB[2],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[3],0) < 20 || Alt$(Jet_btagDeepB[3],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[4],0) < 20 || Alt$(Jet_btagDeepB[4],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[5],0) < 20 || Alt$(Jet_btagDeepB[5],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[6],0) < 20 || Alt$(Jet_btagDeepB[6],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[7],0) < 20 || Alt$(Jet_btagDeepB[7],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[8],0) < 20 || Alt$(Jet_btagDeepB[8],-1) < 0.0521 ) \
                        && ( Alt$(Jet_pt[9],0) < 20 || Alt$(Jet_btagDeepB[9],-1) < 0.0521 ) \
                        && MET_pt < 40\
                        && mlll > 80\
                        && mlll < 100\
                       '

# 11 = e
# 13 = mu
# 15 = tau

