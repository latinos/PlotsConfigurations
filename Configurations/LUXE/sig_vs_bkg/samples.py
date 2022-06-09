import os
import inspect
import subprocess
import string

# /home/ntrevisa/work/LUXE/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/LUXE/sig_vs_bkg

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # sig_vs_bkg
configurations = os.path.dirname(configurations) # LUXE
configurations = os.path.dirname(configurations) # Configurations


from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def luxeGetSampleFiles(inputDir, prefix, sample, postfix):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, prefix, False, postfix)
    #  def getSampleFiles(inputDir,Sample,absPath=False,rooFilePrefix='latino_',FromPostProc=False,rootFilePostFix='__part'):

# samples
try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()


###########################################
#############  BACKGROUNDS  ###############
###########################################

# bkg_files_phase0 = luxeGetSampleFiles('/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase0/gpc/7.0/', 'e0gpc_', 'xi70', '')

# # samples['Bkg_phase0'] = {
# #     'name'   : bkg_files_phase0,
# #     'weight' : 'weight',
# #     'Filesperjob': 1,
# # }


# bkg_files_phase1 = luxeGetSampleFiles('/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase1/gpca/7.0/', 'e1gpc_', '70_000', '')

# samples['Bkg_phase1'] = {
#     'name'   : bkg_files_phase1,
#     'weight' : 'weight',
#     'FilesPerJob': 1,
# }


#bkg_files_phase0_ppw = luxeGetSampleFiles('/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase0/ppw/', 'e0gpc_', 'xi70', '')
ppw_folder = "/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase0/ppw/"

bkg_files_phase0_ppw_xi_3_0 = luxeGetSampleFiles('/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase0/ppw/', 'e0ppw_', '3_0', '')

print(bkg_files_phase0_ppw_xi_3_0)

# bkg_files_phase0_ppw_xi_3_0 = [
#     ppw_folder + "e0ppw_3_0_0_particles_g4.root",
#     ppw_folder + "e0ppw_3_0_1_particles_g4.root",
#     ppw_folder + "e0ppw_3_0_2_particles_g4.root",
#     ppw_folder + "e0ppw_3_0_3_particles_g4.root",
# ]

samples['Bkg_phase0_ppw_xi_3_0'] = {
    'name'   : bkg_files_phase0_ppw_xi_3_0,
    'weight' : 'weight/1.5e9',
    'FilesPerJob': 1,
}


bkg_files_phase0_ppw_xi_7_0 = luxeGetSampleFiles('/ceph/ferber/LUXE/ptarmigan-v0.8.1/e-laser/phase0/ppw/', 'e0ppw_', '7_0', '')

print(bkg_files_phase0_ppw_xi_7_0)

# Bkg-_files_phase0_ppw_xi_7_0 = [
#     ppw_folder + "e0ppw_7_0_0_particles_g4.root",
#     ppw_folder + "e0ppw_7_0_1_particles_g4.root",
#     ppw_folder + "e0ppw_7_0_2_particles_g4.root",
#     ppw_folder + "e0ppw_7_0_3_particles_g4.root",
# ]

samples['Bkg_phase0_ppw_xi_7_0'] = {
    'name'   : bkg_files_phase0_ppw_xi_7_0,
    'weight' : 'weight/1.5e9',
    'FilesPerJob': 1,
}
