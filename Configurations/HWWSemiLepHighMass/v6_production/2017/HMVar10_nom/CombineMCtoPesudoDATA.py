
##---
class dummy():##dummy
   def __init__(self):
       self.scriptname=''
       self.variablesFile=''
       self.cutsFile=''
opt=dummy()
##---



from array import array
import ROOT
ROOT.gROOT.SetBatch(True)
import sys
sys.path.insert(0, "python_tool/latino/")
import math
from HistoParser import HistoParser


conf='configuration_Resolved.py'
histofile='hadd.root'
##--declare--##
variables={}
cuts={}

##---Read configuration---##
handle=open(conf,'r')
exec(handle)
handle.close()
##--Read variablesFile--##
handle=open(variablesFile,'r')
exec(handle)
handle.close()
##--Read cutFile--##
handle=open(cutsFile,'r')
exec(handle)
handle.close()
##---END--##
histofile=outputDir+'/'+histofile

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


this_dict={
   'bkg':{
      'cuts':sorted(cuts),
      #'variables':['MEKD_Bst_C_0.003_M900'],
      'variables':sorted(variables),
      'FileName':histofile,
      'samples':['DY','WW','WWW','WWZ','WZ','WZZ','ZZZ','ZZ','Wjets0j','Wjets1j','Wjets2j','WpWmJJ_EWK_QCD_noHiggs','top']+['QCD_MU','QCD_EM','QCD_bcToE']        
   },
}
histoana=HistoParser(this_dict)
#mysum=histoana.mydict['bkg']['histo']['eleCH__BoostedggF__SR__METOver40__PtOverM04']['Event']['Sum'].Integral()


##---Set staterr---##
for cut in sorted(cuts):
   for var in sorted(variables):
      Nbins=histoana.mydict['bkg']['histo'][cut][var]['Sum'].GetNbinsX()
      for i in range(0,Nbins+1):
         
         entry=histoana.mydict['bkg']['histo'][cut][var]['Sum'].GetBinContent(i)
         if entry<0:entry=0
         
         error=math.sqrt(entry)
         if error==0:
            error=math.sqrt(3)
         histoana.mydict['bkg']['histo'][cut][var]['Sum'].SetBinContent(i,entry)
         histoana.mydict['bkg']['histo'][cut][var]['Sum'].SetBinError(i,error)
      


##--End of Setbinerror--##


f=ROOT.TFile.Open(histofile,'UPDATE')
#f.ls()
#idx=0
for cut in sorted(cuts):
   #f.cd(cut)
   for var in sorted(variables):      
      #if idx==0:
      #   print "init dir"
      #   ROOT.gDirectory.pwd()
      #   print 'go to',cut,var
      #   f.cd(cut+'/'+var)
      #   print "--current dir--"
      #   ROOT.gDirectory.pwd()
      #   ROOT.gDirectory.WriteObject(histoana.mydict['bkg']['histo'][cut][var]['Sum'],'histo_PeudoData')
      #   ROOT.gDirectory.ls()

      f.cd(cut+'/'+var)
      #idx+=1
      #initdir=ROOT.gDirectory.CurrentDirectory()
      print cut+'/'+var+'/histo_PseudoData'
      ROOT.gDirectory.WriteObject(histoana.mydict['bkg']['histo'][cut][var]['Sum'],'histo_PseudoData')
      #f.cd(initdir)
      #f.cd('../')
   #f.cd('../')
f.Close()
