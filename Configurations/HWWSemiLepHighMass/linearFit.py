#!/usr/bin/env python

import json
import sys
from sys import exit
import ROOT
import optparse
import LatinoAnalysis.Gardener.hwwtools as hwwtools
import os.path
import string
import logging
import LatinoAnalysis.Gardener.odict as odict
import traceback
from array import array
from collections import OrderedDict
import math
import numpy as np
import root_numpy as rnp


# ----------------------------------------------------- PlotFactory --------------------------------------

class PlotFactory:
    _logger = logging.getLogger('PlotFactory')

    # _____________________________________________________________________________
    def __init__(self):

        self._tag = ''

        variables = {}
        self._variables = variables

        cuts = {}
        self._cuts = cuts

        samples = OrderedDict()
        self._samples = samples

        self._plotsToWrite = ['c', 'cratio', 'cdifference']
        self._plotLinear = True
        self._plotLog = True

        outputDirPlots = {}
        self._outputDirPlots = outputDirPlots

        self._showIntegralLegend = 1
        # 0 is no

        self._FigNamePF = ''

        self._fileFormats = ['png', 'root']

    # _____________________________________________________________________________
    def makePlot(self, inputFile, outputDirPlots, variables, cuts, samples, plot, nuisances, legend, groupPlot):

        print "=================="
        print "==== makePlot ===="
        print "=================="

        self.defineStyle()

        self._variables = variables
        self._samples   = samples
        self._cuts      = cuts

        self._outputDirPlots = outputDirPlots
        os.system ("mkdir " + outputDirPlots + "/")

        #
        # prepare plotter.html
        #
        text_file_html = open(self._outputDirPlots + "/" + "plotter.html", "w")

        text_file_html.write("<script type=\"text/javascript\" src=\"https://root.cern.ch/js/latest/scripts/JSRootCore.js?gui\"></script>\n")
        text_file_html.write("<div id=\"simpleGUI\" path=\"./\" files=\"\n")



        ROOT.TH1.SetDefaultSumw2(True)

        dataColor = 1


        ROOT.gROOT.cd()

        list_thsData       = {}
        list_thsSignal     = {}
        list_thsBackground = {}

        list_thsSignal_grouped     = {}
        list_thsBackground_grouped = {}
        list_thsSignal_grouped_normalized = {}
        list_thsBackground_grouped_normalized = {}

        list_tcanvas               = {}
        list_tcanvasRatio          = {}
        list_weight_X_tcanvasRatio = {}
        list_tcanvasDifference          = {}
        list_weight_X_tcanvasDifference = {}
        list_tcanvasSigVsBkg       = {}
        list_tcanvasSigVsBkgTHstack = {}

        generalCounter = 0

        if os.path.isdir(inputFile):
          # ONLY COMPATIBLE WITH OUTPUTS MERGED TO SAMPLE LEVEL!!
          fileIn = {}
          allFiles = os.listdir(inputFile)
          for sampleName in self._samples:
            fileIn[sampleName] = ROOT.TFile.Open(inputFile+'/plots_%s_ALL_%s.root' % (self._tag, sampleName))
            if not fileIn[sampleName]:
              raise RuntimeError('Input file for sample ' + sampleName + ' missing')
          if os.path.exists(inputFile+'/plots_total.root'):
            fileIn['total'] = ROOT.TFile.Open(inputFile+'/plots_total.root')

        else:
          fileIn = ROOT.TFile(inputFile, "READ")

        #---- save one TCanvas for every cut and every variable
        for cutName in self._cuts :
          if not "incl" in cutName or not "ResolvedSB" in cutName:
            continue
          print "cut =", cutName
          for variableName, variable in self._variables.iteritems():
            if not "WhadMass" in variableName: continue
            if 'cuts' in variable and cutName not in variable['cuts']:
              continue

            if type(fileIn) is not dict and not fileIn.GetDirectory(cutName+"/"+variableName):
              continue

            print "variableName =", variableName

            if not "divideByBinWidth" in variable.keys():
              variable["divideByBinWidth"] = 0

            tcanvas            = ROOT.TCanvas( "cc" + cutName + "_" + variableName,      "cc"     , 800, 600 )
            tcanvasRatio       = ROOT.TCanvas( "ccRatio" + cutName + "_" + variableName, "ccRatio", 800, 800 )
            weight_X_tcanvasRatio = ROOT.TCanvas( "weight_X_tcanvasRatio" + cutName + "_" + variableName, "weight_X_tcanvasRatio", 800, 800 )
            tcanvasDifference       = ROOT.TCanvas( "ccDifference" + cutName + "_" + variableName, "ccDifference", 800, 800 )
            weight_X_tcanvasDifference = ROOT.TCanvas( "weight_X_tcanvasDifference" + cutName + "_" + variableName, "weight_X_tcanvasDifference", 800, 800 )
            if self._plotNormalizedDistributions :
              tcanvasSigVsBkg    = ROOT.TCanvas( "ccSigVsBkg" + cutName + "_" + variableName,      "cc"     , 800, 600 )

            if self._plotNormalizedDistributionsTHstack :
              tcanvasSigVsBkgTHstack    = ROOT.TCanvas( "ccTHstackSigVsBkg" + cutName + "_" + variableName,      "cc"     , 800, 600 )

            list_tcanvas                 [generalCounter] = tcanvas
            list_tcanvasRatio            [generalCounter] = tcanvasRatio
            list_weight_X_tcanvasRatio   [generalCounter] = weight_X_tcanvasRatio
            list_tcanvasDifference            [generalCounter] = tcanvasDifference
            list_weight_X_tcanvasDifference   [generalCounter] = weight_X_tcanvasDifference
            if self._plotNormalizedDistributions :
              list_tcanvasSigVsBkg         [generalCounter] = tcanvasSigVsBkg
            if self._plotNormalizedDistributionsTHstack :
              list_tcanvasSigVsBkgTHstack         [generalCounter] = tcanvasSigVsBkgTHstack



            histos = {}
            histos_grouped = {}

            canvasNameTemplateRatio = 'ccRatio_' + cutName + "_" + variableName
            canvasNameTemplateDifference = 'ccDifference_' + cutName + "_" + variableName
            #tcanvasRatio       = ROOT.TCanvas( canvasNameTemplateRatio, variableName, 800, 800 )

            canvasNameTemplate = 'c_' + cutName + "_" + variableName
            #tcanvas = ROOT.TCanvas( canvasNameTemplate, variableName , 800, 600 )
            tcanvas.cd()

            #print " and now this ..."

            tgrData_vx     = array('f')
            tgrData_evx    = array('f')
            tgrData_vy     = array('f')
            tgrData_evy_up = array('f')
            tgrData_evy_do = array('f')

            # at least 1 "MC" should be around ... otherwise what are we plotting? Only data?
            tgrMC_vx       = array('f')
            tgrMC_evx      = array('f')

            #these vectors are needed for nuisances accounting
            nuisances_vy_up     = {}
            nuisances_vy_do     = {}

            ROOT.gROOT.cd()

            thsData       = ROOT.THStack ("thsData_" + cutName + "_" + variableName,      "thsData_" + cutName + "_" + variableName)
            #print 'really before thstack ... one'
            thsSignal     = ROOT.THStack ("thsSignal_" + cutName + "_" + variableName,    "thsSignal_" + cutName + "_" + variableName)
            #print 'really before thstack ... two'
            thsBackground = ROOT.THStack ("thsBackground_" + cutName + "_" + variableName,"thsBackground_" + cutName + "_" + variableName)
            thsBackgroundNoWjets = ROOT.THStack   ("thsBackgroundNoWjets_" + cutName + "_" + variableName,"thsBackground_" + cutName + "_" + variableName)
            thsBackgroundOnlyWjets = ROOT.THStack ("thsBackgroundOnlyWjets_" + cutName + "_" + variableName,"thsBackground_" + cutName + "_" + variableName)
            #print 'really before thstack ... three'

            thsSignal_grouped     = ROOT.THStack ("thsSignal_grouped_" + cutName + "_" + variableName,    "thsSignal_grouped_" + cutName + "_" + variableName)
            #print 'really before thstack ... four'
            thsBackground_grouped = ROOT.THStack ("thsBackground_grouped_" + cutName + "_" + variableName,"thsBackground_grouped_" + cutName + "_" + variableName)

            list_thsData               [generalCounter] = thsData
            list_thsSignal             [generalCounter] = thsSignal
            list_thsBackground         [generalCounter] = thsBackground
            list_thsSignal_grouped     [generalCounter] = thsSignal_grouped
            list_thsBackground_grouped [generalCounter] = thsBackground_grouped


            generalCounter += 1

            #print '... after thstack ...'

            sigSupList    = []
            sigSupList_grouped    = []
            # list of additional histograms to be used in the ratio plot
            sigForAdditionalRatioList    = {}
            sigForAdditionalDifferenceList    = {}

            # enhanced list of nuisances, including bin-by-bin
            mynuisances = {}

            nexpected = 0

            for sampleName, plotdef in plot.iteritems():
              if 'samples' in variable and sampleName not in variable['samples']:
                continue

              shapeName = cutName+"/"+variableName+'/histo_' + sampleName
              print '     -> shapeName = ', shapeName
              if type(fileIn) is dict:
                histo = fileIn[sampleName].Get(shapeName)
              else:
                histo = fileIn.Get(shapeName)
              print ' --> ', histo
              print 'new_histo_' + sampleName + '_' + cutName + '_' + variableName
              histos[sampleName] = histo.Clone('new_histo_' + sampleName + '_' + cutName + '_' + variableName)

              # allow arbitrary scaling in MC (and DATA??), if needed
              # for example to "see" a signal
              if 'scale' in plotdef.keys() :
                histos[sampleName].Scale(plotdef['scale'])
                #print " >> scale ", sampleName, " to ", plotdef['scale']

              # apply cut dependent scale factors
              # for example when plotting different phase spaces
              if 'cuts' in plotdef.keys() and cutName in plotdef['cuts']:
                histos[sampleName].Scale( float( plotdef['cuts'][cutName] ) )

              # data style
              if plotdef['isData'] == 1 :
                if variable['divideByBinWidth'] == 1:
                  histos[sampleName].Scale(1,"width")

                #print ' plot[', sampleName, '][color] = ' , plotdef['color']
                histos[sampleName].SetMarkerColor(plotdef['color'])

                histos[sampleName].SetMarkerSize(1)
                histos[sampleName].SetMarkerStyle(20)
                histos[sampleName].SetLineColor(self._getColor(plotdef['color']))

                # blind data
                if 'isBlind' in plotdef.keys() and plotdef['isBlind'] == 1:
                  histos[sampleName].Reset()

                # Per variable blinding
                if 'blind' in variable:
                  if cutName in variable['blind']:
                    blind_range = variable['blind'][cutName]
                    if blind_range == "full":
                      for iBin in range(1, histos[sampleName].GetNbinsX()+1):
                        histos[sampleName].SetBinContent(iBin, 0)
                        histos[sampleName].SetBinError  (iBin, 0)
                      histos[sampleName].Reset()
                    elif type(blind_range) in [list,tuple] and len(blind_range)==2:
                      b0 = histos[sampleName].FindBin(blind_range[0])
                      b1 = histos[sampleName].FindBin(blind_range[1])
                      for iBin in range(1, histos[sampleName].GetNbinsX()+1):
                        if iBin >= b0 and iBin <= b1:
                          histos[sampleName].SetBinContent(iBin, 0)
                          histos[sampleName].SetBinError  (iBin, 0)

                thsData.Add(histos[sampleName])

                # first time fill vectors X axis
                if len(tgrData_vx) == 0 :
                  dataColor = histos[sampleName].GetMarkerColor()
                  for iBin in range(1, histos[sampleName].GetNbinsX()+1):
                    tgrData_vx.append(  histos[sampleName].GetBinCenter (iBin))
                    tgrData_evx.append( histos[sampleName].GetBinWidth (iBin) / 2.)
                    tgrData_vy.append(  histos[sampleName].GetBinContent (iBin))
                    #print " plot[", sampleName, "].keys() = ", plotdef.keys()
                    if ('isSignal' not in plotdef.keys() or plotdef['isSignal'] != 3) and not ('isBlind' in plotdef.keys() and plotdef['isBlind'] == 1) :
                      if variable['divideByBinWidth'] == 1:
                        tgrData_evy_up.append( self.GetPoissError(histos[sampleName].GetBinContent (iBin) * histos[sampleName].GetBinWidth (iBin) , 0, 1) / histos[sampleName].GetBinWidth (iBin) )
                        tgrData_evy_do.append( self.GetPoissError(histos[sampleName].GetBinContent (iBin) * histos[sampleName].GetBinWidth (iBin) , 1, 0) / histos[sampleName].GetBinWidth (iBin) )
                      else:
                        tgrData_evy_up.append( self.GetPoissError(histos[sampleName].GetBinContent (iBin) , 0, 1) )
                        tgrData_evy_do.append( self.GetPoissError(histos[sampleName].GetBinContent (iBin) , 1, 0) )
                    else :
                      tgrData_evy_up.append( 0 )
                      tgrData_evy_do.append( 0 )

                else :
                  for iBin in range(1, histos[sampleName].GetNbinsX()+1):
                    tgrData_vx[iBin-1] = (  histos[sampleName].GetBinCenter (iBin))
                    tgrData_evx.append( histos[sampleName].GetBinWidth (iBin) / 2.)
                    tgrData_vy[iBin-1] += histos[sampleName].GetBinContent (iBin)
                    if 'isSignal' not in plotdef.keys() or plotdef['isSignal'] == 3 :
                      if variable['divideByBinWidth'] == 1:
                        tgrData_evy_up[iBin-1] = SumQ ( tgrData_evy_up[iBin-1], self.GetPoissError(histos[sampleName].GetBinContent (iBin) * histos[sampleName].GetBinWidth (iBin) , 0, 1) / histos[sampleName].GetBinWidth (iBin))
                        tgrData_evy_do[iBin-1] = SumQ ( tgrData_evy_do[iBin-1], self.GetPoissError(histos[sampleName].GetBinContent (iBin) * histos[sampleName].GetBinWidth (iBin) , 1, 0) / histos[sampleName].GetBinWidth (iBin))
                      else:
                        tgrData_evy_up[iBin-1] = SumQ ( tgrData_evy_up[iBin-1], self.GetPoissError(histos[sampleName].GetBinContent (iBin) , 0, 1) )
                        tgrData_evy_do[iBin-1] = SumQ ( tgrData_evy_do[iBin-1], self.GetPoissError(histos[sampleName].GetBinContent (iBin) , 1, 0) )

              # if plotdef['isData'] == 1:
              else:
                # MC style
                # only background "filled" histogram
                if plotdef['isSignal'] == 0:
                  histos[sampleName].SetFillColor(self._getColor(plotdef['color']))
                  if 'fill' in plotdef:
                    histos[sampleName].SetFillStype(plotdef['fill'])
                  else:
                    histos[sampleName].SetFillStyle(3001)
                else :
                  histos[sampleName].SetFillStyle(0)
                  histos[sampleName].SetLineWidth(2)

                histos[sampleName].SetLineColor(self._getColor(plotdef['color']))

                if plotdef['isSignal'] == 1 :
                  if variable['divideByBinWidth'] == 1:
                    histos[sampleName].Scale(1,"width")

                  thsSignal.Add(histos[sampleName])

                elif plotdef['isSignal'] == 2 or plotdef['isSignal'] == 3 :
                  #print "SigSup histo: ", histos[sampleName]
                  if  variable['divideByBinWidth'] == 1:
                    histos[sampleName].Scale(1,"width")

                  sigSupList.append(histos[sampleName])

                  if plotdef['isSignal'] == 3 :
                    #print "sigForAdditionalRatio histo: ", histos[sampleName]
                    sigForAdditionalRatioList[sampleName] = histos[sampleName]
                    sigForAdditionalDifferenceList[sampleName] = histos[sampleName]
                else :
                  nexpected += histos[sampleName].Integral(1,histos[sampleName].GetNbinsX())   # it was (-1, -1) in the past, correct now
                  if variable['divideByBinWidth'] == 1:
                    histos[sampleName].Scale(1,"width")

                  thsBackground.Add(histos[sampleName])
                  if sampleName != "Wjets":
                    thsBackgroundNoWjets.Add(histos[sampleName])
                  else:
                    thsBackgroundOnlyWjets.Add(histos[sampleName])
                  #print " adding to background: ", sampleName

                # handle 'stat' nuisance to create the bin-by-bin list of nuisances
                # "massage" the list of nuisances accordingly
                for nuisanceName, nuisance in nuisances.iteritems():
                  if 'cuts' in nuisance and cutName not in nuisance['cuts']:
                    continue
                  # run only if this nuisance will affect the phase space defined in "cut"

                  #print " nuisanceName = ", nuisanceName
                  if nuisanceName == 'stat' : # 'stat' has a separate treatment, it's the MC/data statistics
                    #print " nuisance = ", nuisance
                    if 'samples' in nuisance.keys():
                      if sampleName in nuisance['samples'].keys() :
                        #print " stat nuisances for ", sampleName
                        if nuisance['samples'][sampleName]['typeStat'] == 'uni' : # unified approach
                          print 'In principle nothing to be done here ... just wait'
                        if nuisance['samples'][sampleName]['typeStat'] == 'bbb' : # bin-by-bin
                          # add N ad hoc nuisances, one for each bin
                          for iBin in range(1, histos[sampleName].GetNbinsX()+1):
                            if ('ibin_' + str(iBin) + '_stat') not in mynuisances.keys() :   # if new, add the new nuisance
                              #  Name of the histogram:    histo_" + sampleName + "_ibin_" + str(iBin) + "_statUp"
                              #  Then the nuisance is "ibin_" + str(iBin) + "_stat"
                              mynuisances['ibin_' + str(iBin) + '_stat'] = {
                                'samples'  : {   sampleName : '1.00', },
                              }
                            else :  # otherwise just add the new sample in the list of samples to be considered
                              mynuisances['ibin_' + str(iBin) + '_stat']['samples'][sampleName] = '1.00'
                  else :
                    if nuisanceName not in mynuisances.keys() :
                      if 'type' in nuisance.keys() and (nuisance['type'] == 'rateParam' or nuisance['type'] == 'lnU') :
                        pass
                        #print "skip this nuisance since 100 percent uncertainty :: ", nuisanceName
                      else :
                        mynuisances[nuisanceName] = nuisances[nuisanceName]

                nuisanceHistos = ({}, {})

                for nuisanceName, nuisance in mynuisances.iteritems():
                  # is this nuisance to be considered for this background?
                  if 'samples' in nuisance:
                    if sampleName not in nuisance['samples']:
                      continue
                  elif 'all' not in nuisance or nuisance['all'] != 1:
                    continue

                  if 'cuts' in nuisance and cutName not in nuisance['cuts']:
                    continue

                  if 'name' in nuisance:
                    shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisance['name']+var for var in ['Up', 'Down'])
                  else:
                    shapeNameVars = tuple(cutName+"/"+variableName+'/histo_' + sampleName+"_"+nuisanceName+var for var in ['Up', 'Down'])

                  if 'type' in nuisance and nuisance['type'] == 'lnN':
                    if 'samples' in nuisance:
                      values = nuisance['samples'][sampleName]
                      # example:
                      #              'samples'  : {
                      #                   'WW' : '1.00',
                      #                   'ggH': '1.23/0.97'
                      #                },
                    else: # 'all'
                      values = nuisance['value']

                    if '/' in values:
                      variations = map(float, values.split('/'))
                    else:
                      variations = (float(values), 2. - float(values))

                    # don't use  histos[sampleName], or the second "scale" will fail!!!
                    for ivar, shapeNameVar in enumerate(shapeNameVars):
                      histoVar = histo.Clone(shapeNameVar.replace('/', '__'))
                      histoVar.Scale(variations[ivar])

                      nuisanceHistos[ivar][nuisanceName] = histoVar

                  else:
                    for ivar, shapeNameVar in enumerate(shapeNameVars):
                      if type(fileIn) is dict:
                        histoVar = fileIn[sampleName].Get(shapeNameVar)
                      else:
                        histoVar = fileIn.Get(shapeNameVar)

                      nuisanceHistos[ivar][nuisanceName] = histoVar

                for ivar, nuisances_vy in enumerate([nuisances_vy_up, nuisances_vy_do]):
                  for nuisanceName, nuisance in mynuisances.iteritems():
                    try:
                      histoVar = nuisanceHistos[ivar][nuisanceName]
                    except KeyError:
                      # now, even if not considered this nuisance, I need to add it,
                      # so that in case is "empty" it will add the nominal value
                      # for this sample that is not affected by the nuisance
                      histoVar = histos[sampleName]
                    else:
                      if 'scale' in plotdef:
                        histoVar.Scale(plotdef['scale'])

                      # apply cut dependent scale factors
                      # for example when plotting different phase spaces
                      if 'cuts' in plotdef and cutName in plotdef['cuts']:
                        histoVar.Scale(float(plotdef['cuts'][cutName]))

                      if variable["divideByBinWidth"] == 1:
                        histoVar.Scale(1., "width")

                    try:
                      vy = nuisances_vy[nuisanceName]
                    except KeyError:
                      vy = nuisances_vy[nuisanceName] = np.zeros_like(rnp.hist2array(histo, copy=False))

                    # get the background sum
                    if plotdef['isSignal'] == 0:   # ---> add the signal too????? See ~ 20 lines below
                      vy += rnp.hist2array(histoVar, copy=False)

              # create the group of histograms to plot
              # this has to be done after the scaling of the previous lines
              # andl also after all the rest, so that we inherit the style of the histograms
              for sampleNameGroup, sampleConfiguration in groupPlot.iteritems():
                if sampleName in sampleConfiguration['samples']:
                  if sampleNameGroup in histos_grouped.keys() :
                    histos_grouped[sampleNameGroup].Add(histos[sampleName])
                  else :
                    histos_grouped[sampleNameGroup] = histos[sampleName].Clone('new_histo_group_' + sampleNameGroup + '_' + cutName + '_' + variableName)

            # end sample loop

            # set the colors for the groups of samples
            for sampleNameGroup, sampleConfiguration in groupPlot.iteritems():
              if sampleNameGroup in histos_grouped.keys() :
                histos_grouped[sampleNameGroup].SetLineColor(self._getColor(sampleConfiguration['color']))
                if sampleConfiguration['isSignal'] == 0:
                  histos_grouped[sampleNameGroup].SetFillColor(self._getColor(sampleConfiguration['color']))
                  if 'fill' in sampleConfiguration:
                    histos_grouped[sampleNameGroup].SetFillStyle(sampleConfiguration['fill'])
                  else:
                    histos_grouped[sampleNameGroup].SetFillStyle(3001)
                else :
                  histos_grouped[sampleNameGroup].SetFillStyle(0)
                  histos_grouped[sampleNameGroup].SetLineWidth(2)

            # fill the reference distribution with the background only distribution
            # save the central values of the bkg sum for use for the nuisance band

            #
            # How could this be ==0 ?
            # At least one MC sample should be defined ...
            # but still, let's leave the possibility
            #
            if thsBackground.GetNhists() != 0:
              last = thsBackground.GetStack().Last()
              tgrMC_vy = rnp.hist2array(last, copy=True)
              for iBin in range(1,thsBackground.GetStack().Last().GetNbinsX()+1):
                tgrMC_vx .append(thsBackground.GetStack().Last().GetBinCenter(iBin))
                tgrMC_evx.append(thsBackground.GetStack().Last().GetBinWidth(iBin) / 2.)
              nuisances_err2_up = rnp.array(last.GetSumw2())[1:-1]
              nuisances_err2_do = rnp.array(last.GetSumw2())[1:-1]
            else:
              tgrMC_vy = np.zeros((0,))
              nuisances_err2_up = np.zeros((0,))
              nuisances_err2_do = np.zeros((0,))

            #
            # and now  let's add the signal on top of the background stack
            # It is important to do this after setting (without signal) tgrMC_vy
            #
            for sampleName, plotdef in plot.iteritems():
              if 'samples' in variable and sampleName not in variable['samples']:
                continue

              # MC style
              if plotdef['isData'] == 0 :
                if plotdef['isSignal'] == 1 :
                  thsBackground.Add(histos[sampleName])

            #
            # you need to add the signal as well, since the signal was considered in the nuisances vector
            # otherwise you would introduce an uncertainty as big as the signal itself!!!
            #

            for nuisanceName in mynuisances.keys():
              # now we need to tell wthether the variation is actually up or down ans sum in quadrature those with the same sign
              up = nuisances_vy_up[nuisanceName]
              do = nuisances_vy_do[nuisanceName]
              up_is_up = (up > tgrMC_vy)
              dup2 = np.square(up - tgrMC_vy)
              ddo2 = np.square(do - tgrMC_vy)
              nuisances_err2_up += np.where(up_is_up, dup2, ddo2)
              nuisances_err2_do += np.where(up_is_up, ddo2, dup2)

            nuisances_err_up = np.sqrt(nuisances_err2_up)
            nuisances_err_do = np.sqrt(nuisances_err2_do)

            tgrData       = ROOT.TGraphAsymmErrors(thsBackground.GetStack().Last().GetNbinsX())
            for iBin in range(0, len(tgrData_vx)) :
              tgrData.SetPoint     (iBin, tgrData_vx[iBin], tgrData_vy[iBin])
              tgrData.SetPointError(iBin, tgrData_evx[iBin], tgrData_evx[iBin], tgrData_evy_do[iBin], tgrData_evy_up[iBin])

            tgrData.SetMarkerColor(dataColor)
            tgrData.SetLineColor(dataColor)

            ## Default: --postFit 0 --> No additional line is drawn
            ## ----------------------------------------------------

            ## --postFit 1 --> line is prefit
            if self._postFit == 'p':
                tgrDataOverPF = tgrData.Clone("tgrDataOverPF")    # use this for ratio with Post-Fit MC
                histoPF = fileIn.Get(cutName+"/"+variableName+'/histo_total_prefit')
            ## --postFit 2 --> line is (S+B) postfit
            if self._postFit == 's':
                tgrDataOverPF = tgrData.Clone("tgrDataOverPF")    # use this for ratio with Post-Fit MC
                histoPF = fileIn.Get(cutName+"/"+variableName+'/histo_total_postfit_s')
            ## --postFit 3 --> line is B-only postfit
            if self._postFit == 'b':
                tgrDataOverPF = tgrData.Clone("tgrDataOverPF")    # use this for ratio with Post-Fit MC
                histoPF = fileIn.Get(cutName+"/"+variableName+'/histo_total_postfit_b')


            last = thsBackground.GetStack().Last()
            lastNoWjets   = thsBackgroundNoWjets.GetStack().Last()
            lastOnlyWjets = thsBackgroundOnlyWjets.GetStack().Last()


            tgrDataOverMC = tgrData.Clone("tgrDataOverMC")
            tgrRemainingOverWjets = ROOT.TGraphAsymmErrors(tgrData)
            tgrRemainingOverWjets.SetName("tgrRemainingOverWjets")
            removed = 0
            for iBin in range(0, len(tgrData_vx)) :
                tgrDataOverMC.SetPoint     (iBin-removed, tgrData_vx[iBin], self.Ratio(tgrData_vy[iBin] , last.GetBinContent(iBin+1)) )
                tgrDataOverMC.SetPointError(iBin-removed, tgrData_evx[iBin], tgrData_evx[iBin], self.Ratio(tgrData_evy_do[iBin], last.GetBinContent(iBin+1)) , self.Ratio(tgrData_evy_up[iBin], last.GetBinContent(iBin+1)) )

                dataMinusNonWjets = self.Difference(tgrData_vy[iBin] , lastNoWjets.GetBinContent(iBin+1))
                value = self.Ratio(dataMinusNonWjets , lastOnlyWjets.GetBinContent(iBin+1))
                print(value)
                tgrRemainingOverWjets.SetPoint     (iBin-removed, tgrData_vx[iBin], value)
                tgrRemainingOverWjets.SetPointError(iBin-removed, tgrData_evx[iBin], tgrData_evx[iBin], self.Ratio(tgrData_evy_do[iBin], lastOnlyWjets.GetBinContent(iBin+1)) , self.Ratio(tgrData_evy_up[iBin], lastOnlyWjets.GetBinContent(iBin+1)) )
                if value < 0.1:
                    print("removed?")
                    tgrRemainingOverWjets.RemovePoint(iBin-removed)
                    removed += 1

            ## do linear fit
            tcanvas = ROOT.TCanvas( "mycanvas", "mycanvas", 800, 600 )
            newFile = ROOT.TFile("newfile.root", "RECREATE")
            tgrDataOverMC.Write()

            linearFunc = ROOT.TF1("pol1", "pol1", 40, 250)
            linearFunc.SetParameter(0, 1.3)
            linearFunc.SetParameter(1, -0.002)
            tgrRemainingOverWjets.Fit("pol1", "R")
            tgrRemainingOverWjets.Draw("AP")
            self._saveCanvas(tcanvas, "myfit")
            tcanvas.Draw()
            tcanvas.Show()
            tgrRemainingOverWjets.Write()
            newFile.Close()

            raw_input("Press enter to continue")




            print " >> end:", variableName

          print " >> all end"

        print " >> all but really all "



        #
        # close plotter.html
        #
        text_file_html.write(" \"></div>                                 \"\n")
        text_file_html.close()


        #sys.exit(0)
	#quit()
	#raise SystemExit()
        os._exit(0)
	#exit()

        # ... or it will remain hanging forever ...



   # _____________________________________________________________________________
   # --- squared sum
    def Pad2TAxis(self, hist):
         xaxis = hist.GetXaxis()
         xaxis.SetLabelFont ( 42)
         xaxis.SetLabelOffset( 0.025)
         xaxis.SetLabelSize ( 0.1)
         xaxis.SetNdivisions ( 505)
         xaxis.SetTitleFont ( 42)
         xaxis.SetTitleOffset( 1.35)
         xaxis.SetTitleSize ( 0.11)

         yaxis = hist.GetYaxis()
         yaxis.CenterTitle ( )
         yaxis.SetLabelFont ( 42)
         yaxis.SetLabelOffset( 0.02)
         yaxis.SetLabelSize ( 0.1)
         yaxis.SetNdivisions ( 505)
         yaxis.SetTitleFont ( 42)
         yaxis.SetTitleOffset( .6)
         yaxis.SetTitleSize ( 0.11)



   # _____________________________________________________________________________
   # --- squared sum
    def SumQ(self, A, B):
       return math.sqrt(A*A + B*B)

   # _____________________________________________________________________________
   # --- Ratio: if denominator is zero, then put 0!
    def Ratio(self, A, B):
       if B == 0:
         #print "divide by 0"
         return 0.
       else :
         return A / B

   # _____________________________________________________________________________
   # --- Difference
    def Difference(self, A, B):
       return A - B



   # _____________________________________________________________________________
   # --- poissonian error bayesian 1sigma band
   #                                      1/0   1/0
    def GetPoissError(self, numberEvents, down, up):
       alpha = (1-0.6827)
       L = 0
       if numberEvents!=0 :
         L = ROOT.Math.gamma_quantile (alpha/2,numberEvents,1.)
       U = 0
       if numberEvents==0 :
         #
         # Poisson error agreed in the CMS statistics committee
         # see: https://hypernews.cern.ch/HyperNews/CMS/get/statistics/263.html
         # and https://hypernews.cern.ch/HyperNews/CMS/get/HIG-16-042/32/1/1/1/1/1.html
         # and https://twiki.cern.ch/twiki/bin/viewauth/CMS/PoissonErrorBars
         # to avoid flip-flop.
         # The commented version would have created 1.147 for 0 observed events
         # while now we get 1.84 in the case of 0 observed events
         #
         U = ROOT.Math.gamma_quantile_c (alpha/2,numberEvents+1,1.)
         #U = ROOT.Math.gamma_quantile_c (alpha,numberEvents+1,1.)
         #print "u = ", U
       else :
         U = ROOT.Math.gamma_quantile_c (alpha/2,numberEvents+1,1.)

       # the error
       L = numberEvents - L
       if numberEvents > 0 :
         U = U - numberEvents
       #else :
         #U = 1.14 # --> bayesian interval Poisson with 0 events observed
         #1.14790758039 from 10 lines above

       if up and not down :
         return U
       if down and not up :
         return L
       if up and down :
         return (L,U)

   # _____________________________________________________________________________
    def GetMaximumIncludingErrors(self, histo):
        maxWithErrors = 0.
        for iBin in range(1, histo.GetNbinsX()+1):
          binHeight = histo.GetBinContent (iBin) + histo.GetBinError (iBin)
          if binHeight > maxWithErrors :
            maxWithErrors = binHeight

        return maxWithErrors;

   # _____________________________________________________________________________
    def GetMinimum(self, histo):
        minimum = -1.
        for iBin in range(1, histo.GetNbinsX()+1):
          binHeight = histo.GetBinContent (iBin)
          if binHeight < minimum or minimum<0:
            minimum = binHeight

        return minimum;


    # _____________________________________________________________________________
    def defineStyle(self):

        print "=================="
        import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle
        tdrStyle.setTDRStyle()

        ROOT.TGaxis.SetExponentOffset(-0.08, 0.00,"y")


   # _____________________________________________________________________________
   # --- fix binning
   #
    def FixBins(self, histo, reference_x, reference_x_err):


        #
        # variable bin width
        #

        nbins = len (reference_x)
        #print " nbins = ", nbins

        binning = [ reference_x[ibin]-reference_x_err[ibin]  for ibin in range (0, nbins) ]
        #binning = [ reference_histo.GetXaxis().GetBinLowEdge(ibin) for ibin in reference_histo.GetNbinsX()+1 ]
        binning.append (reference_x[nbins-1]+reference_x_err[nbins-1])
        #print " >>>       histo.GetName() ::", histo.GetName(), " ::> " , binning

        hnew = ROOT.TH1F("new_" + histo.GetName(),"", len(binning)-1, array('d', binning ))
        for ibin in range (0, nbins+1) :
          y = histo.GetBinContent(ibin)
          x = histo.GetXaxis().GetBinCenter(ibin)
          hnew.SetBinContent(ibin,y)

        hnew.SetFillColor(histo.GetFillColor())
        hnew.SetLineColor(histo.GetLineColor())
        hnew.SetFillStyle(histo.GetFillStyle())

        return hnew

    def _saveCanvas(self, tcanvas, nameBase, imageOnly=False):
        if 'png' in self._fileFormats:
            tcanvas.SaveAs(nameBase + ".png")
        if 'pdf' in self._fileFormats:
            tcanvas.SaveAs(nameBase + ".pdf")
        if 'eps' in self._fileFormats:
            tcanvas.SaveAs(nameBase + ".eps")

        if not imageOnly:
            if 'root' in self._fileFormats:
                tcanvas.SaveAs(nameBase + ".root")
            if 'C' in self._fileFormats:
                tcanvas.SaveAs(nameBase + ".C")

    def _getColor(self, color):
      if type(color) == int:
        return color
      elif type(color) == tuple:
        # RGB
        return ROOT.TColor.GetColor(*color)
      elif type(color) == str:
        # hex string
        return ROOT.TColor.GetColor(color)
