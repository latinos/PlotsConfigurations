#include "TApplication.h"


void qcd() {
    TFile file {"rootFile/plots_QCD_2017.root", "UPDATE"};
    file.cd();

    std::vector<TH1D*> histos{};

    // loop over categories, represented as TDirectoryFiles
    for ( auto i : *(file.GetListOfKeys()) ) {
        auto key = static_cast<TKey*>(i);
        std::cout << key->GetName() << std::endl;

        auto cutDir = static_cast<TDirectoryFile*>(key->ReadObj());
        cutDir->cd();

        // loop over variables, also one TDirectoryFile for each variable
        for ( auto j : *(static_cast<TDirectoryFile*>(key->ReadObj())->GetListOfKeys()) ) {
            auto variable = static_cast<TKey*>(j);
            // std::cout << variable->GetName() << endl;

            auto variableDir = static_cast<TDirectoryFile*>(variable->ReadObj());
            variableDir->cd();

            // vector for MC histograms and one histogram for data
            std::vector<TH1D*> histos{};
            TH1D* data{nullptr};

            // loop over samples
            for ( auto k : *(static_cast<TDirectoryFile*>(variable->ReadObj())->GetListOfKeys()) ) {
                auto sample = static_cast<TKey*>(k);
                // The correct histogram output of the framework is cycle 2
                if ( sample->GetCycle() != 2) { continue; }
                // Skip potential qcd histogram
                if ( strcmp(sample->GetName(), "histo_QCD") == 0) { continue; }

                // std::cout << sample->GetName() << std::endl;
                auto hist = static_cast<TH1D*>(sample->ReadObj());

                if ( strcmp(sample->GetName(), "histo_DATA") == 0 ) {
                  data = hist;
                }
                else {
                  histos.push_back(hist);
                }
            } // end sample loop

            if ( histos.size() < 1 ) {
              std::cerr << "ERROR: No MC histogram found!" << std::endl;
              break;
            }
            if ( !data ) {
              std::cerr << "ERROR: Data histogram missing!" << std::endl;
              break;
            }

            const char* name = "histo_QCD";
            TH1D qcd {*data};
            qcd.SetName(name);
            qcd.SetTitle(name);

            for (auto hist : histos) {
              qcd.Add(hist, -1);
            }

            // remove negative bins (set to zero)
            for (auto i{qcd.GetNbinsX()}; i >= 0; i--) {
                if ( qcd.GetBinContent(i) < 0 ) {
                    qcd.SetBinContent(i, 0);
                    qcd.SetBinError(i, 1);
                }
            }
            qcd.Write();
        } // end variable loop

    } // end category loop

    file.Write();
}
