'''source /cvmfs/sft.cern.ch/lcg/views/LCG_99/x86_64-centos7-gcc10-opt/setup.sh'''

import os,sys
from multiprocessing import Pool 
from glob import glob


files = glob("*.root")

def chunks(lst, n):
    """Yield successive n-sized chunks from lst."""
    nchunk = 0
    for i in range(0, len(lst), n):
        yield nchunk, lst[i:i + n]
        nchunk +=1

nfiles = int(sys.argv[1])

print(files, nfiles)
os.makedirs("hadd_out", exist_ok=True)


def hadd(i, list_files):
    os.system("hadd -ff hadd_out/nano_{}.root {}".format(i, " ".join(list_files)))

p = Pool()
p.starmap(hadd, chunks(files, nfiles))