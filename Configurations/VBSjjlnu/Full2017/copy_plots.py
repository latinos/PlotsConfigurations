#!/usr/bin/env python 

from __future__ import print_function
import os
import sys
import argparse
from collections import defaultdict
from multiprocessing import Pool



parser = argparse.ArgumentParser()
parser.add_argument("-i","--inputdir", type=str, help="Input dir")
parser.add_argument("-p","--prefix", type=str, default="/eos/user/d/dvalsecc/www/", help="Output dir prefix")
parser.add_argument("-o","--outputdir", type=str, help="Output dir")
parser.add_argument("-n", "--name", type=str, help="Production name")
parser.add_argument("-c", "--cuts", type=str, help="Cuts.py file path")
parser.add_argument("-t", "--threads", type=int, default=4, help="Number of threads")
args = parser.parse_args()

cuts = {}
exec(open(args.cuts).read())

# now let's prepare the files list
files = os.listdir(args.inputdir)

lists = defaultdict(list)

for file in files:
    l = 0
    c = None
    for cut in cuts:
        if cut in file:
            # Since cuts can be like  (looseVBS,looseVBS_bveto ) we check the longest
            # matched cut
            if len(cut) >= l : 
                c = cut
                l = len(cut)          
    if c != None:  lists[c].append(file)
jobs = []


for cat, lfile in lists.items():
    ofile = "{}_filelist.txt".format(cat)
    with open(ofile, "w") as of:
        for f in lfile:
            of.write(f+ "\n")
    jobs.append( (cat, ofile, args.inputdir, args.prefix, args.outputdir, args.name ) )

# now execute rsync in parallel for each cut
def do_rsync(args):
    cut, file, inputdir, prefix, outputdir, name = args
    os.system("mkdir -p {}/{}/{}/{}".format(prefix, outputdir, name, cut))
    os.system("rsync -a --info=progress2 --files-from={0} {1}/ {2}/{3}/{4}/{5}/".format(
                        file, inputdir, prefix, outputdir, name, cut))
    os.system("cp {0}/index.php {0}/{1}/{2}/{3}/".format(prefix, outputdir, name, cut))
    # Write out the cut in a txt file
    with open("{}/{}/{}/{}/cut.txt".format(prefix, outputdir, name, cut), "w") as f:
        f.write("Supercut:\n")
        f.write(supercut.replace("     ", " ")+"\n\n\n")
        f.write("Cut:\n")
        f.write(cuts[cut].replace("     ", " "))
    # remove list of files file
    os.system("rm {}".format(file))
    print("{:<20} >>> https://dvalsecc.web.cern.ch/dvalsecc/{}/{}/{}".format(cut,outputdir,name, cut))
            

print(jobs)
pool = Pool(args.threads)
pool.map(do_rsync, jobs)

# Now copy the configuration files
os.system("rsync -a --exclude '*.png' --exclude 'plot*/*.root' {}/../ {}/{}/{}/configuration/".format(args.inputdir,args.prefix, args.outputdir, args.name))
# and copy the index.php everywhere

os.system("find {0}/{1} -type d -exec cp {0}/index.php {{}} \;".format(args.prefix, args.outputdir))

for cut in sorted(cuts):
    print("{:<20} >>> https://dvalsecc.web.cern.ch/dvalsecc/{}/{}/{}".format(cut,args.outputdir, args.name, cut))

print("DONE!")