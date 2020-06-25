UsePseudoData=True
print "UsePseudoData=",UsePseudoData
import sys
from collections import OrderedDict
plot=OrderedDict()


dict_TColor={
'green':416+3,##darker greeen
'cyan':432,##bright blue
'magenta':616,##violet
'yellow':400,
'blue':600,
'orange':800+7,##darker orange
'pink':900,
'black':1,
'red':632,
'azure':860,##blue
'gray':920,
}

scriptname=''
groupPlot={}
legend={}
groupPlot['DY']  = {
    'nameHR' : 'DY',
    'isSignal' : 0,
    'color': dict_TColor['yellow'], 
    'isData'   : 0,
    'samples' : ['DY']
}

groupPlot['QCD']  = {
    'nameHR' : 'QCD',
    'isSignal' : 0,
    'color': dict_TColor['gray'],
    'isData'   : 0,
    'samples'  : []
}


QCD_MU=['QCD_Pt-15to20_MuEnrichedPt5',
        'QCD_Pt-20to30_MuEnrichedPt5',
        'QCD_Pt-30to50_MuEnrichedPt5',
        'QCD_Pt-50to80_MuEnrichedPt5',
        'QCD_Pt-80to120_MuEnrichedPt5',
        'QCD_Pt-120to170_MuEnrichedPt5',
        'QCD_Pt-170to300_MuEnrichedPt5',
        'QCD_Pt-300to470_MuEnrichedPt5',
        'QCD_Pt-470to600_MuEnrichedPt5',
        'QCD_Pt-600to800_MuEnrichedPt5',
        'QCD_Pt-800to1000_MuEnrichedPt5',
        'QCD_Pt-1000toInf_MuEnrichedPt5',
]
QCD_EM=[
  'QCD_Pt-20to30_EMEnriched',
  'QCD_Pt-30to50_EMEnriched',
  'QCD_Pt-50to80_EMEnriched',
  'QCD_Pt-80to120_EMEnriched',
  'QCD_Pt-120to170_EMEnriched',
  'QCD_Pt-170to300_EMEnriched',
  'QCD_Pt-300toInf_EMEnriched'
]
QCD_bcToE=[
  'QCD_Pt_20to30_bcToE',
  'QCD_Pt_30to80_bcToE',
  'QCD_Pt_80to170_bcToE',
  'QCD_Pt_170to250_bcToE',
  'QCD_Pt_250toInf_bcToE',
]




if not 'ele' in scriptname:
    groupPlot['QCD']['samples']+=QCD_MU
if not 'mu' in scriptname:
    groupPlot['QCD']['samples']+=QCD_EM+QCD_bcToE



for s in QCD_EM+QCD_MU+QCD_bcToE:
    plot[s]  = {
        'nameHR' : s,
        'isSignal' : 0,
        'color': dict_TColor['gray'],
        'isData'   : 0,
    }

groupPlot['MultiV']={
                  'nameHR' : 'Multi V',
                  'isSignal' : 0,
                  'color': dict_TColor['azure'],
                  'isData'   : 0,
                  'samples'  : ['WW','WWW','WWZ','WZ','WZZ','WpWmJJ_EWK_QCD_noHiggs','ZZ','ZZZ']
}
groupPlot['Wjets']={
                  'nameHR' : 'W+jets',
                  'isSignal' : 0,
                  'color': dict_TColor['green'],
                  'isData'   : 0,
                  'samples'  : ['Wjets0j','Wjets1j','Wjets2j']
}
groupPlot['top']={
    'nameHR' : 'Top',
    'isSignal' : 0,
'color': dict_TColor['orange'],
                  'isData'   : 0,
                  'samples'  : ['top']
}

plot['DY']  = {
                  'nameHR' : 'DY',
                  'isSignal' : 0,
                  'color': dict_TColor['yellow'], 
                  'isData'   : 0,
              }

plot['WZZ']  = {
                  'nameHR' : 'WZZ',
                  'isSignal' : 0,
                  'color': dict_TColor['azure'], 
                  'isData'   : 0,
              }

plot['WWZ']  = {
                  'nameHR' : 'WWZ',
                  'isSignal' : 0,
                  'color': dict_TColor['azure']+1, 
                  'isData'   : 0,
              }
plot['ZZ']  = {
                  'nameHR' : 'ZZ',
                  'isSignal' : 0,
                  'color': dict_TColor['azure']+2,
                  'isData'   : 0,
              }

plot['WZ']  = {
                  'nameHR' : 'WZ',
                  'isSignal' : 0,
                  'color': dict_TColor['azure']+3, 
                  'isData'   : 0,
              }
plot['WW']  = {
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': dict_TColor['cyan'], 
                  'isData'   : 0,
              }
plot['WpWmJJ_EWK_QCD_noHiggs']  = {
                  'nameHR' : 'WpWmJJ_EWK_QCD_noHiggs',
                  'isSignal' : 0,
                  'color': dict_TColor['cyan']+2, 
                  'isData'   : 0,
              }


plot['top']  = {
                  'nameHR' : 'Top',
                  'isSignal' : 0,
                  'color': dict_TColor['orange'],
                  'isData'   : 0,                 
              }





plot['Wjets0j']  = {
                  'nameHR' : 'Wjets0j',
                  'isSignal' : 0,
                  'color': dict_TColor['green'],
                  'isData'   : 0,
              }
plot['Wjets1j']  = {
                  'nameHR' : 'Wjets1j',
                  'isSignal' : 0,
                  'color': dict_TColor['green']-3,
                  'isData'   : 0,
              }
plot['Wjets2j']  = {
                  'nameHR' : 'Wjets2j',
                  'isSignal' : 0,
                  'color': dict_TColor['green']+1,
                  'isData'   : 0,
              }





    
if UsePseudoData==True:
    plot['PseudoData']  = {
        'nameHR' : 'PseudoData',
        'isSignal' : 0,
        'color': 1, 
        'isData'   : 1 ,
        'isBlind'  : 0,
        'samples'  : ['PseudoData']
    }
else:
    plot['DATA']  = {
        'nameHR' : 'DATA',
        'isSignal' : 0,
        'color': 1, 
        'isData'   : 1 ,
        'isBlind'  : 0,
        'samples'  : ['DATA']
    }

import sys
sys.path.insert(0, "MassPoints")
from List_MX import *
from List_MX_VBF import *


#for MX in List_MX:
if 'SR' in scriptname:
    if not UsePseudoData : plot['DATA']['isBlind']=1
    for MX in []:

        plot['ggHWWlnuqq_M'+str(MX)]={
            'nameHR':'ggHWWlnuqq_M'+str(MX),
            'scale' : 100,
            'isData'   : 0,
            'isSignal' : 1,
            'color':dict_TColor['red'],
            'samples' : ['ggHWWlnuqq_M'+str(MX)]
        }

        #for MX in List_MX_VBF:
    for MX in []:
        continue
        plot['vbfHWWlnuqq_M'+str(MX)]={
            'nameHR':'vbfHWWlnuqq_M'+str(MX),
            'isData'   : 0,
            'isSignal' : 1,
            #'scale' : 100,
            'color':dict_TColor['blue'],
            'samples' : ['ggHWWlnuqq_M'+str(MX)]
        }

    

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


print [s for s in plot]
