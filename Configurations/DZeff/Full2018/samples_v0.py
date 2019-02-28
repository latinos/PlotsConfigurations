import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

skim=''
##############################################
###### Tree Directory according to site ######
##############################################

#directory = treeBaseDir+'Fall2017_nAOD_v1_Full2017/MCl1loose2017__MCformulas__MCWeights2017'
directory = treeBaseDir+'Run2016_94X_nAODv3_Full2016v2/DATAl1loose2016__l2loose__l2tightOR2016'

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2016_94X_nAODv3_Full2016v2/DATAl1loose2016__l2loose__l2tightOR2016'

samples['DATA']  = {   'name': [
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017B-31Mar2018-v1.root',
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017C-31Mar2018-v1__part1.root',
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017D-31Mar2018-v1.root',
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017E-31Mar2018-v1.root',
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017F-31Mar2018-v1__part0.root',
                                '###'+treeBaseDir+'nanoLatino_DoubleEG_Run2017F-31Mar2018-v1__part1.root',
                                ##
                                #
                                ] ,
                       #'weight' : 'trigger',
                       'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],
}
