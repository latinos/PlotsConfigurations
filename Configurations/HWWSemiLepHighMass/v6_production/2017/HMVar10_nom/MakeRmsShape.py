
##---
class dummy():##dummy
   def __init__(self):
       self.scriptname=''
       self.variablesFile=''
       self.cutsFile=''
       self.nuisancesFile=''
opt=dummy()
##---



from array import array
import ROOT
ROOT.gROOT.SetBatch(True)
import sys
sys.path.insert(0, "python_tool/latino/")
import math
from HistoParser import HistoParser

def MakeRmsShape_a_sample(samplename,nuisacneName,cuts,variables,histofile,nuisances):
   this_dict={
      samplename:{
         'cuts':sorted(cuts),
         'variables':sorted(variables),
         'FileName':histofile,
         'samples':[samplename+'_'+nuisacneName+'V'+str(i)+'Var' for i in range(0,len(nuisances[nuisacneName]['samples'][samplename]))]
      },
   }
   histoana=HistoParser(this_dict)
   histoana.MakeRmsShape("histo_"+samplename+'_'+nuisacneName)
   
   f=ROOT.TFile.Open(histofile,'UPDATE')
   for cut in sorted(cuts):
      for var in sorted(variables):

         f.cd(cut+'/'+var)
         print "Store Shape on",cut+'/'+var+"/histo_"+samplename+'_'+nuisacneName+'Up'
         ROOT.gDirectory.WriteObject(histoana.mydict[samplename]['histo'][cut][var]['rmsUp'],"histo_"+samplename+'_'+nuisacneName+'Up')
         print "Store Shape on",cut+'/'+var+"/histo_"+samplename+'_'+nuisacneName+'Down'
         ROOT.gDirectory.WriteObject(histoana.mydict[samplename]['histo'][cut][var]['rmsDown'],"histo_"+samplename+'_'+nuisacneName+'Down')
         
   f.Close()
   #c.SaveAs("test.pdf")



if __name__ == '__main__':
   import optparse
   usage = 'usage: %prog [options]'
   parser = optparse.OptionParser(usage)
   parser.add_option("-c","--conf",   dest="conf", help="configuration file's name")
   parser.add_option("-f","--histofile",   dest="histofile", help="histofile's name")
   parser.add_option("-n","--nuisacneName",   dest="nuisacneName", help="nuisacneName, for example QCDscale")
   
   (options, args) = parser.parse_args()
   
   #conf='configuration_Boosted.py'
   #histofile='rootFile_2017_Boosted_SKIM10_HMVar10_Full/hadd.root'
   #histofile='hadd.root'
   #nuisacneName='QCDscale'

   conf=options.conf
   histofile=options.histofile
   nuisacneName=options.nuisacneName


   ##--declare--##
   variables={}
   cuts={}
   samples={}
   nuisances={}
   ##---Read configuration---##
   print '---Read configuration---'
   handle=open(conf,'r')
   exec(handle)
   handle.close()
   ##--Read SamplesFile--##
   print '--Read SamplesFile--'
   handle=open(samplesFile,'r')
   exec(handle)
   handle.close()
   ##--Read variablesFile--##
   print '--Read variablesFile--'
   handle=open(variablesFile,'r')
   exec(handle)
   handle.close()
   ##--Read cutsFile--##
   print '--Read cutsFile--'
   handle=open(cutsFile,'r')
   exec(handle)
   handle.close()
   ##--Read NuisancesFile--##
   print '--Read NuisancesFile--'
   handle=open(nuisancesFile,'r')
   exec(handle)
   handle.close()
   ##---END--##
   #print nuisances['QCDscale']
   histofile=outputDir+'/'+histofile
   #nuisances['QCDscale']['samples']['vbfHWWlnuqq_M1000']
   for samplename in nuisances[nuisacneName]['samples']:
      print "--",samplename,"--"
      MakeRmsShape_a_sample(samplename,nuisacneName,cuts,variables,histofile,nuisances)



'''


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

      ROOT.gDirectory.WriteObject(histoana.mydict['bkg']['histo'][cut][var]['Sum'],'histo_PeudoData')
      #f.cd(initdir)
      #f.cd('../')
   #f.cd('../')
f.Close()
'''
