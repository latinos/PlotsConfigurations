#!/usr/bin/env python

####################################################################################
### Run hadd in batch
### We have too many cuts and samples in the differential measurement that a
### single hadd (with or without multicore option) fails. The second-best thing
### we can do is to merge them by sample. mkPlot and mkDatacard have been updated
### to accept a directory with per-sample histogram files as the "inputFile"
### argument.
####################################################################################

import os
import sys
import shutil
import subprocess
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Run hadd in batch')
argParser.add_argument('--pycfg', '-c', metavar = 'PATH', dest = 'pycfg', default = 'configuration.py', help = 'Configuration file name.')
argParser.add_argument('--out-suffix', '-x', metavar = 'NAME', dest = 'out_suffix', default = 'merged', help = 'Suffix for the output directory name. Appended to the outputDir parameter of the configuration file.')

args = argParser.parse_args()
del sys.argv[1:]

execfile(args.pycfg)

if os.path.isdir('%s_%s' % (outputDir, args.out_suffix)):
    sys.stderr.write('Directory %s_%s already exists.' % (outputDir, args.out_suffix))
    sys.exit(2)

samples = {}
execfile(samplesFile)

os.makedirs(outputDir + '_merged')

try:
    os.mkdir('merge_log')
except OSError:
    pass

inFullPath = os.path.realpath(outputDir)
outFullPath = os.path.realpath('%s_%s' % (outputDir, args.out_suffix))

rootFiles = os.listdir(outputDir)
need_merging = []

for sname in samples:
    files = [f for f in rootFiles if f.startswith('plots_' + tag + '_ALL_' + sname + '.')]
    if len(files) > 1:
        need_merging.append(sname)
    else:
        shutil.copyfile('%s/%s' % (outputDir, files[0]), '%s_%s/%s' % (outputDir, args.out_suffix, files[0]))

jds = 'executable = merge_plots.sh\n'
jds += 'universe = vanilla\n'
jds += 'arguments = "$(Sample) %s %s %s"\n' % (tag, inFullPath, outFullPath)
jds += 'getenv = True\n'
jds += 'output = merge_log/$(Sample).out\n'
jds += 'error = merge_log/$(Sample).err\n'
jds += 'log = merge_log/$(Sample).log\n'
jds += 'request_cpus = 8\n'
jds += '+JobFlavour = "espresso"\n'
jds += 'queue Sample in (\n'
for sname in need_merging:
    jds += sname + '\n'
jds += ')\n'

proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
out, err = proc.communicate(jds)

if proc.returncode != 0:
    sys.stderr.write(err)
    raise RuntimeError('Job submission failed.')

print out.strip()
