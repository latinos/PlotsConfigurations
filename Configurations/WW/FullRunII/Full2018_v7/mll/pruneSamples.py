import os
import sys
from ROOT import *

histfile = sys.argv[1]

if len(sys.argv) < 2:
    print 'Usage: pruneSamples.py <rootfile>'
    exit()

f0 = TFile.Open(histfile)
for cutkey in f0.GetListOfKeys():
    cutname = cutkey.GetName()
    cutdir = f0.Get(cutname)
    shape = 'events'
    if 'sr_0j' in cutname:
        shape = 'BDTOutput_0j'
    if 'sr_1j' in cutname:
        shape = 'BDTOutput_1j'
    if 'sr_2j' in cutname:
        shape = 'BDTOutput_2j'
    histdir = cutdir.Get(shape)
    allhists = [key.GetName() for key in histdir.GetListOfKeys()]
    nomhists = [hist for hist in allhists if not ('Up' in hist or 'Down' in hist or 'Var' in hist)]
    varhists = [hist for hist in allhists if not hist in nomhists]
    for nomhist in nomhists:
        nom = histdir.Get(nomhist)
        sample = nomhist.replace('histo_','')
        if nom.Integral() < 0.0:
            print 'Remove %s from %s -- negative integral'%(sample, cutname)
            continue
        for varhist in varhists:
            if not varhist.replace(nomhist,'').startswith('_'): continue
            var = histdir.Get(varhist)
            if var.Integral() < 0.0:
                print 'nuisance edit drop %s %s %s'%(sample,cutname,varhist.replace(nomhist+'_','').replace('Up','').replace('Down',''))
