from ROOT import TFile, TH1, TH2F, TCanvas, gROOT, gStyle
import collections
import json

TH1.AddDirectory(0)
gROOT.SetBatch(1)
gStyle.SetPaintTextFormat("1.2f")
gStyle.SetOptTitle(0)
gStyle.SetOptStat(0)

samples = ['DY','top','WWewk','Vg','WZ','ZZ','VVV','Higgs','WW','ggWW']

for era in ['2016_HIPM','2016_noHIPM','2017','2018']:

    print('\n'+era+'\n')
    year = era[:4]

    btag_norm = {}
    for btag in ['bReq','bVeto']:
        jetbins = ['0j','1j','2j'] if btag == 'bVeto' else ['1j','2j']
        btag_norm[btag] = {}
        f0 = TFile("../Full{era}_v9/inclusive/btagNorm/rootFile_{btag}/plots_WW{era}_v9_{btag}Norm.root".format(era=era,btag=btag))

        for sample in samples:
            btag_norm[btag][sample] = {}
            for ijet in jetbins:
                btag_norm[btag][sample][ijet] = {}
            
                h_nom = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample)
                h_btag = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_btag_nomDown')
                
                # Reweight nominal btag
                btag_norm[btag][sample][ijet]['nom'] = 1.0 if h_nom.Integral() == 0 else h_nom.Integral()/h_btag.Integral()
                
                # Reweight non-JES variations
                for nuis in ['lf', 'hf', 'hfstats1_'+year, 'hfstats2_'+year, 'lfstats1_'+year, 'lfstats2_'+year, 'cferr1', 'cferr2']:
                    h_up = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_btag_'+nuis+'Up')
                    h_do = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_btag_'+nuis+'Down')
                    btag_norm[btag][sample][ijet]['CMS_btag_'+nuis+'Up']   = 1.0 if h_nom.Integral() == 0 else h_btag.Integral()/h_up.Integral()
                    btag_norm[btag][sample][ijet]['CMS_btag_'+nuis+'Down'] = 1.0 if h_nom.Integral() == 0 else h_btag.Integral()/h_do.Integral()
                    
                # Reweight JES variations
                for jes in ['Absolute','Absolute_'+year,'BBEC1','BBEC1_'+year,'EC2','EC2_'+year,'FlavorQCD','HF','HF_'+year,'RelativeBal','RelativeSample_'+year]:
                    h_jes_up  = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_scale_j_'+jes+'Up')
                    h_jes_do  = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_scale_j_'+jes+'Down')
                    h_btag_up = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_scale_j_'+jes+'_btagUp')
                    h_btag_do = f0.Get("ww2l2v_13TeV_presel_"+ijet+"/events/histo_"+sample+'_CMS_scale_j_'+jes+'_btagDown')
                    
                    btag_norm[btag][sample][ijet]['CMS_scale_j_'+jes+'Up']   = 1.0 if h_btag_up.Integral() == 0 else h_jes_up.Integral()/h_btag_up.Integral()/btag_norm[btag][sample][ijet]['nom']
                    btag_norm[btag][sample][ijet]['CMS_scale_j_'+jes+'Down'] = 1.0 if h_btag_do.Integral() == 0 else h_jes_do.Integral()/h_btag_do.Integral()/btag_norm[btag][sample][ijet]['nom']

        # Prettyprint nominal norm factors for all samples
        print(btag+"\n")
        print("       "+"    ".join(jetbins))
        for sample in samples:
            print(sample.ljust(6)+" "+" ".join(["%.3f"%(btag_norm[btag][sample][ijet]['nom']) for ijet in jetbins]))

        # Prettyprint syst norm factors for top, WW
        print("\n")
        print("                                WW"+" "*(12*len(jetbins)-2)+"top")
        print("                                "+"          ".join(jetbins)+"          "+"          ".join(jetbins))
        for nuis in ['CMS_btag_lf', 'CMS_btag_hf', 'CMS_btag_hfstats1_'+year, 'CMS_btag_hfstats2_'+year, 'CMS_btag_lfstats1_'+year, 'CMS_btag_lfstats2_'+year, 'CMS_btag_cferr1', 'CMS_btag_cferr2', 'CMS_scale_j_Absolute','CMS_scale_j_Absolute_'+year,'CMS_scale_j_BBEC1','CMS_scale_j_BBEC1_'+year,'CMS_scale_j_EC2','CMS_scale_j_EC2_'+year,'CMS_scale_j_FlavorQCD','CMS_scale_j_HF','CMS_scale_j_HF_'+year,'CMS_scale_j_RelativeBal','CMS_scale_j_RelativeSample_'+year]:
            print(nuis.ljust(31)+" "+" ".join(["%.3f/%.3f"%(btag_norm[btag]['WW'][ijet][nuis+'Up'],btag_norm[btag]['WW'][ijet][nuis+'Down']) for ijet in jetbins])+
                  " "+" ".join(["%.3f/%.3f"%(btag_norm[btag]['top'][ijet][nuis+'Up'],btag_norm[btag]['top'][ijet][nuis+'Down']) for ijet in jetbins]))

    # Save dict
    norm_out = {}
    for sample in samples:
        norm_out[sample] = {'topcr' : {'0j' : btag_norm['bVeto'][sample]['0j'],
                                       '1j' : btag_norm['bReq'] [sample]['1j'],
                                       '2j' : btag_norm['bReq'] [sample]['2j']},
                            'sr'    : {'0j' : btag_norm['bVeto'][sample]['0j'],
                                       '1j' : btag_norm['bVeto'][sample]['1j'],
                                       '2j' : btag_norm['bVeto'][sample]['2j']}}
                            
    with open("../Full%s_v9/inclusive/btagNorm.json"%(era),"w") as outfile:
        json.dump(norm_out, outfile, indent=4)

