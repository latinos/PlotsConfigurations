import os
import sys
import array
import types
import numpy as np
import ROOT
import root_numpy

## ROOT styling
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(42)
ROOT.gStyle.SetLabelSize(0.035, 'X')
ROOT.gStyle.SetLabelSize(0.035, 'Y')
ROOT.gStyle.SetTitleSize(0.035, 'X')
ROOT.gStyle.SetTitleSize(0.035, 'Y')
ROOT.gStyle.SetTitleOffset(1.4, 'X')
ROOT.gStyle.SetTitleOffset(1.8, 'Y')
ROOT.gStyle.SetNdivisions(208, 'X')
ROOT.gStyle.SetFillStyle(0)

## Differential directory
thisdir = os.path.dirname(os.path.realpath(__file__))
confdir = os.path.dirname(os.path.dirname(thisdir))

## Differential fiducial bin names
binnames = {
    'ptH': [
        'PTH_0_20',
        'PTH_20_45',
        'PTH_45_80',
        'PTH_80_120',
        'PTH_120_200',
        'PTH_GT200'
    ],
    'njet': [
        'NJ_0',
        'NJ_1',
        'NJ_2',
        'NJ_3',
        'NJ_GE4'
    ]
}

bintitles = {
    'ptH': [
        '[0, 20]',
        '[20, 45]',
        '[45, 80]',
        '[80, 120]',
        '[120, 200]',
        '[200, #infty)',
        #'[200, 350]',
        #'[350, #infty)'
    ],
    'njet': [
        '0',
        '1',
        '2',
        '3',
        '#geq 4'
    ]
}

binning = {
    'ptH': [0., 20., 45., 80., 120., 200., 260.],
    #'ptH': [0., 20., 45., 80., 120., 200., 350., 400.],
    'njet': [0., 1., 2., 3., 4., 5.]
}

## Fiducial histograms with proper uncertainties

def get_fiducial_histograms(source, obs, prods):
    if '%s/fiducial' % confdir not in sys.path:
        sys.path.append('%s/fiducial' % confdir)

    from nuisances import nuisances
    
    nominals = {}
    for prod in prods:
        phist = source.Get('fiducial/%s/histo_%s' % (obs, prod))

        nominals[prod] = phist
        phist.SetDirectory(0)
    
    htotal = nominals[prods[0]].Clone('total_%s' % obs)
    htotal.SetDirectory(0)
    for prod in prods[1:]:
        htotal.Add(nominals[prod])

    uncert = root_numpy.array(htotal.GetSumw2()) # stat uncert squared
    for nuis in nuisances.itervalues():
        up = np.zeros_like(uncert)
        down = np.zeros_like(uncert)
        
        if nuis['type'] == 'shape':
            for prod in nuis['samples']:
                if prod not in prods:
                    continue
                
                up += root_numpy.hist2array(source.Get('fiducial/%s/histo_%s_%sUp' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)
                down += root_numpy.hist2array(source.Get('fiducial/%s/histo_%s_%sDown' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)

        elif nuis['type'] == 'lnN':
            for prod, value in nuis['samples'].iteritems():
                if prod not in prods:
                    continue
                
                nom = root_numpy.hist2array(nominals[prod], include_overflow=True, copy=False)
                if '/' in value:
                    vdown, vup = map(float, value.split('/'))
                    up += nom * vup
                    down += nom * vdown
                else:
                    value = float(value)
                    up += nom * value
                    down += nom / value

        up -= down
        up *= 0.5
        uncert += np.square(up)

    htotal.GetSumw2().Set(len(uncert), array.array('d', uncert))

    return nominals, htotal


## Make a text pave with one call
def makeText(x1, y1, x2, y2, align=22, font=42, size=0.035, angle=0., ndc=True):
    if type(align) is str:
        al = 0
        if 'left' in align:
            al += 10
        elif 'right' in align:
            al += 30
        else:
            al += 20

        if 'bottom' in align:
            al += 1
        elif 'top' in align:
            al += 3
        else:
            al += 2

        align = al

    pave = ROOT.TPaveText()
    if ndc:
        pave.SetX1NDC(x1)
        pave.SetX2NDC(x2)
        pave.SetY1NDC(y1)
        pave.SetY2NDC(y2)
    else:
        pave.SetX1(x1)
        pave.SetX2(x2)
        pave.SetY1(y1)
        pave.SetY2(y2)

    pave.SetTextAlign(align)
    pave.SetTextSize(size)
    pave.SetTextAngle(angle)
    pave.SetFillStyle(0)
    pave.SetBorderSize(0)
    pave.SetMargin(0.)
    pave.SetTextFont(font)

    return pave

## Canvas coordinates
xmin = 0.15
xmax = 0.95
ymin = 0.12
ymax = 0.92

## CMS Preliminary
def makeCMS():
    return makeText(0.18, ymax - 0.12, 0.3, ymax - 0.01, align=11, font=62)

## Lumi
lumis = {
    '2016': 35.9,
    '2017': 41.5,
    '2018': 59.7,
    'combination': 137.
}

def makeLumi():
    return makeText(0.6, ymax, xmax, 1., align=33)

## Canvas with two pads
def makeRatioCanvas(width=600, height=600, dataset='combination'):
    canvas = ROOT.TCanvas('c1', 'c1', width, height)
    
    canvas.cmsLabel = makeCMS()
    canvas.lumiLabel = makeLumi()
    
    canvas.cmsLabel.AddText('#splitline{CMS}{#font[52]{Preliminary}}')
    canvas.lumiLabel.AddText('%.1f fb^{-1} (13 TeV)' % lumis[dataset])
    
    ydmin = 0.305
    yrmax = 0.3

    canvas.xaxis = ROOT.TGaxis(xmin, ymin, xmax, ymin, 0., 1., 210, 'S')
    canvas.xaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('X') * 0.8)
    canvas.xaxis.SetLabelFont(42)
    canvas.xaxis.SetTitleFont(42)
    canvas.xaxis.SetTitleSize(0.048)
    canvas.xaxis.SetLabelSize(0.875 * 0.048)
    canvas.xaxis.SetTickLength(0.01)
    canvas.xaxis.SetGridLength(0.)
    
    canvas.raxis = ROOT.TGaxis(xmin, ymin, xmin, yrmax, 0., 1., 205, 'S')
    canvas.raxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.8)
    canvas.raxis.SetTitleSize(0.036)
    canvas.raxis.SetLabelFont(42)
    canvas.raxis.SetTitleFont(42)
    canvas.raxis.SetLabelSize(0.875 * 0.036)
    canvas.raxis.SetTickLength(0.03)
    canvas.raxis.SetGridLength(0.)

    def printout(self, path):
        try:
            os.makedirs(os.path.dirname(path))
        except OSError:
            pass

        distpad = self.GetPad(1)

        distpad.Update()
        uxmin = distpad.GetUxmin()
        uxmax = distpad.GetUxmax()

        self.cd()

        self.xaxis.SetWmin(uxmin)
        self.xaxis.SetWmax(uxmax)
        self.xaxis.Draw()

        self.raxis.Draw()

        self.cmsLabel.Draw()
        self.lumiLabel.Draw()

        self.Update()

        self.Print(path)

    def clear(self):
        self.Clear()

        self.Divide(1, 2)

        distpad = self.GetPad(1)
        distpad.SetPad(0., 0., 1., 1.)
        distpad.SetMargin(xmin, 1. - xmax, ydmin, 1. - ymax)
        
        ratiopad = self.GetPad(2)
        ratiopad.SetPad(xmin, ymin, xmax, yrmax)
        ratiopad.SetMargin(0., 0., 0., 0.)

    canvas.printout = types.MethodType(printout, canvas)
    canvas.clear = types.MethodType(clear, canvas)

    canvas.clear()

    return canvas


def get_line_color(color):
    tcolor = ROOT.gROOT.GetColor(color)
    return ROOT.TColor.GetColor(tcolor.GetRed() * 0.9, tcolor.GetGreen() * 0.9, tcolor.GetBlue() * 0.9)

def set_postfit_uncertainty(hist, ws, fitresult, func, norm=None):
    ntoys = 200

    x = ws.var('CMS_th1x')
    ch = ws.cat('CMS_channel')
    
    err2 = root_numpy.array(hist.GetSumw2(), copy=False)
    err2 *= 0.

    anom = root_numpy.hist2array(hist, copy=False, include_overflow=True)

    fparams = func.getParameters(ROOT.RooArgSet(x, ch))
    if norm is not None:
        nparams = norm.getParameters(ROOT.RooArgSet(x, ch))
    
    # evaluate postfit uncertainties
    for _ in range(ntoys):
        randomized = fitresult.randomizePars()
        fparams.assignValueOnly(randomized)
        htemp = func.createHistogram('tmp', x, ROOT.RooFit.Extended(False))
        if norm is not None:
            nparams.assignValueOnly(randomized)
            htemp.Scale(norm.getVal())

        atemp = root_numpy.hist2array(htemp, copy=False, include_overflow=True)
        err2 += np.square(atemp - anom) / ntoys

        htemp.Delete()

def make_roofit_histogram(name, ws, funcname, normname='', fitresult=None):
    f = ws.arg(funcname)
    if not f:
        return None

    x = ws.var('CMS_th1x')

    hist = f.createHistogram(name, x, ROOT.RooFit.Extended(False))
    hist.Sumw2()

    if normname:
        n = ws.arg(normname)
        hist.Scale(n.getVal())
    else:
        n = None

    if fitresult is not None:
        set_postfit_uncertainty(hist, ws, fitresult, f, n)

    return hist
