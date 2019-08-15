#!/usr/bin/env python

####################################################################################
### Resubmit failed or aborted jobs
### In principle this should be taken care of by batchTools. Y.I. is just not
### willing to deal with it at the moment.
####################################################################################

import os
import sys
import glob
import re
import shutil
import subprocess
from argparse import ArgumentParser

import LatinoAnalysis.Tools.userConfig as userConfig

argParser = ArgumentParser(description = 'Run hadd in batch')
argParser.add_argument('--pycfg', '-c', metavar = 'PATH', dest = 'pycfg', default = 'configuration.py', help = 'Configuration file name.')
argParser.add_argument('--flavour', '-f', metavar = 'FLAVOUR', dest = 'flavour', default = 'longlunch', help = 'New job flavour')

args = argParser.parse_args()
del sys.argv[1:]

execfile(args.pycfg)

jobsdir = os.path.realpath('%s/mkShapes__%s' % (userConfig.jobDir, tag))
jobnames = []

for jdspath in glob.glob('%s/mkShapes__%s__ALL__*.jds' % (jobsdir, tag)):
    matches = re.match('mkShapes__%s__ALL__([^.]+)(|\.[0-9]+(?:|\.[0-9]+))\.jds' % tag, os.path.basename(jdspath))
    sample, isplit = [matches.group(i) for i in range(1, 3)]
    rootfile = '%s/plots_%s_ALL_%s' % (outputDir, tag, sample)
    if isplit:
        rootfile += isplit
    rootfile += '.root'

    if not os.path.exists(rootfile):
        jobnames.append(os.path.basename(jdspath).replace('.jds', ''))

jds = 'executable = {jobsdir}/$(JobName).sh\n'
jds += 'universe = vanilla\n'
jds += 'output = {jobsdir}/$(JobName).out\n'
jds += 'error = {jobsdir}/$(JobName).err\n'
jds += 'log = {jobsdir}/$(JobName).log\n'
jds += 'request_cpus = 1\n'
#jds += 'periodic_hold = CurrentTime - EnteredCurrentStatus > 28740\n'
jds += '+JobFlavour = "%s"\n' % args.flavour
if hasattr(userConfig, 'condorAccountingGroup'):
    jds += 'accounting_group = %s\n' % userConfig.condorAccountingGroup
    jds += '+AccountingGroup = %s\n' % userConfig.condorAccountingGroup
jds += 'queue JobName in (\n'
for jobname in jobnames:
    jds += jobname + '\n'
jds += ')\n'

jds = jds.format(jobsdir = jobsdir)

proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
out, err = proc.communicate(jds)

if proc.returncode != 0:
    sys.stderr.write(err)
    raise RuntimeError('Job submission failed.')

print out.strip()
