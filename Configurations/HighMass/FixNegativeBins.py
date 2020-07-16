import ROOT
import sys
import os
import re


signameFormat = "histo_(|MSSM)(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(|MSSM)(GGH|QQH)_([0-9]+)_RelW([0-9]+)_([0-9]+)_stat(Up|Down)"

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

if not os.path.exists(rootfile): exit()
newfile = ROOT.TFile(rootfile, 'read')
newfile2 = ROOT.TFile(rootfile.replace(".root", "_new.root"), 'recreate')

for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  newfile2.cd()
  newfile2.mkdir(categories.GetName())

  for variables in category.GetListOfKeys(): # Variable directory
    isCR = 1 if ("top" in categories.GetName() or "dy" in categories.GetName() or "TopCR" in categories.GetName() or "SB" in categories.GetName()) else 0
    # if (variables.GetName() == "events" and isCR) or ("_binning" in variables.GetName() and "high" not in categories.GetName() and (not isCR)) or ("highbinning" in variables.GetName() and "high" in categories.GetName() and (not isCR))
    if not ((variables.GetName() == "events" and isCR) or ("_binning" in variables.GetName() and "high" not in categories.GetName() and (not isCR)) or ("highbinning" in variables.GetName() and "high" in categories.GetName() and (not isCR)) or ("SR" in categories.GetName() and (variables.GetName() in ["boostHigssMass","resolvHiggsMass"]) )): continue
    variable = category.GetDirectory(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).cd()
    ROOT.gDirectory.mkdir(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()

    histnames = {}
    for histoname_ in variable.GetListOfKeys(): # nominal Histograms
      histoname = histoname_.GetName()
      if not (histoname.endswith("Up") or histoname.endswith("Down")) and not ("INT" in histoname) and not (histoname.endswith("Var")): histnames[histoname] = []

    for histoname_ in variable.GetListOfKeys(): # up/down Histograms
      histoname = histoname_.GetName()
      if histoname.endswith("Up"):
        for key,val in histnames.iteritems():
          if histoname.startswith(key):
            histnames[key].append([histoname,histoname.replace("Up", "Down")])
            break

    for nom,var in sorted(histnames.iteritems()):
      dothese = [nom]
      for val in sorted(var):
        dothese.append(val[0])
        dothese.append(val[1])

      for histoname in dothese:
        histo = variable.Get(histoname)
        for i in range(histo.GetNbinsX()):
          content = histo.GetBinContent(i+1)
          if content<0.0:
            if True: #content<-100:
              print "=================================================="
              if "GGH" not in histoname and "QQH" not in histoname: print "PROBLEM IN MC!"
              if content<-100.0: print "VERY",
              if content<-10.0: print "LARGE",
              print "Negative bin content in:",
              print categories.GetName(),'/',variables.GetName(),'/',histoname,' ; Bin',i+1,":",
              print content
            histo.SetBinContent(i+1,0.0) # If nominal not negative, bad to fix down-var if negative? --> YES!
            #content = 0.0
          #elif content != content:
          #  print "=================================================="
          #  print "FOUND NAN!!",
          #  print categories.GetName(),'/',variables.GetName(),'/',histoname,' ; Bin',i+1,":",
          #  print content
          #  histo.SetBinContent(i+1,0.0)

        # RENAME BBB SIGNAL SHAPES!
        #signameFormat = "histo_(|MSSM)(GGH|QQH)(|SBI)_([0-9]+)_RelW([0-9]+)_ibin(|MSSM)(GGH|QQH)_([0-9]+)_RelW([0-9]+)_([0-9]+)_stat(Up|Down)"
        pattern = re.match(signameFormat, histoname)
        if not pattern == None:
          #if (pattern.group(1) != pattern.group(6)) or (pattern.group(2) != pattern.group(7)) or (pattern.group(5) != pattern.group(9)) or (pattern.group(4) != pattern.group(8)): print "WHAT???", histoname # Shouldn't happen
          newname = "histo_"+pattern.group(1)+pattern.group(2)+pattern.group(3)+"_"+pattern.group(4)+"_RelW"+pattern.group(5)+"_ibin"+pattern.group(6)+pattern.group(7)+"_RelW"+pattern.group(9)+"_"+pattern.group(10)+"_stat"+pattern.group(11)
          histo.SetNameTitle(newname, newname)

        # Also rename DATA -> data_obs
        if "DATA" in histoname: histo.SetNameTitle(histoname.replace("DATA", "data_obs"), histoname.replace("DATA", "data_obs"))

        #print "Writing..."
        histo.Write()
print "Closing..."
newfile2.Close()
#print "Closing1..." # This takes too long for some reason!
#newfile.Close()
print "Done!"
exit(0)
