#cuts = {}
# Aliases in supercut doesnt seem to work!
#            && hm > 0  \not used for boosted category --> also changed in getconstant.cc macro
#((mll>12 && mll<76.2) || mll>106.2) \
supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && Lepton_pdgId[0]*Lepton_pdgId[1]==-11*13 \
            && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) \
            && Alt$(Lepton_pt[2],0)<10 \
            && ptll>30 \
            && PuppiMET_pt>20 \
            && nCleanFatJet>0 \
            '
cuts['A nCleanFatJet>0'] = 'nCleanFatJet>0'
cuts['B A+bVeto'] = 'nCleanFatJet>0 && bVeto'
cuts['C B+((mll>12 && mll<76.2) || mll>106.2)'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2)'
cuts['D C+(mth>=60 && mth<125)'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125)'
cuts['E D+FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200'
cuts['F E+CleanFatJet_eta[0]<2.4'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4'
cuts['G F+(FatJet_msoftdrop_nom>70 && FatJet_msoftdrop_nom<110)'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110)'
'''
cuts['H G+kd_Vh_mixhm > 0'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && kd_Vh_mixhm > 0'
cuts['I G+kd_Vh_mixhm < 0'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && kd_Vh_mixhm < 0'
cuts['J G+kd_Vh_mixhp > -0.4'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && kd_Vh_mixhp > -0.4'
cuts['K G+kd_Vh_mixhp < -0.4'] = 'nCleanFatJet>0 && bVeto && ((mll>12 && mll<76.2) || mll>106.2) && (mth>=60 && mth<125) && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && CleanFatJet_eta[0]<2.4 && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && kd_Vh_mixhp < -0.4'
'''
'''
cuts['hww2l2v_13TeV_of2j_Vh_hmip']  = 'bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && ((mll>12 && mll<76.2) || mll>106.2) \
                                    && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60 && mth<125) && kd_Vh_mixhm > 0'

cuts['hww2l2v_13TeV_of2j_Vh_hmin']  = 'bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && ((mll>12 && mll<76.2) || mll>106.2) \
                                    && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60 && mth<125) && kd_Vh_mixhm < 0'

cuts['hww2l2v_13TeV_of2j_Vh_hpip']  = 'bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && ((mll>12 && mll<76.2) || mll>106.2) \
                                    && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60 && mth<125) && kd_Vh_mixhp > -0.4'

cuts['hww2l2v_13TeV_of2j_Vh_hpin']  = 'bVeto && FatJet_pt_nom[CleanFatJet_jetIdx[0]]>=200 && abs(CleanFatJet_eta[0])<2.4 && ((mll>12 && mll<76.2) || mll>106.2) \
                                    && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>70 && FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<110) && (mth>=60 && mth<125) && kd_Vh_mixhp < -0.4'

cuts['hww2l2v_13TeV_top_fj'] = 'topcr'

cuts['hww2l2v_13TeV_dytt_fj'] = 'mth < 60. && bVeto && (FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]<70 || FatJet_msoftdrop_nom[CleanFatJet_jetIdx[0]]>110) && mll > 40. && mll < 80.'
'''
#cuts['hww2l2v_13TeV_dytt'] =  'dycr'

#cuts['hww2l2v_13TeV_dytt_nocfj'] =  'dycr && nCleanFatJet==0'

#cuts['hww2l2v_13TeV_dytt_of2j'] = 'dycr && nCleanJet>1 && nCleanFatJet==0'





