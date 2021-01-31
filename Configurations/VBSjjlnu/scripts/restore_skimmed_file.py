import ROOT as R 
import sys 

file_to_skim = sys.argv[1]
entrylistfile = R.TFile.Open(sys.argv[2])
output = sys.argv[3]

entrylist = entrylistfile.Get("total_list")


try:
    iFile = R.TFile.Open( file_to_skim, "READ")
    oldTree = iFile.Get("Events")
except:
    print "ERROR! Cannot read file: ", os.path.join(basedir,folder,filename)
    exit(1)


# Set filter of entries
oldTree.SetEventList(entrylist)
# new file 
try:
    oFile = R.TFile.Open(output, "RECREATE")
    # Copy only the entries in the entrylist
    newTree = oldTree.CopyTree("")

    # Copy also other metadata in the file
    if iFile.GetListOfKeys().Contains("Runs"):             Runs_tree =  iFile.Get("Runs").CopyTree("")
    if iFile.GetListOfKeys().Contains("ParameterSets"):    ParameterSets_tree = iFile.Get("ParameterSets").CopyTree("")
    if iFile.GetListOfKeys().Contains("LuminosityBlocks"): LuminosityBlocks_tree = iFile.Get("LuminosityBlocks").CopyTree("")
    if iFile.GetListOfKeys().Contains("MetaData"):         MetaData_tree = iFile.Get("MetaData").CopyTree("")
    if iFile.GetListOfKeys().Contains("autoPU"):           autoPU_histo = iFile.Get("autoPU").Clone()

    oFile.Write()
    oFile.Close()
    iFile.Close()

except:
    print "ERROR! Cannot create file: ", os.path.join(targetdir,folder,filename)
    exit(1)