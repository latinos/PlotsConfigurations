from ROOT import *
import array as arr

gROOT.SetBatch(True)

sigbins = ['pth0to15','pth15to30','pth30to45','pth45to80','pth80to120','pth120to200','pth200to350','pth350to600','pth600toInf']
flbins = ['me','em']
chbins = ['mp','pm']
ptbins = ['pt2ge20','pt2lt20']
njbins = ['of0j','of1j','of2j']

backgrounds = ['DY','top','WW','ggWW','Vg','WZgS_L','WZgS_H','VZ','VVV','ggH_hww_nonfid','ggH_htt','qqH_hww','qqH_htt','WH_hww','WH_htt','ZH_hww','ZH_htt','ggZH_hww','bbH_hww','ttH_hww']

f=TFile('rootFile/plots_ggH.root')

#### Helper functions

def checkBkgStats(myfit):
    for category in myfit.keys():
        hist = None
        for background in backgrounds:
            if hist is None:
                hist = f.Get(category+'/'+myfit[category]+'/histo_'+background)
            else :
                hist.Add(f.Get(category+'/'+myfit[category]+'/histo_'+background))
        for ibin in xrange(hist.GetNbinsX()):
            if hist.GetBinContent(ibin+1) is 0:
                print 'Insufficient MC stats with this binning / fit dist! Bin '+str(ibin)+' of dist '+myfit[category]+' in category '+category+' has no background events'
                return False

    print 'MC stats are fine!'
    return True

######## All fit variants ############################

fitdists = ['mllVSmth_pt2ge20','mll_optim','events']
binnings = ['sigBin',
            'sigBinFl',
            'sigBinFlCh',
            'sigBinFlChPt',
            'sigBinNj',
            'sigBinNjFl',
            'sigBinNjFlCh',
            'sigBinNjFlChPt',
            'sigBinNj_bkgBinNj',
            'sigBinNjFl_bkgBinNj',
            'sigBinNjFlCh_bkgBinNj',
            'sigBinNjFlChPt_bkgBinNj',]

c = TCanvas()

for binning in binnings:

    #### Construct list of categories corresponding to binning
    sigcategories = ['']
    if 'sigBinNj' in binning:
        tmp = sigcategories
        sigcategories = [bin1+'_'+bin2 for bin2 in tmp for bin1 in njbins[:-1]]
    if 'Pt' in binning:
        tmp = sigcategories
        sigcategories = [bin1+'_'+bin2 for bin2 in tmp for bin1 in ptbins]
    if 'Ch' in binning:
        tmp = sigcategories
        sigcategories = [bin1+'_'+bin2 for bin2 in tmp for bin1 in chbins]
    if 'Fl' in binning:
        tmp = sigcategories
        sigcategories = [bin1+'_'+bin2 for bin2 in tmp for bin1 in flbins]

    tmp = sigcategories
    sigcategories = ['hww2l2v_13TeV_'+x[:-1] for x in tmp] if len(tmp) is not 1 else ['hww2l2v_13TeV']
    if 'sigBinNj' in binning:
        sigcategories.append('hww2l2v_13TeV_of2j')

    bkgcategories = [bkg+'_'+bin for bkg in ['hww2l2v_13TeV_top','hww2l2v_13TeV_dytt'] for bin in njbins] if 'bkgBinNj' in binning else ['hww2l2v_13TeV_top','hww2l2v_13TeV_dytt']

    tmp = sigcategories + bkgcategories
    categories = [bin1+'_'+bin2 for bin2 in sigbins for bin1 in tmp]

    for fitdist in fitdists:
        #### Build fit -- assign fit distributions to each category
        #### For now assume all signal categories have the same fit dist
        print ''
        print 'Doing fit for '+binning+', '+fitdist
        fit = {}
        for category in categories:
            fit[category] = 'events' if ('top' in category or 'dytt' in category) else fitdist
        #### Everything from here on should be  as generic as possible

        #### Check if there is at least one MC background event per bin
        if checkBkgStats(fit) is not True:
            continue

        #### Construct response matrix
        binedges = []
        for i,sigbin in enumerate(sigbins):
            totalbins = 0
            for category in categories:
                if sigbin in category:
                    totalbins += f.Get(category+'/'+fit[category]+'/histo_DATA').GetNbinsX()
            binwidth = 1.0 / totalbins
            tmpbins = [i + binwidth * j for j in xrange(totalbins)]
            binedges += tmpbins
        binedges.append(9.0)

        bins_reco=arr.array('d',binedges)
	RM = TMatrixD(len(binedges)-1,9)
        h_RM=TH2F('h_RM','Response Matrix',9,0,9,len(binedges)-1,bins_reco)
	
        for isig in range(0,9):
            ibin = 0
            for category in categories:
                hist = f.Get(category+'/'+fit[category]+'/histo_ggH_hww_'+sigbins[isig])
                for kbin in xrange(hist.GetNbinsX()):
                    h_RM.SetBinContent(isig+1,ibin+1,hist.GetBinContent(kbin+1))
                    ibin += 1

        ######## RM normalization ########
        for isig in xrange(len(sigbins)):
            rownorm = h_RM.Integral(isig+1,isig+1,1,h_RM.GetNbinsY())
            for ireco in xrange(len(binedges)-1):
		if rownorm > 0.0:
                    h_RM.SetBinContent(isig+1,ireco+1,h_RM.GetBinContent(isig+1,ireco+1)/rownorm)
                    RM[ireco][isig]=h_RM.GetBinContent(isig+1,ireco+1)
                    
        h_RM.SetStats(0)
        h_RM.GetXaxis().SetTitle('ptH gen')
        h_RM.GetYaxis().SetTitle('ptH reco')
        h_RM.Draw('colz')
	c.SaveAs('ResponseMatrix_'+binning+'_'+fitdist+'.pdf')
        h_RM.Delete()

        ######## Condition number calculation ########
        T_RM = TDecompSVD(RM)
        SVs = T_RM.GetSig()
        cond = SVs.Max() / (max(0.000001,SVs.Min()))
        
        print "Condition number: "+str(cond)

        #### Make combined datacard for fit

