from ROOT import TFile, TH1
import collections

TH1.AddDirectory(0)

for year in ['2016','2017','2018']:

    print year

    ###############################
    # Calculate top QCDscale norm #
    ###############################
    
    samples = collections.OrderedDict()
    handle = open('../Full%s_v7/njets/NormFact/samples.py'%(year),'r')
    exec(handle)
    handle.close()

    f0 = TFile("../Full{year}_v7/njets/NormFact/rootFile/plots_WW{year}_v7_njets_NormFact.root".format(year=year))

    print "QCDscale_top"
    
    nnom = [0]*4
    nup = [0]*4
    ndown = [0]*4
    for i in xrange(4):
        hnom  = f0.Get("ww2l2v_13TeV_B%d/events/histo_top"%i)
        hup   = f0.Get("ww2l2v_13TeV_B%d/events/histo_top_QCDscale_topUp"%i)
        hdown = f0.Get("ww2l2v_13TeV_B%d/events/histo_top_QCDscale_topDown"%i)
        nnom[i]  = hnom.Integral()
        nup[i]   = hup.Integral()
        ndown[i] = hdown.Integral()

    print("-----------------------")
    for i in range(4):
        print("topScaleNormFactors%dj = {'Alt$(LHEScaleWeight[0],1)' : %f, 'Alt$(LHEScaleWeight[8],1)' : %f}"%(i,nup[i]/nnom[i],ndown[i]/nnom[i]))
    print("-----------------------")
    print("topScaleNormFactors = {'Alt$(LHEScaleWeight[0],1)' : %f, 'Alt$(LHEScaleWeight[8],1)' : %f}"%((nup[2]+nup[3])/(nnom[2]+nnom[3]),(ndown[2]+ndown[3])/(nnom[2]+nnom[3])))
