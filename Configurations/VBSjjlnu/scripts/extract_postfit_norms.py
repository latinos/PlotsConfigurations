import re 
import sys 

regex = r"(?P<channel>\S*)\s*(?P<sample>\S*)\s*(?P<prefitnorm>\d*\.\d*)\s[+]\/-\s(?P<prefiterr>\d*\.\d*)\s*(\d*\.\d*)\s[+]\/-\s(?P<err>\d*\.\d*)\s*(?P<norm>\d*\.\d*)\s[+]\/-\s(\d*\.\d*)"


lines = open(sys.argv[1]).readlines()

results = []

for l in lines:
    match = re.match(regex, l)

    if match: 
        channel = match.group("channel")
        sample = match.group("sample")
        prefitnorm = match.group("prefitnorm")
        prefiterr = match.group("prefiterr")
        norm = match.group("norm")
        incert = match.group("err")

        if not "wjetcr_res_dnnhigh" in channel: continue 
        if not "Wjets" in sample: continue

       
        results.append((channel, sample, prefitnorm,prefiterr, norm, incert))

with open("norms_postfit.txt", "w") as of:
    of.write("channel;bin;prefitnorm;prefiterr;norm;err\n")
    for r in results:
        of.write("{};{};{};{};{};{}\n".format(*r))