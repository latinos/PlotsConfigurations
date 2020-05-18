#plot.py
#cuts_Boosted.py
import os
import sys
ListFlavor=['mu','ele']
ListRegion=['CR','SR']

boosted=sys.argv[1]

print "[SpanPlotCut]",boosted

for flv in ListFlavor:
    for rg in ListRegion:
        os.system('cp plot.py '+'plot_'+flv+'_'+rg+'.py')
        if boosted=="Boosted":os.system('cp cuts_Boosted.py '+'cuts_Boosted_'+flv+'_'+rg+'.py')
        if boosted=="Resolved":os.system('cp cuts_Resolved.py '+'cuts_Resolved_'+flv+'_'+rg+'.py')
