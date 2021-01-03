
wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,7):
    wjets_bins['res'].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins['boost'].append("Wjets_HT_boost_"+str(ir))


wjets_rate_params = [ ]
top_rate_params = [ ]

for y in ['2016','2017','2018']:
    for cat in ['res','boost']:
        for fl in ['ele','mu']:
            for wj in wjets_bins[cat]:
                wjets_rate_params.append("CMS_{}_norm_{}_{}_{}".format(wj,fl,cat,y ))
            top_rate_params.append("CMS_Top_norm_{}_{}_{}".format(fl,cat,y))

print " ".join(wjets_rate_params)
print " ".join(top_rate_params)

