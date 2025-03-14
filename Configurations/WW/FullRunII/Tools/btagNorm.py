from ROOT import TFile, TH1, TH2F, TCanvas, gROOT, gStyle
import collections
import json

TH1.AddDirectory(0)
gROOT.SetBatch(1)
gStyle.SetPaintTextFormat("1.2f")
gStyle.SetOptTitle(0)
gStyle.SetOptStat(0)

for era in ['2016_HIPM','2016_noHIPM','2017','2018']:

    print('\n'+era+'\n')
    year = era[:4]

    h_RM      = TH2F('h_RM',     'Response Matrix',4,-0.5,3.5,3,-0.5,2.5)
    h_RM_btag = TH2F('h_RM_btag','Response Matrix',4,-0.5,3.5,3,-0.5,2.5)

    f0 = TFile("../Full{era}_v9/inclusive/btagNorm/rootFile/plots_WW{era}_v9_btagNorm.root".format(era=era))
    btag_norm = {}
    btag_norm_njet = {}
    for sample in ['DY','top','WWewk','Vg','WZ','ZZ','VVV','Higgs','WW','ggWW']:
        btag_norm[sample] = {}
        btag_norm_njet[sample] = {}
        hvar_tot = {}
        for ij, ijet in enumerate(['0j','1j','2j']):
            btag_norm[sample][ijet] = {}
            
            h_nom = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample)
            h_btag = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_btag_nomDown')
                
            if sample == 'top':
                for cj in range(4):
                    h_RM     .SetBinContent(cj+1,ij+1,h_nom.GetBinContent(cj+1))
                    h_RM_btag.SetBinContent(cj+1,ij+1,h_btag.GetBinContent(cj+1))
            
            if ijet == '0j':
                hvar_tot['nom']  = h_nom.Clone()
                hvar_tot['btag'] = h_btag.Clone()
            else:
                hvar_tot['nom'] .Add(h_nom)
                hvar_tot['btag'].Add(h_btag)

            # Reweight nominal btag
            btag_norm[sample][ijet]['nom'] = 1.0 if h_nom.Integral() == 0 else h_nom.Integral()/h_btag.Integral()
                
            # Reweight non-JES variations
            for nuis in ['lf', 'hf', 'hfstats1_'+year, 'hfstats2_'+year, 'lfstats1_'+year, 'lfstats2_'+year, 'cferr1', 'cferr2']:
                h_up = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_btag_'+nuis+'Up')
                h_do = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_btag_'+nuis+'Down')
                btag_norm[sample][ijet]['CMS_btag_'+nuis+'Up']   = 1.0 if h_nom.Integral() == 0 else h_btag.Integral()/h_up.Integral()
                btag_norm[sample][ijet]['CMS_btag_'+nuis+'Down'] = 1.0 if h_nom.Integral() == 0 else h_btag.Integral()/h_do.Integral()

                if ijet == '0j':
                    hvar_tot[nuis+'Up']   = h_up.Clone()
                    hvar_tot[nuis+'Down'] = h_do.Clone()
                else:
                    hvar_tot[nuis+'Up']  .Add(h_up)
                    hvar_tot[nuis+'Down'].Add(h_do)

            # Reweight JES variations
            for jes in ['Absolute','Absolute_'+year,'BBEC1','BBEC1_'+year,'EC2','EC2_'+year,'FlavorQCD','HF','HF_'+year,'RelativeBal','RelativeSample_'+year]:
                h_jes_up  = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_scale_j_'+jes+'Up')
                h_jes_do  = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_scale_j_'+jes+'Down')
                h_btag_up = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_scale_j_'+jes+'_btagUp')
                h_btag_do = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/nGoodCleanJet/histo_"+sample+'_CMS_scale_j_'+jes+'_btagDown')
                    
                btag_norm[sample][ijet]['CMS_scale_j_'+jes+'Up']   = 1.0 if h_btag_up.Integral() == 0 else h_jes_up.Integral()/h_btag_up.Integral()/btag_norm[sample][ijet]['nom']
                btag_norm[sample][ijet]['CMS_scale_j_'+jes+'Down'] = 1.0 if h_btag_do.Integral() == 0 else h_jes_do.Integral()/h_btag_do.Integral()/btag_norm[sample][ijet]['nom']

                if ijet == '0j':
                    hvar_tot[jes+'Up']        = h_jes_up.Clone()
                    hvar_tot[jes+'Down']      = h_jes_do.Clone()
                    hvar_tot[jes+'_btagUp']   = h_btag_up.Clone()
                    hvar_tot[jes+'_btagDown'] = h_btag_do.Clone()
                else:
                    hvar_tot[jes+'Up']       .Add(h_jes_up)
                    hvar_tot[jes+'Down']     .Add(h_jes_do)
                    hvar_tot[jes+'_btagUp']  .Add(h_btag_up)
                    hvar_tot[jes+'_btagDown'].Add(h_btag_do)

        # Get norm factors for njet
        for ibin,njet in enumerate(['0j','1j','2j','3j']):
            btag_norm_njet[sample][njet] = {}
            btag_norm_njet[sample][njet]['nom'] = 1.0 if hvar_tot['nom'].GetBinContent(ibin+1) == 0 else hvar_tot['nom'].GetBinContent(ibin+1) / hvar_tot['btag'].GetBinContent(ibin+1)
            for nuis in ['lf', 'hf', 'hfstats1_'+year, 'hfstats2_'+year, 'lfstats1_'+year, 'lfstats2_'+year, 'cferr1', 'cferr2']:
                btag_norm_njet[sample][njet]['CMS_btag_'+nuis+'Up']   = 1.0 if hvar_tot[nuis+'Up']  .GetBinContent(ibin+1) == 0 else hvar_tot['btag'].GetBinContent(ibin+1) / hvar_tot[nuis+'Up']  .GetBinContent(ibin+1)
                btag_norm_njet[sample][njet]['CMS_btag_'+nuis+'Down'] = 1.0 if hvar_tot[nuis+'Down'].GetBinContent(ibin+1) == 0 else hvar_tot['btag'].GetBinContent(ibin+1) / hvar_tot[nuis+'Down'].GetBinContent(ibin+1)
            for jes in ['Absolute','Absolute_'+year,'BBEC1','BBEC1_'+year,'EC2','EC2_'+year,'FlavorQCD','HF','HF_'+year,'RelativeBal','RelativeSample_'+year]:
                varup = 1.0 if hvar_tot[jes+'_btagUp']  .GetBinContent(ibin+1) == 0 else hvar_tot[jes+'Up']  .GetBinContent(ibin+1) / hvar_tot[jes+'_btagUp']  .GetBinContent(ibin+1)
                vardo = 1.0 if hvar_tot[jes+'_btagDown'].GetBinContent(ibin+1) == 0 else hvar_tot[jes+'Down'].GetBinContent(ibin+1) / hvar_tot[jes+'_btagDown'].GetBinContent(ibin+1)
                btag_norm_njet[sample][njet]['CMS_scale_j_'+jes+'Up']   = varup / btag_norm_njet[sample][njet]['nom']
                btag_norm_njet[sample][njet]['CMS_scale_j_'+jes+'Down'] = vardo / btag_norm_njet[sample][njet]['nom']

    # Prettyprint nominal norm factors for all samples
    print("       0j    1j    2j")
    for sample in ['DY','top','WWewk','Vg','WZ','ZZ','VVV','Higgs','WW','ggWW']:
        print(sample.ljust(6)+" "+" ".join(["%.3f"%(btag_norm[sample][ijet]['nom']) for ijet in ['0j','1j','2j']]))

    # Prettyprint syst norm factors for top, WW
    print
    print("                                WW                                  top")
    print("                                0j          1j          2j          0j          1j          2j")
    for nuis in ['CMS_btag_lf', 'CMS_btag_hf', 'CMS_btag_hfstats1_'+year, 'CMS_btag_hfstats2_'+year, 'CMS_btag_lfstats1_'+year, 'CMS_btag_lfstats2_'+year, 'CMS_btag_cferr1', 'CMS_btag_cferr2', 'CMS_scale_j_Absolute','CMS_scale_j_Absolute_'+year,'CMS_scale_j_BBEC1','CMS_scale_j_BBEC1_'+year,'CMS_scale_j_EC2','CMS_scale_j_EC2_'+year,'CMS_scale_j_FlavorQCD','CMS_scale_j_HF','CMS_scale_j_HF_'+year,'CMS_scale_j_RelativeBal','CMS_scale_j_RelativeSample_'+year]:
        print(nuis.ljust(31)+" "+" ".join(["%.3f/%.3f"%(btag_norm['WW'][ijet][nuis+'Up'],btag_norm['WW'][ijet][nuis+'Down']) for ijet in ['0j','1j','2j']])+
              " "+" ".join(["%.3f/%.3f"%(btag_norm['top'][ijet][nuis+'Up'],btag_norm['top'][ijet][nuis+'Down']) for ijet in ['0j','1j','2j']]))
    # Save dict
    with open("../Full%s_v9/inclusive/btagNorm.json"%(era),"w") as outfile:
        json.dump(btag_norm, outfile, indent=4)

    # Prettyprint nominal norm factors for all samples (njet)
    print("       0j    1j    2j    3j")
    for sample in ['DY','top','WWewk','Vg','WZ','ZZ','VVV','Higgs','WW','ggWW']:
        print(sample.ljust(6)+" "+" ".join(["%.3f"%(btag_norm_njet[sample][ijet]['nom']) for ijet in ['0j','1j','2j','3j']]))

    # Prettyprint syst norm factors for top, WW
    print
    print("                                WW                                              top")
    print("                                0j          1j          2j          3j          0j          1j          2j          3j")
    for nuis in ['CMS_btag_lf', 'CMS_btag_hf', 'CMS_btag_hfstats1_'+year, 'CMS_btag_hfstats2_'+year, 'CMS_btag_lfstats1_'+year, 'CMS_btag_lfstats2_'+year, 'CMS_btag_cferr1', 'CMS_btag_cferr2', 'CMS_scale_j_Absolute','CMS_scale_j_Absolute_'+year,'CMS_scale_j_BBEC1','CMS_scale_j_BBEC1_'+year,'CMS_scale_j_EC2','CMS_scale_j_EC2_'+year,'CMS_scale_j_FlavorQCD','CMS_scale_j_HF','CMS_scale_j_HF_'+year,'CMS_scale_j_RelativeBal','CMS_scale_j_RelativeSample_'+year]:
        print(nuis.ljust(31)+" "+" ".join(["%.3f/%.3f"%(btag_norm_njet['WW'][ijet][nuis+'Up'],btag_norm_njet['WW'][ijet][nuis+'Down']) for ijet in ['0j','1j','2j','3j']])+
              " "+" ".join(["%.3f/%.3f"%(btag_norm_njet['top'][ijet][nuis+'Up'],btag_norm_njet['top'][ijet][nuis+'Down']) for ijet in ['0j','1j','2j','3j']]))
        
    # Save dict
    with open("../Full%s_v9/njets/btagNorm.json"%(era),"w") as outfile:
        json.dump(btag_norm_njet, outfile, indent=4)

    # Plot 'response matrix'
    h_RM_ratio = h_RM.Clone()
    h_RM_ratio.Divide(h_RM_btag)
    for flag, h in zip(['','_btag','_ratio'],[h_RM,h_RM_btag,h_RM_ratio]):
        h.GetXaxis().SetNdivisions(5)
        h.GetXaxis().SetTitleSize(0.05)
        h.GetXaxis().SetLabelSize(0.045)
        h.GetYaxis().SetNdivisions(4)
        h.GetYaxis().SetTitleSize(0.05)
        h.GetYaxis().SetLabelSize(0.045)
        
        c = TCanvas("c","c",900,700)
        h.GetXaxis().SetTitle('# jets with pt > 30, |eta| < 2.4')
        h.GetYaxis().SetTitle('# jets with pt > 30')
        h.SetMarkerSize(1.5)
        h.Draw('col text')
        c.SaveAs("../njet_vs_ngoodjet_%s%s.pdf"%(era,flag))
