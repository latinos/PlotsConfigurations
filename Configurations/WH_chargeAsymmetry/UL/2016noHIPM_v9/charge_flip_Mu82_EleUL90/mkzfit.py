# Extracts the Z->ee contribution from Data histograms
# Original macro: https://github.com/NTrevisani/NanoFlipper/blob/master/analysis/utils/mkzfit.py

# For the c-f prob extraction: https://github.com/NTrevisani/NanoFlipper/blob/master/analysis/utils/mkflipsf.py
# Does it fit here, or should I move it to another script? 
# If possible, it would be better to have a single mkChargeFlip.py script

import argparse
import sys, os

import ROOT
import numpy as np
from array import array
from math import sqrt

# from mkHist import ptbin, eta_bin

ROOT.gROOT.SetBatch(ROOT.kTRUE)
ROOT.TH1.SetDefaultSumw2()

#parser = argparse.ArgumentParser(description='manual to this script')
#parser.add_argument('-p','--plot', help='make mll distribution, default is false',action='store_true', default= False)
#parser.add_argument('-f','--fit', help='fit to mll distribution, default is false',action='store_true', default= False)
#parser.add_argument('-y','--year', help='chose all jobs in this year', choices=('2016','2017','2018'), default= '2017')
#parser.add_argument('-r','--ratio', help='get ratio h_os divided by h_ss', action='store_true', default= False)

#args = parser.parse_args()

zmass = '91.1876'

def fit(filename, ptbin, eta_bin, output, year):

    print('>>>>>>>>>>>>>>>>>>>> perform fit')
    year            = "2018"
    eta_bin_array   = [0.0, 1.4, 2.5]
    eta_bin         = ["EB","EE"]
    fin             = ROOT.TFile.Open(filename)
    histos_DATA     = []
    histos_DY       = []
    histos_DY_LO    = []
    count_DATA      = {}
    count_DATA_err  = {}
    count_DY        = {}
    count_DY_err    = {}
    count_DY_LO     = {}
    count_DY_LO_err = {}

    print("Year:            {}".format(year))
    print("Eta_bin_array:   {}".format(eta_bin_array))
    print("Eta_bin:         {}".format(eta_bin))
    print("Input file name: {}".format(filename))

    output += "/{}_mll".format(ptbin)
    if not os.path.exists(output): os.system('mkdir -p {}'.format(output))

    # Store all interesting histograms
    for tkey in fin.GetListOfKeys():
        key = tkey.GetName()
        print("I found this cut: {}".format(key))
        if ptbin not in key: continue
        # We want to treat differently DATA and MC histograms
        # For MC histograms ['DY','DY_LO'] we can just count the events
        # For DATA, we need to extract the DY events through a fit
        histos_DATA.append(key  + "/mll/histo_DATA")
        histos_DY.append(key    + "/mll/histo_DY")
        histos_DY_LO.append(key + "/mll/histo_DY_LO")
        print("---> histogram stored!")

    # Extract DY yields from data using a sig+bkg fit
    for ihis in histos_DATA:
        print("Looking for histogram called: {}".format(ihis))
        if 'mll' not in ihis: continue
        print('fit to: ',ihis)
        htmp=fin.Get(ihis)
        for ibin in range(0,60):
            if htmp.GetBinContent(ibin+1)<0:
                htmp.SetBinContent(ibin+1,0)

        nEvent = htmp.Integral()
        nHalf = 0.8*nEvent

        w = ROOT.RooWorkspace("w")
        w.factory("BreitWigner:sig_bw(mll[76.2, 106.2], bwmean[91.1876,89,93], bwgamma[2.4952,2.4,2.6])")
        #w.factory("Landau:sig_lau(mll[76, 106], laumean[91.1876,89,93],lausigma[1,0.1,10])")
        w.factory("Gaussian:sig_gau(mll, gaumean[0,-100,100], gausigma[2.5,0.1,5])")
        #w.factory("CBShape:sig_cb(x, cbmean[0.,1.,10.], cbsigma[2.4952,2.4,2.6],cbalpha[20,0.,10],n[10,0.5,20])")
        w.factory("FCONV:bxc(mll,sig_bw,sig_gau)")
        w.factory("Exponential:bkg(mll,exalpha[-1.,-10,1])")
        # w.factory("SUM:model(sigfrac[0.5,0,1.]*bxc, bkgfrac[0.5,0,1.]*bkg)")
        w.factory("SUM:model(nsig[" + str(nHalf) + ",0," + str(nEvent) + "]*bxc, nbkg[" + str(nEvent-nHalf) + ",0," + str(nEvent) + "]*bkg)")

        mll = w.var('mll')
        pdf = w.pdf('model')
        dh = ROOT.RooDataHist('d'+ihis,'d'+ihis,ROOT.RooArgList(mll),htmp)
        getattr(w, 'import')(dh)
        r = pdf.fitTo(dh, ROOT.RooFit.Save(True), ROOT.RooFit.Minimizer("Minuit2","Migrad"))

        #r = pdf.fitTo(dh, ROOT.RooFit.Save(True))
        #print('r.Print()       --------------------------------------------------------',w.var("nsig").getVal())
        #r.Print()

        c = ROOT.TCanvas()
        plot = mll.frame(ROOT.RooFit.Title(ihis))
        dh.plotOn(plot)
        pdf.plotOn(plot)
        pdf.plotOn(plot, ROOT.RooFit.Components("bkg"), ROOT.RooFit.LineStyle(2))
        pdf.plotOn(plot, ROOT.RooFit.Components("bxc"), ROOT.RooFit.LineColor(2), ROOT.RooFit.LineStyle(2))
        pdf.paramOn(plot,ROOT.RooFit.Layout(0.57,0.97,0.85))
        plot.Draw()
        c.GetPrimitive("model_paramBox").SetFillStyle(0)
        c.GetPrimitive("model_paramBox").SetBorderSize(0)

        '''
        c.GetPrimitive("model_paramBox").SetTextFont(102)
        tbox_title_old=['bwgamma','bwmean','exalpha','gaumean','gausigma','nbkg','nsig']
        tbox_title_old=['bwgamma','bwmean','exalpha','gaumean','gausigma','nbkg','nsig']
        tbox_title_new=['#Gamma_{BW}','mean_{BW}','#alpha_{Exp}','mean_{Gau}','#sigma_{Gau}','n_{Bkg}','n_{Sig}']
        for i in range(0,7):
            _str=c.GetPrimitive("model_paramBox").GetLine(i).GetTitle()
            _str=_str.replace(tbox_title_old[i],tbox_title_new[i])
            c.GetPrimitive("model_paramBox").GetLine(i).SetTitle(_str)
        '''
        
        ihis_out_name = ihis.replace("/", "_")
        c.SaveAs(output + '/c_' + ihis_out_name + '.png')
        mc = ROOT.RooStats.ModelConfig("ModelConfig_" + ihis_out_name, w)
        mc.SetPdf(pdf)
        mc.SetParametersOfInterest(ROOT.RooArgSet(w.var("nsig")))
        mc.SetSnapshot(ROOT.RooArgSet(w.var("nsig")))
        mc.SetObservables(ROOT.RooArgSet(w.var("mll")))
        #w.defineSet("nuisParams","nbkg,laumean,lausigma,gaumean,gausigma,exalpha")
        w.defineSet("nuisParams", "nbkg,bwmean,bwgamma,gaumean,gausigma,exalpha")
        nuis = getattr(w, 'set')("nuisParams")
        mc.SetNuisanceParameters(nuis)
        getattr(w, 'import')(mc)
        w.writeToFile(output + '/' + ihis_out_name + "_config.root", True)
        count_DATA[ihis_out_name] = w.var("nsig").getVal()
        count_DATA_err[ihis_out_name] = w.var("nsig").getError()
        print("Count     = {}".format(count_DATA[ihis_out_name]))
        print("Count err = {}".format(count_DATA_err[ihis_out_name]))
        

    # DY NLO MC yields: just take integral of the histogram
    for ihis in histos_DY:
        print("Looking for histogram called: {}".format(ihis))
        if 'mll' not in ihis: continue
        print('fit to: ',ihis)
        htmp=fin.Get(ihis)
        for ibin in range(0,60):
            if htmp.GetBinContent(ibin+1)<0:
                htmp.SetBinContent(ibin+1,0)

        nEvent   = htmp.Integral()
        nEntries = htmp.GetEntries()

        ihis_out_name = ihis.replace("/", "_")

        count_DY[ihis_out_name] = nEvent
        count_DY_err[ihis_out_name] = 1
        if nEntries != 0:
            count_DY_err[ihis_out_name] = nEvent/np.sqrt(nEntries)
        print("Count DY     = {}".format(count_DY[ihis_out_name]))
        print("Count DY err = {}".format(count_DY_err[ihis_out_name]))


    # DY LO MC yields: just take integral of the histogram
    for ihis in histos_DY_LO:
        print("Looking for histogram called: {}".format(ihis))
        if 'mll' not in ihis: continue
        print('fit to: ',ihis)
        htmp=fin.Get(ihis)
        for ibin in range(0,60):
            if htmp.GetBinContent(ibin+1)<0:
                htmp.SetBinContent(ibin+1,0)

        nEvent   = htmp.Integral()
        nEntries = htmp.GetEntries()

        ihis_out_name = ihis.replace("/", "_")

        count_DY_LO[ihis_out_name] = nEvent
        count_DY_LO_err[ihis_out_name] = 1
        if nEntries != 0:
            count_DY_LO_err[ihis_out_name] = nEvent/np.sqrt(nEntries)
        print("Count DY LO     = {}".format(count_DY_LO[ihis_out_name]))
        print("Count DY LO err = {}".format(count_DY_LO_err[ihis_out_name]))


    # fout = ROOT.TFile(output + '/count_' + ptbin + '_' + filename, 'recreate')
    # fout = ROOT.TFile(output + '/count_' + ptbin, 'recreate')
    fout     = ROOT.TFile(output + '/ChargeFlips_' + ptbin + ".root", 'recreate')
    h_ss_sub = ROOT.TH2D()
    h_os_sub = ROOT.TH2D()

    # samples  = ['DATA', 'DY', 'DY_LO']
    samples = {
        'DATA'  : [count_DATA,  count_DATA_err],
        'DY'    : [count_DY,    count_DY_err],
        'DY_LO' : [count_DY_LO, count_DY_LO_err],
    }
    ss_plots = []
    os_plots = []

    # print("Here I print the count dictionary!!!!!")
    # print(count)

    for isample in samples:
        h_ss = ROOT.TH2D('h_' + ptbin + '_ss_' + isample, 'h_' + ptbin + '_ss_' + isample, len(eta_bin), eta_bin_array[0], eta_bin_array[-1], len(eta_bin), eta_bin_array[0], eta_bin_array[-1])
        h_os = ROOT.TH2D('h_' + ptbin + '_os_' + isample, 'h_' + ptbin + '_os_' + isample, len(eta_bin), eta_bin_array[0], eta_bin_array[-1], len(eta_bin), eta_bin_array[0], eta_bin_array[-1])
        for i in range(0, len(eta_bin)):
            for j in range(0, len(eta_bin)):
                # --------------------------------------- DY_ee_cf_ss_low_pt_EBEB_mll_histo_DATA
                # h_ss.SetBinContent(i+1 , j+1 , count    ['DY_ee_cf_ss_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_DATA'])
                # h_ss.SetBinError  (i+1 , j+1 , count_err['DY_ee_cf_ss_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_DATA'])
                # h_os.SetBinContent(i+1 , j+1 , count    ['DY_ee_cf_os_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_DATA'])
                # h_os.SetBinError  (i+1 , j+1 , count_err['DY_ee_cf_os_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_DATA'])
                h_ss.SetBinContent(i+1 , j+1 , samples[isample][0]['DY_ee_cf_ss_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_' + isample])
                h_ss.SetBinError  (i+1 , j+1 , samples[isample][1]['DY_ee_cf_ss_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_' + isample])
                h_os.SetBinContent(i+1 , j+1 , samples[isample][0]['DY_ee_cf_os_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_' + isample])
                h_os.SetBinError  (i+1 , j+1 , samples[isample][1]['DY_ee_cf_os_' + ptbin + '_' + eta_bin[i] + eta_bin[j] + '_mll_histo_' + isample])
        # if isample == 'DATA':
        #     h_ss_sub=h_ss.Clone()
        #     h_ss_sub.SetName('h_'  + ptbin + '_ss_DATASUB')
        #     h_ss_sub.SetTitle('h_' + ptbin + '_ss_DATASUB')
        #     h_os_sub = h_os.Clone()
        #     h_os_sub.SetName('h_'  + ptbin + '_os_DATASUB')
        #     h_os_sub.SetTitle('h_' + ptbin + '_os_DATASUB')

        ss_plots.append(h_ss)
        os_plots.append(h_os)

    # # What are we subtracting here?? ---> All MC which are not DY, in theory. But why??? We already to a fit to signal+bkg on data
    # for i in range(0, len(ss_plots)):
    #     if ss_plots[i].GetName() != 'h_' + ptbin + '_ss_DATA' and ss_plots[i].GetName() != 'h_'+ptbin+'_ss_MC' and ss_plots[i].GetName() != 'h_'+ptbin+'_ss_FAKE':
    #         print("ss_plots[i] : ", ss_plots[i])
    #         h_ss_sub.Add(ss_plots[i], -1)
    # for i in range(0,len(os_plots)):
    #     if os_plots[i].GetName() != 'h_'+ptbin+'_os_DATA' and os_plots[i].GetName() != 'h_'+ptbin+'_os_MC' and ss_plots[i].GetName() != 'h_'+ptbin+'_os_FAKE':
    #         h_os_sub.Add(os_plots[i],-1)
    # ss_plots.append(h_ss_sub)
    # os_plots.append(h_os_sub)

    map(lambda x: x.Write() , ss_plots+os_plots)

    #for i in range(0,len(ss_plots)):
    #    ss_plots[i].Write()
    #    os_plots[i].Write()
    fout.Close()

    #print(count)
    pass

def ratio(filename, data, ptbin, output):
    ## ratio DATA
    # year = filename.strip('.root').strip('hist_').split('_')[-1]
    fin  = ROOT.TFile.Open(filename)
    print("h_ss in ratio function: h_{}_ss_{}".format(ptbin,data))
    print("h_os in ratio function: h_{}_os_{}".format(ptbin,data))
    h_ss    = fin.Get('h_{}_ss_{}'.format(ptbin,data)) # DATASUB
    h_os    = fin.Get('h_{}_os_{}'.format(ptbin,data))
    h_ratio = h_ss.Clone()
    h_ratio.Divide(h_os)

    # Getting rid of low stats figure, unreliable
    # Changed to: if SS histo has 0 entries, ratio bin has content 0.01 and error 0.001
    for i in range(0, h_ratio.GetNbinsX()):
        for j in range(0, h_ratio.GetNbinsY()):
            # if h_ss.GetBinContent(i+1, j+1) < 10:
            if h_ss.GetBinContent(i+1, j+1) == 0:
                h_ratio.SetBinContent(i+1, j+1, 0.01)
                h_ratio.SetBinError(i+1, j+1, 0.001)
    h_ratio.SetName('h2_{}'.format(data))
    h_ratio.SetTitle('N_{SS}/N_{OS}')

    # output += '/{}_mll'.format(ptbin)
    if not os.path.exists(output): os.system('mkdir -p {}'.format(output))
    fout = ROOT.TFile('{}/ratio_{}_{}_mll.root'.format(output, data, ptbin), 'recreate')
    h_ratio.Write()
    fout.Write()
    fout.Close()

    c = ROOT.TCanvas()
    ROOT.gStyle.SetOptStat(0)
    #ROOT.gStyle.SetPaintTextFormat("1.6f")
    #ROOT.gStyle.SetPaintTextFormat("4.1f") # HERE
    h_ss.Draw("colz texte")

    c.SaveAs('{}/h_ss_{}_{}_mll.png'.format(output,data,ptbin))
    c.Clear()
    h_os.Draw("colz texte")
    c.SaveAs('{}/h_os_{}_{}_mll.png'.format(output,data,ptbin))
    c.Clear()
    h_ratio.Draw("colz texte")
    c.SaveAs('{}/h_ratio_{}_{}_mll.png'.format(output,data,ptbin))
    pass

# def mkzfit( era , info_ ):
def mkzfit(era):

    # cfg      = info_[0]
    # presel   = info_[1]
    # signness = info_[2]
    ptbins   = ["high_pt", "low_pt"] # info_[3]
    # ptbin    = "high_pt"
    etabins  = ["EBEB", "EBEE", "EEEB", "EEEE"] # [0.0, 1.4, 2.5]       # info_[4]
    # vars     = info_[5]
    var = "mll"

    # rf = 'hist_{}.root'.format(era)
    rf = 'rootFile/plots_WHSS_{}_v9_chargeFlip.root'.format(era)
    # name = rf.strip('.root').strip('hist_')

    #f = ROOT.TFile.Open( rf , "READ" )
    output_1 = 'test_one/Step2_Zmassfit'
    output_2 = 'test_one/Step3_Chflipfit'

    if not os.path.exists(output_1): os.system('mkdir -p {}'.format(output_1))
    if not os.path.exists(output_2): os.system('mkdir -p {}'.format(output_2))

    for iptbin in ptbins :
        # fit(filename, ptbin, eta_bin, output, year):
        name = "{}_{}".format(iptbin, var)
        print("Name: {}".format(name))
        fit(rf , iptbin , etabins , 'test_one/Step2_Zmassfit/', era)
        #compute ratio 
        # for idata in ['DATASUB', 'MC' ]:
        for idata in ['DATA', 'DY', 'DY_LO']:
            # ratio("test_one/Step2_Zmassfit/{}/count_{}_hist_{}.root".format(name,iptbin,name) , idata , iptbin , 'plots/{}/Step3_Chflipfit'.format(name))
            print("Ratio input file: test_one/Step2_Zmassfit/{}/ChargeFlips_{}.root".format(name,iptbin))
            ratio("test_one/Step2_Zmassfit/{}/ChargeFlips_{}.root".format(name, iptbin), idata, iptbin, 'test_one/Step3_Chflipfit/{}'.format(name))

# pass 

# fit("rootFile/plots_WHSS_2018_v9_chargeFlip.root", "high_pt", "EBEB", "test_one", "2018")
mkzfit("2018")
