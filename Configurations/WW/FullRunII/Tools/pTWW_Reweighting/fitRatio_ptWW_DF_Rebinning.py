# -*- coding: utf-8 -*-
import ROOT
import argparse
import os
import shutil
import glob
import math
import array

# python fitRatio.py --jet 1j
ROOT.gROOT.SetBatch(True) 
ROOT.gStyle.SetOptStat(0);
if __name__ == '__main__':

    parser = argparse.ArgumentParser(description = "Receive the parameters")
    parser.add_argument('--jet', action = 'store', type = str, dest = 'jet', help = '')
    args = parser.parse_args()

    canvas = ROOT.TCanvas("c1","c1",50,50,800,600)
    canvas.cd()
    
    if args.jet in ("0j","1j","2j"):
        ptWW_bin = "pTWW"

    rfile2018 = ROOT.TFile.Open("../../Full2018_v9/inclusive/rootFile/plots_WW2018_v9_incl.root", "READ")   
    
    histo2018DY = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DY")
    histo2018DATA = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DATA")
    histo2018WW = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_B0")
    histo2018WWnf = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_nonfid")
    histo2018ggWW = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_B0")
    histo2018ggWWnf = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_nonfid")
    histo2018WWewk = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WWewk")
    histo2018Vg = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Vg")
    histo2018WZ = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WZ")
    histo2018ZZ = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ZZ")
    histo2018VVV = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_VVV")
    histo2018Higgs = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Higgs")
    histo2018top = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_top")
    histo2018Fake_em = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_em")
    histo2018Fake_me = rfile2018.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_me")

    #if not histo2018DATA:
    #    print("ERROR: DATA histogram not found.")
    #    exit(1)
    print("Before scaling:", histo2018top.Integral())
	
    if args.jet == "0j":
        histo2018top.Scale(0.995)
    if args.jet == "1j":
        histo2018top.Scale(0.940)
    if args.jet == "2j":
        histo2018top.Scale(1.028)

    print("After scaling:", histo2018top.Integral())

    # subtract other processes than top
    histoDATA = histo2018DATA.Clone("")
    histoDATA.Add(histo2018DY, -1)
    #histoDATA.Add(histo2018WW, -1)
    histoDATA.Add(histo2018WWnf, -1)
    histoDATA.Add(histo2018ggWW, -1)
    histoDATA.Add(histo2018ggWWnf, -1)
    histoDATA.Add(histo2018WWewk, -1)
    histoDATA.Add(histo2018Vg, -1)
    histoDATA.Add(histo2018WZ, -1)
    histoDATA.Add(histo2018ZZ, -1)
    histoDATA.Add(histo2018VVV, -1)
    histoDATA.Add(histo2018Higgs, -1)
    histoDATA.Add(histo2018top, -1)
    histoDATA.Add(histo2018Fake_em, -1)
    histoDATA.Add(histo2018Fake_me, -1)

    histo_qqWW = histo2018WW.Clone("qqWW MC")
    #histo_qqWW.Add(histo2018WWnf)

    # 2017
    rfile2017 = ROOT.TFile.Open("../../Full2017_v9/inclusive/rootFile/plots_WW2017_v9_incl.root", "READ")   
    
    histo2017DY = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DY")
    histo2017DATA = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DATA")
    histo2017WW = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_B0")
    histo2017WWnf = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_nonfid")
    histo2017ggWW = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_B0")
    histo2017ggWWnf = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_nonfid")
    histo2017WWewk = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WWewk")
    histo2017Vg = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Vg")
    histo2017WZ = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WZ")
    histo2017ZZ = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ZZ")
    histo2017VVV = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_VVV")
    histo2017Higgs = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Higgs")
    histo2017top = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_top")
    histo2017Fake_em = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_em")
    histo2017Fake_me = rfile2017.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_me")

    if args.jet == "0j":
        histo2017top.Scale(0.859)
    if args.jet == "1j":
        histo2017top.Scale(0.919)
    if args.jet == "2j":
        histo2017top.Scale(1.037)

    # subtract other processes than top
    histoDATA.Add(histo2017DATA)
    histoDATA.Add(histo2017DY, -1)
    #histoDATA.Add(histo2017WW, -1)
    histoDATA.Add(histo2017WWnf, -1)
    histoDATA.Add(histo2017ggWW, -1)
    histoDATA.Add(histo2017ggWWnf, -1)
    histoDATA.Add(histo2017WWewk, -1)
    histoDATA.Add(histo2017Vg, -1)
    histoDATA.Add(histo2017WZ, -1)
    histoDATA.Add(histo2017ZZ, -1)
    histoDATA.Add(histo2017VVV, -1)
    histoDATA.Add(histo2017Higgs, -1)
    histoDATA.Add(histo2017top, -1)
    histoDATA.Add(histo2017Fake_em, -1)
    histoDATA.Add(histo2017Fake_me, -1)

    histo_qqWW.Add(histo2017WW)
    #histo_qqWW.Add(histo2017WWnf)

    # 2016_HIPM
    rfile2016HIPM = ROOT.TFile.Open("../../Full2016_HIPM_v9/inclusive/rootFile/plots_WW2016_HIPM_v9_incl.root", "READ")   
    
    histo2016HIPMDY = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DY")
    histo2016HIPMDATA = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DATA")
    histo2016HIPMWW = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_B0")
    histo2016HIPMWWnf = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_nonfid")
    histo2016HIPMggWW = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_B0")
    histo2016HIPMggWWnf = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_nonfid")
    histo2016HIPMWWewk = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WWewk")
    histo2016HIPMVg = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Vg")
    histo2016HIPMWZ = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WZ")
    histo2016HIPMZZ = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ZZ")
    histo2016HIPMVVV = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_VVV")
    histo2016HIPMHiggs = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Higgs")
    histo2016HIPMtop = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_top")
    histo2016HIPMFake_em = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_em")
    histo2016HIPMFake_me = rfile2016HIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_me")

    if args.jet == "0j":
        histo2016HIPMtop.Scale(0.836)
    if args.jet == "1j":
        histo2016HIPMtop.Scale(0.917)
    if args.jet == "2j":
        histo2016HIPMtop.Scale(0.987)
    
    # subtract other processes than top
    histoDATA.Add(histo2016HIPMDATA)
    histoDATA.Add(histo2016HIPMDY, -1)
    #histoDATA.Add(histo2016HIPMWW, -1)
    histoDATA.Add(histo2016HIPMWWnf, -1)
    histoDATA.Add(histo2016HIPMggWW, -1)
    histoDATA.Add(histo2016HIPMggWWnf, -1)
    histoDATA.Add(histo2016HIPMWWewk, -1)
    histoDATA.Add(histo2016HIPMVg, -1)
    histoDATA.Add(histo2016HIPMWZ, -1)
    histoDATA.Add(histo2016HIPMZZ, -1)
    histoDATA.Add(histo2016HIPMVVV, -1)
    histoDATA.Add(histo2016HIPMHiggs, -1)
    histoDATA.Add(histo2016HIPMtop, -1)
    histoDATA.Add(histo2016HIPMFake_em, -1)
    histoDATA.Add(histo2016HIPMFake_me, -1)

    histo_qqWW.Add(histo2016HIPMWW)
    #histo_qqWW.Add(histo2016HIPMWWnf)
    
    # 2016_noHIPM
    rfile2016noHIPM = ROOT.TFile.Open("../../Full2016_noHIPM_v9/inclusive/rootFile/plots_WW2016_noHIPM_v9_incl.root", "READ")   
    
    histo2016noHIPMDY = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DY")
    histo2016noHIPMDATA = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_DATA")
    histo2016noHIPMWW = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_B0")
    histo2016noHIPMWWnf = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WW_nonfid")
    histo2016noHIPMggWW = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_B0")
    histo2016noHIPMggWWnf = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ggWW_nonfid")
    histo2016noHIPMWWewk = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WWewk")
    histo2016noHIPMVg = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Vg")
    histo2016noHIPMWZ = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_WZ")
    histo2016noHIPMZZ = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_ZZ")
    histo2016noHIPMVVV = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_VVV")
    histo2016noHIPMHiggs = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Higgs")
    histo2016noHIPMtop = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_top")
    histo2016noHIPMFake_em = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_em")
    histo2016noHIPMFake_me = rfile2016noHIPM.Get("ww2l2v_13TeV_sr_" + args.jet + "_B0/" + ptWW_bin + "/histo_Fake_me")

    if args.jet == "0j":
        histo2016noHIPMtop.Scale(0.890)
    if args.jet == "1j":
        histo2016noHIPMtop.Scale(0.912)
    if args.jet == "2j":
        histo2016noHIPMtop.Scale(1.007)
    
    # subtract other processes than top
    histoDATA.Add(histo2016noHIPMDATA)
    histoDATA.Add(histo2016noHIPMDY, -1)
    #histoDATA.Add(histo2016noHIPMWW, -1)
    histoDATA.Add(histo2016noHIPMWWnf, -1)
    histoDATA.Add(histo2016noHIPMggWW, -1)
    histoDATA.Add(histo2016noHIPMggWWnf, -1)
    histoDATA.Add(histo2016noHIPMWWewk, -1)
    histoDATA.Add(histo2016noHIPMVg, -1)
    histoDATA.Add(histo2016noHIPMWZ, -1)
    histoDATA.Add(histo2016noHIPMZZ, -1)
    histoDATA.Add(histo2016noHIPMVVV, -1)
    histoDATA.Add(histo2016noHIPMHiggs, -1)
    histoDATA.Add(histo2016noHIPMtop, -1)	
    histoDATA.Add(histo2016noHIPMFake_em, -1)
    histoDATA.Add(histo2016noHIPMFake_me, -1)

    histo_qqWW.Add(histo2016noHIPMWW)
    #histo_qqWW.Add(histo2016noHIPMWWnf)

    # merge bins
    if args.jet=="0j":
        new_binning = array.array('d', [0, 10, 20, 30, 40, 50, 80, 200])
    elif args.jet=="1j":
        new_binning = array.array('d', [0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200])
    elif args.jet=="2j":
        #new_binning = array.array('d', [0, 50, 100, 150, 200])		
        new_binning = array.array('d', [0, 30, 60, 120, 150, 180, 200])
    histoDATA_rebinned = histoDATA.Rebin(len(new_binning) - 1,"histoDATA_rebinned",new_binning)
    histo_qqWW_rebinned = histo_qqWW.Rebin(len(new_binning) - 1,"histo_qqWW_rebinned",new_binning)
    
    print("New number of bins:", histoDATA_rebinned.GetNbinsX())
    print("Bin edges:")
    for i in range(1, histoDATA_rebinned.GetNbinsX() + 2):
        print(histoDATA_rebinned.GetBinLowEdge(i))
   
    # normalize to 1.
    histoDATA_rebinned.Scale(1./histoDATA_rebinned.Integral())  # DATA - all MC
    histo_qqWW_rebinned.Scale(1./histo_qqWW_rebinned.Integral())  # qqWW MC
    
    # Set axis titles with proper formatting
    histoDATA_rebinned.GetXaxis().SetTitle("p_{T}^{WW} (GeV)")
    histoDATA_rebinned.GetYaxis().SetTitle("")
    histoDATA_rebinned.GetXaxis().SetTitleSize(0.04)
    histoDATA_rebinned.GetYaxis().SetTitleSize(0.04)
    histoDATA_rebinned.GetXaxis().SetTitleOffset(1.2)
    histoDATA_rebinned.GetYaxis().SetTitleOffset(1.2)
    histoDATA_rebinned.SetStats(0)

    histoDATA_rebinned.SetMarkerStyle(20)
    histoDATA_rebinned.SetLineColor(ROOT.kBlack)
    histoDATA_rebinned.SetLineWidth(3)
    histoDATA_rebinned.SetLineColor(ROOT.kBlack)

    if args.jet=="0j":
        histoDATA_rebinned.SetMaximum(2)
        #histoDATA_rebinned.SetMinimum(1e-6)
        histoDATA_rebinned.SetMinimum(-0.5)
    elif args.jet=="1j":
        histoDATA_rebinned.SetMaximum(2)
        histoDATA_rebinned.SetMinimum(0)		
    elif args.jet=="2j":
        histoDATA_rebinned.SetMaximum(4)
        histoDATA_rebinned.SetMinimum(-1)		

    histoDATA_rebinned.Divide(histo_qqWW_rebinned)

    # Update axis titles for the ratio plot with proper formatting
    histo_qqWW_rebinned.GetXaxis().SetTitle("p_{T}^{WW} (GeV)")
    histo_qqWW_rebinned.GetYaxis().SetTitle("(Data - all other processes)/qqWW")
    histo_qqWW_rebinned.GetXaxis().SetTitleSize(0.04)
    histo_qqWW_rebinned.GetYaxis().SetTitleSize(0.04)
    histo_qqWW_rebinned.GetXaxis().SetTitleOffset(1.2)
    histo_qqWW_rebinned.GetYaxis().SetTitleOffset(1.2)

    #    tf1 = ROOT.TF1("tf1","pol11",30,700) # 1j
    if args.jet in ("0j","1j","2j"):
        # Create a list to store fit results
        fit_results = []

        # Perform fits and store results
        for order in range(1,5):
            tf = ROOT.TF1("tf%d" % order, "pol%d" % order, 0, 200)
            fit_result = histoDATA_rebinned.Fit("tf%d" % order, "S", "", 0, 200)
            chi2 = fit_result.Chi2()
            ndf = fit_result.Ndf()
            chi2_ndf = chi2/ndf if ndf > 0 else float('inf')
            fit_results.append((order, chi2_ndf, tf))
            print "Polynomial order %d: Chi2/NDF = %.3f" % (order, chi2_ndf)

        # Find best fit (lowest chi2/ndf)
        best_fit = min(fit_results, key=lambda x: x[1])
        print "\nBest fit: Polynomial order %d with Chi2/NDF = %.3f" % (best_fit[0], best_fit[1])

        # Draw histogram
        histoDATA_rebinned.Draw()

        # Create legend
        legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
        legend.SetHeader("Polynomial Order")

        # Draw only the fits we want (orders 6,7,8)
        colors = [ROOT.kRed, ROOT.kGreen, ROOT.kBlue, ROOT.kOrange,
                 ROOT.kViolet, ROOT.kYellow, ROOT.kCyan, ROOT.kMagenta, ROOT.kSpring, ROOT.kPink]

        for i, (order, chi2_ndf, tf) in enumerate(fit_results):
            tf.SetLineColor(colors[i])
            tf.Draw("same")
            legend.AddEntry(tf, "pol%d (chi2/NDF=%.2f)" % (order, chi2_ndf), "l")

        legend.Draw()

        # Save results to file
        with open('ratio_plots/fit_results_%s.txt' % args.jet, 'w') as f:
            f.write("Polynomial Order\tChi2/NDF\n")
            for order, chi2_ndf, _ in fit_results:
                f.write("%d\t%.3f\n" % (order, chi2_ndf))

        canvas.SaveAs('ratio_plots/ratio_' + args.jet  +  '.png')
        canvas.SaveAs('ratio_plots/ratio_' + args.jet  +  '.C')

    rfile2018.Close()
    rfile2017.Close()
    rfile2016HIPM.Close()
    rfile2016noHIPM.Close()
