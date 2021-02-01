#!/usr/bin/env python
"""
Conventions for the constants here:
The top few constants are directly from JHUGen mod_Parameters.
g2HZZ and similar: these are from
https://twiki.cern.ch/twiki/bin/view/CMS/Run2MCProductionforHiggsProperties
They are sqrt(sigma1/sigmai) for the given process,
calculated by JHUGen in 2015. They were used for all MC samples,
and are also used to calculate fai and discriminants.
fai is particularly important, since these numbers are published
in HIG-17-011 (at least for decay; for production they appear in
published plots for fa3, and supplemental plots for the others).
They are basically a convention at this point and should not be changed.
SMXS are from YR4.  It's documented exactly how to
get them from the excel spreadsheet.
JHUXS - these are measured from JHUGen.  Currently, if you take
sqrt(sigma1/sigmai) you should get something reasonably
consistent with gidecay (or giVBF or whatever), but that's
not guaranteed to be the case.  In particular, when we
change PDFs that will no longer be true for production cross
sections.
The JHUXS for SM are calculated for g1=1, and the pure anomalous
JHUXS are calculated for gi=1.  For the mixture xsecs,
READ CAREFULLY:
The numbers written explicitly in this file are calculated with
g1=1, gi=gidecay or giVBF or ....  This is to maximize statistics.
(Similarly, for the mixtures between two anomalous couplings, they
are calculated with gi=gi, gj=gj)
Later in this file, they are processed further: first, we subtract
(JHUXSa1 + gi**2 * JHUXSai) [or similar for the aiaj xsecs].
We are then left with pure inteference.
The numbers are then divided by gi (or gi*gj).
At this point, if __name__ == "__main__" we print some things
that are expected to be ~0.  Check these if you make any changes
in constants.  They include sigma1 - sigmai*gi**2, which should
be removed when we change pdfs, as mentioned above.
Then, some of these are defined to be exactly 0.  For example
any interference between scalar and pseudoscalar, without cuts.
This is what you get when you import these constants and use them
in python.
"""

try:
  import uncertainties
except ImportError:
  raise ImportError("Need to install uncertainties!")

import ROOT
import numpy as np
from uncertainties import ufloat
from uncertainties.umath import sqrt


M_Z = 91.1876
Ga_Z = 2.4952
aL = -0.53762
aR = 0.46238
e = 0.8431872482432357  # = cL_lep = cR_lep from mod_Parameters
L1 = 10000.

g2HZZ = 1.65684
g4HZZ = 2.55052
g1prime2HZZ = -12100.42
ghzgs1prime2HZZ = -7613.351302119843
eLHZZ = sqrt(7.2310297E+00 / 1.4347981E+01)
eRHZZ = sqrt(7.2310297E+00 / 1.3952140E+00)

g2HWW = 1.133582
g4HWW = 1.76132
g1prime2HWW = -13752.22
ghzgs1prime2HWW = -1000

g2VBF = 0.27196538
g4VBF = 0.297979018705
g1prime2VBF = -2158.21307286
ghzgs1prime2VBF = -4091.051456694223

g2ZH = 0.112481
g4ZH = 0.144057
g1prime2ZH = -517.788
ghzgs1prime2ZH = -642.9534550379002

g2WH = 0.0998956
g4WH = 0.1236136
g1prime2WH = -525.274
ghzgs1prime2WH = -1000

g2VH = 0.10430356645812816 #sqrt((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH) / (JHUXSZHa2 + JHUXSWHa2*normalize_WH_to_ZH))
g4VH = 0.13053750671388425 #sqrt((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH) / (JHUXSZHa3 + JHUXSWHa3*normalize_WH_to_ZH))
g1prime2VH = -522.3034453633128 #-sqrt((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH) / (JHUXSZHL1 + JHUXSWHL1*normalize_WH_to_ZH))
ghzgs1prime2VH = -1027.387141119873 #-sqrt((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH) / (JHUXSZHL1Zg + JHUXSWHL1Zg*normalize_WH_to_ZH))
nominal_normalize_WH_to_ZH = 0.15070409765374365

ghg4HJJ = 1.0062
kappa_tilde_ttH = 1.6

#https://twiki.cern.ch/twiki/pub/LHCPhysics/LHCHXSWG/Higgs_XSBR_YR4_update.xlsx
SMXSggH  = (44.14      #'YR4 SM 13TeV'!B24   (ggH cross section, m=125)
             *1000)    #                     (pb to fb)
SMBR2L2l = (5.897E-05  #'YR4 SM BR'!CO25     (2e2mu BR, m=125)
             *3)       #                     (include 2e2tau, 2mu2tau)
SMXSVBF  = (3.782E+00  #'YR4 SM 13TeV'!B24   (VBF cross section, m=125)
             *1000)    #                     (pb to fb)
SMXSWH   = (1.373E+00  #'YR4 SM 13TeV'!R24   (WH cross section, m=125)
             *1000)    #                     (pb to fb)
SMXSWpH  = (8.400E-01  #'YR4 SM 13TeV'!X24   (W+H cross section, m=125)
             *1000)    #                     (pb to fb)
SMXSWmH  = (5.328E-01  #'YR4 SM 13TeV'!X24   (W-H cross section, m=125)
             *1000)    #                     (pb to fb)
SMXSZH   = (8.839E-01  #'YR4 SM 13TeV'!AB24  (ZH cross section, m=125)
             *1000)    #                     (pb to fb)
SMXSttH  = (5.071E-01  #'YR4 SM 13TeV'!AK24  (ttH cross section, m=125)
             *1000)    #                     (pb to fb)

SMXSggH2L2l = SMXSggH * SMBR2L2l
SMXSVBF2L2l = SMXSVBF * SMBR2L2l
SMXSZH2L2l = SMXSZH * SMBR2L2l
SMXSWH2L2l = SMXSWH * SMBR2L2l
SMXSWpH2L2l = SMXSWpH * SMBR2L2l
SMXSWmH2L2l = SMXSWmH * SMBR2L2l
SMXSttH2L2l = SMXSttH * SMBR2L2l

JHUXSHZZ2L2la1             = ufloat(     7.1517044,  0.00027591496)
JHUXSHZZ2L2la2             = ufloat(     2.5850323,  0.00010874196)
JHUXSHZZ2L2la3             = ufloat(      1.095479,  5.6780596e-05)
JHUXSHZZ2L2lL1             = ufloat( 4.8755556e-08,    1.75784e-12)
JHUXSHZZ2L2lL1Zg           = ufloat( 1.2489117e-07,  5.6567346e-12)
JHUXSHZZ2L2la1a2           = ufloat(     26.074307,  0.00094875635)
JHUXSHZZ2L2la1a3           = ufloat(     14.277409,   0.0005409516)
JHUXSHZZ2L2la1L1           = ufloat(    0.23726108,  2.1955163e-05)
JHUXSHZZ2L2la1L1Zg         = ufloat(     13.220602,  0.00053706572)
JHUXSHZZ2L2la2a3           = ufloat(     14.221651,  0.00063763008)
JHUXSHZZ2L2la2L1           = ufloat(     2.3200652,  0.00014040255)
JHUXSHZZ2L2la2L1Zg         = ufloat(     13.391687,  0.00049246945)
JHUXSHZZ2L2la3L1           = ufloat(     14.264343,  0.00051778249)
JHUXSHZZ2L2la3L1Zg         = ufloat(     14.364768,  0.00054679129)
JHUXSHZZ2L2lL1L1Zg         = ufloat(     15.488892,  0.00063476605)

JHUXSHZZ2L2leL = 1.4347981E+01
JHUXSHZZ2L2leR = 1.3952140E+01

JHUXSHWWa1                 = ufloat(     312.04019,    0.021123201)
JHUXSHWWa2                 = ufloat(      242.6283,    0.018655548)
JHUXSHWWa3                 = ufloat(     100.79135,   0.0076985693)
JHUXSHWWL1                 = ufloat( 1.6475531e-06,  1.1297587e-10)
JHUXSHWWa1a2               = ufloat(     1149.9181,       0.085554)
JHUXSHWWa1a3               = ufloat(      624.7195,    0.046033017)
JHUXSHWWa1L1               = ufloat(     5.3585509,  0.00056067121)
JHUXSHWWa2a3               = ufloat(     624.55269,    0.046795651)
JHUXSHWWa2L1               = ufloat(     83.700384,   0.0062011144)
JHUXSHWWa3L1               = ufloat(     624.23611,    0.045827636)

JHUXSHWWL1Zg               = 0
JHUXSHWWa1L1Zg             = JHUXSHWWa1
JHUXSHWWa2L1Zg             = g2HWW**2 * JHUXSHWWa2
JHUXSHWWa3L1Zg             = g4HWW**2 * JHUXSHWWa3
JHUXSHWWL1L1Zg             = g1prime2HWW**2 * JHUXSHWWL1

JHUXSVBFa1                 = ufloat(     968.88143,     0.42919631)
JHUXSVBFa2                 = ufloat(     13097.831,       3.335825)
JHUXSVBFa3                 = ufloat(     10910.237,      3.2662293)
JHUXSVBFL1                 = ufloat( 0.00020829261,  7.6725395e-08)
JHUXSVBFL1Zg               = ufloat( 5.2902139e-05,  2.2868933e-08)
JHUXSVBFa1a2               = ufloat(     2207.6738,     0.73510552)
JHUXSVBFa1a3               = ufloat(     1936.4327,     0.72879437)
JHUXSVBFa1L1               = ufloat(     2861.7003,      1.0169832)
JHUXSVBFa1L1Zg             = ufloat(     1574.5833,     0.70680555)
JHUXSVBFa2a3               = ufloat(      1937.588,     0.55595604)
JHUXSVBFa2L1               = ufloat(     2507.7202,     0.81000667)
JHUXSVBFa2L1Zg             = ufloat(     1739.4331,     0.57641118)
JHUXSVBFa3L1               = ufloat(     1940.0653,     0.72555356)
JHUXSVBFa3L1Zg             = ufloat(     1853.7644,     0.65261692)
JHUXSVBFL1L1Zg             = ufloat(     1401.9816,     0.52582956)

JHUXSZHa1                  = ufloat(     1436880.4,        41.3837)
JHUXSZHa2                  = ufloat( 1.1360424e+08,      4939.2461)
JHUXSZHa3                  = ufloat(      69241514,      2046.1655)
JHUXSZHL1                  = ufloat(     5.3610896,  0.00014112226)
JHUXSZHL1Zg                = ufloat(     3.4592999,  8.0055009e-05)
JHUXSZHa1a2                = ufloat(     678434.94,      47.185897)
JHUXSZHa1a3                = ufloat(     2873685.9,      91.470217)
JHUXSZHa1L1                = ufloat(     1091656.8,      30.521123)
JHUXSZHa1L1Zg              = ufloat(       3480087,      99.293532)
JHUXSZHa2a3                = ufloat(     2874232.1,      91.487587)
JHUXSZHa2L1                = ufloat(     4488018.1,      136.45286)
JHUXSZHa2L1Zg              = ufloat(     2297889.6,      60.444464)
JHUXSZHa3L1                = ufloat(       2874124,       87.77159)
JHUXSZHa3L1Zg              = ufloat(     2866940.9,      76.407376)
JHUXSZHL1L1Zg              = ufloat(       1763624,      47.312104)

JHUXSWHa1                  = ufloat(      14813072,      324.03722)
JHUXSWHa2                  = ufloat( 1.4845783e+09,      58842.575)
JHUXSWHa3                  = ufloat( 9.6943028e+08,      25961.992)
JHUXSWHL1                  = ufloat(     53.687994,   0.0012413086)
JHUXSWHa1a2                = ufloat(     7879980.3,      450.51374)
JHUXSWHa1a3                = ufloat(      29626131,      764.40517)
JHUXSWHa1L1                = ufloat(      12092167,      286.51514)
JHUXSWHa2a3                = ufloat(      29628463,        917.628)
JHUXSWHa2L1                = ufloat(      44769608,      1129.0058)
JHUXSWHa3L1                = ufloat(      29624425,      765.59044)

JHUXSWHL1Zg                = 0
JHUXSWHa1L1Zg              = JHUXSWHa1
JHUXSWHa2L1Zg              = g2WH**2 * JHUXSWHa2
JHUXSWHa3L1Zg              = g4WH**2 * JHUXSWHa3
JHUXSWHL1L1Zg              = g1prime2WH**2 * JHUXSWHL1

JHUXSHJJa2       = ufloat(14583.61,       0.94)
JHUXSHJJa3       = ufloat(14397.13,       0.97)
JHUXSHJJa2a3     = ufloat(29169.2,        2.1)

JHUXSttHkappa    = ufloat(0.912135589,    0.00143032)
JHUXSttHkappatilde = ufloat(0.35609194,   0.000492662)
JHUXSttHkappakappatilde = ufloat(1.8231162489,   0.00254131)

####################################### Constants as function of mH from Ulascan ##############################

x = 125

print 'Check constants from Ulascans files'
print ' '

loc = '/afs/cern.ch/work/d/dmoran/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/VBF/Tools/constants'

f = ROOT.TFile(''+loc+'/SmoothKDConstant_m4l_DjjVBF_13TeV.root','read')
c1 = f.Get('sp_gr_varReco_Constant_Smooth')
print ' c VBF = ', c1.Eval(x), ' at ', x,  'GeV'

f = ROOT.TFile(''+loc+'/SmoothKDConstant_m4l_DjjWH_13TeV.root','read')
c1 = f.Get('sp_gr_varReco_Constant_Smooth')
print ' c WH = ', c1.Eval(x), ' at ', x,  'GeV'

f = ROOT.TFile(''+loc+'/SmoothKDConstant_m4l_DjjZH_13TeV.root','read')
c1 = f.Get('sp_gr_varReco_Constant_Smooth')
print ' c ZH = ', c1.Eval(x), ' at ', x,  'GeV'

f = ROOT.TFile(''+loc+'/gConstant_VBF_g4.root','read')
g4 = f.Get('sp_tgfinal_VBF_SM_over_tgfinal_VBF_g4')
print ' g4 = ', g4.Eval(x), ' at ', x,  'GeV'

f = ROOT.TFile(''+loc+'/gConstant_VBF_g2.root','read')
g2 = f.Get('sp_tgfinal_VBF_SM_over_tgfinal_VBF_g2')
print ' g2 = ', g2.Eval(x), ' at ', x,  'GeV'
print ''

#############################################################################

JHUXSHWWa1a2_I = (JHUXSHWWa1a2 - JHUXSHWWa1 - (g2HWW**2)*JHUXSHWWa2)/g2HWW
JHUXSHWWa1a3_I = (JHUXSHWWa1a3 - JHUXSHWWa1 - (g4HWW**2)*JHUXSHWWa3)/g4HWW
JHUXSHWWa1L1_I = (JHUXSHWWa1L1 - JHUXSHWWa1 - (g1prime2HWW**2)*JHUXSHWWL1)/g1prime2HWW

JHUXSVBFa1a2_I = (JHUXSVBFa1a2 - JHUXSVBFa1 - (g2VBF**2)*JHUXSVBFa2)/g2VBF
JHUXSVBFa1a3_I = (JHUXSVBFa1a3 - JHUXSVBFa1 - (g4VBF**2)*JHUXSVBFa3)/g4VBF
JHUXSVBFa1L1_I = (JHUXSVBFa1L1 - JHUXSVBFa1 - (g1prime2VBF**2)*JHUXSVBFL1)/g1prime2VBF

a1 = 1
ai = g4VBF
print " " 
print " Test VBF H0M for a1, ai = ", a1, ai
JHUXSVBFa1a3_ai = JHUXSVBFa1*a1**2 + JHUXSVBFa1a3_I*a1*ai + JHUXSVBFa3*ai**2
Fa3P = (JHUXSVBFa3*ai**2)/(JHUXSVBFa3*ai**2 + JHUXSVBFa1*a1**2)
Mu3P = (JHUXSVBFa3*ai**2 + JHUXSVBFa1*a1**2)/JHUXSVBFa1
print "PV F values : ", Fa3P ,", with Int : ", (JHUXSVBFa3*ai**2)/JHUXSVBFa1a3_ai
print "PV Mu values : ", Mu3P ,", with Int : ", JHUXSVBFa1a3_ai/JHUXSVBFa1
JHUXSHWWa1a3_ai = JHUXSHWWa1*a1**2 + JHUXSHWWa1a3_I*a1*ai + JHUXSHWWa3*(ai**2)
Fa3D = (JHUXSHWWa3*ai**2)/(JHUXSHWWa3*ai**2 + JHUXSHWWa1*a1**2)
Mu3D = (JHUXSHWWa3*ai**2 + JHUXSHWWa1*a1**2)/JHUXSHWWa1
print "DV F values : ", Fa3D,", with Int : ", (JHUXSHWWa3*ai**2)/JHUXSHWWa1a3_ai
print "DV Mu values : ", Mu3D,", with Int : ", JHUXSHWWa1a3_ai/JHUXSHWWa1
print " " 

ai = g2VBF
print " Test VBF H0PH for a1, ai = ", a1, ai
JHUXSVBFa1a2_ai = JHUXSVBFa1*a1**2 + JHUXSVBFa1a2_I*a1*ai + JHUXSVBFa2*ai**2
Fa2P = (JHUXSVBFa2*ai**2)/(JHUXSVBFa2*ai**2 + JHUXSVBFa1*a1**2)
Mu2P = (JHUXSVBFa2*ai**2 + JHUXSVBFa1*a1**2)/JHUXSVBFa1
print "PV F values : ", Fa2P ,", with Int : ", (JHUXSVBFa2*ai**2)/JHUXSVBFa1a2_ai
print "PV Mu values : ", Mu2P ,", with Int : ", JHUXSVBFa1a2_ai/JHUXSVBFa1
JHUXSHWWa1a2_ai = JHUXSHWWa1*a1**2 + JHUXSHWWa1a2_I*a1*ai + JHUXSHWWa2*(ai**2)
Fa2D = (JHUXSHWWa2*ai**2)/(JHUXSHWWa2*ai**2 + JHUXSHWWa1*a1**2)
Mu2D = (JHUXSHWWa2*ai**2 + JHUXSHWWa1*a1**2)/JHUXSHWWa1
print "DV F values : ", Fa2D,", with Int : ", (JHUXSHWWa2*ai**2)/JHUXSHWWa1a2_ai
print "DV Mu values : ", Mu2D,", with Int : ", JHUXSHWWa1a2_ai/JHUXSHWWa1
print " " 

ai = g1prime2VBF
print " Test VBF H0L1 for a1, ai = ", a1, ai
JHUXSVBFa1L1_ai = JHUXSVBFa1*a1**2 + JHUXSVBFa1L1_I*a1*ai + JHUXSVBFL1*ai**2
FL1P  = np.sign(ai)*(JHUXSVBFL1*ai**2)/(JHUXSVBFL1*ai**2 + JHUXSVBFa1*a1**2)
MuL1P = (JHUXSVBFL1*ai**2 + JHUXSVBFa1*a1**2)/JHUXSVBFa1
print "PV F values : ", FL1P ,", with Int : ", (JHUXSVBFL1*ai**2)/JHUXSVBFa1L1_ai
print "PV Mu values : ", MuL1P ,", with Int : ", JHUXSVBFa1L1_ai/JHUXSVBFa1
JHUXSHWWa1L1_ai = JHUXSHWWa1*a1**2 + JHUXSHWWa1L1_I*a1*ai + JHUXSHWWL1*(ai**2)
FL1D = np.sign(ai)*(JHUXSHWWL1*ai**2)/(JHUXSHWWL1*ai**2 + JHUXSHWWa1*a1**2)
MuL1D = (JHUXSHWWL1*ai**2 + JHUXSHWWa1*a1**2)/JHUXSHWWa1
print "DV F values : ", FL1D,", with Int : ", (JHUXSHWWL1*ai**2)/JHUXSHWWa1L1_ai
print "DV Mu values : ", MuL1D,", with Int : ", JHUXSHWWa1L1_ai/JHUXSHWWa1
print " " 

###############################################################################

#Subtract the pure component from the interference, then divide by (gi*gj)
JHUXSHZZ2L2la1a2   = (JHUXSHZZ2L2la1a2   -                  JHUXSHZZ2L2la1 - g2HZZ          **2 * JHUXSHZZ2L2la2  ) / (g2HZZ                            )
JHUXSHZZ2L2la1a3   = (JHUXSHZZ2L2la1a3   -                  JHUXSHZZ2L2la1 - g4HZZ          **2 * JHUXSHZZ2L2la3  ) / (g4HZZ                            )
JHUXSHZZ2L2la1L1   = (JHUXSHZZ2L2la1L1   -                  JHUXSHZZ2L2la1 - g1prime2HZZ    **2 * JHUXSHZZ2L2lL1  ) / (g1prime2HZZ                      )
JHUXSHZZ2L2la1L1Zg = (JHUXSHZZ2L2la1L1Zg -                  JHUXSHZZ2L2la1 - ghzgs1prime2HZZ**2 * JHUXSHZZ2L2lL1Zg) / (ghzgs1prime2HZZ                  )
JHUXSHZZ2L2la2a3   = (JHUXSHZZ2L2la2a3   - g2HZZ      **2 * JHUXSHZZ2L2la2 - g4HZZ          **2 * JHUXSHZZ2L2la3  ) / (g2HZZ           * g4HZZ          )
JHUXSHZZ2L2la2L1   = (JHUXSHZZ2L2la2L1   - g2HZZ      **2 * JHUXSHZZ2L2la2 - g1prime2HZZ    **2 * JHUXSHZZ2L2lL1  ) / (g2HZZ           * g1prime2HZZ    )
JHUXSHZZ2L2la2L1Zg = (JHUXSHZZ2L2la2L1Zg - g2HZZ      **2 * JHUXSHZZ2L2la2 - ghzgs1prime2HZZ**2 * JHUXSHZZ2L2lL1Zg) / (g2HZZ           * ghzgs1prime2HZZ)
JHUXSHZZ2L2la3L1   = (JHUXSHZZ2L2la3L1   - g4HZZ      **2 * JHUXSHZZ2L2la3 - g1prime2HZZ    **2 * JHUXSHZZ2L2lL1  ) / (g4HZZ           * g1prime2HZZ    )
JHUXSHZZ2L2la3L1Zg = (JHUXSHZZ2L2la3L1Zg - g4HZZ      **2 * JHUXSHZZ2L2la3 - ghzgs1prime2HZZ**2 * JHUXSHZZ2L2lL1Zg) / (g4HZZ           * ghzgs1prime2HZZ)
JHUXSHZZ2L2lL1L1Zg = (JHUXSHZZ2L2lL1L1Zg - g1prime2HZZ**2 * JHUXSHZZ2L2lL1 - ghzgs1prime2HZZ**2 * JHUXSHZZ2L2lL1Zg) / (g1prime2HZZ     * ghzgs1prime2HZZ)

JHUXSHWWa1a2       = (JHUXSHWWa1a2       -                    JHUXSHWWa1     - g2HWW            **2 * JHUXSHWWa2      ) / (g2HWW                                    )
JHUXSHWWa1a3       = (JHUXSHWWa1a3       -                    JHUXSHWWa1     - g4HWW            **2 * JHUXSHWWa3      ) / (g4HWW                                    )
JHUXSHWWa1L1       = (JHUXSHWWa1L1       -                    JHUXSHWWa1     - g1prime2HWW      **2 * JHUXSHWWL1      ) / (g1prime2HWW                              )
JHUXSHWWa1L1Zg     = 0
JHUXSHWWa2a3       = (JHUXSHWWa2a3       - g2HWW        **2 * JHUXSHWWa2     - g4HWW            **2 * JHUXSHWWa3      ) / (g2HWW                 * g4HWW            )
JHUXSHWWa2L1       = (JHUXSHWWa2L1       - g2HWW        **2 * JHUXSHWWa2     - g1prime2HWW      **2 * JHUXSHWWL1      ) / (g2HWW                 * g1prime2HWW      )
JHUXSHWWa2L1Zg     = 0
JHUXSHWWa3L1       = (JHUXSHWWa3L1       - g4HWW        **2 * JHUXSHWWa3     - g1prime2HWW      **2 * JHUXSHWWL1      ) / (g4HWW                 * g1prime2HWW      )
JHUXSHWWa3L1Zg     = 0
JHUXSHWWL1L1Zg     = 0

JHUXSVBFa1a2       = (JHUXSVBFa1a2       -                        JHUXSVBFa1     - g2VBF            **2 * JHUXSVBFa2      ) / (g2VBF                                )
JHUXSVBFa1a3       = (JHUXSVBFa1a3       -                        JHUXSVBFa1     - g4VBF            **2 * JHUXSVBFa3      ) / (g4VBF                                )
JHUXSVBFa1L1       = (JHUXSVBFa1L1       -                        JHUXSVBFa1     - g1prime2VBF      **2 * JHUXSVBFL1      ) / (g1prime2VBF                          )
JHUXSVBFa1L1Zg     = (JHUXSVBFa1L1Zg     -                        JHUXSVBFa1     - ghzgs1prime2VBF  **2 * JHUXSVBFL1Zg    ) / (ghzgs1prime2VBF                      )
JHUXSVBFa2a3       = (JHUXSVBFa2a3       - g2VBF            **2 * JHUXSVBFa2     - g4VBF            **2 * JHUXSVBFa3      ) / (g2VBF             * g4VBF            )
JHUXSVBFa2L1       = (JHUXSVBFa2L1       - g2VBF            **2 * JHUXSVBFa2     - g1prime2VBF      **2 * JHUXSVBFL1      ) / (g2VBF             * g1prime2VBF      )
JHUXSVBFa2L1Zg     = (JHUXSVBFa2L1Zg     - g2VBF            **2 * JHUXSVBFa2     - ghzgs1prime2VBF  **2 * JHUXSVBFL1Zg    ) / (g2VBF             * ghzgs1prime2VBF  )
JHUXSVBFa3L1       = (JHUXSVBFa3L1       - g4VBF            **2 * JHUXSVBFa3     - g1prime2VBF      **2 * JHUXSVBFL1      ) / (g4VBF             * g1prime2VBF      )
JHUXSVBFa3L1Zg     = (JHUXSVBFa3L1Zg     - g4VBF            **2 * JHUXSVBFa3     - ghzgs1prime2VBF  **2 * JHUXSVBFL1Zg    ) / (g4VBF             * ghzgs1prime2VBF  )
JHUXSVBFL1L1Zg     = (JHUXSVBFL1L1Zg     - g1prime2VBF      **2 * JHUXSVBFL1     - ghzgs1prime2VBF  **2 * JHUXSVBFL1Zg    ) / (g1prime2VBF       * ghzgs1prime2VBF  )

JHUXSZHa1a2        = (JHUXSZHa1a2        -                    JHUXSZHa1      - g2ZH             **2 * JHUXSZHa2       ) / (g2ZH                                 )
JHUXSZHa1a3        = (JHUXSZHa1a3        -                    JHUXSZHa1      - g4ZH             **2 * JHUXSZHa3       ) / (g4ZH                                 )
JHUXSZHa1L1        = (JHUXSZHa1L1        -                    JHUXSZHa1      - g1prime2ZH       **2 * JHUXSZHL1       ) / (g1prime2ZH                           )
JHUXSZHa1L1Zg      = (JHUXSZHa1L1Zg      -                    JHUXSZHa1      - ghzgs1prime2ZH   **2 * JHUXSZHL1Zg     ) / (ghzgs1prime2ZH                       )
JHUXSZHa2a3        = (JHUXSZHa2a3        - g2ZH         **2 * JHUXSZHa2      - g4ZH             **2 * JHUXSZHa3       ) / (g2ZH              * g4ZH             )
JHUXSZHa2L1        = (JHUXSZHa2L1        - g2ZH         **2 * JHUXSZHa2      - g1prime2ZH       **2 * JHUXSZHL1       ) / (g2ZH              * g1prime2ZH       )
JHUXSZHa2L1Zg      = (JHUXSZHa2L1Zg      - g2ZH         **2 * JHUXSZHa2      - ghzgs1prime2ZH   **2 * JHUXSZHL1Zg     ) / (g2ZH              * ghzgs1prime2ZH   )
JHUXSZHa3L1        = (JHUXSZHa3L1        - g4ZH         **2 * JHUXSZHa3      - g1prime2ZH       **2 * JHUXSZHL1       ) / (g4ZH              * g1prime2ZH       )
JHUXSZHa3L1Zg      = (JHUXSZHa3L1Zg      - g4ZH         **2 * JHUXSZHa3      - ghzgs1prime2ZH   **2 * JHUXSZHL1Zg     ) / (g4ZH              * ghzgs1prime2ZH   )
JHUXSZHL1L1Zg      = (JHUXSZHL1L1Zg      - g1prime2ZH   **2 * JHUXSZHL1      - ghzgs1prime2ZH   **2 * JHUXSZHL1Zg     ) / (g1prime2ZH        * ghzgs1prime2ZH   )

JHUXSWHa1a2        = (JHUXSWHa1a2        -                    JHUXSWHa1      - g2WH             **2 * JHUXSWHa2       ) / (g2WH                                     )
JHUXSWHa1a3        = (JHUXSWHa1a3        -                    JHUXSWHa1      - g4WH             **2 * JHUXSWHa3       ) / (g4WH                                     )
JHUXSWHa1L1        = (JHUXSWHa1L1        -                    JHUXSWHa1      - g1prime2WH       **2 * JHUXSWHL1       ) / (g1prime2WH                               )
JHUXSWHa1L1Zg      = 0
JHUXSWHa2a3        = (JHUXSWHa2a3        - g2WH         **2 * JHUXSWHa2      - g4WH             **2 * JHUXSWHa3       ) / (g2WH                  * g4WH             )
JHUXSWHa2L1        = (JHUXSWHa2L1        - g2WH         **2 * JHUXSWHa2      - g1prime2WH       **2 * JHUXSWHL1       ) / (g2WH                  * g1prime2WH       )
JHUXSWHa2L1Zg      = 0
JHUXSWHa3L1        = (JHUXSWHa3L1        - g4WH         **2 * JHUXSWHa3      - g1prime2WH       **2 * JHUXSWHL1       ) / (g4WH                  * g1prime2WH       )
JHUXSWHa3L1Zg      = 0
JHUXSWHL1L1Zg      = 0

JHUXSHJJa2a3       = (JHUXSHJJa2a3       -                        JHUXSHJJa2     - ghg4HJJ          **2 * JHUXSHJJa3      ) / (ghg4HJJ                              )

JHUXSttHkappakappatilde = (JHUXSttHkappakappatilde - JHUXSttHkappa - kappa_tilde_ttH**2 * JHUXSttHkappatilde) / kappa_tilde_ttH

normalize_WH_to_ZH = SMXSWH / JHUXSWHa1 / (SMXSZH / JHUXSZHa1)

if __name__ == "__main__":
    print "All of the following should be 0:"
    print
    print "  decay:"
    print "    a1XS -           g2**2*    a2XS = {:%}".format((JHUXSHZZ2L2la1 - g2HZZ**2           * JHUXSHZZ2L2la2    ) / JHUXSHZZ2L2la1)
    print "    a1XS -           g4**2*    a3XS = {:%}".format((JHUXSHZZ2L2la1 - g4HZZ**2           * JHUXSHZZ2L2la3    ) / JHUXSHZZ2L2la1)
    print "    a1XS -     g1prime2**2*    L1XS = {:%}".format((JHUXSHZZ2L2la1 - g1prime2HZZ**2     * JHUXSHZZ2L2lL1    ) / JHUXSHZZ2L2la1)
    print "    a1XS - ghzgs1prime2**2*  L1ZgXS = {:%}".format((JHUXSHZZ2L2la1 - ghzgs1prime2HZZ**2 * JHUXSHZZ2L2lL1Zg  ) / JHUXSHZZ2L2la1)
    print "                        g4*  a1a3XS = {:%}".format((                 g4HZZ              * JHUXSHZZ2L2la1a3  ) / JHUXSHZZ2L2la1)
    print "                     g2*g4*  a2a3XS = {:%}".format((                 g2HZZ*g4HZZ        * JHUXSHZZ2L2la2a3  ) / JHUXSHZZ2L2la1)
    print "               g1prime2*g4*  a3L1XS = {:%}".format((                 g1prime2HZZ*g4HZZ  * JHUXSHZZ2L2la3L1  ) / JHUXSHZZ2L2la1)
    print "           ghzgs1prime2*g4*a3L1ZgXS = {:%}".format((             ghzgs1prime2HZZ*g4HZZ  * JHUXSHZZ2L2la3L1Zg) / JHUXSHZZ2L2la1)
    print
    print "  HWW:"
    print "    a1XS -           g2**2*    a2XS = {:%}".format((JHUXSHWWa1     - g2HWW**2           * JHUXSHWWa2        ) / JHUXSHWWa1    )
    print "    a1XS -           g4**2*    a3XS = {:%}".format((JHUXSHWWa1     - g4HWW**2           * JHUXSHWWa3        ) / JHUXSHWWa1    )
    print "    a1XS -     g1prime2**2*    L1XS = {:%}".format((JHUXSHWWa1     - g1prime2HWW**2     * JHUXSHWWL1        ) / JHUXSHWWa1    )
#   print "    a1XS - ghzgs1prime2**2*  L1ZgXS = {:%}".format((JHUXSHWWa1     - ghzgs1prime2HWW**2 * JHUXSHWWL1Zg      ) / JHUXSHWWa1    )
    print "                        g4*  a1a3XS = {:%}".format((                 g4HWW              * JHUXSHWWa1a3      ) / JHUXSHWWa1    )
    print "                     g2*g4*  a2a3XS = {:%}".format((                 g2HWW  *g4HWW      * JHUXSHWWa2a3      ) / JHUXSHWWa1    )
    print "               g1prime2*g4*  a3L1XS = {:%}".format((                g1prime2HWW  *g4HWW * JHUXSHWWa3L1      ) / JHUXSHWWa1    )
#   print "           ghzgs1prime2*g4*a3L1ZgXS = {:%}".format((            ghzgs1prime2HWW  *g4HWW * JHUXSHWWa3L1Zg    ) / JHUXSHWWa1    )
    print
    print "  VBF:"
    print "    a1XS -           g2**2*    a2XS = {:%}".format((JHUXSVBFa1     - g2VBF**2           * JHUXSVBFa2        ) / JHUXSVBFa1    )
    print "    a1XS -           g4**2*    a3XS = {:%}".format((JHUXSVBFa1     - g4VBF**2           * JHUXSVBFa3        ) / JHUXSVBFa1    )
    print "    a1XS -     g1prime2**2*    L1XS = {:%}".format((JHUXSVBFa1     - g1prime2VBF**2     * JHUXSVBFL1        ) / JHUXSVBFa1    )
#   print "    a1XS - ghzgs1prime2**2*  L1ZgXS = {:%}".format((JHUXSVBFa1     - ghzgs1prime2VBF**2 * JHUXSVBFL1Zg      ) / JHUXSVBFa1    )
    print "                        g4*  a1a3XS = {:%}".format((                 g4VBF              * JHUXSVBFa1a3      ) / JHUXSVBFa1    )
    print "                     g2*g4*  a2a3XS = {:%}".format((                 g2VBF  *g4VBF      * JHUXSVBFa2a3      ) / JHUXSVBFa1    )
    print "               g1prime2*g4*  a3L1XS = {:%}".format((                g1prime2VBF  *g4VBF * JHUXSVBFa3L1      ) / JHUXSVBFa1    )
#   print "           ghzgs1prime2*g4*a3L1ZgXS = {:%}".format((            ghzgs1prime2VBF  *g4VBF * JHUXSVBFa3L1Zg    ) / JHUXSVBFa1    )
    print
    print "  ZH:"
    print "    a1XS -           g2**2*    a2XS = {:%}".format((JHUXSZHa1      - g2ZH**2            * JHUXSZHa2         ) / JHUXSZHa1     )
    print "    a1XS -           g4**2*    a3XS = {:%}".format((JHUXSZHa1      - g4ZH**2            * JHUXSZHa3         ) / JHUXSZHa1     )
    print "    a1XS -     g1prime2**2*    L1XS = {:%}".format((JHUXSZHa1      - g1prime2ZH**2      * JHUXSZHL1         ) / JHUXSZHa1     )
    print "    a1XS - ghzgs1prime2**2*  L1ZgXS = {:%}".format((JHUXSZHa1      - ghzgs1prime2ZH**2  * JHUXSZHL1Zg       ) / JHUXSZHa1     )
    print "                        g4*  a1a3XS = {:%}".format((                 g4ZH               * JHUXSZHa1a3       ) / JHUXSZHa1     )
    print "                     g2*g4*  a2a3XS = {:%}".format((                 g2ZH   *g4ZH       * JHUXSZHa2a3       ) / JHUXSZHa1     )
    print "               g1prime2*g4*  a3L1XS = {:%}".format((                g1prime2ZH   *g4ZH  * JHUXSZHa3L1       ) / JHUXSZHa1     )
    print "           ghzgs1prime2*g4*a3L1ZgXS = {:%}".format((            ghzgs1prime2ZH   *g4ZH  * JHUXSZHa3L1Zg     ) / JHUXSZHa1     )
    print
    print "  WH:"
    print "    a1XS -           g2**2*    a2XS = {:%}".format((JHUXSWHa1      - g2WH**2            * JHUXSWHa2         ) / JHUXSWHa1     )
    print "    a1XS -           g4**2*    a3XS = {:%}".format((JHUXSWHa1      - g4WH**2            * JHUXSWHa3         ) / JHUXSWHa1     )
    print "    a1XS -     g1prime2**2*    L1XS = {:%}".format((JHUXSWHa1      - g1prime2WH**2      * JHUXSWHL1         ) / JHUXSWHa1     )
#   print "    a1XS - ghzgs1prime2**2*  L1ZgXS = {:%}".format((JHUXSWHa1      - ghzgs1prime2WH**2  * JHUXSWHL1Zg       ) / JHUXSWHa1     )
    print "                        g4*  a1a3XS = {:%}".format((                 g4WH               * JHUXSWHa1a3       ) / JHUXSWHa1     )
    print "                     g2*g4*  a2a3XS = {:%}".format((                 g2WH   *g4WH       * JHUXSWHa2a3       ) / JHUXSWHa1     )
    print "               g1prime2*g4*  a3L1XS = {:%}".format((                g1prime2WH   *g4WH  * JHUXSWHa3L1       ) / JHUXSWHa1     )
#   print "           ghzgs1prime2*g4*a3L1ZgXS = {:%}".format((            ghzgs1prime2WH   *g4WH  * JHUXSWHa3L1Zg     ) / JHUXSWHa1     )
    print "    WpHXS + WmHXS - WHXS            = {:%}".format((SMXSWpH2L2l + SMXSWmH2L2l - SMXSWH2L2l                        ) / SMXSWH2L2l    )
    print
    print "  HJJ:"
    print "    a2XS -           g4**2*    a3XS = {:%}".format((JHUXSHJJa2     - ghg4HJJ**2         * JHUXSHJJa3        ) / JHUXSHJJa2    )
    print "                        g4*  a2a3XS = {:%}".format((                 ghg4HJJ            * JHUXSHJJa2a3      ) / JHUXSHJJa2    )
    print
    print "  ttH:"
    kt = kappa_tilde_ttH
    JHUXSttHk = JHUXSttHkappa
    JHUXSttHkt = JHUXSttHkappatilde
    JHUXSttHkkt = JHUXSttHkappakappatilde
    print "     kXS -           k~**2*    k~XS = {:%}".format((JHUXSttHk      - kt**2              * JHUXSttHkt        ) / JHUXSttHk     )
    print "                        k~*   kk~XS = {:%}".format((                 kt                 * JHUXSttHkkt       ) / JHUXSttHk     )
    print
    print "  VH:"
    print "    a1XS -           g2**2*    a2XS  = {:%}".format((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH - g2VH              **2 * (JHUXSZHa2   + JHUXSWHa2  *normalize_WH_to_ZH)) / (JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH))
    print "    a1XS -           g4**2*    a3XS  = {:%}".format((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH - g4VH              **2 * (JHUXSZHa3   + JHUXSWHa3  *normalize_WH_to_ZH)) / (JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH))
    print "    a1XS -     g1prime2**2*    L1XS  = {:%}".format((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH - g1prime2VH    **2 * (JHUXSZHL1   + JHUXSWHL1  *normalize_WH_to_ZH)) / (JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH))
    print "    a1XS - ghzgs1prime2**2*  L1ZgXS  = {:%}".format((JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH - ghzgs1prime2VH**2 * (JHUXSZHL1Zg + JHUXSWHL1Zg*normalize_WH_to_ZH)) / (JHUXSZHa1 + JHUXSWHa1*normalize_WH_to_ZH))
    del kt, JHUXSttHk, JHUXSttHkt, JHUXSttHkkt

#Set them to exactly 0

JHUXSHZZ2L2la1a3   = \
JHUXSHZZ2L2la2a3   = \
JHUXSHZZ2L2la3L1   = \
JHUXSHZZ2L2la3L1Zg = 0

JHUXSHWWa1a3   = \
JHUXSHWWa2a3   = \
JHUXSHWWa3L1   = \
JHUXSHWWa3L1Zg = 0

JHUXSVBFa1a3   = \
JHUXSVBFa2a3   = \
JHUXSVBFa3L1   = \
JHUXSVBFa3L1Zg = 0

JHUXSZHa1a3   = \
JHUXSZHa2a3   = \
JHUXSZHa3L1   = \
JHUXSZHa3L1Zg = 0

JHUXSWHa1a3   = \
JHUXSWHa2a3   = \
JHUXSWHa3L1   = \
JHUXSWHa3L1Zg = 0

JHUXSHJJa2a3 = 0

JHUXSttHkappakappatilde = 0

#defined this way, just make sure
for _ in """
  JHUXSHZZ2L2la1a3 JHUXSHZZ2L2la2a3 JHUXSHZZ2L2la3L1 JHUXSHZZ2L2la3L1Zg
  JHUXSVBFa1a3 JHUXSVBFa2a3 JHUXSVBFa3L1 JHUXSVBFa3L1Zg
  JHUXSZHa1a3 JHUXSZHa2a3 JHUXSZHa3L1 JHUXSZHa3L1Zg
  JHUXSWHa1a3 JHUXSWHa2a3 JHUXSWHa3L1
  JHUXSHWWa1a3 JHUXSHWWa2a3 JHUXSHWWa3L1
  JHUXSHJJa2a3 JHUXSttHkappakappatilde
  JHUXSWHL1Zg JHUXSWHa1L1Zg JHUXSWHa2L1Zg JHUXSWHa3L1Zg JHUXSWHL1L1Zg
  JHUXSHWWL1Zg JHUXSHWWa1L1Zg JHUXSHWWa2L1Zg JHUXSHWWa3L1Zg JHUXSHWWL1L1Zg
""".split():
  assert globals()[_] == 0, (_, globals()[_])
for k, v in globals().items():
    if "__" in k: continue
    assert v is not None, k
del k, v, _
