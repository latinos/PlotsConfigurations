# cuts

supercut = 'Lepton_pt[0]>25 && Lepton_pt[1]>13 && (me) && drll < 0.5'

categories=['me_pt2lt20', 'me_pt2ge20']



def addcut(name, cut, categories):
    cuts[name] = { 'expr': cut}
    cuts[name]["categories"] = categories
    cuts[name]["categorization"] = '0'
    for i,cat in enumerate(categories):
       cuts[name]["categorization"] += "+%d*(%s)" % (i, cat)


addcut('Vg', '', categories)
