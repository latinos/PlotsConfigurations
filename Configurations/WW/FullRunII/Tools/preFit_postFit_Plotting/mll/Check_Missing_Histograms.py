import ROOT

# Open the ROOT file
file = ROOT.TFile.Open("plot_FullRunII_mll_sr_2j_B1.root")

# Navigate to the desired directory
dir_path = "ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j"
target_dir = file.Get(dir_path)

if not target_dir:
    print("Directory '{}' not found in the file.".format(dir_path))
else:
    print("Checking histograms in directory: {}".format(dir_path))
    for i in range(12): # Checks from 0 to 11
        ww_name = "histo_WW_B{}".format(i)
        ggww_name = "histo_ggWW_B{}".format(i)

        # Check existence
        ww_exists = target_dir.Get(ww_name)
        ggww_exists = target_dir.Get(ggww_name)

        if not ww_exists or not ggww_exists:
            print("Missing histograms for B{}:".format(i))
            if not ww_exists:
                print("  - {} is missing".format(ww_name))
            if not ggww_exists:
                print("  - {} is missing".format(ggww_name))
