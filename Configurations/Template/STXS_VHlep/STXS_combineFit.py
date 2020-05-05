#!/bin/python

import os, sys
from optparse import OptionParser

parser = OptionParser()
parser.add_option("-a", "--analysis", action="store", type="string", dest="analysis", default="zh")

(options, args) = parser.parse_args()
comfile = options.analysis

SIGNAL = [ 'WH_hww' , 'ZH_hww' , 'ggZH_hww' ]
STXSBINS = [ 'PTV_LT150' , 'PTV_GT150' ]
POI=[]
POI_param=[]

for signal in SIGNAL:
    for stxs in STXSBINS:
        if "zh" in comfile:
            if 'WH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))
        elif "wh" in comfile:
            if 'ZH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))
        else:
            POI.append('%s_%s' %(signal,stxs))

##### workspace conversion #####
command1="text2workspace.py "+comfile+".txt -o "+comfile+".root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for poi in POI:
    if comfile=='vh' or comfile=='zh' or '_' in comfile:
        if 'PTV_LT150' in poi:
            command1+="--PO 'map=.*/{}:r_PTV_LT150[1,-10,10]' ".format(poi)
            POI_param.append("r_PTV_LT150")
        else:
            command1+="--PO 'map=.*/{}:r_PTV_GT150[1,-10,10]' ".format(poi)
            POI_param.append("r_PTV_GT150")
    else:
        command1+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(poi,poi)
        POI_param.append("r_{}".format(poi))
print command1
os.system(command1)
################################

##### fitting #####
#command2="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic "+comfile+".root -t -1 --setParameters r_PTV_LT150=1,r_PTV_GT150=1 > fitresults.txt"
command2="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic %s.root -t -1 --setParameters %s=1 > fitresults.txt" % ( comfile , "=1,".join(POI_param) )
print(command2)
os.system(command2)

os.system('cat fitresults.txt |grep 68% | sed \'s/(68%)/ /g\' |tr -d \'-\'| tr -d \'/\' | tr -d ":" | sed \'s/+/ /g\' > fit.txt')
os.system('awk \'{ print $0 $1 }\' < fit.txt | sed \'s/r_ggH_hww/ggH/g\' | sort -b > fit_ready.txt')
os.system('cat fit_ready.txt')
################################

##### Significance #####
command3="combine -M Significance --setParameters %s=1 -t -1 %s.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs" % ( "=1,".join(POI_param) , comfile )
for poi in POI_param:
    print "%s %s > significance_poi_%s.txt" %(command3,poi,poi)
    os.system("%s %s > significance_poi_%s.txt" %(command3,poi,poi))
################################


##### Impact #####
#Approximation
command4=[]

#--approx robust, hesse
approx="robust"
command4.append('combineTool.py -M Impacts -d %s.root -m 125.09 -n %s -t -1 --X-rtd MINIMIZER_analytic --approx %s --doFits --parallel 8 --setParameters %s=1' %( comfile , comfile , approx , "=1,".join(POI_param) ) )
command4.append('combineTool.py -M Impacts -d %s.root -m 125.09 -n %s -t -1 --X-rtd MINIMIZER_analytic --approx %s -o impacts.json --setParameters %s=1' %( comfile , comfile , approx , "=1,".join(POI_param) ) )
for icommand in command4:
    print icommand
    os.system(icommand)                                                                                                                                                                                    
for ipoi in POI_param:
    print "plotImpacts.py -i impacts.json -o %s_IMPACTS_%s --POI %s" %(comfile,ipoi,ipoi)
    os.system("plotImpacts.py -i impacts.json -o %s_IMPACTS_%s --POI %s" %(comfile,ipoi,ipoi))
