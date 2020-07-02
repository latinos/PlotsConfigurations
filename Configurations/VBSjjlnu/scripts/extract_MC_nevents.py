from __future__ import print_function
import ROOT as R 
R.TH1.SetDefaultSumw2()
import argparse

'''
This script joins the histograms of subsamples reading datacards shapes files. 
'''

parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-s","--sample", help="Sample", type=str)
args = parser.parse_args()

exec(open(args.config))

samples= {}
exec(open(samplesFile))

tot_events = 0
tot_pos_events = 0
tot_neg_events = 0

samples_events = {}

for file in samples[args.sample]["name"]:
    file_name = file[file.rfind("/")+1:]
    sample_name = file_name[:file_name.rfind("__part")]
    if sample_name not in samples_events:
        samples_events[sample_name] = [0.,0.,0]

    print("- {:>15} >".format(file_name), end="" )
    f_events = 0
    f_pos_events = 0
    f_neg_events = 0

    f = R.TFile(file)
    tree = f.Get("Events")
    entries = tree.GetEntries()
    if entries>0: 
        tree.Draw("XSWeight>>h(2,-10,10)", "mjj_vbs>500 && deltaeta_vbs>2.5", "goff")
        h = R.gDirectory.Get("h")
        f_events = h.Integral()
        f_pos_events = h.GetBinContent(2)
        f_neg_events = h.GetBinContent(1)
    else:
        f_events, f_pos_events, f_neg_events = 0,0,0

    print("events: {:<5}, +{:<5} -{:<5}".format(f_events, f_pos_events, f_neg_events))
    tot_events += f_events
    tot_pos_events += f_pos_events
    tot_neg_events += f_neg_events
    samples_events[sample_name][0] += f_events
    samples_events[sample_name][1] += f_pos_events
    samples_events[sample_name][2] += f_neg_events

print("\n\n>>> Tot > events: {:<7},  +{:<7} -{:<7}".format( tot_events, tot_pos_events, tot_neg_events))
for sample, (t,p,n) in samples_events.items():
    print("\t > Sample: {:>15} > events: {:<7},  +{:<7} -{:<7}".format(sample, t,p,n))