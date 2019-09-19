#!/usr/bin/env python

# Make integrated fit model

import os
import sys
import time
import resource
import subprocess
import ROOT

try:
    resource.setrlimit(resource.RLIMIT_STACK, (resource.RLIM_INFINITY, resource.RLIM_INFINITY))
except ValueError:
    pass

sys.path.append('%s/plotting' % os.path.dirname(os.path.dirname(os.path.realpath(__file__))))
import common

MAXPROC = 4

obs = sys.argv[1]
outpath = sys.argv[2]

npoi = len(common.binnames[obs])

try:
    ideps = [int(sys.argv[3])]
except IndexError:
    ideps = range(npoi)

fiducialFrac = [0.] * npoi

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__)))))
for proc in ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww']:
    h = source.Get('fiducial/%s/histo_%s' % (obs, proc))
    for ix in range(npoi):
        fiducialFrac[ix] += h.GetBinContent(ix + 1)

source.Close()

fiducialTotal = sum(fiducialFrac)
for ix in range(len(fiducialFrac)):
    fiducialFrac[ix] /= fiducialTotal

procs = []

def wait_for_queue():
    while len(procs) >= MAXPROC:
        print 'len procs', len(procs)
        ip = 0
        while ip != len(procs):
            procs[ip][0].poll()
            if procs[ip][0].returncode is not None:
                proc, name = procs.pop(ip)
                out, err = proc.communicate()
                with open('%s/make_integrated_cards_%s.log' % (outpath, name), 'w') as log:
                    log.write(out)
                    log.write('------------------------------------\n')
                    log.write(err)
            else:
                ip += 1

        if len(procs) >= MAXPROC:
            time.sleep(5)

try:
    os.makedirs('%s/integrated' % outpath)
except OSError:
    pass

if os.path.exists('%s/histos.root' % outpath):
    try:
        os.symlink('%s/histos.root' % outpath, '%s/integrated/histos.root' % outpath)
    except OSError:
        pass

for idep in ideps:
    with open('%s/integrated/fullmodel_integrated_f%ddep.txt' % (outpath, idep), 'w') as card_out:
        with open('%s/fullmodel_unreg.txt' % outpath) as card_unreg:
            for line in card_unreg:
                card_out.write(line)
    
        fdexpr = '(1.'
        islot = 0
        for ibin in range(npoi):
            if ibin == idep:
                continue
            card_out.write('f_%d rateParam * *H_hww_%s 1. [-10.,10.]\n' % (ibin, common.binnames[obs][ibin]))
            fdexpr += '-%f*@%d' % (fiducialFrac[ibin], islot)
            islot += 1
    
        fdexpr += ')/%f' % fiducialFrac[idep]
        card_out.write('f_%d rateParam * *H_hww_%s %s %s\n' % (idep, common.binnames[obs][idep], fdexpr, ','.join('f_%d' % ibin for ibin in range(npoi) if ibin != idep)))
    
        for ic in range(npoi - 2):
            card_out.write('constr{ic} constr @0*@4*(@1-2*@2+@3) r,f_{low},f_{mid},f_{high},regularize[0.] delta[10.]\n'.format(ic = ic, low = ic, mid = ic + 1, high = ic + 2))

    name = 'f%ddep' % idep
        
    cmd = ['text2workspace.py', '%s/integrated/fullmodel_integrated_%s.txt' % (outpath, name), '-o', '%s/integrated/fullmodel_integrated_%s.root' % (outpath, name)]
    print ' '.join(cmd)
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    #procs.append((proc, name))

    out, err = proc.communicate()
    with open('%s/integrated/make_integrated_cards_%s.log' % (outpath, name), 'w') as log:
        log.write(out)
        log.write('------------------------------------\n')
        log.write(err)

#wait_for_queue()
