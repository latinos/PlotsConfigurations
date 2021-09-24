import ROOT
import sys
import os
import re
import math
import scipy.optimize


def SBmax(S,B):
  if B==0.0:
    return S
  elif S==0.0:
    return B

  def SBIfunction(S,B,r):
    return S*(1-math.sqrt(r))+B*(1-1/math.sqrt(r)) if r>0.0 else -999.0

  max_r = scipy.optimize.fmin(lambda r: -SBIfunction(S,B,r), 0.5, disp=False)
  outr = max_r[0]
  if outr<=0: #Probably failed
    print "r<0? It's",outr,", for S =",S,"and B =",B
    outr=0.0
  return SBIfunction(S,B,outr)
  

try:
  rootfile = sys.argv[1]
except IndexError:
  rootfile = 'Full2018/rootFile_Full2018_em/plots_Full2018_em.root'

for y in ['2016', '2017', '2018']:
  if y in rootfile: year = y
for s in ['_em', '_mm', '_ee']:
  if s in rootfile: state = s

if not os.path.exists(rootfile): exit()
newfile = ROOT.TFile(rootfile.replace(".root", "_new.root"), 'read')
newfile2 = ROOT.TFile(rootfile.replace(".root", "_new2.root"), 'recreate')

for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  newfile2.cd()
  newfile2.mkdir(categories.GetName())

  for variables in category.GetListOfKeys(): # Variable directory
    variable = category.GetDirectory(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).cd()
    ROOT.gDirectory.mkdir(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()

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
        if "SBI" in histoname:
          if histoname==nom:
            IncreaseSBIby = {}
            if "GGHSBI" in histoname:
              nomsig = variable.Get(histoname.replace("GGHSBI", "GGH"))
              nombkg1 = variable.Get("histo_ggWW")
              nombkg2 = variable.Get("histo_ggH_hww")
            elif "QQHSBI" in histoname:
              nomsig = variable.Get(histoname.replace("QQHSBI", "QQH"))
              nombkg1 = variable.Get("histo_qqWWqq")
              nombkg2 = variable.Get("histo_qqH_hww")
            for i in range(histo.GetNbinsX()):
              SBIyield = histo.GetBinContent(i+1)
              Syield   = nomsig.GetBinContent(i+1)
              Byield   = nombkg1.GetBinContent(i+1)
              Byield  += nombkg2.GetBinContent(i+1)
              sbmax = SBmax(Syield,Byield)
              if sbmax-SBIyield > 10e-8:
                print "==========================="
                if Syield>0 and Byield>0:
                  print "Found too low interference!"
                else:
                  print "Matching SBI to Sonly or Bonly..."
                print categories.GetName(),'/',histoname,", bin",i+1
                print "S:",Syield,", B:",Byield,", SBI:",SBIyield,"->",sbmax
                IncreaseSBIby[i] = sbmax-SBIyield
                histo.SetBinContent(i+1,histo.GetBinContent(i+1)+IncreaseSBIby[i])
              else:
                IncreaseSBIby[i] = 0.0
          else:
            for i in range(histo.GetNbinsX()):
              if IncreaseSBIby[i] > 0.0: histo.SetBinContent(i+1,histo.GetBinContent(i+1)+IncreaseSBIby[i])

        histo.Write()
print "Closing..."
newfile2.Close()
#print "Closing1..." # This takes too long for some reason!
#newfile.Close()
print "Done!"
exit(0)
