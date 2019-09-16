import os
import sys
import math
import ROOT

import common

fitdir = os.path.dirname(os.path.realpath(sys.argv[1]))
differential_source = ROOT.TFile.Open(sys.argv[1])
obs = sys.argv[2]

sigma_fid = 82.5

if obs == 'njet':
    binnorms = [0.553843, 0.263424, 0.121090, 0.039476, 0.022167]

elif obs == 'ptH':
    binnorms = [0.332666, 0.300039, 0.185110, 0.093513, 0.063778, 0.024895]

lines = []
lines.append('      Parameter ')
for label in common.bintitles[obs]:
    lines[0] += '& $\\rho_{%s}$ ' % label.replace('#', '\\')
lines[0] += '& Original fit $\\mu$ \\\\'
lines.append('      \\hline')

lines.append('      $\\mufid$ ')
lines.append('      \\hline')
for label in common.bintitles[obs]:
    lines.append('      $\\mufid\\rho_{%s}$ ' % label.replace('#', '\\'))

for idep in range(len(binnorms)):
    integrated_source = ROOT.TFile.Open('%s/integrated/multidimfitIntegratedUnregF%dDep.root' % (fitdir, idep))
    if not integrated_source:
        lines[1] += '& \mdash '
        for imu in range(len(binnorms)):
            lines[imu + 4] += '& \mdash '
    
        continue
        
    integrated_pars = integrated_source.Get('fit_mdf').floatParsFinal()

    mufid = integrated_pars.find('r')

    lines[1] += '& $%.2f \\pm %.2f$ ' % (mufid.getVal(), mufid.getError())

    sigma_total = 0.
    independent_total = 0.

    for imu in range(len(binnorms)):
        if imu == idep:
            lines[imu + 4] += '& $(%.2f)$ ' # will insert later
        else:
            rho = integrated_pars.find('f_%d' % imu)

            rhomufid = rho.getVal() * mufid.getVal()
            rhomufid_err = rhomufid * math.sqrt(math.pow(rho.getError() / rho.getVal(), 2.) + math.pow(mufid.getError() / mufid.getVal(), 2.))
        
            lines[imu + 4] += '& $%.2f \\pm %.2f$ ' % (rhomufid, rhomufid_err)

            independent_total += rho.getVal() * binnorms[imu]

    lines[idep + 4] = lines[idep + 4] % (mufid.getVal() * (1. - independent_total) / binnorms[idep])

    total_sigma = mufid.getVal() * (independent_total + (1. - independent_total) / binnorms[idep]) * sigma_fid

differential_pars = differential_source.Get('fit_mdf').floatParsFinal()

for imu in range(len(binnorms)):
    mu = differential_pars.find('r_%d' % imu)

    lines[imu + 4] += '& $%.2f \\pm %.2f$ \\\\' % (mu.getVal(), mu.getError())

print '\n'.join(lines)
