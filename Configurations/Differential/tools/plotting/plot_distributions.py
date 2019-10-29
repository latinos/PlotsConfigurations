import os
import sys
import array
import re
import math
import numpy as np

from argparse import ArgumentParser

### NOTE: prefit lnN type uncertainties are not considered

argParser = ArgumentParser(description='Make pretty plots')
argParser.add_argument('sourcePaths', metavar='PATH', nargs='+', help='Input ROOT file name.')
argParser.add_argument('dataset', metavar='DATASET', help='Dataset (2016, 2017, 2018, combination)')
argParser.add_argument('--blind', '-B', action='store_true', dest='blind', help='Blind SR.')
argParser.add_argument('--no-higgs', '-N', action='store_true', dest='noHiggs', help='Do not show Higgs contributions.')
argParser.add_argument('--make-cr-spectra', '-a', metavar='OBSERVABLE', dest='makeCRSpectra', help='Make CR spectra for njet or ptH.')
argParser.add_argument('--postfit', '-p', metavar='PATH', dest='postfit', help='MultiDimFit output file containing the workspace with best-fit snapshot.')
argParser.add_argument('--combination-tag', '-g', metavar='PATH', dest='combination_tags', nargs='+', default=[''], help='Prefix to cut (bin name used in combineCards) for postfit distributions.')
argParser.add_argument('--variable', '-v', metavar='VARIABLE', dest='variable', default='fitshape', help='Variable to plot. If not specified, variables used for the signal extraction fit will be plotted.')
argParser.add_argument('--bin-width-norm', '-W', action='store_true', dest='binWidthNorm', help='Bin-width normalize the plots.')
argParser.add_argument('--out', '-o', metavar='PATH', dest='out_path', default='.', help='Output directory or file name if saving TCanvases.')
argParser.add_argument('--save-canvas', '-C', action='store_true', dest='save_canvas', help='Save TCanvases instead of images.')
argParser.add_argument('--combination-sideways', '-A', action='store_true', dest='combination_sideways', help='Sideways combination.')
argParser.add_argument('--single-cr-plot', '-S', action='store_true', dest='single_cr_plot', help='Stack all CR spectra in one plot')
argParser.add_argument('--rootfile', '-f', metavar='PATH', dest='rootfile', help='Output ROOT file to write histogram objects to.')
argParser.add_argument('--reuse', '-R', action='store_true', dest='reuse', help='Reuse histograms in the output ROOT file.')

args = argParser.parse_args()
sys.argv = []

import common
import ROOT
import root_numpy as rnp

#common.n_postfit_unc_toys = 2

ROOT.TH1.SetDefaultSumw2(True)

plotconfigs = [
    ('minor', 'other background', ROOT.kGray, 'LF'),
    ('DY', '#tau^{+}#tau^{-}', 418, 'LF'),
    ('Fake', 'non-prompt', 921, 'LF'),
    ('top', 't#bar{t} and tW', 400, 'LF'),
    ('WW', 'W^{+}W^{-}', 851, 'LF'),
]

if not args.noHiggs:
    if args.makeCRSpectra:
        pass
        #plotconfigs.append(('smH', 'Higgs', ROOT.kRed, 'LF'))
    else:
        plotconfigs.append(('htt', 'H#rightarrow#tau#tau', ROOT.kRed + 2, 'L'))
        plotconfigs.append(('smH_hww', 'H#rightarrowWW', ROOT.kRed, 'L'))

if args.save_canvas:
    canvas_output_file = ROOT.TFile.Open(args.out_path, 'recreate')

def make_sideways_combination(name, temp):
    ncopy = len(args.sourcePaths)
    if temp.GetXaxis().GetXbins().GetSize() == 0:
        # uniform binning
        xmin = temp.GetXaxis().GetXmin()
        xmax = temp.GetXaxis().GetXmax()
        return ROOT.TH1D(name, '', temp.GetNbinsX() * ncopy, xmin, xmin + (xmax - xmin) * ncopy)
    else:
        # variable binning
        xbins = rnp.array(temp.GetXaxis().GetXbins(), copy=False)
        nx = temp.GetNbinsX()
        binning = np.zeros(nx * ncopy + 1, dtype=np.double)
        binning[:nx + 1] = xbins
        for icopy in range(1, ncopy):
            binning[nx * icopy + 1:nx * (icopy + 1) + 1] = (xbins[1:] - xbins[0] + binning[nx * icopy])
        return ROOT.TH1D(name, '', nx * ncopy, array.array('d', binning))

allprefit = {} # {cut: {proc: hist}}
allpostfit = {}
prefit_totals = {} # {cut: hist}
postfit_totals = {} # {cut: hist}

if args.reuse:
    rootfile = ROOT.TFile.Open(args.rootfile)
    if not rootfile:
        raise RuntimeError('Need valid rootfile for --reuse')

    for ckey in rootfile.GetListOfKeys():
        cut_key = ckey.GetName()
        cutdir = rootfile.GetDirectory(cut_key)

        allprefit[cut_key] = {}
        allpostfit[cut_key] = {}

        for hkey in cutdir.GetListOfKeys():
            hname = hkey.GetName()
            hist = hkey.ReadObj()

            if hname == 'total_prefit':
                prefit_totals[cut_key] = hist
            elif hname == 'total_postfit':
                postfit_totals[cut_key] = hist
            elif hname.endswith('prefit'):
                allprefit[cut_key][hname[:-7]] = hist
            else:
                allpostfit[cut_key][hname[:-8]] = hist

        allpostfit[cut_key]['DATA'] = allprefit[cut_key]['DATA']
    
else:
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
    
    if args.postfit:
        import resource
        resource.setrlimit(resource.RLIMIT_STACK, (resource.RLIM_INFINITY, resource.RLIM_INFINITY))

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
        floatpars = ROOT.RooArgSet(fitresult.floatParsFinal())
    
        randomized_parameters = ROOT.RooDataSet('randomized_parameters', 'randomized_parameters', floatpars)
        for _ in range(common.n_postfit_unc_toys):
            randomized_parameters.add(ROOT.RooArgSet(fitresult.randomizePars()))

    def merge(histlist, mergedname, name):
        if mergedname in histlist:
            histlist[mergedname].Add(histlist[name])
            histlist.pop(name).Delete()
        else:
            histlist[name].SetName(histlist[name].GetName().replace(name, mergedname))
            histlist[mergedname] = histlist.pop(name)
    

    cutname_map = {} # {(cut_nodataset, combination_tag): cut}

    if args.rootfile:
        outfile = ROOT.TFile.Open(args.rootfile, 'recreate')
    else:
        outfile = ROOT.gROOT
    
    # shapes root file
    for isource, sourcePath in enumerate(args.sourcePaths):
        def add_hist(total, hist):
            if args.combination_sideways:
                nx = hist.GetNbinsX()
                first, last = nx * isource, nx * (isource + 1)
                tc = rnp.hist2array(total, copy=False)
                tc[first:last] += rnp.hist2array(hist, copy=False)
                te2 = rnp.array(total.GetSumw2(), copy=False)[1:-1]
                te2[first:last] += rnp.array(hist.GetSumw2(), copy=False)[1:-1]
            else:
                total.Add(hist)
    
        source = ROOT.TFile.Open(sourcePath)
        
        cutnames = sorted(k.GetName() for k in source.GetListOfKeys())
        
        for cut in cutnames:
            # because cut names are suffixed with _year
            cut_key = cut[:-5]
            if args.postfit:
                cutname_map[(cut_key, args.combination_tags[isource])] = cut
            
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

            plotsdir.cd()
       
            # get the nominal shapes
            prefits = {}
            postfits = {}
        
            for key in plotsdir.GetListOfKeys():
                proc = key.GetName().replace('histo_', '')
        
                if proc.endswith('Up') or proc.endswith('Down'):
                    continue
    
                hist = key.ReadObj()
                hist.SetName('%s_prefit' % proc)
                hist.SetDirectory(0) # will later merge to existing hist with same name in outdir or add as new
                prefits[proc] = hist
        
                if args.postfit:
                    # get the corresponding postfit shape
                    if proc == 'DATA':
                        continue
    
                    bin = args.combination_tags[isource] + cut
                    if 'hww' in proc:
                        funcname = 'shapeSig_%s_%s_morph_wrapper' % (bin, proc)
                    else:
                        funcname = 'shapeBkg_%s_%s_morph_wrapper' % (bin, proc)
        
                    normname = 'n_exp_final_bin%s_proc_%s' % (bin, proc)

                    hist = common.make_roofit_histogram('%s_postfit' % proc, ws, funcname, normname=normname)
                    if hist is None:
                        continue

                    hist.SetBins(nbins, 0., float(nbins))
                    err2 = rnp.array(hist.GetSumw2(), copy=False)
                    err2[:] = 0.
    
                    postfits[proc] = hist
       
            # get the uncertainty variations !!!not accounting for lnN variations!!!
            for key in plotsdir.GetListOfKeys():
                proc_var = key.GetName().replace('histo_', '')
                if proc_var == 'DATA':
                    continue
        
                if not proc_var.endswith('Up'):
                    continue
        
                shape = next(hist for proc, hist in prefits.iteritems() if proc_var.startswith(proc + '_'))
        
                upper = key.ReadObj()
                downer = plotsdir.Get(key.GetName()[:-2] + 'Down')
    
                cupper = rnp.hist2array(upper, copy=False, include_overflow=True)
                cdowner = rnp.hist2array(downer, copy=False, include_overflow=True)
    
                err2 = rnp.array(shape.GetSumw2(), copy=False)
                err2 += np.square((cupper - cdowner) * 0.5)
        
                upper.Delete()
                downer.Delete()
    
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
    
            if args.makeCRSpectra:
                merge(prefits, 'smH', 'smH_hww')
                merge(prefits, 'smH', 'htt')
                if args.postfit:
                    merge(postfits, 'smH', 'smH_hww')
                    merge(postfits, 'smH', 'htt')

            outdir = outfile.GetDirectory(cut_key)
            if not outdir:
                outdir = outfile.mkdir(cut_key)

            outdir.cd()
    
            # make totals histograms
    
            # we are treating all uncertainties as uncorrelated, which is wrong
            # but we don't even have the lnN uncertainties here, so it doesn't really matter
            if cut_key not in prefit_totals:
                if args.combination_sideways:
                    prefit_totals[cut_key] = make_sideways_combination('total_prefit', prefits['DATA'])
                else:
                    prefit_totals[cut_key] = prefits['DATA'].Clone('total_prefit')
    
                prefit_totals[cut_key].Reset()
                            
            for proc, hist in prefits.iteritems():
                if proc == 'DATA':
                    continue
    
                add_hist(prefit_totals[cut_key], hist)
    
            if args.postfit and (args.combination_sideways or args.dataset != 'combination'):
                # make a total postfit distribution with full uncertainties
                funcname = 'prop_bin%s%s' % (args.combination_tags[isource], cut)
                hist = common.make_roofit_histogram('tmp', ws, funcname, fitresult=fitresult, randomized_parameters=randomized_parameters)
            
                hist.SetBins(nbins, 0., float(nbins))
    
                if cut_key not in postfit_totals:
                    postfit_totals[cut_key] = prefit_totals[cut_key].Clone('total_postfit')
                    postfit_totals[cut_key].Reset()
    
                add_hist(postfit_totals[cut_key], hist)

                hist.Delete()
    
            # save individual histograms
    
            if cut_key in allprefit:
                for proc, hist in prefits.iteritems():
                    add_hist(allprefit[cut_key][proc], hist)
                    hist.Delete()
            else:
                allprefit[cut_key] = {}
                if args.combination_sideways:
                    for proc, hist in prefits.iteritems():
                        name = hist.GetName()
                        outdir.cd()
                        allprefit[cut_key][proc] = make_sideways_combination(name, hist)
                        add_hist(allprefit[cut_key][proc], hist)
                        hist.Delete()
                else:
                    for proc, hist in prefits.iteritems():
                        hist.SetDirectory(outdir)
                        allprefit[cut_key][proc] = hist
    
            if cut_key in allpostfit:
                for proc, hist in postfits.iteritems():
                    add_hist(allpostfit[cut_key][proc], hist)
                    hist.Delete()
            else:
                allpostfit[cut_key] = {}
                if args.combination_sideways:
                    for proc, hist in postfits.iteritems():
                        name = hist.GetName()
                        outdir.cd()
                        allpostfit[cut_key][proc] = make_sideways_combination(name, hist)
                        add_hist(allpostfit[cut_key][proc], hist)
                        hist.Delete()
                else:
                    for proc, hist in postfits.iteritems():
                        hist.SetDirectory(outdir)
                        allpostfit[cut_key][proc] = hist
    
            # copy observed
            allpostfit[cut_key]['DATA'] = allprefit[cut_key]['DATA']
    
    if args.postfit and args.dataset == 'combination' and not args.combination_sideways:
        # make a total postfit distribution with full uncertainties
        for cut_key, prefit in prefit_totals.iteritems():
            funcs = ROOT.RooArgList()
            coeffs = ROOT.RooArgList()
            for tag in args.combination_tags:
                cut = cutname_map[(cut_key, tag)]
                prop = ws.arg('prop_bin%s%s' % (tag, cut))
                funcs.add(prop.wrapperList())
                coeffs.add(prop.coefList())

            funcname = 'postfit_%s_total' % cut_key
            combfunc = ROOT.RooRealSumFunc(funcname, 'tmp', funcs, coeffs)
            getattr(ws, 'import')(combfunc)

            outfile.cd(cut_key)
    
            hist = common.make_roofit_histogram(funcname, ws, funcname, fitresult=fitresult, randomized_parameters=randomized_parameters)
    
            hist.SetBins(prefit.GetNbinsX(), prefit.GetXaxis().GetXmin(), prefit.GetXaxis().GetXmax())
            postfit_totals[cut_key] = hist

    if args.rootfile:
        outfile.cd()
        outfile.Write()

if args.postfit:
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

if args.dataset == 'combination' and args.combination_sideways:
    if args.single_cr_plot:
        #nvert = (2 if args.postfit else 3)
        nvert = 2
    else:
        nvert = 1

    canvas = common.makeRatioCanvas(900, 680, dataset='combination_comp', wide_labels=['2016', '2017', '2018'], nvert=nvert, make_yaxes=True, legend_inside=False, prelim=False)
else:
    canvas = common.makeRatioCanvas(600, 680, dataset=args.dataset, prelim=False)

_temporaries = []
def plotstack(stack, uncert, gobs, prefit=None, ivert=0):
    #del _temporaries[:]

    uncert.SetTickLength(0.05, 'X')
    uncert.SetTickLength(0., 'Y')
    uncert.SetFillColor(ROOT.kBlack)
    uncert.SetFillStyle(3003)
    uncert.SetLineColor(ROOT.kBlack)
    uncert.SetLineWidth(1)
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
    frame.SetMaximum(max(obsmax, uncert.GetMaximum()) * 1.22)

    frame.Draw('HIST')
    stack.Draw('SAME HIST')
    uncert.Draw('SAME E2')
    gobs.Draw('PZ')

    distpad.Update()

    ## Make ratio plot
    canvas.raxes[ivert].SetTitle('obs. / pred.')
    canvas.raxes[ivert].SetNdivisions(108)

    ratiopad = canvas.cd(ivert * 2 + 2)

    ratiopad.SetGridy(True)

    runcert = uncert.Clone('runcert')
    _temporaries.append(runcert)
    runcert.SetTitle('')

    if prefit:
        norm = rnp.hist2array(prefit, copy=False)
        idx_nonpositive = np.where(norm <= 0.)[0]
        # just set to 1
        norm[idx_nonpositive] = 1.

        obsarray = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
        obsarray /= norm
        obserrhi = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYhigh()))
        obserrhi /= norm
        obserrlo = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYlow()))
        obserrlo /= norm

        prefit_robs = gobs.Clone('prefit_robs')
        _temporaries.append(prefit_robs)
        prefit_robs.Set(gobs.GetN() - len(idx_nonpositive))

        irp = 0
        for ip in range(gobs.GetN()):
            if ip in idx_nonpositive:
                continue
    
            prefit_robs.SetPoint(irp, gobs.GetX()[ip], obsarray[ip])
            prefit_robs.SetPointEYhigh(irp, obserrhi[ip])
            prefit_robs.SetPointEYlow(irp, obserrlo[ip])
            irp += 1

        prefit_robs.SetMarkerStyle(4)
        prefit_robs.SetMarkerSize(1.)
        prefit_robs.SetMarkerColor(ROOT.kAzure)
        prefit_robs.SetLineColor(ROOT.kAzure)

    norm = rnp.hist2array(runcert, copy=False)
    idx_nonpositive = np.where(norm <= 0.)[0]
    # just set to 1
    norm[idx_nonpositive] = 1.

    err2s = rnp.array(runcert.GetSumw2(), copy=False)[1:-1]
    err2s /= np.square(norm)
    err2s[idx_nonpositive] = 0.

    obsarray = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetY()))
    obsarray /= norm
    obserrhi = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYhigh()))
    obserrhi /= norm
    obserrlo = rnp.array(ROOT.TArrayD(gobs.GetN(), gobs.GetEYlow()))
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

    rnp.array2hist(np.ones_like(norm), runcert)

    rmin = 0.5
    rmax = 1.5

    runcert.SetTickLength(0.1, 'X')
    runcert.SetTickLength(0., 'Y')
    runcert.GetXaxis().SetLabelSize(0.)
    runcert.GetXaxis().SetTitle('')
    runcert.GetYaxis().SetLabelSize(0.)
    runcert.GetYaxis().SetTitle('')
    runcert.GetYaxis().SetNdivisions(502)
    runcert.SetMinimum(rmin)
    runcert.SetMaximum(rmax)

    runcert.Draw('E2')

    one = ROOT.TLine(runcert.GetXaxis().GetXmin(), 1., runcert.GetXaxis().GetXmax(), 1.)
    _temporaries.append(one)
    one.SetLineColor(ROOT.kBlack)
    one.SetLineWidth(1)
    one.SetLineStyle(ROOT.kSolid)
    one.Draw()

    if prefit:
        prefit_robs.Draw('PZ')

    robs.Draw('PZ')

    # draw out-of-bounds error bars and arrows
    common.showOvershoots(robs, rmin, rmax)

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
    for cut_key, shapes in allshapes.iteritems():
        isSR = '_CR_' not in cut_key

        if args.variable == 'fitshape':
            if not isSR:
                vname = 'events'
            elif 'pt2ge20' in cut_key:
                if 'PTH_120_200' in cut_key or 'PTH_GT200' in cut_key:
                    vname = 'mllVSmth_4x3'
                elif 'NJ_2' in cut_key:
                    vname = 'mllVSmth_6x6'
                else:
                    #vname = 'mllVSmth_8x9'
                    vname = 'mllVSmth_6x6'
            else:
                if 'PTH_45_80' in cut_key:
                    vname = 'mllVSmth_4x3'
                elif 'PTH_80_120' in cut_key or 'PTH_120_200' in cut_key:
                    vname = 'mllVSmth_3x3'
                elif 'PTH_200_350' in cut_key or 'PTH_GT350' in cut_key or 'PTH_GT200' in cut_key:
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

                cont = rnp.hist2array(shape, copy=False)
                err2 = rnp.array(shape.GetSumw2(), copy=False)
                cont /= binarea
                err2[1:-1] /= np.square(binarea)

            else:
                shape.Scale(1., 'width')

        stack = ROOT.THStack('stack', '')
        uncert = totals[cut_key]

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
                print 'Plot for %s missing from %s' % (name, cut_key)
                if args.postfit:
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
            cont = rnp.hist2array(obs, copy=False, include_overflow=True)
            err2 = rnp.array(obs.GetSumw2(), copy=False)
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

        legend.AddEntry(gobs, 'observed', 'PL')

        plotstack(stack, uncert, gobs)

        canvas.cd()
        legend.Draw()

        if args.save_canvas:
            canvas.printout('%s_%s_%s' % (args.variable, cut_key, args.dataset), canvas_output_file)
        else:
            canvas.printout('%s/%s_%s_%s.png' % (args.out_path, args.variable, cut_key, args.dataset))
            canvas.printout('%s/%s_%s_%s.pdf' % (args.out_path, args.variable, cut_key, args.dataset))

        canvas.clear()

else:
    observable = args.makeCRSpectra

    if observable == 'ptH':
        common.binning[observable][-1] = 250. # set to a round number

    template = ROOT.TH1D('template', '', len(common.binnames[observable]), array.array('d', common.binning[observable]))
    if args.combination_sideways:
        tmp = template
        tmp.SetName('tmp')
        template = make_sideways_combination('template', tmp)
        tmp.Delete()

    nbin_ds = len(common.binnames[observable])

    if args.postfit:
        crs = ['top', 'DY']
    else:
        #crs = ['WW', 'top', 'DY']
        crs = ['top', 'DY']

    for icr, cr in enumerate(crs):
        uncert = template.Clone('uncert')
        _temporaries.append(uncert)
        for ibin, obsBin in enumerate(common.binnames[observable]):
            total = totals['hww_CR_cat%s_%s' % (obsBin, cr)]
            if args.combination_sideways:
                for ids in range(len(args.sourcePaths)):
                    uncert.SetBinContent(nbin_ds * ids + ibin + 1, total.GetBinContent(ids + 1))
                    uncert.SetBinError(nbin_ds * ids + ibin + 1, total.GetBinError(ids + 1))
            else:
                uncert.SetBinContent(ibin + 1, total.GetBinContent(1))
                uncert.SetBinError(ibin + 1, total.GetBinError(1))

        if args.binWidthNorm:
            uncert.Scale(1., 'width')

        prefit = None
        if args.postfit:
            prefit = template.Clone('prefit')
            _temporaries.append(prefit)

            for ibin, obsBin in enumerate(common.binnames[observable]):
                total = prefit_totals['hww_CR_cat%s_%s' % (obsBin, cr)]
                if args.combination_sideways:
                    for ids in range(len(args.sourcePaths)):
                        prefit.SetBinContent(nbin_ds * ids + ibin + 1, total.GetBinContent(ids + 1))
                        prefit.SetBinError(nbin_ds * ids + ibin + 1, total.GetBinError(ids + 1))
                else:
                    prefit.SetBinContent(ibin + 1, total.GetBinContent(1))
                    prefit.SetBinError(ibin + 1, total.GetBinError(1))
    
            if args.binWidthNorm:
                prefit.Scale(1., 'width')

        stack = ROOT.THStack('stack', '')
        _temporaries.append(stack)

        spectra = {}
        _temporaries.append(spectra)
        for name, _, color, opt in plotconfigs + [('DATA', 0, 0, '')]:
            hist = template.Clone(name)
            spectra[name] = hist
    
            for ibin, obsBin in enumerate(common.binnames[observable]):
                shapes = allshapes['hww_CR_cat%s_%s' % (obsBin, cr)]
                if name not in shapes:
                    continue

                if args.combination_sideways:
                    for ids in range(len(args.sourcePaths)):
                        hist.SetBinContent(nbin_ds * ids + ibin + 1, shapes[name].GetBinContent(ids + 1))
                        hist.SetBinError(nbin_ds * ids + ibin + 1, shapes[name].GetBinError(ids + 1))
                else:
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
        _temporaries.append(gobs)
        gobs.SetMarkerSize(0.6)

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

        if args.single_cr_plot:
            ivert = icr
        else:
            ivert = 0
            
        plotstack(stack, uncert, gobs, prefit=prefit, ivert=ivert)

        if observable == 'ptH':
            canvas.yaxes[icr].SetTitle('events / GeV  ')
        elif observable == 'njet':
            canvas.yaxes[icr].SetTitle('events  ')

        if not args.single_cr_plot:
            legend = ROOT.TLegend(0.65, 0.7, 0.93, 0.9)
        elif icr == 0:
            legend = ROOT.TLegend(0.4, common.ymax - canvas.hlegend + 0.01, common.xmax - 0.01, common.ymax - 0.01)
            legend.SetNColumns(4)
        else:
            continue

        _temporaries.append(legend)

        legend.SetBorderSize(0)
        legend.SetFillStyle(0)

        for name, title, _, opt in reversed(plotconfigs):
            try:
                legend.AddEntry(spectra[name], title, opt)
            except KeyError:
                pass

        legend.AddEntry(uncert, 'uncertainty', 'F')
        legend.AddEntry(gobs, 'observed', 'PL')

        if args.postfit:
            prefit_robs = ROOT.TGraph(1)
            prefit_robs.SetMarkerStyle(4)
            prefit_robs.SetMarkerSize(1.5)
            prefit_robs.SetMarkerColor(ROOT.kAzure)
            prefit_robs.SetLineColor(ROOT.kAzure)
            legend.AddEntry(prefit_robs, 'prefit ratio', 'PL')

        if observable == 'ptH':
            canvas.xaxis.SetTitle('p_{T}^{H} (GeV)')
            canvas.xaxis.SetNdivisions(105)
            if args.combination_sideways:
                canvas.xaxis.ChangeLabel(-1, -1, -1, -1, -1, -1, ' ')
        elif observable == 'njet':
            canvas.xaxis.SetTitle('N_{jet}')
            canvas.xaxis.SetNdivisions(105)
            canvas.xaxis.CenterLabels(True)
            canvas.xaxis.ChangeLabel(5, -1, -1, -1, -1, -1, '#geq 4')

        canvas.cd()
        legend.Draw()

        if not args.single_cr_plot:
            if args.save_canvas:
                canvas.printout('%scr_%s_spectrum_%s' % (cr, observable, args.dataset), canvas_output_file)
            else:
                canvas.printout('%s/%scr_%s_spectrum_%s.png' % (args.out_path, cr, observable, args.dataset))
                canvas.Print('%s/%scr_%s_spectrum_%s.pdf' % (args.out_path, cr, observable, args.dataset))
    
            canvas.clear()

    if args.single_cr_plot:
        if args.save_canvas:
            canvas.printout('cr_%s_spectrum_%s' % (observable, args.dataset), canvas_output_file)
        else:
            canvas.finalize()
            suppl = common.makeText(0.18, common.ymax - 0.06, 0.6, common.ymax - 0.02, 'supplementary', align=13, font=52)
            canvas.cd()
            suppl.Draw()
            canvas.Update()
            canvas.Print('%s/cr_%s_spectrum_%s.png' % (args.out_path, observable, args.dataset))
            canvas.Print('%s/cr_%s_spectrum_%s.pdf' % (args.out_path, observable, args.dataset))
    
if args.save_canvas:
    canvas_output_file.Close()
