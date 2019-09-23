import os
import sys
import math
import ROOT
import root_numpy

import common

fitdir = os.path.dirname(os.path.realpath(sys.argv[1]))
obs = sys.argv[2]

sigma_fid = 82.5

if obs == 'njet':
    binnorms = [0.553843, 0.263424, 0.121090, 0.039476, 0.022167]

elif obs == 'ptH':
    binnorms = [0.332666, 0.300039, 0.185110, 0.093513, 0.063778, 0.024895]

npoi = len(binnorms)

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

    sigma_total = 0.
    independent_total = 0.

    ir = 1
    for imu in range(npoi):
        if imu == idep:
            line += '& $(%.2f)$ ' # will insert later
        else:
            line += getentry(result, ir, result[0][0])
            independent_total += result[0][ir] * binnorms[imu]
            ir += 1

    table += line % (result[0][0] * (1. - independent_total) / binnorms[idep])
    table += '\\\\\n'

    total_sigma = result[0][0] * (independent_total + (1. - independent_total) / binnorms[idep]) * sigma_fid

    source.Close()

table += '      \\hline\n'
table += '      Original fit $\\mu$ & \mdash '

source = ROOT.TFile.Open(sys.argv[1])
limit = source.Get('limit')
result = root_numpy.tree2array(limit, ['r_%d' % imu for imu in range(npoi)])

for imu in range(npoi):
    table += getentry(result, imu)

table += '\\\\\n'

print table
