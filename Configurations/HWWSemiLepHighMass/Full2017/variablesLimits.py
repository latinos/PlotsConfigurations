# variables

#variables = {}



variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3
}

variables['resolvHiggsMass'] = {
    'name' : 'Hlnjj_mass',
    # 'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
    #           650, 700, 750, 800, 900, 1100, 1500, 2500],),
    'range': ([0, 200, 250, 290, 330, 370, 420, 470, 520,
               570, 620, 670, 720, 775, 875, 1050, 2000],),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
variables['boostHiggsMass'] = {
    'name' : 'CleanFatJetPassMBoosted_HlnFat_mass[0]',
    # 'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800,
    #           900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
    'range': ([0, 200, 300, 350, 400, 450, 490, 530, 580, 630, 680,
               730, 780, 840, 950, 1075, 1175, 1375, 1650, 2400, 5000],),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
variables['hmHiggsMass'] = {
    'name' : 'CleanFatJetPassMBoosted_HlnFat_mass[0]',
    # 'range': ([0, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
    'range': ([0, 900, 1000, 1100, 1200, 1325, 1580, 2050, 5000],),
    'xaxis': 'reconstr. H mass',
    'fold' : 3
}
# variables['resolvDNN_mth'] = {
#     'name' : 'DNN_mth_OTF',
#     'range': ([0, 200, 250, 290, 330, 370, 420, 470, 520,
#                570, 620, 670, 720, 775, 875, 1050, 2000],),
#     'xaxis': 'DNN_mth_OTF',
#     'fold' : 3
# }
# variables['boostDNN_mth'] = {
#     'name' : 'DNN_mth_OTF',
#     'range': ([0, 200, 300, 350, 400, 450, 490, 530, 580, 630, 680,
#                730, 780, 840, 950, 1075, 1175, 1375, 1650, 2400, 5000],),
#     'xaxis': 'DNN_mth_OTF',
#     'fold' : 3
# }
# variables['hmDNN_mth'] = {
#     'name' : 'DNN_mth_OTF',
#     'range': ([0, 900, 1000, 1100, 1200, 1325, 1580, 2050, 5000],),
#     'xaxis': 'DNN_mth_OTF',
#     'fold' : 3
# }
