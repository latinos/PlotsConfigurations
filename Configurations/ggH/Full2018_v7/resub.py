import os
import sys

assert len(sys.argv) > 1

lines = []

with open('../../../../../work/jobs/mkShapes__ggH2018_v7__ALL/{}/mkShapes__ggH2018_v7__ALL__{}.jds'.format(sys.argv[1], sys.argv[1])) as infile:
  lines = infile.readlines()

with open('../../../../../work/jobs/mkShapes__ggH2018_v7__ALL/{}/mkShapes__ggH2018_v7__ALL__{}.jds'.format(sys.argv[1], sys.argv[1]), 'w+') as outfile:
  for line in lines:
    if 'JobFlavour' in line: outfile.write(line.replace('longlunch', 'workday'))
    else: outfile.write(line)

os.system('condor_submit ../../../../../work/jobs/mkShapes__ggH2018_v7__ALL/{}/mkShapes__ggH2018_v7__ALL__{}.jds'.format(sys.argv[1], sys.argv[1]))
