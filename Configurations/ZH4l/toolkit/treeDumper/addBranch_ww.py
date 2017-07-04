import types

def addWW(self):
    # Routine for booking a single float.
    # Of no importance at all!
    self.ww = array('f',[0])
    self.otree.Branch("ww",self.ww,"ww/F")
    pass

# Book and append to adder list
if not hasattr(self,'addWW'):
    self.addWW = types.MethodType(addWW, self)
    self.addWW()

def loadWW(self):
    # Load the macro. The name 'WW' is the class name.
    # This is what users should pay attension to!
    ROOT.gROOT.LoadMacro("addBranch_ww.C++g")
    self.WW=ROOT.WW()
    pass

# Book and append to loader list
if not hasattr(self,'loadWW'):
    self.loadWW = types.MethodType(loadWW, self)
    self.loaders.append(self.loadWW)

def loopWW(self):
    # Do whatever you defined in the macro!
    self.WW.setXY(self.itree.xx,self.itree.yy)
    ww = self.WW.ww()
    # Routine for keeping the float.
    # Of no importance at all!
    self.ww[0]=ww
    pass

# Book and append to looper list
if not hasattr(self,'loopWW'):
    self.loopWW = types.MethodType(loopWW, self)
    self.loopers.append(self.loopWW)

