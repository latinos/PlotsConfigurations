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
import collections
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Run hadd in batch')
argParser.add_argument('--pycfg', '-c', metavar = 'PATH', dest = 'pycfg', default = 'configuration.py', help = 'Configuration file name.')
argParser.add_argument('--out-suffix', '-x', metavar = 'NAME', dest = 'out_suffix', default = 'merged', help = 'Suffix for the output directory name. Appended to the outputDir parameter of the configuration file.')

args = argParser.parse_args()
del sys.argv[1:]

execfile(args.pycfg)

inFullPath = os.path.realpath(outputDir)
outFullPath = os.path.realpath('%s_%s' % (outputDir, args.out_suffix))

#if os.path.isdir(outFullPath):
#    sys.stderr.write('Directory %s already exists.\n' % outFullPath)
#    sys.exit(2)

try:
    os.makedirs(outFullPath)
except OSError:
    pass

samples = collections.OrderedDict()
execfile(samplesFile)

try:
    os.mkdir('merge_log')
except OSError:
    pass

rootFiles = os.listdir(inFullPath)
need_merging = []

for sname in samples:
    if os.path.exists(outFullPath + '/plots_' + tag + '_ALL_' + sname + '.root'):
        continue

    files = [f for f in rootFiles if f.startswith('plots_' + tag + '_ALL_' + sname + '.')]
    if len(files) == 0:
        print 'Sample', sname, 'has no ROOT file'
    elif len(files) == 1:
        newname = 'plots_' + tag + '_ALL_' + sname + '.root'
        if inFullPath.startswith('/eos/cms'):
            subprocess.Popen(['xrdcp', 'root://eoscms.cern.ch/%s/%s' % (inFullPath, files[0]), '%s/%s' % (outFullPath, newname)]).communicate()
        else:
            shutil.copyfile('%s/%s' % (inFullPath, files[0]), '%s/%s' % (outFullPath, newname))
    else:
        need_merging.append(sname)

print need_merging

jds = 'executable = %s/merge_plots.sh\n' % os.path.dirname(os.path.realpath(__file__))
jds += 'universe = vanilla\n'
jds += 'arguments = "$(Sample) %s %s %s"\n' % (tag, inFullPath, outFullPath)
jds += 'environment = "CMSSW_BASE=%s"\n' % os.getenv('CMSSW_BASE')
jds += 'output = merge_log/$(Sample).out\n'
jds += 'error = merge_log/$(Sample).err\n'
jds += 'log = merge_log/$(Sample).log\n'
#jds += 'request_cpus = 8\n'
jds += 'accounting_group = group_u_CMST3.all\n'
jds += '+AccountingGroup = group_u_CMST3.all\n'
jds += '+JobFlavour = "longlunch"\n'
jds += 'queue Sample in (\n'
for sname in need_merging:
    jds += sname + '\n'
jds += ')\n'

proc = subprocess.Popen(['condor_submit'], stdin=subprocess.PIPE)
proc.communicate(jds)

if proc.returncode != 0:
    sys.stderr.write(err)
    raise RuntimeError('Job submission failed.')
