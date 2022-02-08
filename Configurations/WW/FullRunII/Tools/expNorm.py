from ROOT import TFile, TH1
import collections

TH1.AddDirectory(0)

doTable = False

for year in ['2016','2017','2018']:

    print year

    ########################
    # Calculate PU weights #
    ########################

    samples = collections.OrderedDict()
    handle = open('../Full%s_v7/inclusive/ExpUnc/samples.py'%(year),'r')
    exec(handle)
    handle.close()

    f0 = TFile("../Full{year}_v7/inclusive/ExpUnc/rootFile/plots_WW{year}_v7_ExpNorm.root".format(year=year))
    pu_weight = {}
    for sample in samples.keys():

        h_nom = f0.Get("ww2l2v_13TeV_presel/nGoodCleanJet/histo_"+sample)
        if h_nom.Integral() <= 0:
            print 'Nominal histogram is empty for %s! Will not compute weights'%sample
            continue

        # Calculate PU
        h_pu_up   = f0.Get("ww2l2v_13TeV_presel/nGoodCleanJet/histo_"+sample+'_PUUp')
        h_pu_down = f0.Get("ww2l2v_13TeV_presel/nGoodCleanJet/histo_"+sample+'_PUDown')
        pu_weight[sample] = [h_nom.Integral()/h_pu_up.Integral(), h_nom.Integral()/h_pu_down.Integral()]

    print "PU"
    ordering = ['DY','WW','ggWW','WWewk','Wg','WgS','Zg','ZgS','WZ','ZZ','VVV','top','ggH_htt','qqH_htt','WH_htt','ZH_htt','ggH_hww','qqH_hww','WH_hww','ZH_hww','ggZH_hww','ttH_hww']
    ordered_keys = sorted(pu_weight.keys(), key=lambda x : ordering.index(x) if x in ordering else -1)
    for sample in ordered_keys:
        if doTable :
            print "%s %f/%f"%(sample,pu_weight[sample][0],pu_weight[sample][1])
        else:
            print ("'%s'"%(sample)).ljust(10)+": ['%f*(puWeightUp/puWeight)', '%f*(puWeightDown/puWeight)'],"%(pu_weight[sample][0], pu_weight[sample][1])

    ###############################
    # Calculate top QCDscale norm #
    ###############################
        
    variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

    nnom =  [0]*3
    nvar =  [[0,0,0,0,0,0],[0,0,0,0,0,0],[0,0,0,0,0,0]]
    hnom_tot = None
    hvar_tot = [None]*6
    for i in xrange(3):
        for ibin in ['sr','top']:
            hnom = f0.Get("ww2l2v_13TeV_%s_%dj/nGoodCleanJet/histo_top"%(ibin,i))
            nnom[i]  += hnom.Integral()
            if hnom_tot is None :
                hnom_tot  = hnom.Clone()
            else :
                hnom_tot.Add(hnom)

            for ivar in range(len(variations)):
                hvar = f0.Get("ww2l2v_13TeV_%s_%dj/nGoodCleanJet/histo_top_QCDscale_topV%dVar"%(ibin,i,ivar))
                nvar[i][ivar] += hvar.Integral()
                if hvar_tot[ivar] is None :
                    hvar_tot[ivar] = hvar.Clone()
                else :
                    hvar_tot[ivar].Add(hvar)

    print "QCDscale_top normalized w.r.t. total number of jets"
    print "-----------------------"
    print "topScaleNormFactors = {"
    for i in range(3):
        print "    '%dj' : {"%i+", ".join(["'%s' : %f"%(var,nvar[i][ivar]/nnom[i]) for ivar,var in enumerate(variations)])+"},"
    print "}"
    print "-----------------------"
    print "QCDscale_top normalized w.r.t. number of jets with |eta| < 2.5 (0,1,2,3j)"
    print "-----------------------"
    print "topScaleNormFactors = {"
    for i in range(4):
        print "    '%dj' : {"%i+", ".join(["'%s' : %f"%(var,hvar_tot[ivar].GetBinContent(i+1)/hnom_tot.GetBinContent(i+1)) for ivar,var in enumerate(variations)])+"},"
    print "}"
    print "-----------------------" 
    print "QCDscale_top norm factor for >=2 jets with |eta| < 2.5"
    print "topScaleNormFactors = {"
    print "    '2j' : {"+", ".join(["'%s' : %f"%(var,(hvar_tot[ivar].GetBinContent(3)+hvar_tot[ivar].GetBinContent(4))/(hnom_tot.GetBinContent(3)+hnom_tot.GetBinContent(4))) for ivar,var in enumerate(variations)])+"},"
    print "}"
