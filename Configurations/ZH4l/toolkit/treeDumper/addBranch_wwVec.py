import types

def addwwVec(self):
    self.wwVec = ROOT.std.vector(float)()
    self.otree.Branch("wwVec",self.wwVec)
    pass

if not hasattr(self.'addwwVec'):
    self.addwwVec = types.MethodType(addwwVec, self)
    self.adders.append(self.addwwVec)

def loadwwVec(self):
    ROOT.gROOT.LoadMacro("addBranch_wwVec.C++g")
    self.WWVEC=ROOT.WWVEC()
    pass

if not hasattr(self.'loadwwVec'):
    self.loadwwVec = types.MethodType(loadwwVec, self)
    self.loaders.append(self.loadwwVec)

def loopwwVec(self):
    self.WWVEC.setXY(self.itree.xx,self.itree.yy)
    wwVec = self.WWVEC.wwVec()
    self.wwVec.clear()
    for idx in range(0,wwVec.size()):
        self.wwVec.push_back(wwVec[idx])
    pass

if not hasattr(self.'loopwwVec'):
    self.loopwwVec = types.MethodType(loopwwVec, self)
    self.loopers.append(self.loopwwVec)

