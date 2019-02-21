# cuts

supercut = 'mll>60 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 && \
            (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && \
            abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 && \
            LepCut2l==1 && \
            Alt$(CleanJet_pt[0],0)>20 && \
            Alt$(CleanJet_pt[0],100)<30 && \
            Alt$(CleanJet_pt[1],0)>20 && \
            Alt$(CleanJet_pt[1],100)<30\
            '


cuts['hww2l2v_13TeV_top_of0j']  = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
                                    && Jet_btagCSVV2[CleanJet_jetIdx[0]] > 0.5803 \
                                    && Jet_btagCSVV2[CleanJet_jetIdx[1]] > 0.5803 \
                                    '

