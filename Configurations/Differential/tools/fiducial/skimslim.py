#!/usr/bin/env python

import os
import sys
_argv = sys.argv
sys.argv = _argv[:1]

import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class FiducialTreeMaker(Module):
    def __init__(self):
        Module.__init__(self)

        if "/hwwfiducial_cc.so" not in ROOT.gSystem.GetLibraries():
            ROOT.gROOT.LoadMacro(os.path.dirname(os.path.realpath(__file__)) + '/hwwfiducial.cc+')

        self.worker = ROOT.HWWFiducial()
        self.readerversion = 0

        self.skipFile = False

    def initReaders(self, tree): # this function gets the pointers to Value and ArrayReaders and sets them in the C++ worker class
        self.worker.setTreeReaders(tree._ttreereader)
        self.readerversion = tree._ttreereaderversion # self._ttreereaderversion must be set AFTER all calls to tree.valueReader or tree.arrayReader

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree

        if not inputTree.GetBranch('genWeight'):
            # hit a very rare and weird case where the input file is actually EDM..
            self.skipFile = True
            return
        else:
            self.skipFile = False

        self.initReaders(inputTree)

        self.out.branch('Lepton1_pdgId', 'I')
        self.out.branch('Lepton1_eta', 'F')
        self.out.branch('Lepton1_phi', 'F')
        self.out.branch('Lepton1_pt', 'F')
        self.out.branch('Lepton1_mass', 'F')
        self.out.branch('Lepton2_pdgId', 'I')
        self.out.branch('Lepton2_eta', 'F')
        self.out.branch('Lepton2_phi', 'F')
        self.out.branch('Lepton2_pt', 'F')
        self.out.branch('Lepton2_mass', 'F')
        self.out.branch('Dilepton_pt', 'F')
        self.out.branch('Dilepton_mass', 'F')
        self.out.branch('PtH', 'F')
        self.out.branch('MtH', 'F')
        self.out.branch('MtW2', 'F')
        self.out.branch('nCleanJet', 'i')
        self.out.branch('CleanJet_eta', 'F', lenVar='nCleanJet')
        self.out.branch('CleanJet_phi', 'F', lenVar='nCleanJet')
        self.out.branch('CleanJet_pt', 'F', lenVar='nCleanJet')

    def analyze(self, event):
        if self.skipFile:
            return True

        if event._tree._ttreereaderversion > self.readerversion:
            self.initReaders(event._tree)
        # do NOT access other branches in python between the check/call to initReaders and the call to C++ worker code
        if not self.worker.fiducial():
            return False

        self.out.fillBranch('Lepton1_pdgId', self.worker.Lepton1_pdgId())
        self.out.fillBranch('Lepton1_eta', self.worker.Lepton1_eta())
        self.out.fillBranch('Lepton1_phi', self.worker.Lepton1_phi())
        self.out.fillBranch('Lepton1_pt', self.worker.Lepton1_pt())
        self.out.fillBranch('Lepton1_mass', self.worker.Lepton1_mass())
        self.out.fillBranch('Lepton2_pdgId', self.worker.Lepton2_pdgId())
        self.out.fillBranch('Lepton2_eta', self.worker.Lepton2_eta())
        self.out.fillBranch('Lepton2_phi', self.worker.Lepton2_phi())
        self.out.fillBranch('Lepton2_pt', self.worker.Lepton2_pt())
        self.out.fillBranch('Lepton2_mass', self.worker.Lepton2_mass())
        self.out.fillBranch('Dilepton_pt', self.worker.Dilepton_pt())
        self.out.fillBranch('Dilepton_mass', self.worker.Dilepton_mass())
        self.out.fillBranch('PtH', self.worker.PtH())
        self.out.fillBranch('MtH', self.worker.MtH())
        self.out.fillBranch('MtW2', self.worker.MtW2())
        self.out.fillBranch('nCleanJet', self.worker.nCleanJet())
        self.out.fillBranch('CleanJet_eta', self.worker.CleanJet_eta())
        self.out.fillBranch('CleanJet_phi', self.worker.CleanJet_phi())
        self.out.fillBranch('CleanJet_pt', self.worker.CleanJet_pt())

        return True

if __name__ == '__main__':
    sys.argv = _argv
    
    import subprocess
    import shutil

    from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

    outputName = sys.argv[1]
    inputFile = sys.argv[2]

    if inputFile.endswith('.root'):
        inputFiles = [inputFile]
    else:
        from LatinoAnalysis.NanoGardener.framework.samples.fall17_nAOD_v1 import Samples

        dataset = inputFile

        try:
            sample = Samples[dataset]
        except KeyError:
            # temporary fix
            if dataset == 'bbHToWWTo2L2Nu_M125_yb2':
                sample = {'nanoAOD': '/bbHToWWTo2L2Nu_M-125_4FS_yb2_13TeV_amcatnlo/RunIISummer16NanoAOD-PUMoriond17_05Feb2018_94X_mcRun2_asymptotic_v2-v1/NANOAODSIM'}
            elif dataset == 'bbHToWWTo2L2Nu_M125_ybyt':
                sample = {'nanoAOD': '/bbHToWWTo2L2Nu_M-125_4FS_ybyt_13TeV_amcatnlo/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM'}
            else:
                raise

        proc = subprocess.Popen(['dasgoclient', '--limit', '0', '--query', 'file dataset=%s' % sample['nanoAOD']], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        out, err = proc.communicate()
    
        if proc.returncode != 0:
            sys.stderr.write(err)
            sys.exit(proc.returncode)
    
        inputFiles = ['root://cms-xrd-global.cern.ch/%s' % f.strip() for f in out.split()]

    if not os.path.exists('/tmp/x509up_u%d' % os.getuid()) and os.path.exists('%s/x509up_u%d' % (os.getcwd(), os.getuid())):
        os.environ['X509_USER_PROXY'] = '%s/x509up_u%d' % (os.getcwd(), os.getuid())

    treeMaker = FiducialTreeMaker()

    proc = PostProcessor(
        outputDir='.',
        inputFiles=inputFiles,
        branchsel=os.path.dirname(os.path.realpath(__file__)) + '/branchselection.txt',
        modules=[treeMaker],
        outputbranchsel=os.path.dirname(os.path.realpath(__file__)) + '/outbranchselection.txt',
        haddFileName='out.root'
    )

    proc.run()

    outFile = ROOT.TFile.Open('out.root', 'update')
    treeMaker.worker.writeCounters(outFile)
    outFile.Close()

    shutil.move('out.root', outputName)
