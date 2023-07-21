from ROOT import *
import sys
from collections import OrderedDict

if len(sys.argv) != 2:
    print 'Usage: python checkVariationFiles.py <sampleFile>'
    exit()

suffix_list = ['ElepT', 'MupT', 'JESAbsolute', 'JESBBEC1', 'JESEC2', 'JESHF', 'JESRelative', 'JESFlavorQCD', 'JER', 'MET']
nuis_to_drop = OrderedDict([(suffix,[]) for suffix in suffix_list])
all_files = []
missing_files_all = OrderedDict([(suffix+var,[]) for suffix in suffix_list for var in ['up','do']])

# Parse samples file to get filelist per config sample name
samples = {}
sampleFile = sys.argv[1]
handle = open(sampleFile)
exec(handle)
handle.close()

for samplecfg in samples.keys():
    if samplecfg == 'DATA' or samplecfg == 'Fake': continue
    for filename in samples[samplecfg]['name']:
        filename = filename.replace('###root://eoscms.cern.ch/','')
        basename = os.path.basename(filename)
        if basename not in all_files:
            all_files.append(basename)
        for nuis in nuis_to_drop:
            for var in ['up','do']:
                if not os.path.exists(filename.replace('/nanoLatino','__'+nuis+var+'_suffix/nanoLatino')):
                    if samplecfg not in nuis_to_drop[nuis]:
                        nuis_to_drop[nuis].append(samplecfg)
                    if basename not in missing_files_all[suffix+var]:
                        missing_files_all[nuis+var].append(basename)
            
print '\n\n'        
print 'Drop following samples for suffix nuisances, missing file(s)'
for nuis,samples in nuis_to_drop.iteritems():
    if len(samples) > 0:
        print nuis, samples

print '\n\n'
print 'Specific missing files / samples'
totals = {}
for ifile in all_files:
    samplename = ifile.split('__')[0].replace('nanoLatino_','')
    if samplename in totals:
        totals[samplename] += 1
    else:
        totals[samplename] = 1

for folder in missing_files_all:
    missing_samples = []
    missing_files = []
    for sample in totals:
        missing_files_sample = [filename for filename in missing_files_all[folder] if filename.split('__')[0].endswith(sample)]
        if len(missing_files_sample) == totals[sample]:
            missing_samples.append(sample)
        else:
            missing_files += missing_files_sample
    print folder
    print 'Missing samples: ',missing_samples
    print 'Missing files:   ',missing_files
