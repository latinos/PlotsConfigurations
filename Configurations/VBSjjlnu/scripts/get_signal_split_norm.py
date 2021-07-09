import ROOT as R 
import sys 
from collections import defaultdict
import pandas as pd

VBS_samples = ["VBS_osWW", "VBS_ssWW", "VBS_WZjj", "VBS_WZll", "VBS_ZZ"]
VV_samples = ["VV_osWW", "VV_ssWW", "VV_WZjj", "VV_WZll", "VV_ZZ"]

cuts = [ ] 

for cat in ["res","boost"]:
    for fl in ["ele","mu"]:
        cuts.append("{}_sig_{}".format(cat, fl))

iF = R.TFile.Open(sys.argv[1])
results = defaultdict(list)

for cut in cuts:
    for s in VBS_samples + VV_samples:    
        h = iF.Get("{}/events/histo_{}".format(cut, s))
        N = h.Integral()
        results["sample"].append(s)
        results["cut"].append(cut)
        results["N"].append(N)

    
df = pd.DataFrame(results, columns=["sample","cut","N"])
df.to_csv(sys.argv[2], index=False, sep=";")