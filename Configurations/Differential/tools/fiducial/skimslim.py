import os
import sys
argv = sys.argv
sys.argv = argv[:1]

import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class FiducialTreeMaker(Module):
    def __init__(self):
        if "/hwwfiducial_cc.so" not in ROOT.gSystem.GetLibraries():
            ROOT.gROOT.LoadMacro(os.path.dirname(os.path.realpath(__file__)) + '/hwwfiducial.cc+')

        self.worker = ROOT.HWWFiducial()
        self.readerversion = 0

    def initReaders(self, tree): # this function gets the pointers to Value and ArrayReaders and sets them in the C++ worker class
        print 'initReaders'
        self.worker.setTreeReaders(tree._ttreereader)
        self.readerversion = tree._ttreereaderversion # self._ttreereaderversion must be set AFTER all calls to tree.valueReader or tree.arrayReader

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.initReaders(inputTree)

        self.out = wrappedOutputTree
        self.out.branch('GenPtH', 'F')
        self.out.branch('nGenJetClean', 'i')
        self.out.branch('GenJetClean_eta', 'F', lenVar='nGenJetClean')
        self.out.branch('GenJetClean_phi', 'F', lenVar='nGenJetClean')
        self.out.branch('GenJetClean_pt', 'F', lenVar='nGenJetClean')

    def analyze(self, event):
        if event._tree._ttreereaderversion > self.readerversion:
            self.initReaders(event._tree)
        # do NOT access other branches in python between the check/call to initReaders and the call to C++ worker code
        if not self.worker.fiducial():
            return False

        self.out.fillBranch('GenPtH', self.worker.GenPtH())
        self.out.fillBranch('nGenJetClean', self.worker.nGenJetClean())
        self.out.fillBranch('GenJetClean_eta', self.worker.GenJetClean_eta())
        self.out.fillBranch('GenJetClean_phi', self.worker.GenJetClean_phi())
        self.out.fillBranch('GenJetClean_pt', self.worker.GenJetClean_pt())

        return True

if __name__ == '__main__':

    from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

    proc = PostProcessor(
        outputDir='.',
        inputFiles=['root://cms-xrd-global.cern.ch//store/mc/RunIIFall17NanoAOD/GluGluHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8/NANOAODSIM/PU2017_12Apr2018_94X_mc2017_realistic_v14-v1/110000/145E8413-D0B3-E811-A291-06F01C0001FD.root', 'root://cms-xrd-global.cern.ch//store/mc/RunIIFall17NanoAOD/GluGluHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8/NANOAODSIM/PU2017_12Apr2018_94X_mc2017_realistic_v14-v1/110000/E8593D16-D1B3-E811-9924-008CFA0A55E8.root'],
        cut='nGenDressedLepton > 1',
        branchsel=os.path.dirname(os.path.realpath(__file__)) + '/branchselection.txt',
        modules=[FiducialTreeMaker()],
        outputbranchsel=os.path.dirname(os.path.realpath(__file__)) + '/outbranchselection.txt'
    )

    proc.run()
