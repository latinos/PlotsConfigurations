#!/usr/bin/env python

#
# original code starting from https://github.com/amassiro/HiggsAnalysis-CombinedLimit
#

import re
import os.path
from math import *
from optparse import OptionParser


os.environ['TERM'] = 'linux'


parser = OptionParser()
parser.add_option("-f", "--format",  dest="format",   default="html",          type="string",  help="Format for output number")
parser.add_option("-m", "--mass",    dest="mass",     default=0,               type="float",  help="Higgs mass to use. Will also be written in the Workspace as RooRealVar 'MH'.")
parser.add_option("-D", "--dataset", dest="dataname", default="data_obs",      type="string",  help="Name of the observed dataset")
parser.add_option("-a", "--all",     dest="all",      default=False, action='store_true',  help="Report all nuisances (default is only lnN)")
parser.add_option("", "--noshape",   dest="noshape",  default=False, action='store_true',  help="Counting experiment only (alternatively, build a shape analysis from combineCards.py -S card.txt > newcard.txt )")
parser.add_option("-o", "--output",  dest="output",   default="minitable.tex", type="string",  help="Summary table")
parser.add_option("", "--blind",     dest="blind",    default=False, action='store_true',  help="blind (default is false)")
parser.add_option("", "--legend",    dest="legend",   default="",              type="string",  help="Addition information in caption")

                      

(options, args) = parser.parse_args()
options.stat = False
options.bin = True # fake that is a binary output, so that we parse shape lines
options.out = "tmp.root"
options.fileName = args[0]
options.cexpr = False
options.fixpars = False
options.libs = []
options.verbose = 0
options.poisson = 0
options.nuisancesToExclude = []
options.noJMax = True
options.allowNoSignal = True
options.modelparams = ""
options.optimizeTemplateBins = False


# import ROOT with a fix to get batch mode (http://root.cern.ch/phpBB3/viewtopic.php?t=3198)
import sys
sys.argv = [ '-b-']
import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")

from HiggsAnalysis.CombinedLimit.DatacardParser import *
from HiggsAnalysis.CombinedLimit.ShapeTools     import *
if options.fileName.endswith(".gz"):
    import gzip
    file = gzip.open(options.fileName, "rb")
    options.fileName = options.fileName[:-3]
else:
    file = open(options.fileName, "r")

DC = parseCard(file, options)
if not DC.hasShapes: DC.hasShapes = True
MB = ShapeBuilder(DC, options)
if not options.noshape: MB.prepareAllShapes()

def commonStems(list, sep="_"):
    hits = {}
    for item in list:
        base = ""
        for token in item.split(sep):
            base = base + sep + token if base else token
            if base not in hits: hits[base] = 0
            hits[base] += 1
    veto = {}
    for k,v in hits.iteritems():
        pieces = k.split(sep)
        for i in xrange(1, len(pieces)):
            k2 = "_".join(pieces[:-i])
            if hits[k2] == v: 
                veto[k2] = True
            else:
                veto[k] = True
    ret = []
    for k,v in hits.iteritems():
       if k not in veto: ret.append((k,v))
    ret.sort()
    return ret 
    
report = {}; errlines = {}
for (lsyst,nofloat,pdf,pdfargs,errline) in DC.systs:
    if not options.all and pdf != "lnN": continue
    if not len(errline) : continue
    types = []
    minEffect, maxEffect = 999.0, 1.0
    processes = {}
    channels  = []
    errlines[lsyst] = errline
    for b in DC.bins:
        types.append(pdf)
        channels.append(b)
        for p in DC.exp[b].iterkeys():
            if errline[b][p] == 0: continue
            processes[p] = True
            if "shape" in pdf :
                vals = []
                objU,objD,objC = MB.getShape(b,p,lsyst+"Up"), MB.getShape(b,p,lsyst+"Down"), MB.getShape(b,p)
                if objC.InheritsFrom("TH1"): valU,valD,valC =  objU.Integral(), objD.Integral(), objC.Integral()
                elif objC.InheritsFrom("RooDataHist"): valU,valD,valC =  objU.sumEntries(), objD.sumEntries(), objC.sumEntries()
                if valC!=0: 
                        errlines[lsyst][b][p] = "%.3f/%.3f"%(valU/valC,valD/valC)
                        vals.append(valU/valC)
                        vals.append(valD/valC)
                else: 
                        errlines[lsyst][b][p] = "NAN/NAN"
                        vals.append(1.)
                        vals.append(1.)
            else: vals = errline[b][p] if type(errline[b][p]) == list else [ errline[b][p] ]
            for val in vals:
                if val < 1 and val !=0 : val = 1.0/val
                minEffect = min(minEffect, val)
                maxEffect = max(maxEffect, val)
    channelsShort = commonStems(channels)
    types = ",".join(set(types))
    report[lsyst] = { 'channels':channelsShort, 'bins' : channels, 'processes': sorted(processes.keys()), 'effect':("%5.3f"%minEffect,"%5.3f"%maxEffect), 'types':types }

# Get list
names = report.keys() 
if "brief" in options.format:
    names = [ k for (k,v) in report.iteritems() if len(v["bins"]) > 1 ]
# alphabetic sort
names.sort()
# now re-sort by category (preserving alphabetic sort inside)
namesCommon = [ n for n in names if re.match(r"(pdf_|QCD|lumi|UE|BR).*", n) ]
namesCMS1   = [ n for n in names if re.match(r"CMS_(eff|scale|fake|res|trig).*", n) ]
namesCMS2   = [ n for n in names if re.match(r"CMS_.*", n) and n not in namesCMS1 ]
namesRest   = [ n for n in names if n not in namesCommon and n not in namesCMS1 and n not in namesCMS2 ]
names = namesCommon + namesCMS1 + namesCMS2 + namesRest

if "html" in options.format:
    print """
<html>
<head>
<style type="text/css">
body { font-family: 'Consolas', 'Courier New', courier, monospace; font-size: small; }
td, th { border-bottom: 1px solid black; padding: 1px 1em; vertical-align: top; }
td.channDetails { font-size: x-small; }
</style>
<script type="text/javascript">
function toggleChann(id) {
    if (document.getElementById(id+"_chann_toggle").innerHTML == "[+]") {
        document.getElementById(id+"_chann").style = "";
        document.getElementById(id+"_chann_toggle").innerHTML = "[-]";
    } else {
        document.getElementById(id+"_chann").style = "display: none";
        document.getElementById(id+"_chann_toggle").innerHTML = "[+]";
    }
}
</script>
<title>Nuisance Report</title>
</head><body>
<h1>Nuisance Report</h1>
<table>
<tr><th>Nuisance (types)</th><th colspan="2">Range</th><th>Processes</th><th>Channels</th></tr>
"""
    for nuis in names:
        val = report[nuis]
        print "<tr><td><a name=\"%s\"><b>%s</b></a></td>" % (nuis,nuis+"  ("+val['types']+")")
        #print "<td>%5.3f</td><td>%5.3f</td>" % ( val['effect'][0],val['effect'][1] )
        print "<td>%s</td><td>%s</td>" % ( val['effect'][0],val['effect'][1] )
        print "<td>",", ".join(val['processes']), "</td>"
        print "<td>%s" % ", ".join(["%s(%d)" % (k,v) for (k,v) in sorted(val['channels'])]),
        print "<a id=\"%s_chann_toggle\" href=\"#%s\" onclick=\"toggleChann(&quot;%s&quot;)\">[+]</a></td>" % (nuis,nuis,nuis)
        print "</tr>"
        print "<tr id=\"%s_chann\" style=\"display: none\">" % nuis
        print "\t<td colspan=\"5\"><table class=\"channDetails\">" 
        for x in sorted(val["bins"]): print "\t\t<tr><td>%s</td><td>%s</td></li>" % (x, ", ".join(["%s(%s)"%(k,v) for (k,v) in errlines[nuis][x].iteritems() if v != 0]))
        print "\t</table></td>"
        print "</tr>\n"
    print """
</table>
</body>
</html>"""
elif "brief" in options.format:
        print "%-50s  [%5s, %5s]   %-40s  %-30s" % ("   NUISANCE (TYPE)", " MIN", " MAX", "PROCESSES", "CHANNELS(#SUBCHANNELS)" )
        print "%-50s  %14s   %-40s  %-30s" % ("-"*50, "-"*14, "-"*30, "-"*30)
        for nuis in names:
            val = report[nuis]
            print "%-50s (%s)  [%s, %s]   %-40s  %-30s" % ( nuis,val['types'], val['effect'][0],val['effect'][1], 
                                                                ",".join(val['processes']),
                                                                ",".join(["%s(%d)" % (k,v) for (k,v) in sorted(val['channels'])]))
            
elif "tex" in options.format:
    
  for channel in DC.exp:

    the_only_channel = channel
    print ''
    print ''
    print ''
    
    #print '\\begin{landscape}'
    print '\\begin{table}[h!]\\begin{center}'
    #print '\\footnotesize{' 
    #print '\\tiny{'
    #print '{\\fontsize{2.5}{4}\\selectfont'
    print '{\\fontsize{1.5}{1.0}\\selectfont'
    print '  \\begin{tabular}{',

    signals     = DC.list_of_signals()
    backgrounds = DC.list_of_backgrounds()
    allprocesses = DC.list_of_procs()

    signals_uncertainties = {}
    backgrounds_uncertainties = {}
    
    map_all_sig_uncertainty = {}
    map_all_bkg_uncertainty = {}
    
    sys.stdout.write ('c|') # the column with the names   
    for signal in signals :
      sys.stdout.write ('c|')
    print '|',  
    for background in backgrounds :
      print 'c|',
    print '}'
    
    for signal in signals :
      print (" & %13s " % signal.replace('_', '-')),
      #print '&', signal,
    for background in backgrounds :
      #print '&', background,
      print (" & %13s " % background.replace('_', '-')),
    print '\\\\ \\hline'
    
    for signal in signals :
      if signal in DC.exp[channel].keys(): # possible that some backgrounds appear only in some channels
        print (" & %10.2f " % (DC.exp[channel][signal])),
    for background in backgrounds :
      if background in DC.exp[channel].keys(): # possible that some backgrounds appear only in some channels
        print (" & %10.2f " % (DC.exp[channel][background])),
    print '\\\\ \\hline'


    for nuis in names:

         map_all_sig_uncertainty[nuis] = 0
         
         val = report[nuis]

         print ("  %30s   " % (nuis.replace('_', '-')+"  ("+val['types']+")")),
         print '    ',
         for signal in signals :
           if signal in val['processes'] : 
             for x in sorted(val["bins"]): 
                print (' &  %s'  % (errlines[nuis][x][signal])),
                
                uncertainty = (errlines[nuis][x][signal])
                print "uncertainty = ", uncertainty
                if isinstance(uncertainty, list) : 
                  symmetrized_error = (abs(uncertainty[0]-1) +  abs(uncertainty[1]-1)) / 2.
                  uncertainty = symmetrized_error
                else :
                  #print ' ma quindi: uncertainty = ', uncertainty
                  if not isinstance(uncertainty, (int, long, float)) :
                    if '/' in uncertainty:
                      #print 'ma perbacco ...', uncertainty
                      uncertainty_split = uncertainty.split('/')
                      #print "uncertainty_split = ", uncertainty_split
                      uncertainty = (abs(float(uncertainty_split[0])-1) +  abs(float(uncertainty_split[1])-1)) / 2.
                  else :
                    if uncertainty != '-' :
                      uncertainty = abs(1 - uncertainty)
                    else :
                      uncertainty = 0
                #print "--> symmetrized_error = ", symmetrized_error
                #print "uncertainty = ", uncertainty
                
                if signal in signals_uncertainties.keys() :
                  if not isnan(float(uncertainty)) :
                    print "signals_uncertainties[", signal, "] = ", signals_uncertainties[signal]
                    #print "uncertainty = ", uncertainty
                    signals_uncertainties[signal] = sqrt(signals_uncertainties[signal] * signals_uncertainties[signal] + uncertainty*uncertainty)
                else :
                  if not isnan(float(uncertainty)) :
                    signals_uncertainties[signal] = uncertainty
                  
                if not isnan(float(uncertainty)) :
                  map_all_sig_uncertainty[nuis] = map_all_sig_uncertainty[nuis] + DC.exp[x][signal] * uncertainty

           else :
             print ' &  - ',

         map_all_bkg_uncertainty[nuis] = 0

         for background in backgrounds :
           if background in val['processes'] : 
             for x in sorted(val["bins"]): 
                print (' &  %s'  % (errlines[nuis][x][background])),

                uncertainty = (errlines[nuis][x][background])
                if isinstance(uncertainty, list) : 
                  symmetrized_error = (abs(uncertainty[0]-1) +  abs(uncertainty[1]-1)) / 2.
                  uncertainty = symmetrized_error
                else :
                  if not isinstance(uncertainty, (int, long, float)) :
                    if '/' in uncertainty:
                      uncertainty_split = uncertainty.split('/')
                      uncertainty = (abs(float(uncertainty_split[0])-1) +  abs(float(uncertainty_split[1])-1)) / 2.
                  else :
                    if uncertainty != '-' :
                      uncertainty = abs(1 - uncertainty)
                    else :
                      uncertainty = 0
 
                #print " uncertainty = ", uncertainty
                if not isnan(float(uncertainty)) :
                  if background in backgrounds_uncertainties.keys() :
                    backgrounds_uncertainties[background] = sqrt(backgrounds_uncertainties[background] * backgrounds_uncertainties[background] + uncertainty*uncertainty)
                  else :
                    backgrounds_uncertainties[background] = uncertainty

                  map_all_bkg_uncertainty[nuis] = map_all_bkg_uncertainty[nuis] + DC.exp[x][background] * uncertainty

           else :
             print ' &  - ',
                       
         print '\\\\  '


    print '\\hline'
    
    print '  \\end{tabular}',
    print '}' 
    print '  \\caption{'
    print '     Summary table:: prefit nuisances for', (the_only_channel).replace('_', '-'), '.'
    sys.stdout.write ('\\label{tab:prefit-nuisance-' + (the_only_channel).replace('_', '-') + '}')
    print '  }'
    print '\\end{center}'
    print '\\end{table}'
    #print '\\end{landscape}'


    print ''
    print ''
    print ''
    
    
    #
    # now summary table with rates
    # into the summary table
    # options.output
    #
    
    
    summaryTable = open( options.output ,"w")
             
    summaryTable.write('\n')
    summaryTable.write('\n')
    summaryTable.write('\n')
    
    summaryTable.write('\\begin{table}[h!]\\begin{center}\n')
    summaryTable.write('  \\begin{tabular}{|')

    summaryTable.write('c|') # the column with the names   
    summaryTable.write('c|') # the column with the number   
    summaryTable.write('}\n')

    summaryTable.write('\\hline\n')
    summaryTable.write('Sample   &   Yield  \\\\ \n')
    summaryTable.write('\\hline\n')

    all_bkg_uncertainty = 0.0
    for nuis, value in map_all_bkg_uncertainty.iteritems() :
      all_bkg_uncertainty = sqrt(all_bkg_uncertainty*all_bkg_uncertainty + value*value)
      
    all_sig_uncertainty = 0.0
    for nuis, value in map_all_sig_uncertainty.iteritems() :
      all_sig_uncertainty = sqrt(all_sig_uncertainty*all_sig_uncertainty + value*value)
    

    #print " signals_uncertainties = ", signals_uncertainties

    for signal in signals :
      summaryTable.write(' %13s ' % signal.replace('_', '-'))
      if signal in signals_uncertainties.keys() :
        summaryTable.write(' & %.2f $\\pm$ %.2f \\\\  \n ' % (DC.exp[the_only_channel][signal] , DC.exp[the_only_channel][signal] * signals_uncertainties[signal]) )
      else :
        summaryTable.write(' & %.2f $\\pm$ %.2f \\\\  \n ' % (DC.exp[the_only_channel][signal] , DC.exp[the_only_channel][signal] * 0.) )        
    summaryTable.write('\\hline\n')

    total_signal = 0.0
    total_uncertainty_signal = 0.0
    for signal in signals :
      total_signal += DC.exp[the_only_channel][signal]
      if signal in signals_uncertainties.keys() :     
        total_uncertainty_signal = sqrt(total_uncertainty_signal*total_uncertainty_signal + DC.exp[the_only_channel][signal] * signals_uncertainties[signal]  * DC.exp[the_only_channel][signal] * signals_uncertainties[signal])
        
      #print ' total_uncertainty_signal[', the_only_channel , '] = ', total_uncertainty_signal, ' signals_uncertainties[', signal, '] = ', signals_uncertainties[signal] 

    summaryTable.write(' Total Sig ')
    summaryTable.write(' & %.2f $\\pm$ %.2f (%.2f) \\\\ \n' % (total_signal, total_uncertainty_signal, all_sig_uncertainty) )
    summaryTable.write('\\hline\n')
      
    for background in backgrounds :
      summaryTable.write(' %13s ' % background.replace('_', '-'))
      if background in backgrounds_uncertainties.keys():
        summaryTable.write(' & %.2f $\\pm$ %.2f \\\\  \n' % (DC.exp[the_only_channel][background] , DC.exp[the_only_channel][background] * backgrounds_uncertainties[background]) )
      else :
        summaryTable.write(' & %.2f $\\pm$ %.2f \\\\  \n' % (DC.exp[the_only_channel][background] , DC.exp[the_only_channel][background] * 0. ) )        
    summaryTable.write('\\hline\n')

    total_background = 0.0
    total_uncertainty_background = 0.0
    for background in backgrounds :
      total_background += DC.exp[the_only_channel][background]
      if background in backgrounds_uncertainties.keys():
        total_uncertainty_background = sqrt(total_uncertainty_background*total_uncertainty_background + DC.exp[the_only_channel][background] * backgrounds_uncertainties[background]  * DC.exp[the_only_channel][background] * backgrounds_uncertainties[background]) 
     
     
      
    summaryTable.write(' Total Bkg ')
    summaryTable.write(' & %.2f $\\pm$ %.2f (%.2f) \\\\ \n' % (total_background, total_uncertainty_background, all_bkg_uncertainty) )
    summaryTable.write('\\hline\n')

    if not options.blind :
      summaryTable.write(' Data ')
      summaryTable.write(' & %.0f $\\pm$ %.0f \\\\ \n' % (DC.obs[the_only_channel], sqrt(DC.obs[the_only_channel])) )
      summaryTable.write('\\hline\n')

    summaryTable.write('  \\end{tabular}')
    summaryTable.write(' \n')
    summaryTable.write('  \\caption{\n')
    #summaryTable.write('     Summary table:: prefit rates for ', (the_only_channel).replace('_', '-'), ' .\n')
    #summaryTable.write('\\label{tab:prefit-rates-' + (the_only_channel).replace('_', '-') + '}\n')
    summaryTable.write('     Summary table:: prefit rates for %s. \n' % ((the_only_channel).replace('_', '-')) )
    if options.legend != "" :
      summaryTable.write('Data %s. \n'  % (options.legend).replace('_', '-') )
    
    summaryTable.write('\\label{tab:prefit-yields-%s'  % ((the_only_channel).replace('_', '-')) )
    
    if options.legend != "" :
      summaryTable.write('%s'  % (options.legend) )
    
    summaryTable.write('}\n ' )
    
    summaryTable.write('  }\n')
    summaryTable.write('\\end{center}\n')
    summaryTable.write('\\end{table}\n')

    summaryTable.close()
    
    
    
    
    
    
    
       # now summary table with rates
    
    print ''
    print ''
    print ''
    
    #print '\\begin{landscape}'
    print '\\begin{table}[h!]\\begin{center}'
    #print '\\footnotesize{' 
    #print '\\tiny{'
    #print '{\\fontsize{2.5}{4}\\selectfont'
    #print '{\\fontsize{1.5}{1.0}\\selectfont'
    print '  \\begin{tabular}{',

    sys.stdout.write ('c|') # the column with the names   
    sys.stdout.write ('c|') # the column with the number   
    print '}'


    for signal in signals :
      print (" %13s " % signal.replace('_', '-')),
      print (" & %.2f $\\pm$ %.2f \\\\ " % (DC.exp[the_only_channel][signal] , DC.exp[the_only_channel][signal] * signals_uncertainties[signal]) )
    print '\\hline'

    print (" Total Sig "),
    print (" & %.2f $\\pm$ %.2f (%.2f) \\\\ " % (total_signal, total_uncertainty_signal, all_sig_uncertainty) )
    print '\\hline'
      
    for background in backgrounds :
      print (" %13s " % background.replace('_', '-')),
      if background in backgrounds_uncertainties.keys() :
        print (" & %.2f $\\pm$ %.2f \\\\ " % (DC.exp[the_only_channel][background] , DC.exp[the_only_channel][background] * backgrounds_uncertainties[background]) )
      else :
        print (" & %.2f $\\pm$ %.2f \\\\ " % (DC.exp[the_only_channel][background] , DC.exp[the_only_channel][background] * 0.    ) )
    print '\\hline'

    print (" Total Bkg "),
    print (" & %.2f $\\pm$ %.2f (%.2f) \\\\ " % (total_background, total_uncertainty_background, all_bkg_uncertainty) )
    print '\\hline'

    print (" Data "),
    print (" & %.0f $\\pm$ %.0f \\\\ " % (DC.obs[the_only_channel], sqrt(DC.obs[the_only_channel])) )
    print '\\hline'

    print '  \\end{tabular}',
    #print '}' 
    print ' ' 
    print '  \\caption{'
    print '     Summary table:: prefit rates for', (the_only_channel).replace('_', '-'), '.'
    sys.stdout.write ('\\label{tab:prefit-rates-' + (the_only_channel).replace('_', '-') + '}')
    print '  }'
    print '\\end{center}'
    print '\\end{table}'
    #print '\\end{landscape}'

    print ''
    print ''
    print ''
    
    
 
 
    #print "blind = ", options.blind
