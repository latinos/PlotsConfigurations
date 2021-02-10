import argparse
import pandas as pd
import ROOT as R

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file from combine", type=str)
parser.add_argument("-o","--outputfile", help="output file", type=str)
args = parser.parse_args()


iF = R.TFile.Open(args.inputfile)

phase_spaces = [] 
for y in ['2016','2017','2018']:
    for cat in ['boost','res']:
        for fl in ['ele','mu']:
            phase_spaces.append('{}_wjet_{}_{}'.format(cat,fl,y))


wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,7):
    wjets_bins['res'].append("Wjets_HT_res_"+str(ir))
for ir in range(1,6):
    wjets_bins['boost'].append("Wjets_HT_boost_"+str(ir))


results = []

for ph in phase_spaces:
    if "res_wjet_mu" in ph:
        ph = ph.replace("res_wjet_mu","res_wjet_mu_sig")
    if 'res' in ph:
        wjs = wjets_bins['res']
    if 'boost' in ph:
        wjs = wjets_bins['boost']
    for wj in wjs:
        
        print(ph)
        h = iF.Get("{}_postfit/{}".format(ph, wj))
        nom = sum([h.GetBinContent(i) for i in range(h.GetNbinsX()+1)])
        err = sum([h.GetBinError(i) for i in range(h.GetNbinsX()+1)])
        results.append((ph.replace("res_wjet_mu_sig","res_wjet_mu"), wj, nom, err/nom))

with open(args.outputfile, "w") as of:
    of.write("channel;bin;norm;err\n")
    for r in results:
        of.write("{};{};{};{}\n".format(*r))
print results