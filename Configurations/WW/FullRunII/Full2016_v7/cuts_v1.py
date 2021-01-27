# cuts
supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## SR 
cuts['ww2l2v_13TeV_incl'] = 'mth > 60 \
                            && mtw2 > 30  \
                            && bVeto \
                         '

## Signal regions
cuts['ww2l2v_13TeV_0j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)<30 \
                         '

cuts['ww2l2v_13TeV_1j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)<30 \
                         '

cuts['ww2l2v_13TeV_2j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)<30 \
                         '

cuts['ww2l2v_13TeV_3j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)<30 \
                         '

cuts['ww2l2v_13TeV_4j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)>=30 \
                          && Alt$(CleanJet_pt[4],0)<30 \
                         '

cuts['ww2l2v_13TeV_5j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)>=30 \
                          && Alt$(CleanJet_pt[4],0)>=30 \
                         '

## Top control regions
cuts['ww2l2v_13TeV_top_incl']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                          '

cuts['ww2l2v_13TeV_top_0j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                             && Alt$(CleanJet_pt[0],0)<30 \
                          '

cuts['ww2l2v_13TeV_top_1j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                           '

cuts['ww2l2v_13TeV_top_2j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)<30 \
                           '

cuts['ww2l2v_13TeV_top_3j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)>=30 \
                             && Alt$(CleanJet_pt[3],0)<30 \
                           '

cuts['ww2l2v_13TeV_top_4j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)>=30 \
                             && Alt$(CleanJet_pt[3],0)>=30 \
                             && Alt$(CleanJet_pt[4],0)<30 \
                           '

cuts['ww2l2v_13TeV_top_5j']  =  ' mtw2>30 \
                             && mll>50 \
                             && ((zeroJet && !bVeto) || bReq)\
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)>=30 \
                          && Alt$(CleanJet_pt[4],0)>=30 \
                           '

cuts['ww2l2v_13TeV_dytt_incl']  = ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             '

cuts['ww2l2v_13TeV_dytt_0j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)<30 \
                          '

cuts['ww2l2v_13TeV_dytt_1j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)<30 \
                          '

cuts['ww2l2v_13TeV_dytt_2j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)<30 \
                          '

cuts['ww2l2v_13TeV_dytt_3j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)>=30 \
                             && Alt$(CleanJet_pt[3],0)<30 \
                           '

cuts['ww2l2v_13TeV_dytt_4j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)>=30 \
                             && Alt$(CleanJet_pt[3],0)>=30 \
                             && Alt$(CleanJet_pt[4],0)<30 \
                           '

cuts['ww2l2v_13TeV_dytt_5j']  =  ' mth<60 \
                             && mll>40 \
                             && mll<80 \
                             && bVeto \
                             && Alt$(CleanJet_pt[0],0)>=30 \
                             && Alt$(CleanJet_pt[1],0)>=30 \
                             && Alt$(CleanJet_pt[2],0)>=30 \
                             && Alt$(CleanJet_pt[3],0)>=30 \
                             && Alt$(CleanJet_pt[4],0)>=30 \
                           '
