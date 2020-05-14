#!/bin/python

import os, sys
comfile = os.getcwd().split('/')[-4].replace("_","")+"_"+os.getcwd().split('/')[-1]

if "nano_STXS_1p1" not in os.getcwd().split('/')[-1]:
    print "please launch the script under the directory Full201Xnano_STXS_1p1"
    sys.exit()

SIGNAL = [ 'WH_hww' , 'ZH_hww' , 'ggZH_hww' ]
STXSBINS = [ 'PTV_LT150' , 'PTV_GT150' ]
POI=[]
for signal in SIGNAL:
    for stxs in STXSBINS:
        if 'ZH' in os.getcwd().split('/')[-4]:
            if 'WH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))
        elif 'WH' in os.getcwd().split('/')[-4]:
            if 'ZH' in signal: continue
            POI.append('%s_%s' %(signal,stxs))

os.chdir('Combination')

##### workspace conversion #####
command1="text2workspace.py "+comfile+".txt -o "+comfile+".root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose "
for poi in POI:
    command1+="--PO 'map=.*/{}:r_{}[1,-10,10]' ".format(poi,poi)
print command1
os.system(command1)
################################

##### fitting #####
command2="combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic "+comfile+".root -t -1 --setParameters "
poi =''

for poi in POI:
    command2+="r_{}=1,".format(poi)

command2 = command2[:-1]
command2+=' > fitresults.txt'

print(command2)
os.system(command2)

os.system('cat fitresults.txt |grep 68% | sed \'s/(68%)/ /g\' |tr -d \'-\'| tr -d \'/\' | tr -d ":" | sed \'s/+/ /g\' > fit.txt')
os.system('awk \'{ print $0 $1 }\' < fit.txt | sed \'s/r_ggH_hww/ggH/g\' | sort -b > fit_ready.txt')
os.system('cat fit_ready.txt')
################################

##### Significance #####
command3="combine -M Significance --setParameters="
for poi in POI:
    command3+="r_{}=1,".format(poi)
command3 = command3[:-1]
command3 +=" -t -1  %s.root --X-rtd MINIMIZER_analytic --redefineSignalPOIs" %comfile
for poi in POI:
    print "%s r_%s > significance_poi_%s.txt" %(command3,poi,poi)
    os.system("%s r_%s > significance_poi_%s.txt" %(command3,poi,poi))
################################


##### Impact #####
#Approximation
command4=[]
setPOI="--setParameters "
for poi in POI:
    setPOI+="r_{}=1,".format(poi)
setPOI = setPOI[:-1]

#--approx robust, hesse
#APPROX="robust" 
APPROX="hesse"
command4.append('combineTool.py -M Impacts -d %s.root -m 125.09 -n %s -t -1 --X-rtd MINIMIZER_analytic --approx %s --doFits --parallel 8 %s' %( comfile , comfile , APPROX , setPOI ))
command4.append('combineTool.py -M Impacts -d %s.root -m 125.09 -n %s -t -1 --X-rtd MINIMIZER_analytic --approx %s -o impacts.json %s' %( comfile , comfile , APPROX , setPOI ))
for icommand in command4:
    print icommand
    os.system(icommand)                                                                                                                                                                                    
for ipoi in POI:
    print "plotImpacts.py -i impacts.json -o %s_IMPACTS_%s --POI r_%s" %(comfile,ipoi,ipoi)
    os.system("plotImpacts.py -i impacts.json -o %s_IMPACTS_%s --POI r_%s" %(comfile,ipoi,ipoi))
