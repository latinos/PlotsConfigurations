#!/usr/bin/env python

import os, sys
argv = sys.argv
sys.argv = argv[:1]

import optparse

import ROOT

from array import array

def flatten_cuts(cuts):
    '''Flatten the categories (create full cuts named cut_category).'''

    categoriesmap = []
    for cname in cuts.keys():
        cut = cuts[cname]
        if 'categories' not in cut:
            continue
        
        categoriesmap.append((cname, []))
        for cat in cut['categories']:
            cuts['%s_%s' % (cname, cat)] = cut
            categoriesmap[-1][1].append('%s_%s' % (cname, cat))

        cut.pop('categories')
        cuts.pop(cname)

    return categoriesmap


if __name__ == '__main__':

    sys.argv = argv

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    
    parser.add_option('--inputFile',  dest='inputFile',  help='input file with histograms',  default='DEFAULT')
    parser.add_option('--outputFile', dest='outputFile', help='output file with histograms', default='DEFAULT')
    parser.add_option('--cutsFile',   dest='cutsFile',   help='file with list of cuts',      default='DEFAULT')
    parser.add_option('--variable',   dest='variable',   help='variable to fit',             default='DEFAULT')
    parser.add_option('--outputDir',  dest='outputDir',  help='Output directory for plots',  default='DEFAULT')

    # Read default parsing options as well
    (opt, args) = parser.parse_args()

    sys.argv.append( '-b' )
    ROOT.gROOT.SetBatch()

    print("Input file       = {}".format(opt.inputFile))
    print("Output file      = {}".format(opt.outputFile))
    print("Cuts file        = {}".format(opt.cutsFile))
    print("Variable         = {}".format(opt.variable))
    print("Output directory = {}".format(opt.outputDir))

    inputFile  = opt.inputFile
    outputFile = opt.outputFile
    variable   = opt.variable
    outputDir  = opt.outputDir

    ## load the cuts
    cuts = {}
    if os.path.exists(opt.cutsFile) :
      handle = open(opt.cutsFile,'r')
      exec(handle)
      handle.close()

    print("List of cuts = {}".format(cuts))

    in_file = ROOT.TFile(inputFile)

    # Histogram address format:
    # "DY_mm_cf_os_mu2_p1_200_300_B/R_reco_gen1_zoom/histo_DY"

    # Output file
    out_file = ROOT.TFile(outputFile, "recreate")
    out_file.cd()

    # Define the (pt, |eta|) bins
    p_bins   = [0, 50, 100, 200, 300, 400, 500, 700, 1000, 1500, 2000, 2500]
    eta_bins = [0, 0.9, 1.2, 2.1, 2.4]
    
    eta_regions_dict = {
        'B' : 0.4, # ['0.0', '0.9'],
        'O' : 1.1, # ['0.9', '1.2'],
        'E' : 1.5, # ['1.2', '2.1'],
        'F' : 2.2, # ['2.1', '2.4'],
    }

    eta_regions_inv_dict = {
        1 : 'B',
        2 : 'O',
        3 : 'E',
        4 : 'F',
    }

    # cut structure: "DY_mm_cf_os_mu2_p1_200_300_B"
    
    # Loop over cuts
    # categories = utils.flatten_cuts(cuts)
    categories = flatten_cuts(cuts)
    for cat in categories:
        # cat[0]: cut name as defined in cuts.py --> this is the name of the 2D map
        # cat[1]: list of categories names as defined in cuts.py --> this is what we want to loop over
        print(cat[1])
        map_name  = cat[0]
        cuts_list = cat[1]
        print("Map name = {}".format(map_name))

        # Easy estimation: Just consider mean and RMS
        map_name_easy  = map_name + "_easy"
        sigma_map_easy = ROOT.TH2F(map_name, map_name, len(p_bins)-1, array('d',p_bins), len(eta_bins)-1, array('d',eta_bins))
        
        # Complete estimation: gaussian fit 
        sigma_map      = ROOT.TH2F(map_name, map_name, len(p_bins)-1, array('d',p_bins), len(eta_bins)-1, array('d',eta_bins))

        for cut in cuts_list:
            variable = opt.variable
            print(cut)

            # Here we split the 'cut' to get useful information:
            # e.g., cut 'DY_mm_cf_os_mu2_p1_200_300_B'
            # split = ['DY', 'mm', 'cf', 'os', 'mu2', 'p1', '200', '300', 'B']
            cut_split  = cut.split('_')
            which_muon = cut_split[4]
            p_min      = cut_split[6]
            p_max      = cut_split[7]
            eta_region = cut_split[8]
            eta        = eta_regions_dict[eta_region]

            # Skip the sub-leading muon histograms:
            # We treat them together with the leading muons
            # --> We are not interested in splitting into leading/sub-leading muons,
            # but just on momentum and eta
            if which_muon == 'mu2': continue

            # We fill the 2D map entry associated to the average momentum in the bin
            p_to_fill_map = 0.5*(float(p_min) + float(p_max))

            # Starting by getting the leading muon histogram
            print("Histo name for leading muon:     {}/{}/histo_DY".format(cut,variable))
            histo_name = "{}/{}/histo_DY".format(cut,variable)
            histo_tmp  = in_file.Get(histo_name)

            # Then, the sub-leading muon
            # If we are looking at a 'mu2' cut, we need to look at the correct variable (e.g., 'R_reco_gen2_zoom' instead of 'R_reco_gen1_zoom')
            variable_sub   = opt.variable.replace("gen1","gen2")
            cut_sub        = cut.replace("mu1","mu2")
            print("Histo name for sub-leading muon: {}/{}/histo_DY".format(cut_sub,variable_sub))
            histo_name_sub = "{}/{}/histo_DY".format(cut_sub,variable_sub)
            histo_tmp_sub  = in_file.Get(histo_name_sub)
            
            # Add the two histograms together
            print("Leading muon histogram integral     = {}".format(histo_tmp.Integral()))
            print("Sub-leading muon histogram integral = {}".format(histo_tmp_sub.Integral()))
            histo_tmp.Add(histo_tmp_sub, 1)
            print("Integral sum = {}".format(histo_tmp.Integral()))

            # Let's start by just assuming the RMS is the std deviation of the gaussian distribution we will fit
            print("Mean = {}".format(histo_tmp.GetMean()))
            print("RMS  = {}".format(histo_tmp.GetRMS()))
            sigma_map_easy.Fill(p_to_fill_map, eta, histo_tmp.GetRMS())

            # Now actually estimate the mean and sigma using a gaussian fit

            # f1 = ROOT.TF1("my_gauss", "[0]*(1./([2]*sqrt(3.1415)))*exp(-0.5*(x-[1])/sqrt([2]))**2", -1.0, 1.0)
            f1 = ROOT.TF1("my_gauss", "gaus", -0.8, 0.8)
            f1.SetParameters(histo_tmp.Integral(),histo_tmp.GetMean(),histo_tmp.GetRMS())
            histo_tmp.Fit(f1, "", "", -0.8, 0.8)
            # histo_tmp.Fit(f1)
            print("New histo name and title = {}".format("histo_DY_" + cut))
            histo_tmp.SetName("histo_DY_" + cut)
            histo_tmp.SetTitle("histo_DY_" + cut)
            histo_tmp.GetXaxis().SetTitle("R_{reco-gen}")
            histo_tmp.Write()
            print("Fit constant = {} +- {}".format(f1.GetParameter(0),f1.GetParError(0)))
            print("Fit mean     = {} +- {}".format(f1.GetParameter(1),f1.GetParError(1)))
            print("Fit sigma    = {} +- {}".format(f1.GetParameter(2),f1.GetParError(2)))

            sigma_map.SetBinContent( sigma_map.FindBin(p_to_fill_map, eta), f1.GetParameter(2) )
            sigma_map.SetBinError(   sigma_map.FindBin(p_to_fill_map, eta), f1.GetParError(2)  )

            # Plot histograms with fit
            # ROOT.gStyle.SetOptStat(0)
            ROOT.gStyle.SetOptFit(1111)
            fit_canvas = ROOT.TCanvas("c1","c1",600,600)
            fit_canvas.cd()
            
            fit_pad = ROOT.TPad("fit_pad", "fit_pad", 0.0, 0.0, 1.0, 1.0)
            fit_pad.SetLeftMargin(0.20)
            fit_pad.Draw()
            fit_pad.cd()

            histo_tmp.Draw()

            fit_canvas.Print("sigma_plots/" + histo_tmp.GetName() + ".png")
            fit_canvas.Print("sigma_plots/" + histo_tmp.GetName() + ".pdf")

        sigma_map.Write()
    
        # We have the 2D maps we need. What we want to do is now create 1D distributions.
        for i, eta in enumerate(eta_bins[:-1]):
            histo_name = map_name + '_' + eta_regions_inv_dict[i+1]
            histo_tmp  = ROOT.TH1F(histo_name, histo_name, len(p_bins)-1, array('d',p_bins))
            for j in range(len(p_bins)-1):
                histo_tmp.SetBinContent(j+1, sigma_map.GetBinContent(j+1,i+1))
                histo_tmp.SetBinError(  j+1, sigma_map.GetBinError(j+1,i+1))
            histo_tmp.Write()

    out_file.Close()

    # Plot sigma distributions
    histo_file   = ROOT.TFile(outputFile)
    
    # Prepare canvas and pad
    ROOT.gStyle.SetOptStat(0)
    sigma_canvas = ROOT.TCanvas("c1","c1",600,600)
    sigma_canvas.cd()
    
    pad = ROOT.TPad("pad", "pad", 0.0, 0.0, 1.0, 1.0)
    pad.SetLeftMargin(0.20)
    pad.Draw()
    pad.cd()

    # Read histograms
    histo_os_B = histo_file.Get("DY_mm_cf_os_mu1_B")
    histo_os_O = histo_file.Get("DY_mm_cf_os_mu1_O")
    histo_os_E = histo_file.Get("DY_mm_cf_os_mu1_E")
    histo_os_F = histo_file.Get("DY_mm_cf_os_mu1_F")

    # Cosmetics
    histo_os_B.SetLineColor(ROOT.kBlue+1)
    histo_os_O.SetLineColor(ROOT.kRed+1)
    histo_os_E.SetLineColor(ROOT.kGreen+1)
    histo_os_F.SetLineColor(ROOT.kOrange+1)

    histo_os_B.SetLineWidth(2)
    histo_os_O.SetLineWidth(2)
    histo_os_E.SetLineWidth(2)
    histo_os_F.SetLineWidth(2)

    histo_os_B.SetTitle("")
    histo_os_B.GetYaxis().SetRangeUser(0.0, 0.2)
    histo_os_B.GetXaxis().SetTitle("Muon p [GeV]")
    histo_os_B.GetYaxis().SetTitleOffset(2.5)
    # histo_os_B.GetYaxis().SetTitle("q/p relative residual")
    histo_os_B.GetYaxis().SetTitle("#frac{q/p_{reco} - q/p_{gen}}{q/p_{gen}} relative residual") # ((q/p)_reco - (q/p)_gen))/(q/p)_gen

    # Draw
    histo_os_B.Draw("pe")
    histo_os_O.Draw("pe,same")
    histo_os_E.Draw("pe,same")
    histo_os_F.Draw("pe,same")

    # Legend
    leg = ROOT.TLegend(0.62, 0.65, 0.88, 0.88)
    leg.SetHeader("TuneP resolution")
    leg.AddEntry(histo_os_F, "2.1 < |#eta| < 2.4", "lep")
    leg.AddEntry(histo_os_E, "1.2 < |#eta| < 2.1", "lep")
    leg.AddEntry(histo_os_O, "0.9 < |#eta| < 1.2", "lep")
    leg.AddEntry(histo_os_B, "|#eta| < 0.9",       "lep")

    leg.SetLineColor(0)
    leg.Draw("same")

    # Additional text
    CMS_latex = ROOT.TLatex()
    CMS_latex.DrawLatexNDC(0.15, 0.92, "CMS")

    simulation_latex = ROOT.TLatex()
    simulation_latex.SetTextFont(42);
    simulation_latex.SetTextSize(0.04);
    simulation_latex.DrawLatexNDC(0.59, 0.92, "Simulation (13 TeV)")

    # Save
    os.system("mkdir -p {}".format(outputDir))
    sigma_canvas.Print(outputDir + "/sigmas.png")
    sigma_canvas.Print(outputDir + "/sigmas.pdf")
