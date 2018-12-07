from multiprocessing import Pool
import sys 
import os

if len(sys.argv) < 2:
    print "Insert number of workers"
    exit


# Read source.txt and target.txt files containing list of file.
sources = [ a[:-1] for a in open("source.txt").readlines()]
targets = [ a[:-1] for a in open("target.txt").readlines()]

files_to_copy = []

# Check files missing in target dir
for f in sources:
    if not f in targets:
        files_to_copy.append(f)

# Copy command as a function
def copy(file):
    os.system("gfal-copy srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/" + file +" /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"+file)

# Parallel workers
pool = Pool(int(sys.argv[1]))

# Apply the copy function on the list of files using the workers
pool.map(copy, files_to_copy)

