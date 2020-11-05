import os
import collections
from LatinoAnalysis.Tools.commonTools import getSampleFiles

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')


samples = collections.OrderedDict()




##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'


def makeMCDirectory(year, var=''):
    ################################################
    ################# SKIMS ########################
    ################################################
    if (year == 2016):
        mcProduction = 'Summer16_102X_nAODv7_Full2016v7'
        mcSteps      = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016'

    if (year == 2017):
        mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'
        mcSteps      = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'

    if (year == 2018):
        mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'
        mcSteps      = 'MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018'

    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))


for year in [2016, 2017, 2018]:
    mcDirectory = makeMCDirectory(year)
    signalMCDirectory = makeMCDirectory(year, "BWReweight")

    if (year == 2016):
        files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
        files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

    if (year == 2017):
        files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
        files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
        files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')

    if (year == 2018):
        files  = nanoGetSampleFiles(mcDirectory,'WJetsToLNu-LO')
        files += nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt50to100' )
        files += nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt100to250')
        files += nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt250to400')
        files += nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt400to600')
        files += nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt600toInf')

    with open('Wjets_files_{0}.txt'.format(year), 'w') as f:
        for item in files:
            print >> f, item.split("###root://eoscms.cern.ch/")[1]
