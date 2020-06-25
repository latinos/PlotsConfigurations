import re 
import sys 

regex = r"(?P<channel>\S*)\s*(?P<sample>\S*)\s*(?P<prefitnorm>\d*\.\d*)\s[+]\/-\s(?P<prefiterr>\d*\.\d*)\s*(?P<sbnorm>\d*\.\d*)\s[+]\/-\s(?P<sberr>\d*\.\d*)\s*(?P<bnorm>\d*\.\d*)\s[+]\/-\s(?P<berr>\d*\.\d*)"


lines = open(sys.argv[1]).readlines()

results = []

for l in lines:
    match = re.match(regex, l)

    if match: 
        channel = match.group("channel")
        sample = match.group("sample")
        prefitnorm = match.group("prefitnorm")
        prefiterr = match.group("prefiterr")
        norm = match.group("sbnorm")
        incert = match.group("sberr")

        if not "wjetcr" in channel: continue 
        if not "Wjets" in sample: continue

       
        results.append((channel, sample, prefitnorm,prefiterr, norm, incert))

with open("norms_postfit.txt", "w") as of:
    of.write("channel;bin;prefitnorm;prefiterr;norm;err\n")
    for r in results:
        of.write("{};{};{};{};{};{}\n".format(*r))