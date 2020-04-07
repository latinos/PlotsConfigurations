import os
import sys
import re
import subprocess
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
    ('minor', ['minor'], 'Other background', ROOT.kGray, 'LF'),
    ('DY', ['DY'], '#tau^{#scale[1.5]{#plus}}#kern[0.4]{#tau}^{#scale[1.5]{#minus}}', 418, 'LF'),
    ('Fake', ['Fake_em', 'Fake_me'], 'Nonprompt', 921, 'LF'),
    ('top', ['top'], 't#bar{t}+tW', 400, 'LF'),
    ('WW', ['WW'], 'W^{#kern[-0.2]{#scale[1.5]{#plus}}}W^{#kern[-0.2]{#scale[1.5]{#minus}}}', 851, 'LF'),
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

    if not args.source:
        raise RuntimeError('Need source path to make the histograms')

    if not args.postfit:
        args.postfit = args.source

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
                    hist.SetDirectory(0)
                    
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

nrow = 3
ncol = 2

canvas = common.makeRatioCanvas(600, 680, dataset='combination', panels=(ncol, nrow), legend_inside=False, prelim=False)

canvas.xaxis.SetTitle('#font[12]{m^{ll}} (GeV)')
canvas.xaxis.SetNdivisions(408)
canvas.ratiotext = 'Background subtracted'

symbols = {
    'njet': '#font[12]{N}_{#kern[-0.3]{jet}}',
    'ptH': '#font[12]{p}_{#lower[-0.18]{#kern[-0.2]{T}}}^{H}',
    'ptl2': '#font[12]{p}_{#lower[-0.18]{#kern[-0.2]{T}}}^{#font[12]{l}}#lower[0.1]{#kern[-2.1]{ }^{{}_{2}}}'
}

for ibin, bin_name in enumerate(common.binnames[args.observable]):
    if args.observable == 'ptH':
        icol = ibin % ncol
        irow = nrow - ibin / ncol - 1
        if ibin != len(common.binnames[args.observable]) - 1:
            canvas.panel_labels[(icol, irow)] = '%.0f < {ptH} < %.0f GeV'.format(**symbols) % tuple(common.binning['ptH'][ibin:ibin + 2])
        else:
            canvas.panel_labels[(icol, irow)] = '{ptH} > %.0f GeV'.format(**symbols) % common.binning['ptH'][ibin]
    else:
        if ibin == 0:
            canvas.panel_labels[(0, nrow - 1)] = '{njet} = 0 ({ptl2} > 20 GeV)'.format(**symbols)
            canvas.panel_labels[(1, nrow - 1)] = '{njet} = 0 ({ptl2} < 20 GeV)'.format(**symbols)
        else:
            icol = (ibin + 1) % ncol
            irow = nrow - (ibin + 1) / ncol - 1
            if ibin != len(common.binnames[args.observable]) - 1:
                canvas.panel_labels[(icol, irow)] = '{njet} = %d'.format(**symbols) % ibin
            else:
                canvas.panel_labels[(icol, irow)] = '{njet} #geq 4'.format(**symbols)

zero = ROOT.TLine(0., 0., 1., 1.)
_temporaries.append(zero)
zero.SetLineColor(ROOT.kBlack)
zero.SetLineWidth(1)
zero.SetLineStyle(ROOT.kSolid)

def plotstack(stacks, signals, uncerts, gobss, irow):
    ymax = 0.
    rmin = 0.
    rmax = 0.
    for icol in range(ncol):
        gobs = gobss[icol]
        uncert = uncerts[icol]
        signal = signals[icol]

        obsmax = max(gobs.GetY()[ip] + gobs.GetErrorYhigh(ip) for ip in range(gobs.GetN()))
        uncmax = max(uncert.GetBinContent(ix) + uncert.GetBinError(ix) for ix in range(1, uncert.GetNbinsX() + 1))
        ymax = max(ymax, obsmax, uncmax)

        obsarray = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
        bkg = rnp.hist2array(uncert)
        bkg -= rnp.hist2array(signal, copy=False)
        obsarray -= bkg

        mm = obsarray.min() - gobs.GetErrorYlow(np.argmin(obsarray))
        while rmin > mm * 1.1:
            rmin -= 2.

        mm = obsarray.max() + gobs.GetErrorYhigh(np.argmax(obsarray))
        while rmax < mm * 1.1:
            rmax += 2.

    if int(rmax) % 10 == 0: # just to avoid axis label clashes
        rmax -= 1.

    canvas.yaxes[irow].SetNdivisions(405)
    canvas.yaxes[irow].SetTitle('events / GeV')
    canvas.raxes[irow].SetNdivisions(204)

    for icol in range(ncol):
        stack = stacks[icol]
        signal = signals[icol]
        uncert = uncerts[icol]
        gobs = gobss[icol]

        frame = uncert.Clone('frame')
        _temporaries.append(frame)
        frame.SetTitle('')
        frame.Reset()
    
        frame.SetTickLength(0.05, 'X')
        frame.SetTickLength(0.03, 'Y')
        frame.GetXaxis().SetNdivisions(canvas.xaxis.GetNdiv())
        frame.GetXaxis().SetLabelSize(0.)
        frame.GetXaxis().SetTitle('')
        frame.GetYaxis().SetNdivisions(canvas.yaxes[irow].GetNdiv())
        frame.GetYaxis().SetLabelSize(0.)
        frame.SetMinimum(0.)
        frame.SetMaximum(ymax * 1.4)

        distpad = canvas.cd((irow * ncol + icol) * 2 + 1)
        distpad.SetLogy(False)
        distpad.SetTicky(1)
    
        frame.Draw('HIST')
        stack.Draw('SAME HIST')
        uncert.Draw('SAME E2')
        gobs.Draw('PZ')
    
        distpad.Update()

        runcert = uncert.Clone('runcert')
        _temporaries.append(runcert)
    
        bkg = rnp.hist2array(runcert)
        bkg -= rnp.hist2array(signal, copy=False)
    
        obsarray = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
        obsarray -= bkg
    
        robs = gobs.Clone('robs')
        _temporaries.append(robs)
        for ip in range(gobs.GetN()):
            robs.SetPoint(ip, gobs.GetX()[ip], obsarray[ip])
    
        rnp.array2hist(np.zeros_like(bkg), runcert)

        rframe = frame.Clone('rframe')
        _temporaries.append(rframe)
        rframe.GetXaxis().SetTickLength(0.15)
        rframe.GetYaxis().SetNdivisions(canvas.raxes[irow].GetNdiv())
        rframe.SetMinimum(rmin)
        rframe.SetMaximum(rmax)

        ratiopad = canvas.cd((irow * ncol + icol) * 2 + 2)
        ratiopad.SetLogy(False)
        ratiopad.SetGridy(False)
        ratiopad.SetTicky(1)

        rframe.Draw('HIST')
        runcert.Draw('SAME E2')
        zero.DrawLine(rframe.GetXaxis().GetXmin(), 0., rframe.GetXaxis().GetXmax(), 0.)
        signal.Draw('HIST SAME')
        robs.Draw('PZ')
    
        ratiopad.Update()


mllbins = [10., 25., 40., 50., 70., 90., 170.]
nmll = len(mllbins) - 1
template = ROOT.TH1D('template', '', len(mllbins) - 1, np.array(mllbins))

for irow in range(nrow):
    bin_names = common.binnames[args.observable][(2 - irow) * 2:(3 - irow) * 2]

    uncerts = []
    _temporaries.append(uncerts)
    stacks = []
    _temporaries.append(stacks)
    signals = []
    gobss = []

    for ibin, bin_name in enumerate(bin_names):
        shapes = {}
        _temporaries.append(shapes)

        stack = ROOT.THStack('stack', 'stack')
        stacks.append(stack)

        for procgroup, _, title, color, legopt in plotconfigs:
            shape = template.Clone(procgroup)
            shape.SetDirectory(0)
    
            cont = rnp.hist2array(shape, copy=False)
            cont[:] = rnp.hist2array(components[bin_name][procgroup], copy=False)
    
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

        signals.append(shapes['smH'])
    
        uncert = template.Clone('Total')
        uncerts.append(uncert)
        uncert.SetDirectory(0)
        cont = rnp.hist2array(uncert, copy=False)
        err2 = rnp.array(uncert.GetSumw2(), copy=False)[1:-1]
        cont[:] = rnp.hist2array(totals[bin_name], copy=False)
        err2[:] = rnp.array(totals[bin_name].GetSumw2(), copy=False)[1:-1]
    
        uncert.Scale(1., 'width')

        uncert.SetFillColor(ROOT.kBlack)
        uncert.SetFillStyle(3003)
        uncert.SetLineWidth(0)
    
        obs = template.Clone('Observed')
        obs.SetDirectory(0)
    
        cont = rnp.hist2array(obs, copy=False)
        cont[:] = rnp.hist2array(observed[bin_name], copy=False)
    
        gobs = ROOT.RooHist(obs, 1.)
        _temporaries.append(gobs)
        gobss.append(gobs)

        gobs.SetMarkerSize(0.6)

        if irow == 0 and ibin == 0:
            legend = ROOT.TLegend(0.3, common.YMAX - canvas.hlegend + 0.01, common.XMAX - 0.01, common.YMAX - 0.01)
            _temporaries.append(legend)
            legend.SetNColumns(4)
            legend.SetBorderSize(0)
            legend.SetFillStyle(0)
            legend.SetTextFont(ROOT.gStyle.GetTextFont())
    
            for procgroup, _, title, _, opt in reversed(plotconfigs):
                legend.AddEntry(shapes[procgroup], title, opt)
            legend.AddEntry(uncert, 'Uncertainty', 'F')
            legend.AddEntry(gobs, 'Observed', 'PL')
    
            canvas.cd()
            legend.Draw()

    plotstack(stacks, signals, uncerts, gobss, irow)

template.Delete()

#tmpeps = '%s/tmp.eps' % os.getenv('TMPDIR')
#canvas.printout(tmpeps)
#_, err = subprocess.Popen(['gs', '-q', '-sDEVICE=bbox', '-dBATCH', '-dNOPAUSE', tmpeps], stdout=subprocess.PIPE, stderr=subprocess.PIPE).communicate()
#for line in err.split('\n'):
#    if line.startswith('%%BoundingBox'):
#        words = line.split()
#        llx, lly, urx, ury = map(int, words[-4:])
#        width = urx + llx
#        height = ury + lly
#
#subprocess.Popen(['gs', '-q', '-o', '%s/postfit_sr_%s.pdf' % (args.out_path, args.observable), '-sDEVICE=pdfwrite', '-dPDFFitPage', '-g%d0x%d0' % (width, height), tmpeps]).communicate()
#os.unlink(tmpeps)
canvas.printout('%s/postfit_sr_%s.pdf' % (args.out_path, args.observable))
canvas.Print('%s/postfit_sr_%s.png' % (args.out_path, args.observable))
