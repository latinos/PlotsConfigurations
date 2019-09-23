import os
import sys
import array
import re
import math
import numpy as np

from argparse import ArgumentParser

argParser = ArgumentParser(description='Make pretty plots')
argParser.add_argument('sourcePath', metavar='PATH', help='Input ROOT file name.')
argParser.add_argument('dataset', metavar='DATASET', help='Dataset (2016, 2017, 2018, combination)')
argParser.add_argument('--blind', '-B', action='store_true', dest='blind', help='Blind SR.')
argParser.add_argument('--no-higgs', '-N', action='store_true', dest='noHiggs', help='Do not show Higgs contributions.')
argParser.add_argument('--make-cr-spectra', '-a', metavar='OBSERVABLE', dest='makeCRSpectra', help='Make CR spectra for njet or ptH.')
argParser.add_argument('--postfit', '-p', metavar='PATH', dest='postfit', help='MultiDimFit output file containing the workspace with best-fit snapshot.')
argParser.add_argument('--combination-tag', '-g', metavar='PATH', dest='combination_tag', default='', help='Prefix to cut (bin name used in combineCards) for postfit distributions.')
argParser.add_argument('--side-by-side', '-S', action='store_true', dest='sideBySide', help='Plot postfit histograms side-by-side with prefit (broken at the moment).')
argParser.add_argument('--variable', '-v', metavar='VARIABLE', dest='variable', default='fitshape', help='Variable to plot. If not specified, variables used for the signal extraction fit will be plotted.')
argParser.add_argument('--bin-width-norm', '-W', action='store_true', dest='binWidthNorm', help='Bin-width normalize the plots.')
argParser.add_argument('--out', '-o', metavar='PATH', dest='out_path', default='.', help='Output directory.')

args = argParser.parse_args()
sys.argv = []

import common
import ROOT
import root_numpy

def merge(histlist, mergedname, name):
    if mergedname in histlist:
        histlist[mergedname].Add(histlist[name])
        histlist.pop(name).Delete()
    else:
        histlist[mergedname] = histlist.pop(name)
        histlist[mergedname].SetName('histo_' + mergedname)

plotconfigs = [
    ('minor', 'Minor SM', ROOT.kGray, 'LF'),
    ('DY', '#tau#tau', 418, 'LF'),
    ('Fake', 'nonprompt', 921, 'LF'),
    ('top', 'tW and t#bar{t}', 400, 'LF'),
    ('WW', 'WW', 851, 'LF'),
]

if not args.noHiggs:
    plotconfigs.append(('htt', 'H#rightarrow#tau#tau', ROOT.kRed + 2, 'L'))
    plotconfigs.append(('smH_hww', 'H#rightarrowWW', ROOT.kRed, 'L'))

xtitles = {
    'mllVSmth_6x6': ('i_{mTH}#times6 + i_{mll}', ''),
    'mllVSmth_8x9': ('i_{mTH}#times9 + i_{mll}', ''),
    'mllVSmth_6x6low': ('i_{mTH}#times6 + i_{mll}', ''),
    'mll_optim': ('i_{mll}', ''),
    'mll': ('m^{ll}', 'GeV'),
    'mth': ('m_{T}^{H}', 'GeV'),
    'jet1Eta': ('#eta^{j1}', ''),
    'jet2Eta': ('#eta^{j2}', ''),
    'met': ('E_{T}^{miss}', 'GeV)'),
    'metPhi': ('#phi(E_{T}^{miss})', ''),
    'ptWW': ('p_{T}^{WW}', 'GeV'),
    'ht': ('H_{T}', 'GeV'),
    'ptll': ('p_{T}^{ll}', 'GeV'),
    'dphill': ('#Delta#phi^{ll}', ''),
    'events': ('', '')
}

allprefit = {} # {cut: {proc: hist}}
allpostfit = {}
prefit_totals = {} # {cut: hist}
postfit_totals = {} # {cut: hist}

# shapes root file
source = ROOT.TFile.Open(args.sourcePath)

if args.postfit:
    wssource = ROOT.TFile.Open(args.postfit)
    ws = wssource.Get('w')
    ws.loadSnapshot('MultiDimFit')
    x = ws.var('CMS_th1x')

    combine_name = os.path.basename(args.postfit).replace('higgsCombine', '')
    combine_name = combine_name[:combine_name.find('.')]
    if combine_name == 'Test':
        mdfitsource = ROOT.TFile.Open(os.path.dirname(os.path.realpath(args.postfit)) + '/multidimfit.root')
    else:
        mdfitsource = ROOT.TFile.Open(os.path.dirname(os.path.realpath(args.postfit)) + '/multidimfit%s.root' % combine_name)
    fitresult = mdfitsource.Get('fit_mdf')

# lnN type uncertainties are not considered

cutnames = sorted(k.GetName() for k in source.GetListOfKeys())

for cut in cutnames:
    isSR = '_CR_' not in cut

    if args.postfit and '_WW_' in cut:
        continue

    if args.makeCRSpectra and isSR:
        continue

    cutdir = source.GetDirectory(cut)

    if args.variable == 'fitshape':
        if not isSR:
            dname = 'events'
            nbins = 1
        elif 'pt2ge20' in cut:
            if 'PTH_120_200' in cut or 'PTH_GT200' in cut:
                dname = 'mllVSmth_4x3'
                nbins = 12
            elif 'NJ_2' in cut:
                dname = 'mllVSmth_6x6'
                nbins = 36
            else:
                dname = 'mllVSmth_6x6'
                nbins = 36
                #dname = 'mllVSmth_8x9'
                #nbins = 72
        else:
            if 'PTH_45_80' in cut:
                dname = 'mllVSmth_4x3'
                nbins = 12
            elif 'PTH_80_120' in cut or 'PTH_120_200' in cut:
                dname = 'mllVSmth_3x3'
                nbins = 9
            elif 'PTH_200_350' in cut or 'PTH_GT350' in cut or 'PTH_GT200' in cut:
                dname = 'mllVSmth_2x2'
                nbins = 4
            else:
                dname = 'mllVSmth_6x6'
                nbins = 36

        plotsdir = cutdir.GetDirectory(dname)
    else:
        plotsdir = cutdir.GetDirectory(args.variable)

    # get the nominal shapes
    prefits = allprefit[cut] = {}
    postfits = allpostfit[cut] = {}

    for key in plotsdir.GetListOfKeys():
        proc = key.GetName().replace('histo_', '')

        if proc.endswith('Up') or proc.endswith('Down'):
            continue

        prefits[proc] = key.ReadObj()

        if args.postfit:
            if proc == 'DATA':
                continue

            bin = args.combination_tag + cut
            if 'hww' in proc:
                funcname = 'shapeSig_%s_%s_morph' % (bin, proc)
            else:
                funcname = 'shapeBkg_%s_%s_morph' % (bin, proc)

            normname = 'n_exp_final_bin%s_proc_%s' % (bin, proc)

            hist = common.make_roofit_histogram('histo_%s_%s' % (cut, proc), ws, funcname, normname)
            if hist is None:
                continue

            hist.SetBins(nbins, 0., float(nbins))
            err2 = root_numpy.array(hist.GetSumw2(), copy=False)
            err2[:] = 0.

            postfits[proc] = hist

    if args.postfit:
        postfits['DATA'] = prefits['DATA']
        
        funcname = 'prop_bin%s' % (args.combination_tag + cut)
        hist = common.make_roofit_histogram('postfit_%s_total' % cut, ws, funcname, fitresult=fitresult)
        if hist is not None:
            hist.SetBins(nbins, 0., float(nbins))
            postfit_totals[cut] = hist
        else:
            print funcname, 'missing'

    if not (args.postfit and not args.sideBySide):
        # get the uncertainty variations !!!not accounting for lnN variations!!!
        for key in plotsdir.GetListOfKeys():
            proc = key.GetName().replace('histo_', '')
            if proc == 'DATA':
                continue
    
            if not proc.endswith('Up'):
                continue
    
            nomname, shape = next((n, s) for n, s in prefits.iteritems() if proc.startswith(n + '_'))
    
            upper = key.ReadObj()
            downer = plotsdir.Get(key.GetName()[:-2] + 'Down')

            cupper = root_numpy.hist2array(upper, copy=False, include_overflow=True)
            cdowner = root_numpy.hist2array(downer, copy=False, include_overflow=True)

            err2 = root_numpy.array(shape.GetSumw2(), copy=False)
            err2 += np.square((cupper - cdowner) * 0.5)
    
            upper.Delete()
            downer.Delete()

    # we are treating all uncertainties as uncorrelated, which is wrong
    # but we don't even have the lnN uncertainties here, so it doesn't really matter
    prefit_totals[cut] = prefits['DATA'].Clone('%s_total' % cut)
    prefit_totals[cut].Reset()
    for proc, hist in prefits.iteritems():
        if proc != 'DATA':
            prefit_totals[cut].Add(hist)

    for proc in prefits.keys():
        if proc.startswith('smH_hww'):
            merge(prefits, 'smH_hww', proc)
        elif proc.startswith('Fake'):
            merge(prefits, 'Fake', proc)

    for proc in postfits.keys():
        if proc.startswith('smH_hww'):
            merge(postfits, 'smH_hww', proc)
        elif proc.startswith('Fake'):
            merge(postfits, 'Fake', proc)

if args.postfit and args.sideBySide:
    pass
elif args.postfit:
    allshapes = allpostfit
    totals = postfit_totals
else:
    allshapes = allprefit
    totals = prefit_totals

mllVSmthBins = {
    'mllVSmth_2x2': ([10., 50., 210.], [60., 110., 200.]),
    'mllVSmth_3x3': ([10., 40., 80., 210.], [60., 90., 130., 200.]),
    'mllVSmth_4x3': ([10., 40., 55., 210.], [60., 90., 110., 130., 200.]),
    'mllVSmth_6x6': ([10., 25., 40., 50., 70., 90., 210.], [60., 80., 90., 110., 130., 150., 200.]),
    'mllVSmth_8x9': ([10., 25., 35., 40., 45., 50., 55., 70., 90., 210.], [60., 80., 90., 100., 110., 120., 130., 150., 200.])
}

canvas = common.makeRatioCanvas(600, 680, dataset=args.dataset)

canvas.raxis.SetTitle('obs./pred.')
canvas.raxis.SetWmin(0.5)
canvas.raxis.SetWmax(1.5)

_temporaries = []
def plotstack(stack, uncert, gobs, legend):
    del _temporaries[:]

    uncert.SetFillColor(ROOT.kBlack)
    uncert.SetFillStyle(3003)
    uncert.SetLineColor(ROOT.kBlack)
    uncert.SetLineWidth(1)

    distpad = canvas.cd(1)

    distpad.SetLogy(False)

    frame = uncert.Clone('frame')
    _temporaries.append(frame)
    frame.SetTitle('')
    frame.Reset()

    frame.GetXaxis().SetLabelSize(0.)
    frame.GetXaxis().SetTitle('')
    obsmax = max(gobs.GetY()[ip] + gobs.GetErrorYhigh(ip) for ip in range(gobs.GetN()))
    frame.SetMinimum(0.)
    frame.SetMaximum(max(obsmax, uncert.GetMaximum()) * 1.8)

    frame.Draw('HIST')
    stack.Draw('SAME HIST')
    uncert.Draw('SAME E2')
    gobs.Draw('PZ')

    legend.Draw()

    distpad.Update()

    ## Make ratio plot
    rmax = canvas.raxis.GetWmax()
    rmin = canvas.raxis.GetWmin()

    ratiopad = canvas.cd(2)

    ratiopad.SetGridy(True)

    runcert = uncert.Clone('runcert')
    _temporaries.append(runcert)
    runcert.SetTitle('')
    norm = root_numpy.hist2array(runcert, copy=False)
    idx_nonpositive = np.where(norm <= 0.)[0]
    # just set to 1
    norm[idx_nonpositive] = 1.

    err2s = root_numpy.array(runcert.GetSumw2(), copy=False)[1:-1]
    err2s /= np.square(norm)
    err2s[idx_nonpositive] = 0.

    obsarray = root_numpy.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
    obsarray /= norm
    obserrhi = root_numpy.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYhigh()))
    obserrhi /= norm
    obserrlo = root_numpy.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYlow()))
    obserrlo /= norm

    robs = gobs.Clone('robs')
    robs.Set(gobs.GetN() - len(idx_nonpositive))
    _temporaries.append(robs)
    irp = 0
    for ip in range(gobs.GetN()):
        if ip in idx_nonpositive:
            continue

        robs.SetPoint(irp, gobs.GetX()[ip], obsarray[ip])
        robs.SetPointEYhigh(irp, obserrhi[ip])
        robs.SetPointEYlow(irp, obserrlo[ip])
        irp += 1

    root_numpy.array2hist(np.ones_like(norm), runcert)

    runcert.SetTickLength(0., 'X')
    runcert.SetTickLength(0., 'Y')
    runcert.GetXaxis().SetLabelSize(0.)
    runcert.GetXaxis().SetTitle('')
    runcert.GetYaxis().SetLabelSize(0.)
    runcert.GetYaxis().SetTitle('')
    runcert.SetMinimum(rmin)
    runcert.SetMaximum(rmax)

    runcert.Draw('E2')

    one = ROOT.TLine(runcert.GetXaxis().GetXmin(), 1., runcert.GetXaxis().GetXmax(), 1.)
    _temporaries.append(one)
    one.SetLineColor(ROOT.kBlack)
    one.SetLineWidth(1)
    one.SetLineStyle(ROOT.kSolid)
    one.Draw()

    robs.Draw('PZ')

    # draw out-of-bounds error bars and arrows
    arrow = ROOT.TArrow(0., 0., 0., 0., robs.GetMarkerSize() * 0.015, '|>')
    arrow.SetLineColor(ROOT.kBlack)
    arrow.SetLineWidth(1)
    errbar = ROOT.TLine(0., 0., 0., 0.)
    errbar.SetLineColor(ROOT.kBlack)
    errbar.SetLineWidth(1)    
    for ip in range(robs.GetN()):
        x = robs.GetX()[ip]
        y = robs.GetY()[ip]
        errhi = robs.GetErrorYhigh(ip)
        errlo = robs.GetErrorYlow(ip)
        if y > rmax:
            if y - errlo > rmax:
                _temporaries.append(arrow.DrawArrow(x, 1., x, rmax - 0.05))
            else:
                _temporaries.append(errbar.DrawLine(x, y - errlo, x, rmax))
        elif y < rmin:
            if y + errhi > rmin:
                _temporaries.append(arrow.DrawArrow(x, 1., x, rmin + 0.05))
            else:
                _temporaries.append(errbar.DrawLine(x, y + errhi, x, rmin))

    # hatch mask bins with no base
    box = ROOT.TBox(0., rmin, 0., rmax)
    box.SetFillColor(ROOT.kRed)
    box.SetFillStyle(3003)
    box.SetLineWidth(0)

    for ip in idx_nonpositive:
        xmin = runcert.GetXaxis().GetBinLowEdge(ip + 1)
        xmax = runcert.GetXaxis().GetBinUpEdge(ip + 1)
        _temporaries.append(box.DrawBox(xmin, box.GetY1(), xmax, box.GetY2()))

    ratiopad.Update()


if not args.makeCRSpectra:
    for cut, shapes in allshapes.iteritems():
        isSR = '_CR_' not in cut

        if args.variable == 'fitshape':
            if not isSR:
                vname = 'events'
            elif 'pt2ge20' in cut:
                if 'PTH_120_200' in cut or 'PTH_GT200' in cut:
                    vname = 'mllVSmth_4x3'
                elif 'NJ_2' in cut:
                    vname = 'mllVSmth_6x6'
                else:
                    #vname = 'mllVSmth_8x9'
                    vname = 'mllVSmth_6x6'
            else:
                if 'PTH_45_80' in cut:
                    vname = 'mllVSmth_4x3'
                elif 'PTH_80_120' in cut or 'PTH_120_200' in cut:
                    vname = 'mllVSmth_3x3'
                elif 'PTH_200_350' in cut or 'PTH_GT350' in cut or 'PTH_GT200' in cut:
                    vname = 'mllVSmth_2x2'
                else:
                    vname = 'mllVSmth_6x6'

        else:
            vname = args.variable
    
        try:
            xtitle, xunit = xtitles[vname]
            if xunit:
                canvas.xaxis.SetTitle('%s (%s)' % (xtitle, xunit))
            else:
                canvas.xaxis.SetTitle(xtitle)
        except KeyError:
            print 'X title not found'
            canvas.xaxis.SetTitle('')
            xunit = ''

        def binWidthNorm(shape):
            if args.variable == 'fitshape' and isSR:
                mllbins, mthbins = mllVSmthBins[vname]
                binarea = np.array([(mllbins[x + 1] - mllbins[x]) * (mthbins[y + 1] - mthbins[y]) for y in range(len(mthbins) - 1) for x in range(len(mllbins) - 1)], dtype=np.float)

                cont = root_numpy.hist2array(shape, copy=False)
                err2 = root_numpy.array(shape.GetSumw2(), copy=False)
                cont /= binarea
                err2[1:-1] /= np.square(binarea)

            else:
                shape.Scale(1., 'width')

        stack = ROOT.THStack('stack', '')
        uncert = totals[cut]

        uncert.GetYaxis().SetTitle('events')
        if args.binWidthNorm:
            if args.variable == 'fitshape' and isSR:
                uncert.GetYaxis().SetTitle('events / GeV^{2}')
            elif xunit:
                uncert.GetYaxis().SetTitle('events / %s' % xunit)

        if args.binWidthNorm:
            binWidthNorm(uncert)
                            
        for name, _, color, opt in plotconfigs:
            try:
                shape = shapes[name]
            except KeyError:
                print 'Plot for %s missing from %s' % (name, cut)
                if args.postfit and not args.sideBySide:
                    print ' Assuming the shape was not included in the fit because sumw = 0'
                else:
                    raise

            if args.binWidthNorm:
                binWidthNorm(shape)

            if 'F' in opt:
                lcolor = common.get_line_color(color)
                shape.SetFillColor(color)
                shape.SetFillStyle(1001)
                shape.SetLineColor(lcolor)
                shape.SetLineWidth(2)
                
            else:
                shape.SetFillStyle(0)
                shape.SetLineColor(color)
                shape.SetLineWidth(2)

            stack.Add(shape)

        obs = shapes['DATA']
        if isSR and args.blind:
            cont = root_numpy.hist2array(obs, copy=False, include_overflow=True)
            err2 = root_numpy.array(obs.GetSumw2(), copy=False)
            cont *= 0.
            err2 *= 0.

        gobs = ROOT.RooHist(obs, 1.)
        if not args.binWidthNorm:
            # roohist automatically normalizes by bin width, rescale
            for ip in range(gobs.GetN()):
                binw = obs.GetXaxis().GetBinWidth(ip + 1)
                y = gobs.GetY()[ip] * binw
                errlo = gobs.GetErrorYlow(ip) * binw
                errhi = gobs.GetErrorYhigh(ip) * binw
                gobs.SetPoint(ip, gobs.GetX()[ip], y)
                gobs.SetPointEYlow(ip, errlo)
                gobs.SetPointEYhigh(ip, errhi)

        elif args.variable == 'fitshape' and isSR:
            # normalize by hand
            mllbins, mthbins = mllVSmthBins[vname]
            nmll = len(mllbins) - 1
            for ip in range(gobs.GetN()):
                imll = ip % nmll
                imth = ip / nmll
                binarea = (mllbins[imll + 1] - mllbins[imll]) * (mthbins[imth + 1] - mthbins[imth])
                y = gobs.GetY()[ip] / binarea
                errlo = gobs.GetErrorYlow(ip) / binarea
                errhi = gobs.GetErrorYhigh(ip) / binarea
                gobs.SetPoint(ip, gobs.GetX()[ip], y)
                gobs.SetPointEYlow(ip, errlo)
                gobs.SetPointEYhigh(ip, errhi)

        legend = ROOT.TLegend(0.65, 0.7, 0.93, 0.9)
        legend.SetBorderSize(0)
        legend.SetFillStyle(0)

        for name, title, _, opt in reversed(plotconfigs):
            try:
                legend.AddEntry(shapes[name], title, opt)
            except KeyError:
                pass

        legend.AddEntry(gobs, 'Observed', 'PL')

        plotstack(stack, uncert, gobs, legend)

        canvas.printout('%s/%s_%s.png' % (args.out_path, args.variable, cut))
        canvas.printout('%s/%s_%s.pdf' % (args.out_path, args.variable, cut))

        canvas.clear()

else:
    observable = args.makeCRSpectra

    template = ROOT.TH1D('template', '', len(common.binnames[observable]), array.array('d', common.binning[observable]))

    for cr in ['WW', 'top', 'DY']:
        if args.postfit and cr == 'WW':
            continue

        stack = ROOT.THStack('stack', '')

        uncert = template.Clone('uncert')
        for ibin, obsBin in enumerate(common.binnames[observable]):
            total = totals['hww_CR_cat%s_%s_%s' % (obsBin, cr, args.dataset)]
            uncert.SetBinContent(ibin + 1, total.GetBinContent(1))
            uncert.SetBinError(ibin + 1, total.GetBinError(1))

        if args.binWidthNorm:
            uncert.Scale(1., 'width')
            
        spectra = {}
        for name, _, color, opt in plotconfigs + [('DATA', 0, 0, '')]:
            hist = template.Clone(name)
            spectra[name] = hist
    
            for ibin, obsBin in enumerate(common.binnames[observable]):
                shapes = allshapes['hww_CR_cat%s_%s_%s' % (obsBin, cr, args.dataset)]
                if name not in shapes:
                    continue

                hist.SetBinContent(ibin + 1, shapes[name].GetBinContent(1))
                hist.SetBinError(ibin + 1, shapes[name].GetBinError(1))

            if name == 'DATA':
                continue

            if args.binWidthNorm:
                hist.Scale(1., 'width')

            if 'F' in opt:
                lcolor = common.get_line_color(color)
                hist.SetFillColor(color)
                hist.SetFillStyle(1001)
                hist.SetLineColor(lcolor)
                hist.SetLineWidth(2)
                
            else:
                hist.SetFillStyle(0)
                hist.SetLineColor(color)
                hist.SetLineWidth(2)

            stack.Add(hist)

        obs = spectra['DATA']
        gobs = ROOT.RooHist(obs, 1.)

        if not args.binWidthNorm:
            # roohist automatically normalizes by bin width, rescale
            for ip in range(gobs.GetN()):
                binw = obs.GetXaxis().GetBinWidth(ip + 1)
                y = gobs.GetY()[ip] * binw
                errlo = gobs.GetErrorYlow(ip) * binw
                errhi = gobs.GetErrorYhigh(ip) * binw
                gobs.SetPoint(ip, gobs.GetX()[ip], y)
                gobs.SetPointEYlow(ip, errlo)
                gobs.SetPointEYhigh(ip, errhi)

        legend = ROOT.TLegend(0.65, 0.7, 0.93, 0.9)
        legend.SetBorderSize(0)
        legend.SetFillStyle(0)

        for name, title, _, opt in reversed(plotconfigs):
            try:
                legend.AddEntry(spectra[name], title, opt)
            except KeyError:
                pass

        legend.AddEntry(gobs, 'Observed', 'PL')

        if observable == 'ptH':
            canvas.xaxis.SetTitle('p_{T}^{H} (GeV)')
            uncert.GetYaxis().SetTitle('events / GeV')
        elif observable == 'njet':
            canvas.xaxis.SetTitle('N_{jet}')
            uncert.GetYaxis().SetTitle('events')

        plotstack(stack, uncert, gobs, legend)

        if observable == 'njet':
            canvas.xaxis.SetLabelSize(0.)
            canvas.cd()

            latex = ROOT.TLatex(0., 0., '')
            latex.SetTextFont(42)
            latex.SetTextSize(0.048)
            latex.SetTextAlign(23)

            for il, label in enumerate(['0', '1', '2', '3', '#geq 4']):
                latex.DrawLatex(common.xmin + (common.xmax - common.xmin) * (0.5 + il) / 5., common.ymin - 0.02, label)

        canvas.printout('%s/%scr_%s_spectrum_%s.png' % (args.out_path, cr, observable, args.dataset))
        canvas.printout('%s/%scr_%s_spectrum_%s.pdf' % (args.out_path, cr, observable, args.dataset))

        canvas.clear()
    
        for hist in spectra.itervalues():
            hist.Delete()
