import os
import sys
import math
import ROOT
import root_numpy

import common

unregularized_path = sys.argv[1]
fitdir = os.path.dirname(os.path.realpath(sys.argv[1]))
obs = sys.argv[2]

npoi = len(common.binnames[obs])

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

def getentry(result, ir, scale=1.):
    return '& $%.2f_{-%.2f}^{+%.2f}$ ' % (
        result[0][ir] * scale,
        (result[0][ir] - result[1 + ir * 2][ir]) * scale,
        (result[2 + ir * 2][ir] - result[0][ir]) * scale
    )

table = '      Dependent '
table += '& $\\mufid$ '
for label in common.bintitles[obs]:
    table += '& $\\mufid\\rho_{%s}$ ' % label.replace('#', '\\')
table += '\\\\\n'

table += '      \\hline\n'

for idep in range(npoi):
    label = common.bintitles[obs][idep]
    line = '      $\\rho_{%s}$ ' % label.replace('#', '\\')
    
    source = ROOT.TFile.Open('%s/integrated/higgsCombineIntegratedUnregF%dDep.MultiDimFit.mH120.root' % (fitdir, idep))
    if not source:
        line += '& \mdash ' * (npoi + 1)
        line += '\\\\\n'
        table += line
        continue

    limit = source.Get('limit')
    try:
        result = root_numpy.tree2array(limit, ['r'] + ['f_%d' % imu for imu in range(npoi) if imu != idep])
    except:
        print idep
        limit.Print()
        raise

    line += getentry(result, 0)

    independent_total = 0.

    ir = 1
    for imu in range(npoi):
        if imu == idep:
            line += '& $(%.2f)$ ' # will insert later
        else:
            line += getentry(result, ir, result[0][0])
            independent_total += result[0][ir] * fiducialFrac[imu]
            ir += 1

    table += line % (result[0][0] * (1. - independent_total) / fiducialFrac[idep])
    table += '\\\\\n'

    source.Close()

table += '      \\hline\n'
table += '      Original fit $\\mu$ & \mdash '

source = ROOT.TFile.Open(unregularized_path)
limit = source.Get('limit')
result = root_numpy.tree2array(limit, ['r_%d' % imu for imu in range(npoi)])

for imu in range(npoi):
    table += getentry(result, imu)

table += '\\\\\n'

print table
