import re 
import sys 
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputfile", help="Input file from combine", type=str)
parser.add_argument("-o","--outputfile", help="output file", type=str)
parser.add_argument("-c","--channel", help="Channel filter", type=str)
parser.add_argument("-p","--process", help="Process filter", type=str)
args = parser.parse_args()

regex = r"(?P<channel>\S*)\s*(?P<sample>\S*)\s*(?P<prefitnorm>\d*\.\d*)\s[+]\/-\s(?P<prefiterr>\d*\.\d*)\s*(?P<sbnorm>\d*\.\d*)\s[+]\/-\s(?P<sberr>\d*\.\d*)\s*(?P<bnorm>\d*\.\d*)\s[+]\/-\s(?P<berr>\d*\.\d*)"


lines = open(args.inputfile).readlines()
channel_filter = args.channel
process_filter = args.process

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

        if not channel_filter in channel: continue 
        if not process_filter in sample: continue

       
        results.append((channel, sample, prefitnorm,prefiterr, norm, incert, float(norm)/float(prefitnorm)))

with open(args.outputfile, "w") as of:
    of.write("channel;bin;prefitnorm;prefiterr;norm;err;post_over_pre\n")
    for r in results:
        of.write("{};{};{};{};{};{};{}\n".format(*r))