#
# Create a lot of tables
#
import os
import sys
import shlex
import subprocess

pathToDatacards='/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/datacards/'

pathToPlayWithDatacards='/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlayWithDatacards/'

output = pathToDatacards+'tables/'

if not os.path.exists(output):
  os.mkdir(output)


list_datacards = {}

#                  name                                                         datacard                                                   blind=True/False
list_datacards [ 'em_mp_1j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_em_mp_1j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'me_mp_1j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_me_mp_1j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'em_mp_0j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_em_mp_0j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'me_mp_0j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_me_mp_0j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'em_pm_1j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_em_pm_1j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'me_pm_1j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_me_pm_1j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'em_pm_0j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_em_pm_0j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'me_pm_0j_pt2lt20'  ]  =       [    'hww2l2v_13TeV_me_pm_0j_pt2lt20/mllVSmth_pt2lt20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'em_mp_1j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_em_mp_1j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'me_mp_1j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_me_mp_1j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'em_mp_0j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_em_mp_0j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'me_mp_0j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_me_mp_0j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'em_pm_1j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_em_pm_1j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'me_pm_1j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_me_pm_1j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'em_pm_0j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_em_pm_0j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]    #   'False'    ]
list_datacards [ 'me_pm_0j_pt2ge20'  ]  =       [    'hww2l2v_13TeV_me_pm_0j_pt2ge20/mllVSmth_pt2ge20/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j'  ]              =       [    'hww2l2v_13TeV_of2j/mllVSmth/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j_vbfhighmjj'  ]   =       [    'hww2l2v_13TeV_of2j_vbf_highmjj/mll_optim/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j_vbfhighmjj'  ]   =       [    'hww2l2v_13TeV_of2j_vbf_lowmjj/mll_optim/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j_vh'  ]           =       [    'hww2l2v_13TeV_of2j_vh2j/mll_more/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of0j_Top'  ]          =       [    'hww2l2v_13TeV_top_of0j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of1j_Top'  ]          =       [    'hww2l2v_13TeV_top_of1j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j_Top'  ]          =       [    'hww2l2v_13TeV_top_of2j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2jvbf_Top'  ]       =       [    'hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2jvh_Top'  ]        =       [    'hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of0j_DYtt'  ]         =       [    'hww2l2v_13TeV_dytt_of0j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of1j_DYtt'  ]         =       [    'hww2l2v_13TeV_dytt_of1j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2j_DYtt'  ]         =       [    'hww2l2v_13TeV_dytt_of2j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2jvbf_DYtt'  ]      =       [    'hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'of2jvh_DYtt'  ]       =       [    'hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_0j_ee_pt2ge20'  ]  =       [    'hww2l2v_13TeV_0jee_pt2ge20/events/datacard.txt'                  ,    'False'    ] 
list_datacards [ 'sf_0j_ee_pt2lt20'  ]  =       [    'hww2l2v_13TeV_0jee_pt2lt20/events/datacard.txt'                  ,    'False'    ]    
list_datacards [ 'sf_0j_mm_pt2ge20'  ]  =       [    'hww2l2v_13TeV_0jmm_pt2ge20/events/datacard.txt'                  ,    'False'    ]    
list_datacards [ 'sf_0j_mm_pt2lt20'  ]  =       [    'hww2l2v_13TeV_0jmm_pt2lt20/events/datacard.txt'                  ,    'False'    ]    
list_datacards [ 'sf_1j_ee'  ]          =       [    'hww2l2v_13TeV_1jee/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_1j_mm'  ]          =       [    'hww2l2v_13TeV_1jmm/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_0j_WWee'  ]        =       [    'hww2l2v_13TeV_WW_0jee/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_0j_WWmm'  ]        =       [    'hww2l2v_13TeV_WW_0jmm/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_1j_WWee'  ]        =       [    'hww2l2v_13TeV_WW_1jee/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_1j_WWmm'  ]        =       [    'hww2l2v_13TeV_WW_1jmm/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_0j_topee'  ]        =       [    'hww2l2v_13TeV_top_0jee/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_0j_topmm'  ]        =       [    'hww2l2v_13TeV_top_0jmm/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'sf_1j_topsf'  ]        =       [    'hww2l2v_13TeV_top_1jsf/events/datacard.txt'                  ,    'False'    ]
list_datacards [ 'wh3l_sssf'  ]        =       [    'wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'wh3l_ossf'  ]        =       [    'wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'wh3l_wz'  ]        =       [    'wh3l_wz_13TeV/events/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'wh3l_zg'  ]        =       [    'wh3l_zg_13TeV/events/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'zh4l_xdf'  ]        =       [    'XDFSignalRegion/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'zh4l_xsf'  ]        =       [    'XSFSignalRegion/datacard.txt.pruned.txt'                  ,    'False'    ]
list_datacards [ 'zh4l_ZZ'  ]        =        [    'ZZControlRegion/datacard.txt.pruned.txt'                  ,    'False'    ]

for datacardName, datacard in list_datacards.iteritems():
  #print " datacardName = " , datacardName,
  #print " --> datacard = " , datacard[0]
  
  datacardName = datacardName.replace(' ', '')
  
  if datacard[1] == "False" :
    command = 'python      '+pathToPlayWithDatacards+'systematicsAnalyzer.py ' + pathToDatacards + '/' + datacard[0]                  + ' --all  --legend  ' + datacardName + '   -m      125     -f    tex    -o '+output+'miniTable_' +  datacardName +  '.tex     >    ' + output  +   datacardName +  '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
  else :
    command = ' python      '+pathToPlayWithDatacards+'systematicsAnalyzer.py ' + pathToDatacards + '/' + datacard[0] +  '   --blind ' + ' --all  --legend  ' + datacardName + '   -m      125     -f    tex    -o '+output+'miniTable_' +  datacardName +  '.tex     >    ' + output +   datacardName +  '.tex'
    print command
    args = shlex.split(command)
    subprocess.Popen(args)
  

