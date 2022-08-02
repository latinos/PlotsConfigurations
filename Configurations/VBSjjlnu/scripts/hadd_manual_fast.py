import os
from multiprocessing import Pool
import sys 

tag = sys.argv[1]

def hadd(sample):
    os.system("haddfast -E -C -j 12 plots_{0}_{1}.root plots_{0}_ALL_{1}.*".format(tag, sample))
    #os.system("hadd plots_{0}_{1}.root plots_{0}_ALL_{1}*".format(tag, sample))

samples = ['VBS','top','DATA','Fake','Wjets_HT','VVV','VV','VgS','Vg','DY','VBF-V']

#p= Pool()
#p.map(hadd,samples)

for s in samples:
    hadd(s)