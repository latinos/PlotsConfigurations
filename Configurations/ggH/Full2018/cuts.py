# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

### Unsplitted signal regions

cutsr = '(mth>60 && mtw2>30 && bVeto)'
cuttt = '(mll>50 && mtw2>30 && (bReq || (!bVeto && zeroJet)))'
cutdy = '(mth<60 && mll>40 && mll<80 && bVeto)'
cutww = '(mth>60 && mtw2>30 && mll>100 && bVeto)'

categories=['zeroJet', 'oneJet', 'twoJetOrMore']



def addcut(name, cut, categories):
    cuts[name] = { 'expr': cut}
    cuts[name]["categories"] = categories
    cuts[name]["categorization"] = '0'
    for i,cat in enumerate(categories):
      cuts[name]["categorization"] += "+%d*(%s)" % (i, cat)


#addcut('hww2l2v_13TeV_of', cutsr, categories)
addcut('hww2l2v_13TeV_top', cuttt, categories)
addcut('hww2l2v_13TeV_dytt', cutdy, categories)
addcut('hww2l2v_13TeV_ww', cutww, categories)
