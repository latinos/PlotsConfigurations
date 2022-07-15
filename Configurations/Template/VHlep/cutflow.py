# This script will make a cutflow from the hadded histfile.
# Usage: python cutflow.py --file=<root file> (--unBlind) (--errors)

import os
import math
import optparse
from ROOT import *

parser = optparse.OptionParser()
parser.add_option('--file'   , dest='histfile', help='input file'               , default='' )
parser.add_option('--unBlind', dest='unBlind',  help='print data counts'        , default=False)
parser.add_option('--errors' , dest='errors',   help='print stat errors'        , default=False)
parser.add_option('--doNorm' , dest='doNorm',   help='calculate WZ norm factors', default=False)
parser.add_option('--rotate' , dest='rotate',   help='rotate table'             , default=False)
(opts, args) = parser.parse_args()

table = {}

f0 = TFile.Open(opts.histfile)
cuts = [k.GetName() for k in f0.GetListOfKeys()]
for cut in cuts:
    table[cut] = {}
    #var = 'events' if 'CR' in cut else 'mtw_fit'
    var = 'events'
    histdir = f0.Get(cut+'/'+var)
    histkeys = histdir.GetListOfKeys()
    histnames = [k.GetName() for k in histkeys]
    for histname in histnames:
        if 'Up' in histname or 'Down' in histname or 'Var' in histname: continue
        hist = histdir.Get(histname)
        err = Double()
        count = hist.IntegralAndError(0,hist.GetNbinsX(),err) #Normalization and stat error
        sample = histname.replace('histo_','')
        table[cut][sample] = [count,err,hist.GetEntries()]

##Sort samples by fixed order
samples = table[table.keys()[0]].keys()
order = ['DY','WW','WWewk','ggWW','WZ','ZZ','Wg','WgS','Zg','ZgS','VVV','top','ttV','Fakes_em','Fakes_mm','Fake_e','Fake_m','Fake','ggH_hww','qqH_hww','WH_hww','ggZH_hww','ggZH_hww_PTV_LT150','ggZH_hww_PTV_GT150','ZH_hww','ZH_hww_PTV_LT150','ZH_hww_PTV_GT150','bbH_hww','ttH_hww','WH_htt','ZH_htt']
sorted_samples = sorted(set(order).intersection(samples) ,key=lambda x:order.index(x))
#sorted_samples = [s for s in samples if s != 'DATA']

signals = [s for s in sorted_samples if 'H_' in s]
backgrounds = [s for s in sorted_samples if 'H_' not in s]

#If you want to sort the cuts, add something similar here
#cuts = ['preselection','zmass_cut','jet_cut_2j','MET_cut_2j','bveto_2j','z4lveto_2j','zh3l_WZ_CR_2j','zh3l_SR_2j','jet_cut_1j','MET_cut_1j','bveto_1j','z4lveto_1j','zh3l_WZ_CR_1j','zh3l_SR_1j']
#cuts = ['preselection','zmass_cut','jet_cut_2j','bveto_2j','z4lveto_2j','zh3l_WZ_CR_2j','zh3l_SR_2j','jet_cut_1j','bveto_1j','z4lveto_1j','zh3l_WZ_CR_1j','zh3l_SR_1j']
#cuts = ['zh3l_SR_2j_ptv_lt150','zh3l_SR_2j_ptv_gt150','zh3l_SR_1j_ptv_lt150','zh3l_SR_1j_ptv_gt150']
cuts = ['zh4l_XSF_13TeV_ptv_lt150','zh4l_XSF_13TeV_ptv_gt150','zh4l_XDF_13TeV_ptv_lt150','zh4l_XDF_13TeV_ptv_gt150']
#cuts = table.keys()

if opts.unBlind:
    cuts = [c for c in cuts if 'SR' not in c]

if opts.doNorm:
    #Normalize Zg and WZ
    wz1jnorm = (table['zh3l_WZ_CR_1j']['DATA'][0] - sum([table['zh3l_WZ_CR_1j'][s][0] for s in sorted_samples if s not in ['WZ','DATA']])) / table['zh3l_WZ_CR_1j']['WZ'][0]
    wz2jnorm = (table['zh3l_WZ_CR_2j']['DATA'][0] - sum([table['zh3l_WZ_CR_2j'][s][0] for s in sorted_samples if s not in ['WZ','DATA']])) / table['zh3l_WZ_CR_2j']['WZ'][0]
    wz1jerr = math.sqrt(table['zh3l_WZ_CR_1j']['DATA'][0])/table['zh3l_WZ_CR_1j']['WZ'][0]
    wz2jerr = math.sqrt(table['zh3l_WZ_CR_2j']['DATA'][0])/table['zh3l_WZ_CR_2j']['WZ'][0]
    print 'wz1jnorm = %.2f \pm %.2f'%(wz1jnorm,wz1jerr)
    print 'wz2jnorm = %.2f \pm %.2f'%(wz2jnorm,wz2jerr)

    for cut in cuts:
        if '1j' in cut: 
            table[cut]['WZ'][0] = table[cut]['WZ'][0]*wz1jnorm
            table[cut]['WZ'][1] = table[cut]['WZ'][1]*wz1jnorm
        if '2j' in cut: 
            table[cut]['WZ'][0] = table[cut]['WZ'][0]*wz2jnorm
            table[cut]['WZ'][1] = table[cut]['WZ'][1]*wz2jnorm


#Print normalized # events
print 'Normalized counts'

if opts.rotate:
    print ' & '+' & '.join(cuts)
    for background in backgrounds:
        if opts.errors:
            print background+' & '+' & '.join(["%.1f \pm %.1f"%(table[cut][background][0],table[cut][background][1]) for cut in cuts])
        else:
            print background+' & '+' & '.join(["%.1f"%(table[cut][background][0]) for cut in cuts])
    print 'Tot Bkg & '+' & '.join(["%.1f"%(sum([table[cut][s][0] for s in backgrounds])) for cut in cuts])
    for signal in signals:
        if opts.errors:
            print signal+' & '+' & '.join(["%.1f \pm %.1f"%(table[cut][signal][0],table[cut][signal][1]) for cut in cuts])
        else:
            print signal+' & '+' & '.join(["%.1f"%(table[cut][signal][0]) for cut in cuts])
    print 'Higgs  &  '+' & '.join(["%.1f"%(sum([table[cut][s][0] for s in signals])) for cut in cuts])
    print 'H/pred &  '+' & '.join(["%.1f"%(sum([table[cut][s][0] for s in signals])/sum([table[cut][s][0] for s in signals+backgrounds])) for cut in cuts])
    print 'Npred  &  '+' & '.join(["%.1f"%(sum([table[cut][s][0] for s in signals+backgrounds])) for cut in cuts])
    
else:
    print ' & '+' & '.join(backgrounds)+' & Tot Bkg & '+' & '.join(signals)+' & Higgs & H/pred & Npred'
    for cut in cuts:
        bkgsum  = sum([table[cut][s][0] for s in backgrounds])
        sigsum  = sum([table[cut][s][0] for s in signals])
        totsum = bkgsum + sigsum
        sigratio = sigsum / totsum
        if opts.errors:
            bkgline = ' & '.join(["%.1f \pm %.1f"%(table[cut][s][0],table[cut][s][1]) for s in backgrounds])
            sigline = ' & '.join(["%.1f \pm %.1f"%(table[cut][s][0],table[cut][s][1]) for s in signals])
        else:
            bkgline = ' & '.join(["%.1f"%(table[cut][s][0]) for s in backgrounds])
            sigline = ' & '.join(["%.1f"%(table[cut][s][0]) for s in signals])
            
        if opts.unBlind:
            print cut+' & '+bkgline+' & %.1f & '%(bkgsum)+sigline+' & %.1f & %.4f & %.1f & %.1f'%(sigsum,sigratio,totsum,table[cut]['DATA'][0])
        else:
            print cut+' & '+bkgline+' & %.1f & '%(bkgsum)+sigline+' & %.1f & %.4f & %.1f'%(sigsum,sigratio,totsum)

print

#Print # entries (to check for stats)
#print 'Raw counts'
#print ' & '+' & '.join(sorted_samples)
#for cut in cuts:
#    print cut+' & '+' & '.join(["%d"%table[cut][sample][2] for sample in sorted_samples])
#print
