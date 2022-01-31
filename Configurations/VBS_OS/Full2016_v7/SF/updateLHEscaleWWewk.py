from optparse import OptionParser

parser = OptionParser()
parser.add_option("-f", "--LHEScaleFile", dest="LHEScaleFile", default="LHEScaleWWewk.txt", type='string', help="Input file to assign LHE scale variations to WWewk signal (taken from 2018 data set and derived as shape variations evaluated AsLnN); variations in the default input file are normalized to the inclusive fiducial volume, those in LHEScaleWWewk_fid.txt file are normalized to the exclusive fiducial volume. This procedure is needed because the LHEScaleWeight branch is missing in the 2016 signal sample")

(options, args) = parser.parse_args()

LHEScaleFile = options.LHEScaleFile


categories = {'VBS_2j_ee_lowZ' : 'mjj_s1_sb4_berr03_ee_lowZ',
              'VBS_2j_ee_highZ' : 'mjj_s1_sb4_berr03_ee_highZ', 
              'VBS_2j_mm_lowZ' : 'mjj_s1_sb4_berr03_mm_lowZ', 
              'VBS_2j_mm_highZ' : 'mjj_s1_sb4_berr03_mm_highZ',
              'DY_2j_ee_lowDetajj' : 'events', 
              'DY_2j_ee_highDetajj' : 'events', 
              'DY_2j_mm_lowDetajj' : 'events', 
              'DY_2j_mm_highDetajj' : 'events', 
              'top_2j_ee' : 'events', 
              'top_2j_mm' : 'events', 
              'VBS_2j_ee_lowZ_mjj300To500_detajj2p5To3p5' : 'events',
              'VBS_2j_ee_lowZ_mjj300To500_detajj3p5ToInf' : 'events',
              'VBS_2j_ee_lowZ_mjj500ToInf_detajj2p5To3p5' : 'events', 
              'VBS_2j_ee_highZ_mjj300To500_detajj2p5To3p5' : 'events', 
              'VBS_2j_ee_highZ_mjj300To500_detajj3p5ToInf' : 'events',
              'VBS_2j_ee_highZ_mjj500ToInf_detajj2p5To3p5' : 'events', 
              'VBS_2j_mm_lowZ_mjj300To500_detajj2p5To3p5' : 'events', 
              'VBS_2j_mm_lowZ_mjj300To500_detajj3p5ToInf' : 'events',
              'VBS_2j_mm_lowZ_mjj500ToInf_detajj2p5To3p5' : 'events', 
              'VBS_2j_mm_highZ_mjj300To500_detajj2p5To3p5' : 'events', 
              'VBS_2j_mm_highZ_mjj300To500_detajj3p5ToInf' : 'events',
              'VBS_2j_mm_highZ_mjj500ToInf_detajj2p5To3p5' : 'events'
              }
f = open(LHEScaleFile, 'r')
lines = f.readlines()
f.close()
for index, line in enumerate(lines):
  if 'VBS' in line or 'top' in line or 'DY' in line:
    for cat, var in zip(categories.keys(), categories.values()):
      if cat in line:
        datacard = open('datacards/' + cat + '/' + var + '/datacard.txt', 'r')
        d_lines = datacard.readlines()
        datacard.close()
        datacard_new = open('datacards/' + cat + '/' + var + '/datacard.txt', 'w')
        for d_line in d_lines:
          if 'QCDscale_WWewk' in d_line:
            d_line = lines[index + 1]
            d_line = d_line.replace('QCDscale_WWewk', 'QCDscale_WWewk_AsLnN')
          datacard_new.write(d_line)
      else:
        pass
