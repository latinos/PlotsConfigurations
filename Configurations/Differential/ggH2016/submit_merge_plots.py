#!/usr/bin/env python

import os
import sys
import shutil
import subprocess

execfile('configuration.py')

samples = {}
execfile(samplesFile)

try:
    os.mkdir(outputDir + '_merged')
except OSError:
    pass
try:
    os.mkdir('merge_log')
except OSError:
    pass

inFullPath = os.path.realpath(outputDir)
outFullPath = os.path.realpath(outputDir + '_merged')

rootFiles = os.listdir(outputDir)
need_merging = []

for sname in samples:
    files = [f for f in rootFiles if f.startswith('plots_' + tag + '_ALL_' + sname + '.')]
    if len(files) > 1:
        need_merging.append(sname)
    else:
        shutil.copyfile(outputDir + '/' + files[0], outputDir + '_merged/' + files[0])

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
