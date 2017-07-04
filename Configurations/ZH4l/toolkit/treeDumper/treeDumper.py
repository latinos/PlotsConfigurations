#!/usr/bin/env python

import ROOT
from array import array
import math
import sys
import optparse
import re
import copy
from subprocess import call
import os.path

# Reference for tree keeping/retrieving:
#   http://www-he.scphys.kyoto-u.ac.jp/member/n.kamo/wiki/doku.php?id=study:software:root:pyroot

### Setup treeSplitter
handle = open('treeSplitter.py')
exec(handle)
handle.close()

### Shared event information
lumi = 12.3
inputDir ="/wk_cms/pchen/work/HWAnalysis/data/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel/"

class treeDumper():
    def __init__(self,samples):
        self.splitter = treeSplitter()
        self.samples = samples
        self.osamples=[]
        self.adders=[]
        self.loaders=[]
        self.loopers=[]
        pass

    def setBranchList(self,l):
        self.branchList = l
        pass

    @staticmethod
    def getBranchList(tree):
        olist = []
        for b in tree.GetListOfBranches():
            olist.append(b.GetName())
        return olist

    def regBranches(self,sampleName,idx):
        if sampleName not in self.osamples:
            self.osamples.append(sampleName)

        self.itree.SetBranchStatus('*',0)
        for b in self.branchList:
            if not os.path.isfile("addBranch_"+b+".py"):
                self.itree.SetBranchStatus(b,1)

        self.ofile = ROOT.TFile("treeDumper_"+sampleName+"_"+str(self.fnameCounter)+"_part"+str(idx)+".root","RECREATE")
        self.otree = self.itree.CloneTree(0)

        if len(self.adders) == 0:
            for b in self.branchList:
                if os.path.isfile("addBranch_"+b+".py"):
                    handle = open('addBranch_'+b+'.py')
                    exec(handle)
                    handle.close()
        for adder in self.adders:
            adder()

        self.otree.SetAutoSave()
        self.itree.SetBranchStatus('*',1)
        pass

    def clone(self):
        for sampleName, sample in samples.iteritems():
            print "sampleName is "+sampleName
            self.fnameCounter = 0
            for fname in sample["name"]:
                ### Here splitting fat tree and apply trigger filter.
                self.splitter.setIFile(inputDir+fname)
                self.splitter.setOFile(sampleName)
                # self.splitter.setCut(sample['weights'][self.fnameCounter]) # weights
                self.splitter.setCut("("+sample['weights'][self.fnameCounter]+")*("+sample['weight']+")") # weights*weight
                self.splitter.split()
                ofiles = self.splitter.getOFiles()
                print ofiles

                for idx in range(0,len(ofiles)):
                    self.itree = ROOT.TChain("latino")
                    self.itree.Add(ofiles[idx])
                    self.regBranches(sampleName,idx)
                    if idx == 0 and self.fnameCounter == 0 and len(self.osamples) == 1:
                        for loader in self.loaders:
                            loader()
                    for event in self.itree:
                        isLoopersOk = True
                        for looper in self.loopers:
                            if looper() is False:
                                isLoopersOk = False
                                break
                        if isLoopersOk :
                            self.otree.Fill()
                            # self.otree.FlushBaskets()

                    self.otree.Write("",ROOT.TObject.kOverwrite)
                    self.ofile.Close()

                for tmpfile in ofiles:
                    os.remove(tmpfile)

                self.fnameCounter+=1

            # Merge
            call("hadd -f treeDumper_"+sampleName+".root treeDumper_"+sampleName+"_*.root",shell=True)
            call("rm -f treeDumper_"+sampleName+"_*.root",shell=True)

def samplesModifier(samples):
    if not isinstance(samples, dict):
        return
    else:
        ### Fixing the weight
        ### "Cuts" is the weight in TTree::Draw()
        for sampleName, sample in samples.iteritems():
            if 'weights' not in sample.keys():
                sample['weights'] = []
                for numSample in range(0,len(sample['name'])):
                    sample['weights'].append('1')

        for sampleName, sample in samples.iteritems():
            if 'isData' in sample.keys():
                if not (len(sample['isData'])==1 and sample['isData'][0] == 'all'):
                    for numisDataList in range(0,len(sample['isData'])):
                        if sample ['isData'][numisDataList] == '0':
                            sample ['weights'][numisDataList] = "(("+sample['weights'][numisDataList]+")*"+str(lumi)+")"
            else:
                for numisDataList in range(0,len(sample['name'])):
                    sample ['weights'][numisDataList] = "(("+sample['weights'][numisDataList]+")*"+str(lumi)+")"

        return samples
    pass

if __name__ == '__main__':

        ### Take samples
    samples = {}
    handle = open("samples.py")
    exec(handle)
    samples = samplesModifier(samples)

    branchList = ['run']
    # branchList = []
    branchList.append('weight')

    dumper = treeDumper(samples)
    dumper.setBranchList(branchList)
    dumper.clone()
