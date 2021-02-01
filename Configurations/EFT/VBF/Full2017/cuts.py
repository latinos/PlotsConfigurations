
#cuts = {}
# Aliases in supercut doesnt seem to work!

supercut = 'mll>12  \
            && Lepton_pt[0]>25 && Lepton_pt[1]>10 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) \
            && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) \
            && ptll > 30 \
            && PuppiMET_pt > 20 \
            && hm > 0  \
            '

# && CleanJet_pt[0]>=30 && CleanJet_pt[1]>=30 \
# && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 \
# && (abs((Lepton_eta[0] - (CleanJet_eta[0]+CleanJet_eta[1])/2)/detajj) < 0.5) \
# && (abs((Lepton_eta[1] - (CleanJet_eta[0]+CleanJet_eta[1])/2)/detajj) < 0.5) \'
# selection  'bVeto && (mth>=60 && mth<125) && (njet==2) && (detajj>3.5 && mjj>400) && lepcen1<0.5 && lepcen2<0.5' 
# control regions top 'mll>50 && (njet==2) && (detajj>3.5 && mjj>400) && bReq'
# control regions dy  '(mth<60) && mll>40 && mll<80 && (njet==2) && (detajj>3.5 && mjj>400) && bVeto' 
# cuts['hww2l2v_13TeV_SR']     = 'bVeto && (mth>=60 && mth<125) && (njet==2) && (detajj>3.5 && mjj>400) && lepcen1<0.5 && lepcen2<0.5'

#cuts['hww2l2v_13TeV_Sel']    = 'bVeto && CleanJet_pt[0]>=30 && CleanJet_pt[1]>=30 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && CleanJet_pt[2]<30'

#cuts['hww2l2v_13TeV_SRVBF']  = 'bVeto && CleanJet_pt[0]>=30 && CleanJet_pt[1]>=30 && abs(CleanJet_eta[0])<4.7 && abs(CleanJet_eta[1])<4.7 && CleanJet_pt[2]<30 \
#                                && kd_vbf>0.8 \
#                                && mjj>200 \
#                                && (mth>=30 && mth<125)'

cuts['hww2l2v_13TeV_SRVH']   = 'bVeto && CleanJet_pt[0]>=30 && CleanJet_pt[1]>=30 && abs(CleanJet_eta[0])<2.4 && abs(CleanJet_eta[1])<2.4 && CleanJet_pt[2]<30 \
                                && kd_vh>0.9 \
                                && (mjj>60 && mjj<120) \
                                && (mth>=30 && mth<125)'
 

# && nCleanFatJet==0 \
