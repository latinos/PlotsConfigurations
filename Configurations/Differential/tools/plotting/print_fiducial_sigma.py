import os
import sys
import math
import ROOT

import common

try:
    tag = sys.argv[1]
except:
    tag = 'F0Dep'

card_tag = 'binrenorm'

confdir = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))

sigma = 0.

source = ROOT.TFile.Open('%s/fiducial/rootFile/plots_Fiducial.root' % confdir)

_, htotal, statonly = common.get_fiducial_histograms(source, 'events', ['ggH_hww', 'qqH_hww', 'WH_hww', 'ZH_hww', 'ggZH_hww', 'ttH_hww'], add_stat_only=True)

sigma = htotal.GetBinContent(1)
sigmastat = statonly.GetBinError(1)
sigmaerr = math.sqrt(math.pow(htotal.GetBinError(1), 2.) - sigmastat * sigmastat)

print '%.1f \pm %.1f (theo.) \pm %.1f (stat.)' % (sigma, sigmaerr, sigmastat)

source.Close()

def make_line(results_dir, obs, dataset, text=False):
    source_path = '%s/integrated/higgsCombineIntegratedUnreg%s.MultiDimFit.mH120.root' % (results_dir, tag)
    breakdown_path = '%s/higgsCombineIntegratedUnreg{comp}.MultiDimFit.mH120.root' % results_dir

    mu = common.get_mus(obs, source_path, breakdown_path=breakdown_path, rnames=['r'])[0]

    line = ''

    if obs == 'ptH':
        line += '      \multirow{2}{*}{%s} ' % dataset
    else:
        line += '                          '

    line += '& \\%s ' % obs
    if abs(round(mu[1] * 100.) - round(mu[2] * 100.)) <= 2.:
        line += '& $%.2f \pm %.2f$ ' % mu[:2]
    else:
        line += '& $%.2f_{-%.2f}^{+%.2f}$ ' % mu[:3]

    for ierr in range(3, 13, 2):
        errlo, errhi = mu[ierr:ierr + 2]
        if abs(round(errlo * 100.) - round(errhi * 100.)) <= 2.:
            line += '& $ \pm %.2f$ ' % errlo
        else:
            line += '& ${}_{-%.2f}^{+%.2f}$ ' % (errlo, errhi)

    if abs(round(mu[1] * 100.) - round(mu[2] * 100.)) <= 2.:
        line += '& $%.1f \pm %.1f$ ' % (sigma * mu[0], sigma * mu[1])
    else:
        line += '& $%.1f_{-%.1f}^{+%.1f}$ ' % tuple(map(lambda x: x * sigma, mu[:3]))

    line += '\\\\\n'
    
    if text:
        line_text = '\\mufid & = '
        if abs(round(mu[1] * 100.) - round(mu[2] * 100.)) <= 2.:
            line_text += '%.2f \pm %.2f' % mu[:2]
        else:
            line_text += '%.2f_{-%.2f}^{+%.2f}' % mu[:3]

        line_text += ' \\thickspace \\left('

        breakdown = []
        for icomp, comp in enumerate(['stat.', 'exp.', 'signal', 'bkg.', 'lumi.']):
            errlo = mu[3 + 2 * icomp]
            errhi = mu[4 + 2 * icomp]
            if abs(round(errlo * 100.) - round(errhi * 100.)) <= 2.:
                breakdown.append('\pm %.2f \\, (\\text{%s})' % (errlo, comp))
            else:
                breakdown.append('{}_{-%.2f}^{+%.2f} \\, (\\text{%s})' % (errlo, errhi, comp))
        line_text += ' \\, '.join(breakdown)
        line_text += '\\right), \\\\\n'
        line_text += '  \\sfid & = '
        if abs(round(mu[1] * 100.) - round(mu[2] * 100.)) <= 2.:
            line_text += '%.1f \pm %.1f\\fb' % (sigma * mu[0], sigma * mu[1])
        else:
            line_text += '%.1f_{-%.1f}^{+%.1f}\\fb' % tuple(map(lambda x: x * sigma, mu[:3]))

        print line_text

    return line

table = ''

for year in ['2016', '2017', '2018']:
    for obs in ['ptH', 'njet']:
        results_dir = '%s/ggH%s/merged_cards/%s_%s' % (confdir, year, obs, card_tag)
        table += make_line(results_dir, obs, year)

for obs in ['ptH', 'njet']:
    results_dir = '%s/combination/%s_%s' % (confdir, obs, card_tag)
    table += make_line(results_dir, obs, 'combination', text=True)

print table
