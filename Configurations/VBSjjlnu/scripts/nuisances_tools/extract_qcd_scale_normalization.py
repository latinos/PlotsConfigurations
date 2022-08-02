
import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *
import ROOT as R
import sys
from collections import defaultdict

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples = {}


# Steps
mcSteps   = 'MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018' 

mcProduction =   'Autumn18_102X_nAODv7_Full2018v7_skim'
treeBaseDir_SMP = '/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/'

directory_signal = os.path.join(treeBaseDir_SMP ,  mcProduction , mcSteps) 

samples['VBS_ssWW']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_dipoleRecoil') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_dipoleRecoil')
}

samples['VBS_osWW']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_dipoleRecoil') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_dipoleRecoil')
}

samples['VBS_WZjj']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_dipoleRecoil',) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_dipoleRecoil',)
}

samples['VBS_WZll']  = { 'name' :   
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_dipoleRecoil', ) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_dipoleRecoil', )
}

samples['VBS_ZZ']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J_dipoleRecoil',  )
}

samples['VV_ssWW']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_QCD')
}

samples['VV_osWW']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_QCD')
}

samples['VV_WZjj']  = { 'name' :      
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_QCD',) 
}


samples['VV_WZll']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_QCD', )
}


samples['VV_ZZ']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J_QCD',  ) 
}

# samples["VBS_WV"] ={
#     'name': nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_dipoleRecoil') +
#             nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_dipoleRecoil') + 
#             nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_dipoleRecoil') +
#             nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_dipoleRecoil') + 
#             nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_dipoleRecoil',) +
#             nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_dipoleRecoil',) 
# }

# samples["VBS_ZV"] ={
#     'name': nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_dipoleRecoil', ) +
#             nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_dipoleRecoil', ) + 
#             nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J_dipoleRecoil',  )
# }

# samples["VV_WV"] ={
#     'name': nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_QCD') +
#             nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_QCD') + 
#             nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_QCD') +
#             nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_QCD') + 
#             nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_QCD',) +
#             nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_QCD',)  
# }

# samples["VV_ZV"] ={
#     'name': nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_QCD', ) +
#             nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_QCD', ) + 
#             nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J_QCD',  )
# }


# VBS_samples = ["VBS_osWW", "VBS_ssWW", "VBS_WZjj", "VBS_WZll", "VBS_ZZ"]
# VV_samples = ["VV_osWW", "VV_ssWW", "VV_WZjj", "VV_WZll", "VV_ZZ"]


results = defaultdict(list)

for sample, df in samples.items():
    chain = R.TChain("Runs")
    for tree in df["name"]:
        chain.Add(tree)
    chain.Draw("1>>hUp", "LHEScaleSumw[0]*genEventSumw","goff")
    chain.Draw("1>>hDown", "LHEScaleSumw[8]*genEventSumw","goff")
    chain.Draw("1>>h", "genEventSumw","goff")
    h = R.gDirectory.Get("h")
    nom = h.Integral()
    hUp = R.gDirectory.Get("hUp")
    up = hUp.Integral()
    hDown = R.gDirectory.Get("hDown")
    do = hDown.Integral()
    print "Sample: {} , nom: {}, up: {} {:.6f}, down: {} {:.6f}".format(sample,nom,up, up/nom, do, do/nom)  
    results["sample"].append(sample)
    results["nom"].append(nom)
    results["up"].append(up)
    results["do"].append(do)
    results["up_ratio"].append(up/nom )
    results["do_ratio"].append(do/nom )

import pandas as pd 
r = pd.DataFrame(results, columns=["samples","nom","up","up_ratio","do","do_ratio"])
r.to_csv(sys.argv[1], sep=";",index=False)