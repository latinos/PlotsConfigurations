#!/usr/bin/env python

import os
import optparse

import time
import threading

import ROOT
ROOT.gROOT.SetBatch()

N_WORKERS = 7
def worker(tree, cut, text):
    evt = ROOT.TH1D("evt","",1,0,1e10);
    tree.Draw("event>>evt",cut,"goff")
    weightedYields = evt.GetBinContent(1)
    print text.format(weightedYields)


if __name__ == "__main__":
    pyCfg = open("../configuration.py")
    exec(pyCfg)
    pyCfg.close()

    samples = {}
    handle = open(samplesFile)
    exec(handle)
    handle.close()

    cuts = {}
    handle = open(cutsFile)
    exec(handle)
    handle.close()

    trees = []
    for cutName, cut in cuts.iteritems():
        if cutName != 'zh4l_XDF_13TeV':
            continue
        cut = "({0}) && ({1})".format(supercut, cut)

        for sampleName, sample in samples.iteritems():
            # if sampleName != 'VVZ':
            #     continue

            # READ Tree
            treeName = 'latino'
            trees.append(ROOT.TChain(treeName))
            for filename in sample['name']:
                trees[-1].Add(filename)
            weightedCut = "({0})*({1})*{2}".format(cut,sample['weight'],lumi)
            t = threading.Thread(target=worker,args=(trees[-1],weightedCut,"{0:10s}::{1:20s}::\t{{0:10.4f}}".format(cutName,sampleName)))
            while True:
                if threading.activeCount() >= N_WORKERS:
                    time.sleep(3)
                else:
                    # print "Submit {0}:{1}".format(cutName,sampleName)
                    t.start()
                    break

        while threading.activeCount() > 1:
            print "Waiting for unfinished jobs....{0}".format(threading.activeCount()-1)
            time.sleep(3)

        break
