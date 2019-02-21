# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
           '

#####################################################
## Categories               
#####################################################

pthbins = ['pth0to15','pth15to30','pth30to45','pth45to80','pth80to120','pth120to200','pth200to350','pth350to600','pth600toInf']
jetbins = ['of0j','of1j','of2j']
flavourbins = ['me','em']
chargebins = ['me_mp','me_pm','em_mp','em_pm']
pt2bins = ['pt2ge20','pt2lt20']

for ipth in pthbins:

    #########################################################
    ## DY control regions
    #########################################################

    #Split by pth only
    cuts['hww2l2v_13TeV_dytt_'+ipth] = 'dilep && mth<60 && mll>40 && mll<80 && '+ipth+'cut && bVeto'

    #Split by njets and pth
    for ij in jetbins:
        cuts['hww2l2v_13TeV_dytt_'+ij+'_'+ipth]  = 'dilep && mth<60 && mll>40 && mll<80 && '+ipth+'cut && '+ij+' && bVeto'

    ##########################################################
    ## Top control regions
    ##########################################################

    # Split by ptH only
    cuts['hww2l2v_13TeV_top_'+ipth]  = 'dilep && mll>50 && mtw2>30 && '+ipth+'cut \
                                          && (   ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
                                              || ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.5884 ) \
                                              || ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.5884 ) \
                                              || ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.5884 ) \
                                              || ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.5884 ) \
                                              || ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.5884 ) \
                                              || ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.5884 ) \
                                              || ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.5884 ) \
                                              || ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.5884 ) \
                                              || ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.5884 ))'

    # Split by ptH and njets
    cuts['hww2l2v_13TeV_top_of0j_'+ipth]  = 'dilep && mll>50 && mtw2>30 && '+ipth+'cut && of0j \
                                               && (   ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.5884 ) \
                                                   || ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.5884 ))'

    cuts['hww2l2v_13TeV_top_of1j_'+ipth]  = 'dilep && mll>50 && mtw2>30 && '+ipth+'cut && of1j \
                                               && std_vector_jet_cmvav2[0]>-0.5884'

    cuts['hww2l2v_13TeV_top_of2j_'+ipth]  = 'dilep && mll>50 && mtw2>30 && '+ipth+'cut && of2j \
                                               && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 )'

    ########################################################################################
    ## Signal regions
    ########################################################################################

    ## Split by ptH only
    cuts['hww2l2v_13TeV_'+ipth]                                        = 'dilep && mth>=60 && mtw2>30 && std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut'

    ## Split by ptH and njets
    for ij in jetbins:
        cuts['hww2l2v_13TeV_'+ij+'_'+ipth]                             = 'dilep && mth>=60 && mtw2>30 && std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ij

        ## Further split 0/1j categories
        if ij != 'of2j':
            ## Split by ptH, njets, leading lepton flavor
            for ifl in flavourbins:
                cuts['hww2l2v_13TeV_'+ifl+'_'+ij+'_'+ipth]             = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ij+' && '+ifl

            ## Split by ptH, njets, leading lepton flavor, leading lepton charge
            for ich in chargebins:    
                cuts['hww2l2v_13TeV_'+ich+'_'+ij+'_'+ipth]             = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ij+' && '+ich

                ## Split by ptH, njets, leading lepton flavor, leading lepton charge, subleading lepton pt
                for ipt in pt2bins:
                    cuts['hww2l2v_13TeV_'+ich+'_'+ipt+'_'+ij+'_'+ipth] = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ij+' && '+ich+' && '+ipt

    ## Split by ptH, leading lepton flavor
    for ifl in flavourbins:
        cuts['hww2l2v_13TeV_'+ifl+'_'+ipth]                            = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ifl

        ## Split by ptH, leading lepton flavor, leading lepton charge
        for ich in chargebins:    
            cuts['hww2l2v_13TeV_'+ich+'_'+ipth]                        = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ich

            ## Split by ptH, njets, leading lepton flavor, leading lepton charge, subleading lepton pt
            for ipt in pt2bins:
                cuts['hww2l2v_13TeV_'+ich+'_'+ipt+'_'+ipth]            = 'dilep && mth>=60 && mtw2>30 & std_vector_electron_passConversionVeto[1] == 1 && bVeto \
                                                                          && '+ipth+'cut && '+ich+' && '+ipt


# 11 = e
# 13 = mu
# 15 = tau
