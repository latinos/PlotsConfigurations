import re
import os
from ROOT import TFile, TCanvas, gStyle, gROOT, TObject
import json

gROOT.SetBatch(True)

norms_all = {}
for era in ["2016_HIPM","2016_noHIPM","2017","2018"]:
    norms_all[era] = json.load(open("../Full%s_v9/inclusive/btagNorm.json"%era))

filename = "/eos/user/d/dittmer/hww2018/WW/smp_24_008_datacards/input/inclusive_DF/datacards_FullRun2/datacard_combined.txt"
with open(filename,"r") as infile:
    lines = infile.readlines()

n_process = 0
n_bin = 0
rootfiles = []
lines_out = []
for line in lines:
    splitline = line.split()
    if splitline[0] == "bin":
        n_bin += 1
        if n_bin == 2 : 
            bins = splitline[1:]
        lines_out.append(line)
    elif splitline[0] == "process":
        n_process += 1
        if n_process == 1: 
            processes = splitline[1:]
        lines_out.append(line)
    elif splitline[0] == "rate":
        rates = splitline[1:]
        spaces = re.findall("\s+",line)
        new_rates = []
        for b,p,r in zip(bins,processes,rates):
            if "Fake" in p or "Data" in p:
                new_rates.append(r)
            else:
                era = "201"+b.split("201")[1]
                ijet = [x for x in b.split("_") if x in ["0j","1j","2j","3j"]][0]
                if p.startswith("WW_") or p.startswith("ggWW_") : p = p.split("_")[0]
                new_rates.append("%.4f"%(float(r)*norms_all[era][p][ijet]["nom"]))
        newline = splitline[0]+spaces[0]+("").join([new.ljust(len(old)+len(s)) for old,new,s in zip(rates,new_rates,spaces[1:])])+spaces[-1]+"\n"
        lines_out.append(newline)
    elif splitline[0] == "shapes":
        rootfiles.append(splitline[3])
        lines_out.append(line)
    else:
        lines_out.append(line)

with open(filename,"w") as outfile:
    for line in lines_out:
        outfile.write(line)

# Scale histograms in shape files
rootfiles = sorted(list(set(rootfiles)))
for rootfile in rootfiles:
    _,subdir,channel,_,_,_ = rootfile.split("/")
    era = subdir.replace("datacards_","")
    jetbin = [p for p in channel.split("_") if p in ["0j","1j","2j","3j"]][0]
    f0 = TFile.Open(os.path.dirname(filename)+"/"+rootfile,"UPDATE")
    print("Scaling histograms in %s"%os.path.dirname(filename)+"/"+rootfile)
    all_hists = [k.GetName() for k in f0.GetListOfKeys()]
    ljust = max([len(h) for h in all_hists])
    for sample in list(set(list(processes))):
        if 'Fake' in sample or 'Data' in sample: continue
        sample_hists = [h for h in all_hists if "_"+sample in h]
        s_key = sample.split("_")[0] if (sample.startswith("WW_") or sample.startswith("ggWW_")) else sample
        nuis_sort = sorted([str(k) for k in norms_all[era][s_key][jetbin].keys()])
        ljust2 = max([len(n) for n in nuis_sort])+2
        for nuis in nuis_sort:
            if nuis == "nom": continue
            hist = "histo_"+sample+"_"+nuis
            h = f0.Get(hist)
            try:
                h.Scale(norms_all[era][s_key][jetbin][nuis])
                print("Scaling %s by %s btagNorm['%s']['%s'][%s] = %s"%(hist.ljust(ljust),era,s_key,jetbin,("'%s'"%(nuis)).ljust(ljust2),norms_all[era][s_key][jetbin][nuis]))
                sample_hists.remove(hist)
            except:
                print("Histogram %s does not exist, cannot scale"%(hist))
        for hist in sample_hists:
            h = f0.Get(hist)
            print("Scaling %s by %s btagNorm['%s']['%s'][%s] = %s"%(hist.ljust(ljust),era,s_key,jetbin,"'nom'".ljust(ljust2),norms_all[era][s_key][jetbin]["nom"]))
            h.Scale(norms_all[era][s_key][jetbin]["nom"])
                
    f0.Write("",TObject.kOverwrite)
