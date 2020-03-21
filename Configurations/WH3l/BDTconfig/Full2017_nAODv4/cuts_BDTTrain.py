# cuts

# supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            # && Alt$(Lepton_pt[0],0)>25 \
            # && Alt$(Lepton_pt[1],0)>20 \
            # && Alt$(Lepton_pt[2],0)>15 \
            # && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
            # && abs(WH3l_chlll) == 1 \
            # && Alt$( CleanJet_pt[0], 0) < 40 \
            # && Sum$( CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0\
           # '
supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>15 \
            && Alt$(Lepton_pt[2],0)>10 \
            && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
            && abs(WH3l_chlll) == 1 \
            && Alt$( CleanJet_pt[0], 0) < 40 \
            && Sum$( CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0\
           '

# 11 = e
# 13 = mu
# 15 = tau

