# cuts

supercut = ' Lepton_pt[0]>25 \
            && Lepton_pt[1]>15 \
            && Lepton_pt[2]>10 \
            && Lepton_pt[3]>10 \
            && (nLepton>=4 && Alt$(Lepton_pt[4],0)<10) \
            && chllll_zh4l == 0 \
                  '

cuts['preselection'] = '1'


