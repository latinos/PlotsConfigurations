import ROOT

def CaclLenBranch(samples,branch):

    passes={}
    
    for s in samples:
        #print "---",s,"---"
        if len(samples[s]['name'])==0:continue
        FirstFile=samples[s]['name'][0].replace("###","")
        f=ROOT.TFile.Open(FirstFile)
        tree=f.Get("Events")
        if tree.GetListOfBranches().FindObject(branch):
            tree.Draw("Length$("+branch+")")
            htemp=ROOT.gPad.GetPrimitive("htemp")
            n= int(htemp.GetMean())
            #print n
            if not n in passes:
                passes[n]=[]
            passes[n].append(s)
            

        f.Close()



    return passes

def MakeSampleDict(samples,branch,deno='1'):
    passes=CaclLenBranch(samples,branch)
    samples_value={}
    for n in passes:
        ##n -> length
        if n==0:continue
        for s in passes[n]:
            #s -> sample names
            samples_value[s]=[]
            for i in range(n):
                samples_value[s].append('Alt$('+branch+"["+str(i)+"]/("+deno+"),1.0)")
    return samples_value

if __name__ == '__main__':
    ROOT.gROOT.SetBatch(True)
    samples={}
    handle=open('samples_2017.py','r')
    exec(handle)
    branch="LHEScaleWeight"
    #mydict=CaclLenBranch(samples,branch)
    #print mydict
    
    #samples_value=MakeSampleDict(samples,branch)
    #print samples_value
    nMember_sample=CaclLenBranch(samples,'LHEPdfWeight') ## {33:[DY,Wjets....]}
    print nMember_sample
