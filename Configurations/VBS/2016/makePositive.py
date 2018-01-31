import sys
from shutil import copyfile
import ROOT

def addFakes( f ):
    fakeHistList = []
    for h in f.GetListOfKeys():
        if h.IsFolder():
            addFakes(f.Get(h.GetName()))
            break
        else :
            if 'histo_Fake' in h.GetName():
                fakeHistList.append(h.ReadObj())
                #print h.GetName()
                
    ROOT.gDirectory.cd(f.GetPath())    
    for fakeHist in fakeHistList:
        #print fakeHist.GetName()[10:]
        for h in f.GetListOfKeys():
            #print h.GetName().split("promptSubtr")[-1]
            if "promptSubtr" in h.GetName() and fakeHist.GetName()[10:0] is h.GetName().split("promptSubtr")[-1]:
                #print fakeHist.GetBinContent(1)
                fakeHist.Add(h.ReadObj())
                #print "subtracting"
                #print fakeHist.GetBinContent(1)
        fakeHist.Write("",ROOT.TObject.kOverwrite)
                        
def setNegativeToZero( f ):
    for h in f.GetListOfKeys():
        if h.IsFolder():
            setNegativeToZero(f.Get(h.GetName()))
        else :
            ROOT.gDirectory.cd(f.GetPath())
            obj = h.ReadObj()
            #print obj.ClassName(), h.GetName()
            if "TH1" in str(obj.ClassName()):
                for i in range(1,obj.GetNbinsX() + 1):
                    if obj.GetBinContent(i) <= 0. :
                        obj.SetBinContent(i,1e-5)
                        obj.Write("",ROOT.TObject.kOverwrite)
                        #print "test th1"
                     
            elif "TH2" in str(obj.ClassName()):
                for i in range(1,obj.GetNbinsX() + 1):
                    for j in range(1,obj.GetNbinsY() + 1):
                        if obj.GetBinContent(i,j) <= 0. :
                            obj.SetBinContent(i,j,1e-5)
                            obj.Write("",ROOT.TObject.kOverwrite)
                            #print "test th2"
                            
if len(sys.argv) is not 2:
    print "makePositive.py [input.root]"

inputFile =  str(sys.argv[1])
backup = inputFile[:-5] + "_bu.root"

copyfile(inputFile, backup)

tfile = ROOT.TFile(inputFile, "UPDATE")
addFakes(tfile)
setNegativeToZero(tfile)