# cuts

supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>10 \
            && Alt$(Lepton_pt[1],0)>10 \
            && Alt$(Lepton_pt[2],0)>10 \
            && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
            && abs(WH3l_chlll) == 1 \
            && Alt$( CleanJet_pt[0], 0) < 30 \
           '

