import argparse
import pandas as pd
import ROOT as R

parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file from combine", type=str)
parser.add_argument("-o","--outputfile", help="output file", type=str)
parser.add_argument("-p","--prefit", help="output prefit", action="store_true")
args = parser.parse_args()


iF = R.TFile.Open(args.inputfile)

phase_spaces = [] 
for y in ['2016','2017','2018']:
    for cat in ['boost','res']:
        for fl in ['ele','mu']:
            phase_spaces.append('wjetcr_{}_{}_{}'.format(cat,fl,y))


wjets_bins = {'res':[], 'boost':[]}
for ir in range(1,22):
    wjets_bins['res'].append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins['boost'].append("Wjets_boost_"+str(ir))


results = []

for ph in phase_spaces:
    if 'res' in ph:
        wjs = wjets_bins['res']
    if 'boost' in ph:
        wjs = wjets_bins['boost']
    for wj in wjs:
        if args.prefit:
            hpre = iF.Get("{}_prefit/{}".format(ph, wj))
            pre_nom = sum([hpre.GetBinContent(i) for i in range(hpre.GetNbinsX()+1)])
            pre_err = sum([hpre.GetBinError(i) for i in range(hpre.GetNbinsX()+1)])
        
        hpost = iF.Get("{}_postfit/{}".format(ph, wj))
        print("{}_postfit/{}".format(ph, wj))
        post_nom = sum([hpost.GetBinContent(i) for i in range(hpost.GetNbinsX()+1)])
        post_err = sum([hpost.GetBinError(i) for i in range(hpost.GetNbinsX()+1)])
        
        if args.prefit:
            results.append((ph, wj, pre_nom, pre_err, pre_err/pre_nom,  post_nom, post_err, post_err/post_nom))
        else:
            results.append((ph, wj, post_nom, post_err, post_err/post_nom))

with open(args.outputfile, "w") as of:
    if args.prefit:
        of.write("channel;bin;prefit_norm;prefit_err;prefit_err_rel;postfit_norm;postfit_err;postfit_err_rel\n")
        for r in results:
            of.write("{};{};{};{};{};{};{};{}\n".format(*r))
    else:
        of.write("channel;bin;postfit_norm;postfit_err;postfit_err_rel\n")
        for r in results:
            of.write("{};{};{};{};{}\n".format(*r))
print results