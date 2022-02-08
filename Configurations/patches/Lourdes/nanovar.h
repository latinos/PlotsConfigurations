// Variables for NANOAOD

namespace nanovar 
{
        class NANOvariables
        {
           public:

                ULong64_t event;
		UInt_t nElectron;
		UInt_t nMuon;
		UInt_t nFatJet;
		UInt_t nTau;

                Float_t MET_pt; 
		Float_t PuppiMET_pt;

		Float_t *Muon_pdgId[3];
		Float_t *Muon_pt[5];
		//std::vector<float> *Muon_pt;
		//std::vector<int> *Muon_pdgId;
		std::vector<Float_t> *Muon_eta;
		std::vector<Float_t> *Muon_phi;
		std::vector<Float_t> *Muon_mass;

		std::vector<Float_t> *Electron_pt;
		std::vector<Float_t> *Electron_eta;
		std::vector<Float_t> *Electron_phi;
		std::vector<Float_t> *Electron_mass;

		std::vector<Float_t> *FatJet_pt;
		std::vector<Float_t> *FatJet_eta;
		std::vector<Float_t> *FatJet_phi;
		std::vector<Float_t> *FatJet_mass;

		 // Constructor
                 NANOvariables()
		{

                        event = -1;
			nElectron = 0;
			nMuon = 0;
			nTau = 0;
			nFatJet = 0;

                        MET_pt               = 0; 
			PuppiMET_pt	     = 0;

			//Muon_pt 	= {0};
			//Muon_pdgId	= {0};
			Muon_eta 	= {0};
			Muon_phi	= {0};
			Muon_mass	= {0};

			Electron_pt 	= {0};
			Electron_eta 	= {0};
			Electron_phi	= {0};
			Electron_mass	= {0};

			FatJet_pt 	= {0};
			FatJet_eta 	= {0};
			FatJet_phi	= {0};
			FatJet_mass	= {0};

		 };

                // Destructor
                virtual ~NANOvariables(){};

                void SetBranches(TTree *Tri)
                {
                        Tri->SetBranchAddress("event",                &event);
			Tri->SetBranchAddress("nElectron", 	      &nElectron);
			Tri->SetBranchAddress("nMuon",		      &nMuon);
			Tri->SetBranchAddress("nTau",		      &nTau);
			Tri->SetBranchAddress("nFatJet",	      &nFatJet);

			Tri->SetBranchAddress("MET_pt",	      	      &MET_pt);
			Tri->SetBranchAddress("PuppiMET_pt",	      &PuppiMET_pt);

			Tri->SetBranchAddress("Muon_pt",	      &Muon_pt);
			Tri->SetBranchAddress("Muon_pdgId",	      &Muon_pdgId);
			Tri->SetBranchAddress("Muon_eta",	      &Muon_eta);
			Tri->SetBranchAddress("Muon_phi",	      &Muon_phi);
			Tri->SetBranchAddress("Muon_mass",	      &Muon_mass);

			Tri->SetBranchAddress("Electron_pt",	      &Electron_pt);
			Tri->SetBranchAddress("Electron_eta",	      &Electron_eta);
			Tri->SetBranchAddress("Electron_phi",	      &Electron_phi);
			Tri->SetBranchAddress("Electron_mass",	      &Electron_mass);

			Tri->SetBranchAddress("FatJet_pt",	      &FatJet_pt);
			Tri->SetBranchAddress("FatJet_eta",	      &FatJet_eta);
			Tri->SetBranchAddress("FatJet_phi",	      &FatJet_phi);
			Tri->SetBranchAddress("FatJet_mass",	      &FatJet_mass);

			//delete Muon_pt;
			//delete Electron_pt;
		}

        };

}

