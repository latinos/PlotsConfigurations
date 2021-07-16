import ROOT as R 
import root_numpy as rnp 
import sys 
import os
import argparse 
import numpy as np

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", type=str)
parser.add_argument("-o","--output", type=str)
parser.add_argument("-or","--output-erel", type=str)
parser.add_argument("-c","--cuts", type=str, nargs="+")
parser.add_argument("-v","--var", type=str)
parser.add_argument("-br","--bins-range", type=str, nargs=2)
args = parser.parse_args()

VBS_samples = ["VBS_osWW", "VBS_ssWW", "VBS_WZjj", "VBS_WZll", "VBS_ZZ"]
VV_samples = ["VV_osWW", "VV_ssWW", "VV_WZjj", "VV_WZll", "VV_ZZ"]

wjets_bins = []
for ir in range(1,22):
    wjets_bins.append("Wjets_res_"+str(ir))
for ir in range(1,8):
    wjets_bins.append("Wjets_boost_"+str(ir))


samples =["Fake", "DY", "top", "VVV",  "VBF-V_dipole", "Vg", "VgS",  "ggWW"] + wjets_bins + VBS_samples + VV_samples


bins = map(int, args.bins_range)

iF = R.TFile.Open(args.input)
oF = open(args.output, "w")
oF2 = open(args.output_erel, "w")

for cut in args.cuts:
    tot_content = [ ] 
    tot_stat_error_2 = [ ]
    samples_err = {}
    for sample in samples:
        h = iF.Get("{}/{}/histo_{}".format(cut, args.var, sample))
        stat_err_up = np.sqrt(rnp.array(h.GetSumw2())[bins[0]: bins[1]])
        bin_content = [ h.GetBinContent(i) for i in range(bins[0]+1,bins[1]+1)]
        err_rel = [ err / nom for err, nom in zip(stat_err_up, bin_content)]
        samples_err[sample] = stat_err_up
        print sample, err_rel
        oF2.write("{};{};{}\n".format(cut, sample,  ",".join(map(str,err_rel))))
        if len(tot_content):
            for i in range(len(err_rel)):
                tot_content[i] += bin_content[i]
                tot_stat_error_2[i] += stat_err_up[i]**2
        else:
            tot_content = bin_content
            tot_stat_error_2 = [err**2 for err in stat_err_up]
    # final check
    tot_stat_error = np.sqrt(tot_stat_error_2)
    samples_err_fraction = {}
    for sample in samples:
        err_fract = [ e/tot for e,tot in zip(samples_err[sample], tot_stat_error)]
        samples_err_fraction[sample] = err_fract
        # print sample, err_fract
        oF.write("{};{};{}\n".format(cut, sample,  ",".join(map(str,err_fract))))

oF.close() 
oF2.close()

