import os

central_mass_points = [
    'mhs_160_mx_100_mZp_2000', 'mhs_160_mx_100_mZp_2500', 
    'mhs_160_mx_150_mZp_2000', 'mhs_160_mx_150_mZp_2500',
    'mhs_160_mx_200_mZp_2000', 'mhs_160_mx_200_mZp_2500',
    'mhs_160_mx_300_mZp_1000', 'mhs_160_mx_300_mZp_1200', 'mhs_160_mx_300_mZp_1500', 'mhs_160_mx_300_mZp_2000', 'mhs_160_mx_300_mZp_2500', 'mhs_160_mx_300_mZp_800',
    'mhs_180_mx_100_mZp_2000', 'mhs_180_mx_100_mZp_2500',
    'mhs_180_mx_150_mZp_2000', 'mhs_180_mx_150_mZp_2500',
    'mhs_180_mx_200_mZp_2000', 'mhs_180_mx_200_mZp_2500',
    'mhs_180_mx_300_mZp_1000', 'mhs_180_mx_300_mZp_1200', 'mhs_180_mx_300_mZp_1500', 'mhs_180_mx_300_mZp_2000', 'mhs_180_mx_300_mZp_2500', 'mhs_180_mx_300_mZp_800',
    'mhs_200_mx_100_mZp_2000', 'mhs_200_mx_100_mZp_2500',
    'mhs_200_mx_150_mZp_2000', 'mhs_200_mx_150_mZp_2500',
    'mhs_200_mx_200_mZp_2000', 'mhs_200_mx_200_mZp_2500',
    'mhs_200_mx_300_mZp_1000', 'mhs_200_mx_300_mZp_1200', 'mhs_200_mx_300_mZp_1500', 'mhs_200_mx_300_mZp_2000', 'mhs_200_mx_300_mZp_2500', 'mhs_200_mx_300_mZp_800',
    'mhs_300_mx_150_mZp_1000', 'mhs_300_mx_150_mZp_1200', 'mhs_300_mx_150_mZp_1500', 'mhs_300_mx_150_mZp_400', 'mhs_300_mx_150_mZp_500', 'mhs_300_mx_150_mZp_800',
    'mhs_300_mx_200_mZp_1000', 'mhs_300_mx_200_mZp_1200', 'mhs_300_mx_200_mZp_1500', 'mhs_300_mx_200_mZp_500', 'mhs_300_mx_200_mZp_800',
    'mhs_300_mx_300_mZp_1000', 'mhs_300_mx_300_mZp_1200', 'mhs_300_mx_300_mZp_800',
    'mhs_400_mx_200_mZp_1000', 'mhs_400_mx_200_mZp_500', 'mhs_400_mx_200_mZp_800',
    # Additional private sample
    'mhs_250_mx_150_mZp_1200',
]

mhs = ['160', '180', '200']
mDM = ['100', '150', '200']
mZp = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            mp = 'mhs_'+hs+'_mx_'+DM+'_mZp_'+Zp
            central_mass_points.append(mp)




interPol_scipt_base = os.getenv('CMSSW_BASE')+'/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/interpolation/interpolationWeight_'
xsec_script         = os.getenv('CMSSW_BASE')+'/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/interpolation/getxsweight.C'

mhs = ['160','180','200','250','300','350','400']
mDM = ['100','150','200','300']
#mZp = ['200','300','400','450','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']
mZp = ['200','300','400','500','600','700','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

#first_mp = True
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            mp = 'mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp

            if mp in central_mass_points: continue
            if hs == '300' and DM == '150' and Zp == '450': continue #Missing point
            

            # Reference mass
            ref_hs = hs
            ref_DM = '150'
            ref_Zp = '1200'
            #if hs == '250': ref_hs = '200'
            if hs == '350': ref_hs = '300'
            elif hs == '400':
                ref_DM = '200'
                ref_Zp = '1000'
            ref_point = 'mhs_'+ref_hs+'_mx_'+ref_DM+'_mZp_'+ref_Zp

            # Scripts to load
            scripts = ['.L '+interPol_scipt_base+mp+ '.C', '.L '+xsec_script]
            #if first_mp:
            #    first_mp = False
            #    scripts = ['.L '+interPol_scipt_base+mp+ '.C', '.L '+xsec_script]
            #else:
            #    scripts = ['.L '+interPol_scipt_base+mp+ '.C']

            int_weight = 'interpolationWeight_' + mp +'(genDarkHiggs_Pt)'
            xs_frac = 'getxsweight('+hs+','+DM+','+Zp+','+ref_hs+','+ref_DM+','+ref_Zp+')'
            signal['darkHiggs_'+mp] = {
                'name'       : signal['darkHiggs_'+ref_point]['name'],
                'linesToAdd' : scripts,
                'weight'     : signal['darkHiggs_'+ref_point]['weight']+'*'+int_weight+'*'+xs_frac,
                'FilesPerJob': signal['darkHiggs_'+ref_point]['FilesPerJob']
                #'suppressNegative':['all'],
                #'suppressNegativeNuisances' :['all'],
            }

#### Validation
mhs = ['160', '180', '200']
mDM = ['100', '150', '200']
mZp = ['200', '300', '400', '500', '800', '1000', '1500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            # Reference mass
            ref_hs = hs
            ref_DM = '150'
            ref_Zp = '1200'
            ref_point = 'mhs_'+ref_hs+'_mx_'+ref_DM+'_mZp_'+ref_Zp

            mp = 'mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp
            int_weight = 'interpolationWeight_' + mp +'(genDarkHiggs_Pt)'
            xs_frac = 'getxsweight('+hs+','+DM+','+Zp+','+ref_hs+',150,1200)'
            signal['darkHiggsVal_'+mp] = {
                'name'       : signal['darkHiggs_'+ref_point]['name'],
                #'linesToAdd' : ['.L '+interPol_scipt_base+mp+ '.C'],
                'linesToAdd' : ['.L '+interPol_scipt_base+mp+ '.C', '.L '+xsec_script],
                'weight'     : signal['darkHiggs_'+ref_point]['weight']+'*'+int_weight+'*'+xs_frac,
                'FilesPerJob': signal['darkHiggs_'+ref_point]['FilesPerJob']
                #'suppressNegative':['all'],
                #'suppressNegativeNuisances' :['all'],
            }


#### INTERMEDIATE
#
#
#mhs = ['170']
#mDM = ['200']
#mZp = ['600','1300']
#
#for hs in mhs:
#    for DM in mDM:
#        for Zp in mZp:
#            # Reference mass
#            ref_mhs = '160'
#            ref_point = 'mhs_'+ref_mhs+'_mx_150_mZp_1200'
#
#            mp = 'mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp
#            int_weight = 'interpolationWeight_' + mp +'(genDarkHiggs_Pt)'
#            xs_frac = 'getxsweight('+hs+','+DM+','+Zp+','+ref_mhs+',150,1200)'
#            signal['darkHiggs_'+mp] = {
#                'name'       : signal['darkHiggs_'+ref_point]['name'],
#                'linesToAdd' : ['.L '+interPol_scipt_base+mp+ '.C', '.L '+xsec_script],
#                'weight'     : signal['darkHiggs_'+ref_point]['weight']+'*'+int_weight+'*'+xs_frac,
#                'FilesPerJob': signal['darkHiggs_'+ref_point]['FilesPerJob']
#                #'suppressNegative':['all'],
#                #'suppressNegativeNuisances' :['all'],
#            }
#
#mhs = ['190']
#mDM = ['200']
#mZp = ['700','1100','1400']
#
#for hs in mhs:
#    for DM in mDM:
#        for Zp in mZp:
#            # Reference mass
#            ref_mhs = '200'
#            ref_point = 'mhs_'+ref_mhs+'_mx_150_mZp_1200'
#
#            mp = 'mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp
#            int_weight = 'interpolationWeight_' + mp +'(genDarkHiggs_Pt)'
#            xs_frac = 'getxsweight('+hs+','+DM+','+Zp+','+ref_mhs+',150,1200)'
#            signal['darkHiggs_'+mp] = {
#                'name'       : signal['darkHiggs_'+ref_point]['name'],
#                'linesToAdd' : ['.L '+interPol_scipt_base+mp+ '.C', '.L '+xsec_script],
#                'weight'     : signal['darkHiggs_'+ref_point]['weight']+'*'+int_weight+'*'+xs_frac,
#                'FilesPerJob': signal['darkHiggs_'+ref_point]['FilesPerJob']
#                #'suppressNegative':['all'],
#                #'suppressNegativeNuisances' :['all'],
#            }
