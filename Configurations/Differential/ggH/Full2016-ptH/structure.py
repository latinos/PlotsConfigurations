# structure configuration for datacard

#structure = {}

cuts_me = [x for x in cuts.keys() if 'me' in x]
cuts_em = [x for x in cuts.keys() if 'em' in x]

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Fake_em']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : cuts_me,
                  #'removeFromCuts' : [
                                      #'hww2l2v_13TeV_me_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_me_pth0to15',
                                      #'hww2l2v_13TeV_me_pth15to30',
                                      #'hww2l2v_13TeV_me_pth30to45',
                                      #'hww2l2v_13TeV_me_pth45to80',
                                      #'hww2l2v_13TeV_me_pth80to120',
                                      #'hww2l2v_13TeV_me_pth120to200',
                                      #'hww2l2v_13TeV_me_pth200to350',
                                      #'hww2l2v_13TeV_me_pth350to600',
                                      #'hww2l2v_13TeV_me_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2ge20_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2ge20_pth600toInf',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth0to15',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth15to30',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth30to45',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth45to80',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth80to120',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth120to200',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth200to350',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth350to600',
                                      #'hww2l2v_13TeV_me_mp_pt2lt20_pth600toInf',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth0to15',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth15to30',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth30to45',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth45to80',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth80to120',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth120to200',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth200to350',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth350to600',
                                      #'hww2l2v_13TeV_me_pm_pt2lt20_pth600toInf'],
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : cuts_em,
                  #'removeFromCuts' : [
                                      #'hww2l2v_13TeV_em_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of0j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_of1j_pth600toInf',
                                      #'hww2l2v_13TeV_em_pth0to15',
                                      #'hww2l2v_13TeV_em_pth15to30',
                                      #'hww2l2v_13TeV_em_pth30to45',
                                      #'hww2l2v_13TeV_em_pth45to80',
                                      #'hww2l2v_13TeV_em_pth80to120',
                                      #'hww2l2v_13TeV_em_pth120to200',
                                      #'hww2l2v_13TeV_em_pth200to350',
                                      #'hww2l2v_13TeV_em_pth350to600',
                                      #'hww2l2v_13TeV_em_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2ge20_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2ge20_pth600toInf',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth0to15',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth15to30',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth30to45',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth45to80',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth80to120',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth120to200',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth200to350',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth350to600',
                                      #'hww2l2v_13TeV_em_mp_pt2lt20_pth600toInf',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth0to15',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth15to30',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth30to45',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth45to80',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth80to120',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth120to200',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth200to350',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth350to600',
                                      #'hww2l2v_13TeV_em_pm_pt2lt20_pth600toInf'],
              }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['WW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggWW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WZgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WZgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

# Signals

structure['ggH_hww_pth0to15'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth15to30'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth30to45'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth45to80'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth80to120'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth120to200'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth200to350'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth350to600'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_pth600toInf'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }
                  
structure['ggH_hww_nonfid'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  } 

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }
                  
structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }
                  
structure['bbH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




