import os
import sys
import array
import types
import math
import numpy as np
import ROOT
import root_numpy as rnp
import uproot

## ROOT styling
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetTextFont(132)
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

def get_fiducial_histograms(source, obs, prods, add_stat_only=False, variations=None, scaling={}):
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

    if variations is not None:
        for prod in prods:
            variations[prod] = {}

    uncert = rnp.array(htotal.GetSumw2()) # stat uncert squared

    for nuis in nuisances.itervalues():
        up = np.zeros_like(uncert)
        down = np.zeros_like(uncert)
        
        if nuis['type'] == 'shape':
            for prod in nuis['samples']:
                if prod not in prods:
                    continue

                hup = source.Get('fiducial/%s/histo_%s_%sUp' % (obs, prod, nuis['name']))
                dup = rnp.hist2array(hup, include_overflow=True, copy=False)
                hdown = source.Get('fiducial/%s/histo_%s_%sDown' % (obs, prod, nuis['name']))
                ddown = rnp.hist2array(hdown, include_overflow=True, copy=False)
                try:
                    dup *= scaling[prod]
                    ddown *= scaling[prod]
                except KeyError:
                    pass

                up += dup
                down += ddown

                if variations is not None:
                    hup.SetDirectory(0)
                    hdown.SetDirectory(0)
                    variations[prod][nuis['name']] = (hup, hdown)

        elif nuis['type'] == 'lnN':
            for prod, value in nuis['samples'].iteritems():
                if prod not in prods:
                    continue
                
                nom = rnp.hist2array(nominals[prod], include_overflow=True, copy=False)
                if '/' in value:
                    vdown, vup = map(float, value.split('/'))
                else:
                    vup = float(value)
                    vdown = 1. / vup

                up += nom * vup
                down += nom * vdown

                if variations is not None:
                    hup = nominals[prod].Clone('histo_%s_%sUp' % (prod, nuis['name']))
                    hdown = nominals[prod].Clone('histo_%s_%sDown' % (prod, nuis['name']))
                    hup.SetDirectory(0)
                    hdown.SetDirectory(0)
                    hup.Scale(vup)
                    hdown.Scale(vdown)
                    variations[prod][nuis['name']] = (hup, hdown)


        up -= down
        up *= 0.5
        uncert += np.square(up)

    htotal.GetSumw2().Set(len(uncert), array.array('d', uncert))

    if add_stat_only:
        return nominals, htotal, statonly
    else:
        return nominals, htotal


## Make a text pave with one call
def makeText(x1, y1, x2, y2, text, align=22, font=None, size=0.035, angle=0., ndc=True):
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
    if font is None:
        font = ROOT.gStyle.GetTextFont()
    ttext.SetTextFont(font)

    return pave

## Canvas coordinates
XMIN = 0.15
XMAX = 0.95
YMIN = 0.12
YMAX = 0.92

## CMS Preliminary
def makeCMS(prelim=True, out=False):
    if out:
        ybottom = YMAX + 0.01
        ytop = 0.98
        valign = 3
    else:
        if prelim:
            ybottom = YMAX - 0.08
        else:
            ybottom = YMAX - 0.06
        ytop = YMAX - 0.02
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
    return makeText(0.6, YMAX, XMAX, 1., text, align=33, font=42)

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
# panels = (ncol, nrow)
def makeRatioCanvas(width=600, height=600, dataset='combination', panels=(1, 1), legend_inside=True, prelim=True):
    canvas = ROOT.TCanvas('c1', 'c1', width, height)
    
    canvas.cmsLabel = makeCMS(prelim=prelim)
    canvas.lumiLabel = makeLumi(lumis[dataset])

    if legend_inside:
        canvas.hlegend = 0.
        canvas.ydmax = 1.
    else:
        canvas.hlegend = 0.08 # height of the area where the CMS and legend go
        canvas.ydmax = 0.95
        
    canvas.yrmin = 0.
    canvas.ydmin = 0.32
    canvas.yrmax = 0.28
    canvas.xwidth = 0.99

    canvas.xaxis = ROOT.TGaxis(XMIN, YMIN, XMAX, YMIN, 0., 1., 404, 'S')
    canvas.xaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('X') * 0.7)
    canvas.xaxis.SetLabelFont(ROOT.gStyle.GetTextFont())
    canvas.xaxis.SetTitleFont(ROOT.gStyle.GetTextFont())
    #canvas.xaxis.SetTitleSize(0.048)
    canvas.xaxis.SetTitleSize(0.025 + 0.015 / panels[1])
    #canvas.xaxis.SetLabelSize(0.875 * 0.048)
    canvas.xaxis.SetLabelSize(0.875 * (0.025 + 0.015 / panels[1]))
    canvas.xaxis.SetTickLength(0.)
    canvas.xaxis.SetGridLength(0.)

    def change_label(self, *args):
        self._ChangeLabel(*args)
        self._label_mods.append(args)

    canvas.xaxis._ChangeLabel = canvas.xaxis.ChangeLabel
    canvas.xaxis._label_mods = []
    canvas.xaxis.ChangeLabel = types.MethodType(change_label, canvas.xaxis)

    canvas.panels = panels

    hvert = (YMAX - YMIN - canvas.hlegend) / panels[1]

    canvas.yaxes = []
    canvas.raxes = []
    for iv in range(panels[1]):
        yoffset = iv * hvert + YMIN

        yaxis = ROOT.TGaxis(XMIN, yoffset + hvert * canvas.ydmin, XMIN, yoffset + hvert * canvas.ydmax, 0., 1., 105, 'S')
        yaxis.SetTitleFont(ROOT.gStyle.GetTextFont())
        yaxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.85)
        yaxis.SetTitleSize(0.025 + 0.015 / panels[1])
        yaxis.SetLabelFont(ROOT.gStyle.GetTextFont())
        yaxis.SetLabelSize(0.875 * (0.025 + 0.015 / panels[1]))
        yaxis.SetTickLength(0.)
        yaxis.SetGridLength(0.)
        canvas.yaxes.append(yaxis)

        #raxis = ROOT.TGaxis(XMIN, yoffset + hvert * canvas.yrmin, XMIN, yoffset + hvert * (canvas.yrmin + (canvas.yrmax - canvas.yrmin) * 0.95), 0., 1., 202, 'S')
        raxis = ROOT.TGaxis(XMIN, yoffset + hvert * canvas.yrmin, XMIN, yoffset + hvert * canvas.yrmax, 0., 1., 204, 'S')
        raxis.SetTitleFont(ROOT.gStyle.GetTextFont())
        raxis.SetTitleOffset(ROOT.gStyle.GetTitleOffset('Y') * 0.85)
        raxis.SetTitleSize(0.025 + 0.015 / panels[1])
        raxis.SetLabelFont(ROOT.gStyle.GetTextFont())
        raxis.SetLabelSize(0.875 * (0.025 + 0.015 / panels[1]))
        raxis.SetTickLength(0.)
        raxis.SetGridLength(0.)
        canvas.raxes.append(raxis)

    canvas.ratiotext = ''
    canvas.panel_labels = dict()

    def finalize(self):
        self.cd()

        ic = 0
        for iv in range(self.panels[1]):
            for ih in range(self.panels[0]):
                distpad = self.GetPad(ic * 2 + 1)
                ratiopad = self.GetPad(ic * 2 + 2)

                distpad.Update()
    
                frame = distpad.GetListOfPrimitives().At(1)
                rframe = ratiopad.GetListOfPrimitives().At(1)
    
                if not frame or not rframe:
                    continue
                
                xaxis = frame.GetXaxis()
                uxmin = xaxis.GetBinLowEdge(1)
                uxmax = xaxis.GetBinUpEdge(xaxis.GetNbins())

                distx1 = distpad.GetXlowNDC()
                distx2 = distpad.GetXlowNDC() + distpad.GetWNDC()
                disty1 = distpad.GetYlowNDC()
                distr1 = ratiopad.GetYlowNDC()

#                # dist pad
#                self.xaxis.DrawAxis(distx1, disty1, distx2, disty1, uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
#                newaxis = self.GetListOfPrimitives().Last()
#                newaxis.SetLabelSize(0.)
#                newaxis.SetTitle('')

                if iv == 0:
                    # ratio pad
                    self.cd()
                    self.xaxis.DrawAxis(distx1, distr1, distx2, distr1, uxmin, uxmax, self.xaxis.GetNdiv(), self.xaxis.GetOption(), self.xaxis.GetGridLength())
                    newaxis = self.GetListOfPrimitives().Last()
                    if ih != self.panels[0] - 1:
                        newaxis.SetTitle('')

                #    newaxis.SetBit(ROOT.TAxis.kCenterLabels, self.xaxis.TestBit(ROOT.TAxis.kCenterLabels))

                if (ih, iv) in self.panel_labels:
                    distpad.cd()
                    dataset_label = ROOT.TLatex(0., 0., '')
                    dataset_label.SetTextFont(ROOT.gStyle.GetTextFont())
                    dataset_label.SetTextAlign(31)
                    dataset_label.SetTextSize(0.15)
                    dataset_label.DrawLatexNDC(0.95, 0.85, self.panel_labels[(ih, iv)])
    
                if (ih, iv) == (0, self.panels[1] - 1) and self.ratiotext:
                    ratiopad.cd()
                    ratio_label = ROOT.TLatex(0., 0., '')
                    ratio_label.SetTextFont(ROOT.gStyle.GetTextFont())
                    ratio_label.SetTextAlign(31)
                    ratio_label.SetTextSize(0.3)
                    ratio_label.DrawLatexNDC(0.95, 0.7, self.ratiotext)

                distpad.RedrawAxis()
                ratiopad.RedrawAxis()

                ic += 1
    
            self.cd()

            uymin = distpad.GetUymin()
            uymax = distpad.GetUymax()

            if distpad.GetLogy():
                self.yaxes[iv].SetWmin(math.pow(10., uymin))
                self.yaxes[iv].SetWmax(math.pow(10., uymax))
                opt = self.yaxes[iv].GetOption()
                if 'G' not in opt:
                    self.yaxes[iv].SetOption(opt + 'G')
            else:
                self.yaxes[iv].SetWmin(uymin)
                self.yaxes[iv].SetWmax(uymax)
            self.yaxes[iv].Draw()

            urmin = ratiopad.GetUymin()
            urmax = ratiopad.GetUymax()

            self.raxes[iv].SetWmin(urmin)
            #self.raxes[iv].SetWmax(urmin + (urmax - urmin) * 0.95)
            self.raxes[iv].SetWmax(urmax)
            self.raxes[iv].Draw()

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

        self.Divide(self.panels[0] * self.panels[1] * 2, 1) # we specify the pad locations so there is no x and y distinction

        hvert = (YMAX - YMIN - self.hlegend) / self.panels[1]
        whoriz = (XMAX - XMIN) / self.panels[0]
        ic = 0
        for iv in range(self.panels[1]):
            yoffset = iv * hvert + YMIN

            xoffset = XMIN
            for ih in range(self.panels[0]):
                distpad = self.GetPad(ic * 2 + 1)
                distpad.SetPad(xoffset, yoffset + hvert * self.ydmin, xoffset + whoriz * self.xwidth, yoffset + hvert * self.ydmax)
                distpad.SetMargin(0., 0., 0., 0.)
                
                ratiopad = self.GetPad(ic * 2 + 2)
                ratiopad.SetPad(xoffset, yoffset + hvert * self.yrmin, xoffset + whoriz * self.xwidth, yoffset + hvert * self.yrmax)
                ratiopad.SetMargin(0., 0., 0., 0.)

                if self.panels[0] > 1:
                    xoffset += whoriz * self.xwidth + (XMAX - XMIN - whoriz * self.xwidth * self.panels[0]) / (self.panels[0] - 1)
                ic += 1

        if self.hlegend != 0.:
            self.cd()
            self.legendborder = ROOT.TBox(XMIN, YMAX - self.hlegend, XMAX, YMAX)
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

def get_mus(obs, source_path, breakdown_comps=[], breakdown_path='', bias_path='', rnames=None):
    if rnames is None:
        npoi = len(binnames[obs])
        rnames = ['r_%d' % i for i in range(npoi)]

    mus = []

    if breakdown_path:
        breakdown = {}
        for comp in breakdown_comps:
            tree = uproot.open(breakdown_path.format(comp=comp))['limit']
            try:
                breakdown[comp] = tree.arrays(rnames)
            except:
                print breakdown_path.format(comp=comp)
                raise

    if bias_path:
        tree = uproot.open(bias_path)['bias']
        biases = tree.arrays()

    tree = uproot.open(source_path)['limit']

    rvalues = tree.arrays(rnames)

    for ir, r in enumerate(rnames):
        cent = rvalues[r][0]
        errlo = cent - rvalues[r][1 + ir * 2]
        errhi = rvalues[r][2 + ir * 2] - cent
        mus.append((cent, errlo, errhi))

        if breakdown_path:
            for comp in breakdown_comps:
                varlo = cent - breakdown[comp][r][1 + ir * 2]
                varhi = breakdown[comp][r][2 + ir * 2] - cent
                if comp == 'StatOnly':
                    statlo = varlo
                    stathi = varhi
                else:
                    varlo2 = varlo * varlo - statlo * statlo
                    if varlo2 > 0.:
                        varlo = math.sqrt(varlo2)
                    else:
                        varlo = 0.
                    varhi2 = varhi * varhi - stathi * stathi
                    if varhi2 > 0.:
                        varhi = math.sqrt(varhi2)
                    else:
                        varhi = 0.

                mus[ir] += (varlo, varhi)

        if bias_path:
            mus[ir] += (-np.sum(biases[r]),)

    return mus
