import ROOT as R 
import sys 

iF = R.TFile(sys.argv[1])
for cut in ["res_sig_mu", "res_sig_ele"]:
    print cut
    tree = iF.Get(cut + '/run_info_res/tree_DATA')
    with open("output_"+cut+".txt","w") as of:
        for e in tree:
            if e.DNN > 0.99:
                print "{}:{}:{}  {}".format(int(e.run), int(e.lumi), int(e.event), e.DNN)
                of.write("{}:{}:{}\n".format(int(e.run), int(e.lumi), int(e.event)))
    

for cut in ["boost_sig_mu", "boost_sig_ele"]:
    print cut
    with open("output_"+cut+".txt","w") as of:
        tree = iF.Get(cut + '/run_info_boost/tree_DATA')
        for e in tree:
            if e.DNN > 0.7 and e.DNN<0.8:
                print "{}:{}:{}  {}".format(int(e.run), int(e.lumi), int(e.event), e.DNN)
                of.write("{}:{}:{}\n".format(int(e.run), int(e.lumi), int(e.event)))

        
