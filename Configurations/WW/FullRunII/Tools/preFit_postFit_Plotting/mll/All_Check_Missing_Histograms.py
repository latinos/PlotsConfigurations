import ROOT

for y in range(12):  # Y = 0, 1, 2, ...11
    filename = "plot_FullRunII_mll_sr_1j_B{}_postFit.root".format(y)
    dir_path = "ww2l2v_13TeV_sr_1j_B{}/BDTOutput_1j".format(y)

    print("\nProcessing file: {}".format(filename))

    file = ROOT.TFile.Open(filename)
    if not file or file.IsZombie():
        print("  - Could not open file.")
        continue

    target_dir = file.Get(dir_path)
    if not target_dir:
        print("  - Directory '{}' not found.".format(dir_path))
        continue

    print("  - Checking histograms in directory: {}".format(dir_path))
    for i in range(12):  # X = 0 to 11
        ww_name = "histo_WW_B{}".format(i)
        ggww_name = "histo_ggWW_B{}".format(i)

        ww_exists = target_dir.Get(ww_name)
        ggww_exists = target_dir.Get(ggww_name)

        if not ww_exists or not ggww_exists:
            print("    Missing histograms for B{}:".format(i))
            if not ww_exists:
                print("      - {} is missing".format(ww_name))
            if not ggww_exists:
                print("      - {} is missing".format(ggww_name))

    file.Close()

