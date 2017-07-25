import types

def addWEIGHT(self):
    # Routine for booking a single float.
    # Of no importance at all!
    self.weight = array('f',[0])
    self.otree.Branch("weight",self.weight,"weight/F")
    pass

# Book addWEIGHT to the treeDumper class and run!
if not hasattr(self,'addWEIGHT'):
    self.addWEIGHT = types.MethodType(addWEIGHT, self)
    self.adders.append(self.addWEIGHT)

def loadWEIGHT(self):
    # Load the macro. The name 'WEIGHT' is the class name.
    # This is what users should pay attension to!
    # ROOT.gROOT.LoadMacro("addBranch_weight.C++g")
    # self.WEIGHT=ROOT.WEIGHT()
    pass

# Book and append to loader list
if not hasattr(self,'loadWEIGHT'):
    self.loadWEIGHT = types.MethodType(loadWEIGHT, self)
    self.loaders.append(self.loadWEIGHT)

def loopWEIGHT(self):
    # Do whatever you defined in the macro!
    origWeightsStr = self.samples[self.osamples[-1]]['weights'][self.fnameCounter]
    weightsStr = re.sub(r'\*\s*([a-zA-Z])',r'*self.itree.\1',origWeightsStr)
    weightsStr = re.sub(r'\(\s*([a-zA-Z])',r'(self.itree.\1',weightsStr)
    weightsStr = re.sub(r'^\s*([a-zA-Z])',r'self.itree.\1',weightsStr)
    weightsStr = re.sub(r'\s*\&\&\s*([a-zA-Z])',r' and self.itree.\1',weightsStr)
    weightsStr = re.sub(r'\s*\|\|\s*([a-zA-Z])',r' or self.itree.\1',weightsStr)
    weightsStr = re.sub(r'!\s*([a-zA-Z])',r'not self.itree.\1',weightsStr)
    weightsStr = re.sub(r'\s*\&\&\s*',r' and ',weightsStr)
    # weightsStr = re.sub(r'\s*\|\|\s*',r' or ',weightsStr)
    weightsStr = re.sub(r'!',r'not ',weightsStr)
    # print weightsStr
    # exec("weights = eval(weightsStr)")
    # print weights

    origWeightStr = self.samples[self.osamples[-1]]['weight']
    weightStr = re.sub(r'\*\s*([a-zA-Z])',r'*self.itree.\1',origWeightStr)
    weightStr = re.sub(r'\(\s*([a-zA-Z])',r'(self.itree.\1',weightStr)
    weightStr = re.sub(r'^\s*([a-zA-Z])',r'self.itree.\1',weightStr)
    weightStr = re.sub(r'\s*\&\&\s*([a-zA-Z])',r' and self.itree.\1',weightStr)
    weightStr = re.sub(r'\s*\|\|\s*([a-zA-Z])',r' or self.itree.\1',weightStr)
    weightStr = re.sub(r'!\s*([a-zA-Z])',r'not self.itree.\1',weightStr)
    weightStr = re.sub(r'\s*\&\&\s*',r' and ',weightStr)
    # weightStr = re.sub(r'\s*\|\|\s*',r' or ',weightStr)
    weightStr = re.sub(r'!',r'not ',weightStr)
    # print weightStr
    # exec("weight = eval(weightStr)")
    # print weight

    totalWStr = "("+weightStr+")*("+weightsStr+")"
    exec("weight = eval(totalWStr)")
    # print totalWStr

    # Routine for keeping the float.
    # Of no importance at all!
    self.weight[0]=weight
    if weight == 0:
        return False
    else:
        # print self.weight[0]
        pass
    pass

# Book and append to looper list
if not hasattr(self,'loopWEIGHT'):
    self.loopWEIGHT = types.MethodType(loopWEIGHT, self)
    self.loopers.append(self.loopWEIGHT)

