import ROOT
import sys
import os
import re


signameFormat1 = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(GGH|QQH)_([0-9]+)_RelW([0-9]+)_([0-9]+)_stat(Up|Down)"
signameFormat4 = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_Top_massVsTagger_reweighting_bin_([0-9]+)_([0-9]+)(Up|Down)"
signameFormat5 = "histo_(top|qqWWqq|WW|ggH_hww|qqH_hww|ZH_hww|WH_hww|ggWW|VBF_V|WWewk)_Top_massVsTagger_reweighting_bin_([0-9]+)_([0-9]+)(Up|Down)"
signameFormat2 = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(ggH_hww|ggWW|qqH_hww|qqWWqq)_([0-9]+)_stat(Up|Down)"
signameFormat3 = "histo_(ggH_hww|ggWW|qqH_hww|qqWWqq)_ibin(ggH_hww|ggWW|qqH_hww|qqWWqq)_([0-9]+)_stat(Up|Down)"

signameFormatTAP = "histo_(top|qqWWqq|WW|ggH_hww|qqH_hww|ZH_hww|WH_hww|ggWW|Wjets|DY|Vg|VgS_L|VgS_H|VZ|VVV|ggH_htt|qqH_htt|WH_htt|ZH_htt|WWewk|VBF_V)_TagAndProbe_corr(Up|Down)"
signameFormatWJE_rew = "histo_Wjets_Wjets_Corrrection(Up|Down)"
signameFormattop_rew = "histo_top_top_Correction(Up|Down)"
signameFormatTAP_sig = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_TagAndProbe_corr(Up|Down)"
signameFormat_PDF = "histo_(top|WW|DY|Wjets)_hww_pdf_(top|WW|DY|Wjets)_eigen([0-9]+)(Up|Down)"
signameFormatPSFSR_sig = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_PS_FSR(Up|Down)"
signameFormatPSFSR = "histo_(top|qqWWqq|WW|ggH_hww|qqH_hww|ZH_hww|WH_hww|ggWW|Wjets|DY|Vg|VgS_L|VgS_H|VZ|VVV|ggH_htt|qqH_htt|WH_htt|ZH_htt|VBF_V|WWewk)_PS_FSR(Up|Down)"
signameFormatpdfqqbar_sig = "histo_QQHSBI_([0-9]+)_RelW([0-9]+)_pdf_qqbar(Up|Down)"
signameFormatKFact = "histo_Wjets_Wjets_QCD_NLO_sf_stat_2018(Up|Down)"
signameFormatQCDscale = "histo_Wjets_QCDscale_Wjets(Up|Down)"
signameFormatQCDscale_qq = "histo_(qqWWqq|WW)_QCDscale_WWJJ(Up|Down)"
signameFormatQCDscale_qq_sig = "histo_QQHSBI_([0-9]+)_RelW([0-9]+)_QCDscale_WWJJ(Up|Down)"
signameFormatFake_el_recoil = "histo_FAKE_el_(barrel|endcap)_(pos|neg)_CMS_fake_e_(recoil|stat)_2018(Up|Down)"
signameFormatFake_mu_recoil = "histo_FAKE_mu_(barrel|endcap)_(pos|neg)_CMS_fake_m_(recoil|stat)_2018(Up|Down)"
#signameFormatFake_el_stat = "histo_FAKE_el_{barrel|endcap}_{pos|neg}_CMS_fake_e_stat_2018{Up|Down}"
#signameFormatFake_mu_stat = "histo_FAKE_mu_{barrel|endcap}_{pos|neg}_CMS_fake_m_stat_2018{Up|Down}"

try:
  rootfile = sys.argv[1]
except IndexError:
  rootfile = 'Full2018/rootFile_Full2018_em/plots_Full2018_em.root'

#origfile = rootfile.replace(".root", "_negfixOrig.root")
#if False:
#  if not os.path.isfile(origfile):
#    print "Making safety copy of original root file.."
#    os.system("cp "+rootfile+" "+origfile)
#  else:
#    print "Retrieving safety copy of original root file.."
#    os.system("cp "+origfile+" "+rootfile)
#  print "Copy done"

for y in ['2016', '2017', '2018']:
  if y in rootfile: year = y
#for s in ['_em', '_mm', '_ee']:
#  if s in rootfile: state = s

if not os.path.exists(rootfile): exit()
newfile = ROOT.TFile(rootfile, 'read')
newfile2 = ROOT.TFile(rootfile.replace(".root", "_FakeUnc.root"), 'recreate')

for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  newfile2.cd()
  newfile2.mkdir(categories.GetName())
  for c in ['incl_ResolvedSB_', 'incl_ResolvedTopCR_', 'incl_BoostedSB_', 'incl_BoostedTopCR_', 'incl_ResolvedSR_isVBF_', 'incl_ResolvedSR_isGGH_', 'incl_ResolvedSR_isBKG_', 'incl_BoostedSR_isVBF_', 'incl_BoostedSR_isGGH_', 'incl_BoostedSR_isBKG_', 'incl_BoostedSR_isGGH_H', 'incl_BoostedSR_isBKG_H', 'incl_BoostedSR_isVBF_H']:
    if c in categories.GetName():
        categ = c
    	if 'Resolved' in c: topol = 'resol'
    	if 'Resolved' not in c: topol = 'boost'
  for variables in category.GetListOfKeys(): # Variable directory
    #isCR = 1 if ("top" in categories.GetName() or "dy" in categories.GetName() or "TopCR" in categories.GetName() or "SB" in categories.GetName()) else 0
    isCR = 1 if ("TopCR" in categories.GetName() or "SB" in categories.GetName()) else 0
    # if (variables.GetName() == "events" and isCR) or ("_binning" in variables.GetName() and "high" not in categories.GetName() and (not isCR)) or ("highbinning" in variables.GetName() and "high" in categories.GetName() and (not isCR))
    if not ((variables.GetName() == "events" and isCR) or ("_binning" in variables.GetName() and "high" not in categories.GetName() and (not isCR)) or ("highbinning" in variables.GetName() and "high" in categories.GetName() and (not isCR)) or ("SR" in categories.GetName() and ( "mass_HIGGS" in variables.GetName() ) )):
      if not (("_binning" in variables.GetName()) and "high" not in categories.GetName() and (isCR)): continue ##### Additionaly, keep nominal shapes in CR for test
    variable = category.GetDirectory(variables.GetName())
    print(variable)
    newfile2.GetDirectory(categories.GetName()).cd()
    ROOT.gDirectory.mkdir(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()

    if ('MuCh' in str(category)) or ('ElCh' in str(category)):
    	print(category)
	continue
    else:
    	print("Now doing "+str(category))
        histnames = {}
        for histoname_ in variable.GetListOfKeys(): # nominal Histograms
          histoname = histoname_.GetName()
          if "histo_DYveto" in histoname: continue
          if not (histoname.endswith("Up") or histoname.endswith("Down")) and not ("INT" in histoname) and not (histoname.endswith("Var")): histnames[histoname] = []
    
        for histoname_ in variable.GetListOfKeys(): # up/down Histograms
          histoname = histoname_.GetName()
          if "histo_DYveto" in histoname: continue
          if histoname.endswith("Up"):
            for key,val in histnames.iteritems():
              if histoname.startswith(key+"_"):
                if [histoname,histoname.replace("Up", "Down")] not in histnames[key]:
                  histnames[key].append([histoname,histoname.replace("Up", "Down")])
                  break
    
        for nom,var in sorted(histnames.iteritems()):
          dothese = [nom]
          for val in sorted(var):
            dothese.append(val[0])
            dothese.append(val[1])
    
          for histoname in dothese:
            histo = variable.Get(histoname)
            #for i in range(histo.GetNbinsX()):
            #  content = histo.GetBinContent(i+1)
            #  if content<0.0:
            #    if True: #content<-100:
            #      print "=================================================="
            #      if "GGH" not in histoname and "QQH" not in histoname: print "PROBLEM IN MC!"
            #      if content<-100.0: print "VERY",
            #      if content<-10.0: print "LARGE",
            #      print "Negative bin content in:",
            #      print categories.GetName(),'/',variables.GetName(),'/',histoname,' ; Bin',i+1,":",
            #      print content
            #    histo.SetBinContent(i+1,0.0) # If nominal not negative, bad to fix down-var if negative? --> YES!
                #content = 0.0
              #elif content != content:
              #  print "=================================================="
              #  print "FOUND NAN!!",
              #  print categories.GetName(),'/',variables.GetName(),'/',histoname,' ; Bin',i+1,":",
              #  print content
              #  histo.SetBinContent(i+1,0.0)
    
            # RENAME BBB SIGNAL SHAPES!
            #signameFormat1 = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(GGH|QQH)_([0-9]+)_RelW([0-9]+)_([0-9]+)_stat(Up|Down)"
            #signameFormat2 = "histo_(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(ggH_hww|ggWW|qqH_hww|qqWWqq)_([0-9]+)_stat(Up|Down)"
            #signameFormat3 = "histo_(ggH_hww|ggWW|qqH_hww|qqWWqq)_ibin(ggH_hww|ggWW|qqH_hww|qqWWqq)_([0-9]+)_stat(Up|Down)"
            pattern = re.match(signameFormat1, histoname)
            if not pattern == None:
              #if (pattern.group(1) != pattern.group(6)) or (pattern.group(2) != pattern.group(7)) or (pattern.group(5) != pattern.group(9)) or (pattern.group(4) != pattern.group(8)): print "WHAT???", histoname # Shouldn't happen
              newname = "histo_"+pattern.group(1)+pattern.group(2)+"_"+pattern.group(3)+"_RelW"+pattern.group(4)+"_CMS_hww"+"_"+categ+"_"+year+"_correlbin_"+pattern.group(5)+"_RelW"+pattern.group(7)+"_"+pattern.group(8)+"_stat"+pattern.group(9)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormat4, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+pattern.group(2)+"_"+pattern.group(3)+"_RelW"+pattern.group(4)+"_CMS_hww_Top_massVsTagger_reweighting_bin_"+pattern.group(5)+"_"+pattern.group(6)+year+pattern.group(7)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormat5, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+"_CMS_hww_Top_massVsTagger_reweighting_bin_"+pattern.group(2)+"_"+pattern.group(3)+year+pattern.group(4)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormatTAP_sig, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+pattern.group(2)+"_"+pattern.group(3)+"_RelW"+pattern.group(4)+"_CMS_hww_TagAndProbe_corr_"+year+pattern.group(5)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormatTAP, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+"_CMS_hww_TagAndProbe_corr_"+year+pattern.group(2)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormatWJE_rew, histoname)
            if not pattern == None:
              newname = "histo_Wjets_CMS_hww_Wjets_Correction_"+year+pattern.group(1)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormattop_rew, histoname)
            if not pattern == None:
              #newname = "histo_top_CMS_hww_top_Correction_"+categ+"_"+year+pattern.group(1)
              newname = "histo_top_CMS_hww_top_Correction_"+year+pattern.group(1)
              histo.SetNameTitle(newname, newname)
    
    
            pattern = re.match(signameFormatPSFSR_sig, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+pattern.group(2)+"_"+pattern.group(3)+"_RelW"+pattern.group(4)+"_PS_FSR_"+pattern.group(1)+pattern.group(5)
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormatPSFSR, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+"_PS_FSR_"+pattern.group(1)+pattern.group(2)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormat_PDF, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+"_pdf_"+pattern.group(2)+"_eigen"+pattern.group(3)+pattern.group(4)
              histo.SetNameTitle(newname, newname)
    
    #        pattern = re.match(signameFormatpdfqqbar_sig, histoname)
    #        if not pattern == None:
    #          newname = "histo_QQHSBI_"+pattern.group(1)+"_RelW"+pattern.group(2)+"_pdf_qqbar_HWW"+pattern.group(3)
    #          histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormatQCDscale_qq_sig, histoname)
            if not pattern == None:
              newname = "histo_QQHSBI_"+pattern.group(1)+"_RelW"+pattern.group(2)+"_QCDscale_VV"+pattern.group(3)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormatQCDscale_qq, histoname)
            if not pattern == None:
              newname = "histo_"+pattern.group(1)+"_QCDscale_VV"+pattern.group(2)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormatKFact, histoname)
            if not pattern == None:
              newname = "histo_Wjets_Wjets_QCD_NLO_sf_stat_"+topol+"_2018"+pattern.group(1)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormatQCDscale, histoname)
            if not pattern == None:
              newname = "histo_Wjets_QCDscale_Wjets_"+topol+pattern.group(1)
              histo.SetNameTitle(newname, newname)
    
            pattern = re.match(signameFormatFake_el_recoil, histoname)
            if not pattern == None:
              newname = "histo_FAKE_el_"+pattern.group(1)+"_"+pattern.group(2)+"_CMS_fake_e_"+pattern.group(1)+"_"+pattern.group(2)+"_"+pattern.group(3)+"_2018"+pattern.group(4) 
              histo.SetNameTitle(newname, newname)
            pattern = re.match(signameFormatFake_mu_recoil, histoname)
            if not pattern == None:
              newname = "histo_FAKE_mu_"+pattern.group(1)+"_"+pattern.group(2)+"_CMS_fake_m_"+pattern.group(1)+"_"+pattern.group(2)+"_"+pattern.group(3)+"_2018"+pattern.group(4) 
              histo.SetNameTitle(newname, newname)
    
            #pattern = re.match(signameFormatTAP_sig, histoname)
            #if not pattern == None:
            #  newname = "histo_"+pattern.group(1)+pattern.group(2)+"_"+pattern.group(3)+"_RelW"+pattern.group(4)+"_CMS_hww_TagAndProbe_corr"+pattern.group(5)
            #  histo.SetNameTitle(newname, newname)
            #pattern = re.match(signameFormatTAP, histoname)
            #if not pattern == None:
            #  newname = "histo_"+pattern.group(1)+"_CMS_hww_TagAndProbe_corr"+pattern.group(2)
            #  histo.SetNameTitle(newname, newname)
    
            #pattern = re.match(signameFormat_PDF, histoname)
            #if not pattern == None:
            #  newname = "histo_"+pattern.group(1)+"_pdf_"+pattern.group(2)+"_eigen"+pattern.group(3)+pattern.group(4)
            #  histo.SetNameTitle(newname, newname)
            # Also rename DATA -> data_obs
            #if "DATA" in histoname: histo.SetNameTitle(histoname.replace("DATA", "data_obs"), histoname.replace("DATA", "data_obs"))
    
            #print "Writing..."
            histo.Write()
print "Closing..."
newfile2.Close()
#print "Closing1..." # This takes too long for some reason!
#newfile.Close()
print "Done!"
exit(0)
