# cuts

supercut = ' Lepton_pt[0]>25 && Lepton_pt[1]>15 && Lepton_pt[2]>10 && Lepton_pt[3]>10\
            && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
            && chllll_zh4l == 0\
            && z0Mass_zh4l>12 \
            && abs(z0Mass_zh4l-91.1876)< 15\
            && z1Mass_zh4l < 70 && z1Mass_zh4l >10 \
            && PuppiMET_pt > 20 \
            && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0)\
                  '


