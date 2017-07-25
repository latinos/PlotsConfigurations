#!/usr/bin/env python
# -*- coding: utf-8 -*-
# vim: set sw=4 ts=4 fdm=indent fdl=2 ft=python et:

# Description     : Console splitting root files
# Author          : Po-Hsun Chen (pohsun.chen.hep@gmail.com)
# Last Modified   : 07 Oct 2016 17:37 

import ROOT
import os

MaxOfSize= 10e8 # size in byte
TreeName = "latino"
OFileDir = "./"

ROOT.gROOT.LoadMacro("treeSplitter.C++g")

class treeSplitter():
    def __init__(self):
        self.ofiles = []
        self.splitter = ROOT.TreeSplitter()
        pass

    def setIFile(self,ifname):
        self._ifile = ifname
        pass

    def setOFile(self,ofname):
        self._ofile = ofname
        pass

    def setCut(self,cut):
        self._cut = cut
        pass

    def split(self):
        del self.ofiles[:]
        ifsize = os.path.getsize(self._ifile)
        nparts = ifsize/MaxOfSize+1
        self.splitter.reset()
        self.splitter.setTreeName(TreeName)
        self.splitter.setIFile(self._ifile)
        self.splitter.setOFile(OFileDir, self._ofile)
        self.splitter.setCut(self._cut)
        self.splitter.split(int(nparts))
        self.ofiles = [ OFileDir+self.splitter.getOFiles()[idx] for idx in range(0,self.splitter.getOFiles().size()) ]
        pass

    def getOFiles(self):
        return self.ofiles


