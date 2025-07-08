import ROOT
import math
import os
import sys
import argparse

def fiducial_region_evaluate(event):
    """
    Implement the FiducialRegion cuts
    Returns True if event passes all cuts, False otherwise
    """
    # Get number of gen leptons
    nL = event.nLeptonGen
    if nL < 2:
        return False
    
    # Find prompt leptons
    iPromptL = []
    for iL in range(nL):
        if not event.LeptonGen_isPrompt[iL]:
            continue
        
        # Skip if mother is tau
        tauId = abs(event.LeptonGen_MotherPID[iL])
        if tauId == 15:
            continue
        
        # Only electrons and muons
        absId = abs(event.DressedLepton_pdgId[iL])
        if absId != 11 and absId != 13:
            continue
        
        iPromptL.append(iL)
    
    if len(iPromptL) < 2:
        return False
    
    # Veto third lepton if pt > 10 GeV
    if len(iPromptL) >= 3 and event.DressedLepton_pt[iPromptL[2]] > 10.:
        return False
    
    # Opposite sign leptons
    if event.DressedLepton_pdgId[iPromptL[0]] * event.DressedLepton_pdgId[iPromptL[1]] > 0:
        return False
    
    # Veto if either lepton comes from tau
    if abs(event.LeptonGen_MotherPID[iPromptL[0]]) == 15 or abs(event.LeptonGen_MotherPID[iPromptL[1]]) == 15:
        return False
    
    # Lepton pt and eta cuts
    if (event.DressedLepton_pt[iPromptL[0]] < 25. or abs(event.DressedLepton_eta[iPromptL[0]]) > 2.5 or
        event.DressedLepton_pt[iPromptL[1]] < 20. or abs(event.DressedLepton_eta[iPromptL[1]]) > 2.5):
        return False
    
    # Calculate dilepton 4-vector using ROOT PtEtaPhiMVector
    pl0 = ROOT.Math.PtEtaPhiMVector(
        event.DressedLepton_pt[iPromptL[0]],
        event.DressedLepton_eta[iPromptL[0]],
        event.DressedLepton_phi[iPromptL[0]],
        event.DressedLepton_mass[iPromptL[0]]
    )
    
    pl1 = ROOT.Math.PtEtaPhiMVector(
        event.DressedLepton_pt[iPromptL[1]],
        event.DressedLepton_eta[iPromptL[1]],
        event.DressedLepton_phi[iPromptL[1]],
        event.DressedLepton_mass[iPromptL[1]]
    )
    
    # Add 4-vectors
    pll = pl0 + pl1
    
    # Get pt and mass directly from the 4-vector
    pll_pt = pll.Pt()
    pll_mass = pll.M()
    
    # ptll cut
    if pll_pt < 30.:
        return False
    
    # GenMET cut
    genMet = event.GenMET_pt
    if genMet < 20.:
        return False
    
    # mll cut
    if pll_mass < 20.:
        return False
    
    return True

def main():
    # Parse command line arguments
    parser = argparse.ArgumentParser(description='Process ROOT files for WW analysis')
    parser.add_argument('--inputFiles', type=str, required=True, help='Comma-separated list of ROOT files to process')
    
    args = parser.parse_args()
    
    # Split input files by comma
    input_files = [f.strip() for f in args.inputFiles.split(',') if f.strip()]
    
    print("Processing {} input files:".format(len(input_files)))
    for i, file_path in enumerate(input_files):
        print("  {}: {}".format(i+1, file_path))
    
    # Create histogram for LHE ptWW
    hist = ROOT.TH1F("lhe_ptww", "WW p_{T};p_{T} [GeV];Events", 20, 0, 200)
    
    # Process each input file
    total_events = 0
    total_passed = 0
    
    for file_path in input_files:
        print("\n=== Processing file: {} ===".format(file_path))
        
        # Open the NanoAOD ROOT file
        file = ROOT.TFile.Open(file_path)
        if not file or file.IsZombie():
            print("Error: Could not open file {}".format(file_path))
            continue
            
        tree = file.Get("Events")
        if not tree:
            print("Error: Could not get Events tree from {}".format(file_path))
            file.Close()
            continue

        # Event loop
        n_events = tree.GetEntries()
        print("Total events in file: {}".format(n_events))
        total_events += n_events
        
        file_passed_events = 0
        
        # Process events in this file
        for i, event in enumerate(tree):
            if i % 1000 == 0:
                print("Processing event %d/%d" % (i, n_events))
            
            # Apply fiducial region cuts (keep the gen-level cuts for consistency)
            if not fiducial_region_evaluate(event):
                continue
            
            file_passed_events += 1
            
            # Calculate ptWW using LHEPart collection
            # Find LHE leptons and neutrinos (status=1 for final state particles)
            lhe_leptons = []
            lhe_neutrinos = []
            for j in range(event.nLHEPart):
                status = event.LHEPart_status[j]
                pdgId = event.LHEPart_pdgId[j]
                pt = event.LHEPart_pt[j]
                eta = event.LHEPart_eta[j]
                phi = event.LHEPart_phi[j]
                mass = event.LHEPart_mass[j]
                
                # Select final state electrons and muons
                if (status == 1 and  # Final state particles
                    abs(pdgId) in [11, 13] and  # Electrons and muons
                    abs(eta) < 2.5):  # Detector coverage
                    lhe_leptons.append({
                        'pdgId': pdgId,
                        'pt': pt,
                        'eta': eta,
                        'phi': phi,
                        'mass': mass
                    })
                
                # Select final state neutrinos (MET)
                if (status == 1 and  # Final state particles
                    abs(pdgId) in [12, 14]):  # Electron and muon neutrinos
                    lhe_neutrinos.append({
                        'pdgId': pdgId,
                        'pt': pt,
                        'eta': eta,
                        'phi': phi,
                        'mass': mass
                    })
            
            # Sort by pt (leading pt first)
            lhe_leptons.sort(key=lambda x: x['pt'], reverse=True)
            lhe_neutrinos.sort(key=lambda x: x['pt'], reverse=True)
            
            if len(lhe_leptons) >= 2 and len(lhe_neutrinos) >= 2:
                # Get the two leading LHE leptons
                l0 = lhe_leptons[0]
                l1 = lhe_leptons[1]
                
                # Check opposite sign
                if l0['pdgId'] * l1['pdgId'] > 0:
                    continue  # Same sign, skip
                
                # Calculate dilepton 4-vector
                l0_vec = ROOT.Math.PtEtaPhiMVector(
                    l0['pt'],
                    l0['eta'],
                    l0['phi'],
                    l0['mass']
                )
                
                l1_vec = ROOT.Math.PtEtaPhiMVector(
                    l1['pt'],
                    l1['eta'],
                    l1['phi'],
                    l1['mass']
                )
                
                # Add lepton 4-vectors
                ll = l0_vec + l1_vec
                
                # Calculate MET from leading two neutrinos using ROOT PtEtaPhiMVector
                nu0 = lhe_neutrinos[0]
                nu1 = lhe_neutrinos[1]
                
                nu0_vec = ROOT.Math.PtEtaPhiMVector(nu0['pt'], nu0['eta'], nu0['phi'], nu0['mass'])
                nu1_vec = ROOT.Math.PtEtaPhiMVector(nu1['pt'], nu1['eta'], nu1['phi'], nu1['mass'])
                
                met_vec = nu0_vec + nu1_vec
                
                # Calculate total ptWW = dilepton pt + MET pt using ROOT vectors
                total_vec = ll + met_vec
                ptww = total_vec.Pt()
                
                # Fill histogram with all LHE ptWW values (no additional cuts)
                # Apply cross-section weight
                xs_weight = event.XSWeight
                hist.Fill(ptww, xs_weight)
        
        print("Events passing fiducial cuts in this file: {}/{} ({:.2f}%)".format(
            file_passed_events, n_events, 100.*file_passed_events/n_events))
        total_passed += file_passed_events
        
        # Close file
        file.Close()
    
    print("\n=== SUMMARY ===")
    print("Total events processed: {}".format(total_events))
    print("Total events passing fiducial cuts: {}/{} ({:.2f}%)".format(
        total_passed, total_events, 100.*total_passed/total_events))
    
    # Save histogram to ROOT file
    output_file = ROOT.TFile("lhe_ptww.root", "RECREATE")
    hist.Write("lhe_ptww")
    output_file.Close()
    print("Histogram saved to lhe_ptww.root")

if __name__ == "__main__":
    main()
