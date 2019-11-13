import os
import sys
import array
import types
import numpy as np
import ROOT
import root_numpy as rnp

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

## Import binning from tools
sys.path.append(os.path.dirname(thisdir))
import binning

## Differential fiducial bin names
binnames = binning.bins
bintitles = binning.bintitles
xtitles = binning.xtitles
variables = binning.variables
binning = binning.binning

## Fiducial histograms with proper uncertainties

def get_fiducial_histograms(source, obs, prods, add_stat_only=False, scaling={}):
    if '%s/fiducial' % confdir not in sys.path:
        sys.path.append('%s/fiducial' % confdir)

    from nuisances import nuisances
    
    nominals = {}
    for prod in prods:
        phist = source.Get('fiducial/%s/histo_%s' % (obs, prod))
        try:
            phist.Scale(scaling[prod])
        except KeyError:
            pass

        nominals[prod] = phist
        phist.SetDirectory(0)
    
    htotal = nominals[prods[0]].Clone('total_%s' % obs)
    htotal.SetDirectory(0)
    for prod in prods[1:]:
        htotal.Add(nominals[prod])

    if add_stat_only:
        statonly = htotal.Clone()

    uncert = rnp.array(htotal.GetSumw2()) # stat uncert squared

    for nuis in nuisances.itervalues():
        up = np.zeros_like(uncert)
        down = np.zeros_like(uncert)
        
        if nuis['type'] == 'shape':
            for prod in nuis['samples']:
                if prod not in prods:
                    continue

                dup = rnp.hist2array(source.Get('fiducial/%s/histo_%s_%sUp' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)
                ddown = rnp.hist2array(source.Get('fiducial/%s/histo_%s_%sDown' % (obs, prod, nuis['name'])), include_overflow=True, copy=False)
                try:
                    dup *= scaling[prod]
                    ddown *= scaling[prod]
                except KeyError:
                    pass

                up += dup
                down += ddown

        elif nuis['type'] == 'lnN':
            for prod, value in nuis['samples'].iteritems():
                if prod not in prods:
                    continue
                
                nom = rnp.hist2array(nominals[prod], include_overflow=True, copy=False)
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

    if add_stat_only:
        return nominals, htotal, statonly
    else:
        return nominals, htotal


## Make a text pave with one call
def makeText(x1, y1, x2, y2, text, align=22, font=42, size=0.035, angle=0., ndc=True):
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

    pave.SetFillStyle(0)
    pave.SetBorderSize(0)
    pave.SetMargin(0.)

    if align / 10 == 1: # left aligned
        x = 0.
    elif align % 10 == 2: # center aligned
        x = 0.5
    else:
        x = 1.

    if align % 10 == 1: # top aligned
        y = 1.
    elif align % 10 == 2: # center aligned
        y = 0.5
    else:
        y = 0.

    ttext = pave.AddText(x, y, text) # added at (0,0) of pave

    ttext.SetTextAlign(align)
    ttext.SetTextSize(size)
    ttext.SetTextAngle(angle)
    ttext.SetTextFont(font)

    return pave

## Canvas coordinates
xmin = 0.15
xmax = 0.95
ymin = 0.12
ymax = 0.92

## CMS Preliminary
def makeCMS(prelim=True, out=False):
    if out:
        ybottom = ymax
        ytop = 0.98
        valign = 3
    else:
        if prelim:
            ybottom = ymax - 0.08
        else:
            ybottom = ymax - 0.06
        ytop = ymax - 0.02
        valign = 1
    
    if prelim:
        text = '#splitline{CMS}{#font[52]{Preliminary}}'
    else:
        text = 'CMS'

    align = 10 + valign
    return makeText(0.18, ybottom, 0.3, ytop, text, align=align, font=62)

## Lumi
lumis = {
    '2016': '35.9',
    '2017': '41.5',
    '2018': '59.7',
    'combination': '137',
    'combination_comp': '35.9 + 41.5 + 59.7'
}

def makeLumi(lumi):
    text = '%s fb^{-1} (13 TeV)' % lumi
    return makeText(0.6, ymax, xmax, 1., text, align=33)

def showOvershoots(rgr, rmin, rmax):
    arrow = ROOT.TArrow(0., 0., 0., 0., rgr.GetMarkerSize() * 0.015, '|>')
    arrow.SetLineColor(rgr.GetLineColor())
    arrow.SetLineWidth(rgr.GetLineWidth())
    errbar = ROOT.TLine(0., 0., 0., 0.)
    errbar.SetLineColor(rgr.GetLineColor())
    errbar.SetLineWidth(rgr.GetLineWidth())    
    for ip in range(rgr.GetN()):
        x = rgr.GetX()[ip]
        y = rgr.GetY()[ip]
        errhi = rgr.GetErrorYhigh(ip)
        errlo = rgr.GetErrorYlow(ip)
        if y > rmax:
            if y - errlo > rmax:
                arrow.DrawArrow(x, 1., x, rmax - 0.05)
            else:
                errbar.DrawLine(x, y - errlo, x, rmax)
        elif y < rmin:
            if y + errhi > rmin:
                arrow.DrawArrow(x, 1., x, rmin + 0.05)
            else:
                errbar.DrawLine(x, y + errhi, x, rmin)

## Canvas with two pads
def makeRatioCanvas(width=600, height=600, dataset='combination', wide_labels=None, nvert=1, make_yaxes=False, legend_inside=True, prelim=True):
    canvas = ROOT.TCanvas('c1', 'c1', width, height)
    
    canvas.cmsLabel = makeCMS(prelim=prelim)
    canvas.lumiLabel = makeLumi(lumis[dataset])

    if legend_inside:
        canvas.hlegend = 0.
        canvas.ydmax = 1.
    else:
        canvas.hlegend = 0.08 # height of the area where the CMS and legend go
        canvas.ydmax = 0.97
        
    canvas.yrmin = 0.
    canvas.ydmin = 0.31
    canvas.yrmax = 0.3

    canvas.xaxis = ROOT.TGaxis(xmin, ymin, xmax, ymin, 0., 1., 404, 'S')
    canvas.xaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('X') * 0.8)
    canvas.xaxis.SetLabelFont(42)
    canvas.xaxis.SetTitleFont(42)
    canvas.xaxis.SetTitleSize(0.048)
    canvas.xaxis.SetLabelSize(0.875 * 0.048)
    canvas.xaxis.SetTickLength(0.02)
    canvas.xaxis.SetGridLength(0.)

    def change_label(self, *args):
        self._ChangeLabel(*args)
        self._label_mods.append(args)

    canvas.xaxis._ChangeLabel = canvas.xaxis.ChangeLabel
    canvas.xaxis._label_mods = []
    canvas.xaxis.ChangeLabel = types.MethodType(change_label, canvas.xaxis)

    if wide_labels is not None:
        if type(wide_labels[0]) is not list:
            wide_labels = [wide_labels] * nvert

    canvas.wide_labels = wide_labels
    canvas.nvert = nvert

    hvert = (ymax - ymin - canvas.hlegend) / nvert

    canvas.yaxes = []
    canvas.raxes = []
    for iv in range(nvert):
        yoffset = iv * hvert + ymin

        if make_yaxes:
            yaxis = ROOT.TGaxis(xmin, yoffset + hvert * canvas.ydmin, xmin, yoffset + hvert * canvas.ydmax, 0., 1., 110, 'S')
            yaxis.SetTitleFont(42)
            yaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.85)
            yaxis.SetTitleSize(0.048 / nvert)
            yaxis.SetLabelFont(42)
            yaxis.SetLabelSize(0.875 * 0.048 / nvert)
            yaxis.SetTickLength(0.03)
            yaxis.SetGridLength(0.)
            yaxis.SetNoExponent(True)
            canvas.yaxes.append(yaxis)

        raxis = ROOT.TGaxis(xmin, yoffset + hvert * canvas.yrmin, xmin, yoffset + hvert * (canvas.yrmin + (canvas.yrmax - canvas.yrmin) * 0.95), 0., 1., 204, 'S')
        raxis.SetTitleFont(42)
        raxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.85)
        raxis.SetTitleSize(0.048 / nvert)
        raxis.SetLabelFont(42)
        raxis.SetLabelSize(0.875 * 0.048 / nvert)
        raxis.SetTickLength(0.1)
        raxis.SetGridLength(0.)
        canvas.raxes.append(raxis)

    def finalize(self):
        self.cd()

        for iv in range(self.nvert):
            distpad = self.GetPad(iv * 2 + 1)
            ratiopad = self.GetPad(iv * 2 + 2)
    
            distpad.Update()

            frame = distpad.GetListOfPrimitives().At(1)
            rframe = ratiopad.GetListOfPrimitives().At(1)

            if not frame or not rframe:
                continue
            
            xaxis = frame.GetXaxis()
            uxmin = xaxis.GetXmin()
            disty1 = distpad.GetYlowNDC()

            if self.wide_labels is not None:
                dataset_divider = ROOT.TLine(0., 0., 0., 0.)
                dataset_divider.SetLineStyle(ROOT.kDotted)
                dataset_divider.SetLineWidth(1)
                dataset_divider.SetLineColor(ROOT.kBlack)

                dataset_label = ROOT.TLatex(0., 0., '')
                dataset_label.SetTextFont(42)
                dataset_label.SetTextAlign(11)
                dataset_label.SetTextSize(0.05 * self.nvert)

                uxmax = xaxis.GetBinUpEdge(xaxis.GetNbins() / len(self.wide_labels[iv]))
                xwidth = uxmax - uxmin

                x1 = distpad.GetXlowNDC()
                xlen = distpad.GetWNDC() / len(self.wide_labels[iv])

                for il, label in enumerate(self.wide_labels[iv]):
                    xdiv = xaxis.GetBinUpEdge(xaxis.GetNbins() / len(self.wide_labels[iv]) * il)
                    distpad.cd()
                    dataset_label.DrawLatex(xdiv + 0.05 * xwidth, frame.GetMaximum() * 0.85, label)
                    if il != 0:
                        dataset_divider.DrawLine(xdiv, frame.GetMinimum(), xdiv, frame.GetMaximum())
                        ratiopad.cd()
                        dataset_divider.DrawLine(xdiv, rframe.GetMinimum(), xdiv, rframe.GetMaximum())

                    self.cd()

                    # dist pad
                    self.xaxis.DrawAxis(x1, disty1, x1 + xlen, disty1, uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
                    newaxis = self.GetListOfPrimitives().Last()
                    newaxis.SetLabelSize(0.)
                    newaxis.SetTitle('')

                    # ratio pad
                    self.xaxis.DrawAxis(x1, self.raxes[iv].GetY1(), x1 + xlen, self.raxes[iv].GetY1(), uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
                    newaxis = self.GetListOfPrimitives().Last()
                    if iv != 0:
                        newaxis.SetLabelSize(0.)
                    else:
                        newaxis.SetBit(ROOT.TAxis.kCenterLabels, self.xaxis.TestBit(ROOT.TAxis.kCenterLabels))
                        for args in self.xaxis._label_mods:
                            newaxis.ChangeLabel(*args)

                    if iv != 0 or il != len(self.wide_labels[iv]) - 1:
                        newaxis.SetTitle('')

                    x1 += xlen

            else:
                uxmax = xaxis.GetBinUpEdge(xaxis.GetNbins() / len(self.wide_labels[iv]))

                # dist pad
                self.xaxis.DrawAxis(self.xaxis.GetX1(), disty1, self.xaxis.GetX2(), disty1, uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
                newaxis = self.GetListOfPrimitives().Last()
                newaxis.SetLabelSize(0.)
                newaxis.SetTitle('')

                # ratio pad
                self.xaxis.DrawAxis(x1, self.raxes[iv].GetY1(), x1 + xlen, self.raxes[iv].GetY1(), uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
                if iv != 0:
                    newaxis.SetLabelSize(0.)
                else:
                    newaxis.SetBit(ROOT.TAxis.kCenterLabels, self.xaxis.TestBit(ROOT.TAxis.kCenterLabels))
                if iv != 0 or il != len(self.wide_labels[iv]) - 1:
                    newaxis.SetTitle('')

            self.cd()

            uymin = distpad.GetUymin()
            uymax = distpad.GetUymax()

            if len(self.yaxes) != 0:
                self.yaxes[iv].SetWmin(uymin)
                self.yaxes[iv].SetWmax(uymax)
                self.yaxes[iv].Draw()

            urmin = ratiopad.GetUymin()
            urmax = ratiopad.GetUymax()

            self.raxes[iv].SetWmin(urmin)
            self.raxes[iv].SetWmax(urmin + (urmax - urmin) * 0.95)
            self.raxes[iv].Draw()

            distpad.RedrawAxis()
            ratiopad.RedrawAxis()

        self.cd()

        self.cmsLabel.Draw()
        self.lumiLabel.Draw()

        self.Update()

    def printout(self, path, out_file=None):
        self.finalize()

        if out_file is None:
            try:
                os.makedirs(os.path.dirname(path))
            except OSError:
                pass
    
            self.Print(path)

        else:
            out_file.cd()
            self.Write(path)

    def clear(self):
        self.Clear()

        self.Divide(1, 2 * self.nvert)

        hvert = (ymax - ymin - self.hlegend) / self.nvert
        for iv in range(self.nvert):
            yoffset = iv * hvert + ymin
            
            distpad = self.GetPad(iv * 2 + 1)
            if len(self.yaxes) == 0:
                distpad.SetPad(0., yoffset + hvert * self.ydmin, 1., yoffset + hvert * self.ydmax)
                distpad.SetMargin(xmin, 1. - xmax, 0., 0.)
            else:
                distpad.SetPad(xmin, yoffset + hvert * self.ydmin, xmax, yoffset + hvert * self.ydmax)
                distpad.SetMargin(0., 0., 0., 0.)
            
            ratiopad = self.GetPad(iv * 2 + 2)
            ratiopad.SetPad(xmin, yoffset + hvert * self.yrmin, xmax, yoffset + hvert * self.yrmax)
            ratiopad.SetMargin(0., 0., 0., 0.)

        if self.hlegend != 0.:
            self.cd()
            self.legendborder = ROOT.TBox(xmin, ymax - self.hlegend, xmax, ymax)
            self.legendborder.SetLineStyle(ROOT.kSolid)
            self.legendborder.SetLineColor(ROOT.kBlack)
            self.legendborder.SetLineWidth(1)
            self.legendborder.Draw()

    canvas.finalize = types.MethodType(finalize, canvas)
    canvas.printout = types.MethodType(printout, canvas)
    canvas.clear = types.MethodType(clear, canvas)

    canvas.clear()

    return canvas


def get_line_color(color):
    tcolor = ROOT.gROOT.GetColor(color)
    return ROOT.TColor.GetColor(tcolor.GetRed() * 0.9, tcolor.GetGreen() * 0.9, tcolor.GetBlue() * 0.9)

n_postfit_unc_toys = 200

def fold_hist(hist, fold):
    tmp = hist
    name = tmp.GetName()
    tmp.SetName('tmp')
    hist = ROOT.TH1D(name, '', len(fold), 0., float(len(fold)))
    hist.Sumw2()
    indices = np.array(fold)
    arr = np.sum(rnp.hist2array(tmp, copy=False)[indices], axis=1)
    tmp.Delete()
    rnp.array2hist(arr, hist)

    return hist

def set_postfit_uncertainty(hist, ws, fitresult, func, norm=None, randomized_parameters=None, fold=None):
    x = ws.var('CMS_th1x')
    ch = ws.cat('CMS_channel')
    
    err2 = rnp.array(hist.GetSumw2(), copy=False)
    err2 *= 0.

    anom = rnp.hist2array(hist, copy=False, include_overflow=True)

    fparams = func.getParameters(ROOT.RooArgSet(x, ch))
    fcentral = fparams.snapshot()
    if norm is not None:
        nparams = norm.getParameters(ROOT.RooArgSet(x, ch))
        ncentral = nparams.snapshot()
    
    # evaluate postfit uncertainties
    for itoy in range(n_postfit_unc_toys):
        if randomized_parameters is None:
            randomized = fitresult.randomizePars()
            fparams.assignValueOnly(randomized)
        else:
            fparams.assignValueOnly(randomized_parameters.get(itoy))

        htemp = func.createHistogram('tmp', x, ROOT.RooFit.Extended(False))
        if norm is not None:
            nparams.assignValueOnly(randomized)
            htemp.Scale(norm.getVal())

        if fold is not None:
            htemp = fold_hist(htemp, fold)

        atemp = rnp.hist2array(htemp, copy=False, include_overflow=True)

        err2 += np.square(atemp - anom) / n_postfit_unc_toys

        htemp.Delete()

    fparams.assignValueOnly(fcentral)
    if norm is not None:
        nparams.assignValueOnly(ncentral)

def make_roofit_histogram(name, ws, funcname, normname='', fitresult=None, randomized_parameters=None, fold=None):
    f = ws.arg(funcname)
    if not f:
        return None

    x = ws.var('CMS_th1x')

    hist = f.createHistogram(name, x, ROOT.RooFit.Extended(False))
    hist.SetName(hist.GetName().replace('__CMS_th1x', ''))
    hist.Sumw2()

    if normname:
        n = ws.arg(normname)
        hist.Scale(n.getVal())
    else:
        n = None

    if fold is not None:
        hist = fold_hist(hist, fold)

    if fitresult is not None:
        set_postfit_uncertainty(hist, ws, fitresult, f, n, randomized_parameters=randomized_parameters, fold=fold)

    return hist
