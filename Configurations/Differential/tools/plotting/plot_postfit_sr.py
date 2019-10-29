import os
import sys
import re
import array
import numpy as np

from argparse import ArgumentParser

argParser = ArgumentParser(description='Make pretty plots')
argParser.add_argument('observable', metavar='OBSERVABLE', help='Observable')
argParser.add_argument('--source', '-s', metavar='PATH', dest='source', help='Workspace file with the desired binning.')
argParser.add_argument('--postfit', '-p', metavar='PATH', dest='postfit', help='Workspace file with postfit snapshot.')
argParser.add_argument('--rootfile', '-f', metavar='PATH', dest='rootfile', help='Output ROOT file to write histogram objects to.')
argParser.add_argument('--reuse', '-R', action='store_true', dest='reuse', help='Reuse histograms in the output ROOT file.')
argParser.add_argument('--out', '-o', metavar='PATH', dest='out_path', default='.', help='Output directory.')

args = argParser.parse_args()
sys.argv = []

import ROOT
import root_numpy as rnp
import common

ROOT.TH1.SetDefaultSumw2(True)

plotconfigs = [
    ('minor', ['minor'], 'other background', ROOT.kGray, 'LF'),
    ('DY', ['DY'], '#tau^{+}#tau^{-}', 418, 'LF'),
    ('Fake', ['Fake_em', 'Fake_me'], 'non-prompt', 921, 'LF'),
    ('top', ['top'], 't#bar{t}+tW', 400, 'LF'),
    ('WW', ['WW'], 'W^{+}W^{-}', 851, 'LF'),
    ('smH', ['htt'], 'H(125)', ROOT.kRed, 'L')
]
plotconfigs[-1][1].extend('smH_hww_%s' % bin_name for bin_name in common.binnames[args.observable])

if args.observable == 'njet':
    binnames = common.binnames[args.observable]
    nj0 = binnames.index('NJ_0')
    binnames.pop(nj0)
    binnames.insert(nj0, 'NJ_0_catpt2lt20')
    binnames.insert(nj0, 'NJ_0_catpt2ge20')

components = {}
totals = {}
observed = {}

if not args.reuse:
    import resource
    resource.setrlimit(resource.RLIMIT_STACK, (resource.RLIM_INFINITY, resource.RLIM_INFINITY))

    if not args.source or not args.postfit:
        raise RuntimeError('Need source and postfit paths to make the histograms')

    if args.rootfile:
        outfile = ROOT.TFile.Open(args.rootfile, 'recreate')
    else:
        outfile = ROOT.gROOT

    source = ROOT.TFile.Open(args.source)
    ws = source.Get('w')
    
    postfit_source = ROOT.TFile.Open(args.postfit)
    postfit_ws = postfit_source.Get('w')
    postfit_ws.loadSnapshot('MultiDimFit')

    params = ws.allVars()
    postfit_params = ROOT.RooArgSet(postfit_ws.allVars())
    postfit_autoMCStats = postfit_ws.set('group_autoMCStats')

    ch = ws.cat('CMS_channel')

    for icat in range(ch.numBins('')):
        ch.setBin(icat)
        cat_name = ch.getLabel()

        if '_CR_' in cat_name:
            continue

        vorig = common.variables[args.observable](cat_name)

        if vorig == 'mllVSmth_6x6':
            continue

        itr = postfit_autoMCStats.iterator()
        while True:
            p = itr.Next()
            if not p:
                break
            if re.match('prop_bin%s_bin[0-9]+' % cat_name, p.GetName()):
                postfit_params.remove(p)
    
    params.assignValueOnly(postfit_params)

    nobbb_source = ROOT.TFile.Open(args.postfit)
    nobbb_ws = nobbb_source.Get('w')
    nobbb_ws.allVars().assignValueOnly(postfit_params)

    mlfit_source = ROOT.TFile.Open(re.sub('^(.+)higgsCombine(.+).MultiDimFit.mH120.root', '\\1multidimfit\\2.root', args.postfit))
    fitresult = mlfit_source.Get('fit_mdf')
    floatpars = ROOT.RooArgSet(fitresult.floatParsFinal())
    
    randomized_parameters = ROOT.RooDataSet('randomized_parameters', 'randomized_parameters', floatpars)
    for _ in range(common.n_postfit_unc_toys):
        randomized_parameters.add(ROOT.RooArgSet(fitresult.randomizePars()))
    
    folding = [range(i, i + 36, 6) for i in range(6)]
    
    x = ws.var('CMS_th1x')
    ch = ws.cat('CMS_channel')
    datas = ws.data('data_obs').split(ch, True)

    # orig [10, 25, 40, 50, 70, 90, 210]
    def correct_bbb(hist, vorig, funcname, normname=''):
        if vorig == 'mllVSmth_4x3':
            # 4 mth x 3 mll ([10, 40, 55, 210])
            vfolding = [range(i, i + 12, 3) for i in range(3)]
            vmapping = [0, 0, 1, 1, 2, 2]
        elif vorig == 'mllVSmth_3x3':
            # [10, 40, 70, 210]
            vfolding = [range(i, i + 9, 3) for i in range(3)]
            vmapping = [0, 0, 1, 1, 2, 2]
        elif vorig == 'mllVSmth_2x2':
            # [10, 50, 210]
            vfolding = [range(i, i + 4, 2) for i in range(2)]
            vmapping = [0, 0, 0, 1, 1, 1]
                        
        postfit_full = common.make_roofit_histogram('postfit', postfit_ws, funcname, normname=normname, fold=vfolding)
        postfit_nobbb = common.make_roofit_histogram('prefit', nobbb_ws, funcname, normname=normname, fold=vfolding)

        cont = rnp.hist2array(hist, copy=False)
        cont *= (rnp.hist2array(postfit_full, copy=False) / rnp.hist2array(postfit_nobbb, copy=False))[np.array(vmapping)]

        postfit_full.Delete()
        postfit_nobbb.Delete()
                        
   
    for bin_name in common.binnames[args.observable]:
        components[bin_name] = {}
    
        total_funcs = ROOT.RooArgList()
        total_coeffs = ROOT.RooArgList()
    
        for icat in range(ch.numBins('')):
            ch.setBin(icat)
            cat_name = ch.getLabel()
            
            if '_CR_' in cat_name or bin_name not in cat_name:
                continue

            vorig = common.variables[args.observable](cat_name)

            for procgroup, procs, _, _, _ in plotconfigs:
                for proc in procs:
                    if proc.startswith('smH_hww'):
                        funcname = 'shapeSig_%s_%s_morph_wrapper' % (cat_name, proc)
                    else:
                        funcname = 'shapeBkg_%s_%s_morph_wrapper' % (cat_name, proc)
    
                    if not ws.arg(funcname):
                        continue
            
                    normname = 'n_exp_final_bin%s_proc_%s' % (cat_name, proc)
        
                    outfile.cd()
                    hist = common.make_roofit_histogram('tmp', ws, funcname, normname=normname, fold=folding)

                    if vorig != 'mllVSmth_6x6':
                        correct_bbb(hist, vorig, funcname, normname=normname)

                    try:
                        components[bin_name][procgroup].Add(hist)
                        hist.Delete()
                    except KeyError:
                        hist.SetName('%s_%s' % (bin_name, procgroup))
                        hist.SetDirectory(outfile)
                        components[bin_name][procgroup] = hist
    
            prop = ws.arg('prop_bin%s' % cat_name)
            total_funcs.add(prop)
            total_coeffs.add(ws.var('ONE'))
    
            data = datas.FindObject(cat_name)
            hist = common.fold_hist(ROOT.RooAbsData.createHistogram(data, 'data', x), folding)

            try:
                observed[bin_name].Add(hist)
                hist.Delete()
            except KeyError:
                hist.SetName('%s_observed' % bin_name)
                hist.SetDirectory(outfile)
                observed[bin_name] = hist
    
        funcname = 'total_%s' % bin_name
        combfunc = ROOT.RooRealSumFunc(funcname, funcname, total_funcs, total_coeffs)
        getattr(ws, 'import')(combfunc)
    
        outfile.cd()
        totals[bin_name] = common.make_roofit_histogram(funcname, ws, funcname, fitresult=fitresult, randomized_parameters=randomized_parameters, fold=folding)
        totals[bin_name].SetName(funcname)
        totals[bin_name].SetDirectory(outfile)

        # there may be discrepancies in bin contents due to adjustments in the bin-by-bin nuisances
        cont = rnp.hist2array(totals[bin_name], copy=False)
        cont[:] = np.sum(np.concatenate(tuple(np.reshape(rnp.hist2array(h, copy=False), (1, -1)) for h in components[bin_name].itervalues()), axis=0), axis=0)

    if args.rootfile:
        outfile.cd()
        outfile.Write()

else:
    if not args.rootfile:
        raise RuntimeError('Need histogram file path')

    source = ROOT.TFile.Open(args.rootfile)

    for bin_name in common.binnames[args.observable]:
        components[bin_name] = {}
        for procgroup, _, _, _, _ in plotconfigs:
            components[bin_name][procgroup] = source.Get('%s_%s' % (bin_name, procgroup))

        totals[bin_name] = source.Get('total_%s' % bin_name)
        observed[bin_name] = source.Get('%s_observed' % bin_name)

_temporaries = []

nvert = 3
wide_labels = [[], [], []]
if args.observable == 'ptH':
    wide_labels[2].extend('%.0f < p_{T}^{H} < %.0f GeV' % tuple(common.binning['ptH'][i:i+2]) for i in range(2))
    wide_labels[1].extend('%.0f < p_{T}^{H} < %.0f GeV' % tuple(common.binning['ptH'][i:i+2]) for i in range(2, 4))
    wide_labels[0].extend('%.0f < p_{T}^{H} < %.0f GeV' % tuple(common.binning['ptH'][i:i+2]) for i in range(4, 5))
    wide_labels[0].append('p_{T}^{H} > %.0f GeV' % common.binning['ptH'][5])
else:
    wide_labels[2].append('N_{jet} = 0 (p_{T}^{l2} > 20 GeV)')
    wide_labels[2].append('N_{jet} = 0 (p_{T}^{l2} < 20 GeV)')
    wide_labels[1].extend('N_{jet} = %d' % i for i in range(1, 3))
    wide_labels[0].append('N_{jet} = 3')
    wide_labels[0].append('N_{jet} #geq 4')

canvas = common.makeRatioCanvas(600, 680, dataset='combination', wide_labels=wide_labels, nvert=nvert, make_yaxes=True, legend_inside=False, prelim=False)

canvas.xaxis.SetTitle('m_{ll} (GeV)')

def plotstack(stack, signal, uncert, gobs, ivert):
    uncert.SetTickLength(0., 'X')
    uncert.SetTickLength(0., 'Y')
    uncert.SetFillColor(ROOT.kBlack)
    uncert.SetFillStyle(3003)
    uncert.SetLineWidth(0)
    uncert.GetXaxis().SetNdivisions(120)
    uncert.GetYaxis().SetNdivisions(110)

    distpad = canvas.cd(ivert * 2 + 1)

    distpad.SetLogy(False)

    frame = uncert.Clone('frame')
    _temporaries.append(frame)
    frame.SetTitle('')
    frame.Reset()

    frame.GetXaxis().SetLabelSize(0.)
    frame.GetXaxis().SetTitle('')
    obsmax = max(gobs.GetY()[ip] + gobs.GetErrorYhigh(ip) for ip in range(gobs.GetN()))
    frame.SetMinimum(0.)
    frame.SetMaximum(max(obsmax, uncert.GetMaximum()) * 1.4)

    frame.Draw('HIST')
    stack.Draw('SAME HIST')
    uncert.Draw('SAME E2')
    gobs.Draw('PZ')

    distpad.Update()

    ratiopad = canvas.cd(ivert * 2 + 2)

    ratiopad.SetGridy(False)

    runcert = uncert.Clone('runcert')
    _temporaries.append(runcert)
    runcert.SetTitle('')

    bkg = rnp.hist2array(runcert)
    bkg -= rnp.hist2array(signal, copy=False)

    obsarray = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
    obsarray -= bkg

    robs = gobs.Clone('robs')
    _temporaries.append(robs)
    for ip in range(gobs.GetN()):
        robs.SetPoint(ip, gobs.GetX()[ip], obsarray[ip])

    rnp.array2hist(np.zeros_like(bkg), runcert)

    runcert.SetTickLength(0., 'X')
    runcert.SetTickLength(0., 'Y')
    runcert.GetXaxis().SetLabelSize(0.)
    runcert.GetXaxis().SetTitle('')
    runcert.GetYaxis().SetLabelSize(0.)
    runcert.GetYaxis().SetTitle('')
    runcert.GetYaxis().SetNdivisions(502)

    runcert.Draw('E2')

    zero = ROOT.TLine(runcert.GetXaxis().GetXmin(), 0., runcert.GetXaxis().GetXmax(), 0.)
    _temporaries.append(zero)
    zero.SetLineColor(ROOT.kBlack)
    zero.SetLineWidth(1)
    zero.SetLineStyle(ROOT.kSolid)
    zero.Draw()

    signal.Draw('HIST SAME')

    robs.Draw('PZ')

    rmin = 0.
    while rmin > obsarray.min() * 1.1:
        rmin -= 10.
    rmax = 0.
    while rmax < obsarray.max() * 1.1:
        rmax += 10.

    runcert.SetMaximum(rmax)
    runcert.SetMinimum(rmin)

    ratiopad.Update()


mllbins = [10., 25., 40., 50., 70., 90., 170.]
mllbins2 = mllbins + [x - mllbins[0] + mllbins[-1] for x in mllbins[1:]]
nmll = len(mllbins) - 1

for ivert in range(nvert):
#for ivert in [1]:
    bin_names = common.binnames[args.observable][(2 - ivert) * 2:(3 - ivert) * 2]

    if len(bin_names) == 1:
        template = ROOT.TH1D('template', ';m_{ll} (GeV)', len(mllbins) - 1, array.array('d', mllbins))
        distpad = canvas.GetPad(ivert * 2 + 1)
        ratiopad = canvas.GetPad(ivert * 2 + 2)
        xlow = distpad.GetXlowNDC()
        xw = distpad.GetWNDC()
        distpad.SetPad(xlow, distpad.GetYlowNDC(), xlow + xw * 0.5, distpad.GetYlowNDC() + distpad.GetHNDC())
        ratiopad.SetPad(xlow, ratiopad.GetYlowNDC(), xlow + xw * 0.5, ratiopad.GetYlowNDC() + ratiopad.GetHNDC())
    else:
        template = ROOT.TH1D('template', ';m_{ll} (GeV)', len(mllbins2) - 1, array.array('d', mllbins2))

    uncert = template.Clone('uncert')
    _temporaries.append(uncert)
    stack = ROOT.THStack('stack', 'stack')
    _temporaries.append(stack)
    shapes = {}
    _temporaries.append(shapes)

    for procgroup, _, title, color, legopt in plotconfigs:
        shape = template.Clone(procgroup)
        shape.SetDirectory(0)

        cont = rnp.hist2array(shape, copy=False)
        for ibin, bin_name in enumerate(bin_names):
            cont[ibin * nmll:(ibin + 1) * nmll] = rnp.hist2array(components[bin_name][procgroup], copy=False)

        shape.Scale(1., 'width')

        if 'F' in legopt:
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
        shapes[procgroup] = shape

    signal = shapes['smH']

    uncert = template.Clone('Total')
    _temporaries.append(uncert)
    uncert.SetDirectory(0)
    cont = rnp.hist2array(uncert, copy=False)
    err2 = rnp.array(uncert.GetSumw2(), copy=False)[1:-1]
    for ibin, bin_name in enumerate(bin_names):
        cont[ibin * nmll:(ibin + 1) * nmll] = rnp.hist2array(totals[bin_name], copy=False)
        err2[ibin * nmll:(ibin + 1) * nmll] = rnp.array(totals[bin_name].GetSumw2(), copy=False)[1:-1]

    uncert.Scale(1., 'width')

    canvas.yaxes[ivert].SetTitle('events / GeV')
    canvas.yaxes[ivert].SetTitleOffset(2.4)
    canvas.raxes[ivert].SetTitle('bkg. subt.')
    canvas.raxes[ivert].SetTitleOffset(2.4)

    obs = template.Clone('Observed')
    obs.SetDirectory(0)

    cont = rnp.hist2array(obs, copy=False)
    for ibin, bin_name in enumerate(bin_names):
        cont[ibin * nmll:(ibin + 1) * nmll] = rnp.hist2array(observed[bin_name], copy=False)

    gobs = ROOT.RooHist(obs, 1.)
    _temporaries.append(gobs)
    gobs.SetMarkerSize(0.6)

    plotstack(stack, signal, uncert, gobs, ivert)

    if ivert == 0:
        legend = ROOT.TLegend(0.4, common.ymax - canvas.hlegend + 0.01, common.xmax - 0.01, common.ymax - 0.01)
        _temporaries.append(legend)
        legend.SetNColumns(4)
        legend.SetBorderSize(0)
        legend.SetFillStyle(0)

        for procgroup, _, title, _, opt in reversed(plotconfigs):
            legend.AddEntry(shapes[procgroup], title, opt)

        legend.AddEntry(uncert, 'uncertainty', 'F')

        legend.AddEntry(gobs, 'observed', 'PL')

        canvas.cd()
        legend.Draw()

    template.Delete()

canvas.printout('%s/postfit_sr_%s.pdf' % (args.out_path, args.observable))
canvas.Print('%s/postfit_sr_%s.png' % (args.out_path, args.observable))
