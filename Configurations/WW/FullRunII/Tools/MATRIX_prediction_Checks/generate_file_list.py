#!/usr/bin/env python
# -*- coding: utf-8 -*-
from __future__ import print_function, division
"""
Script to generate file lists for GluGluToWWToENEN samples
"""

import subprocess
import sys
import re

def generate_file_list(year, pattern, output_file):
    """Generate file list for a specific year and pattern"""
    
    # Base path for different years
    base_paths = {
        "2016_HIPM": "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL16_106x_nAODv9_HIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9/",
        "2016_noHIPM": "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9/",
        "2017": "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9",
        "2018": "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9"
    }
    
    if year not in base_paths:
        available_years = list(base_paths.keys())  # Convert to list for Python 2
        print("Error: Year {} not supported. Available years: {}".format(year, available_years))
        return
    
    base_path = base_paths[year]
    
    print("Searching in directory: {}".format(base_path))
    
    try:
        # Use find command to find files (more reliable than ls with wildcards)
        find_cmd = "find {} -name '{}'".format(base_path, pattern)
        print("Running command: {}".format(find_cmd))
        
        result = subprocess.check_output(find_cmd, shell=True, universal_newlines=True)
        all_files = result.strip().split('\n')
        all_files = [f for f in all_files if f]  # Remove empty lines
        
        print("Total files found by find: {}".format(len(all_files)))
        if all_files:
            print("First few files found:")
            for f in all_files[:5]:
                print("  {}".format(f))
        
        # Filter files to only include those with __part*.root pattern
        files = []
        for file_path in all_files:
            if '__part' in file_path and file_path.endswith('.root'):
                # Extract part number for sorting
                part_match = re.search(r'__part(\d+)\.root$', file_path)
                if part_match:
                    files.append(file_path)
        
        if not files:
            print("No files found matching the __part*.root pattern")
            print("Total files found: {}".format(len(all_files)))
            if all_files:
                print("All files found:")
                for f in all_files:
                    print("  {}".format(f))
            return
        
        # Sort files by part number
        def get_part_number(file_path):
            part_match = re.search(r'__part(\d+)\.root$', file_path)
            return int(part_match.group(1)) if part_match else 0
        
        files.sort(key=get_part_number)
        
        # Write to output file
        with open(output_file, 'w') as f:
            f.write("fileList = [\n")
            for file_path in files:
                f.write('"{}",\n'.format(file_path))
            f.write("]\n")
        
        print("Generated {} files in {}".format(len(files), output_file))
        if files:
            first_part = get_part_number(files[0])
            last_part = get_part_number(files[-1])
            print("Files range from part{} to part{}".format(first_part, last_part))
        
    except subprocess.CalledProcessError as e:
        print("Error finding files: {}".format(e))
    except Exception as e:
        print("Error: {}".format(e))

def main():
    if len(sys.argv) != 4:
        print("Usage: python generate_file_list.py <year> <pattern> <output_file>")
        print("Example: python generate_file_list.py 2018 'nanoLatino_WWJTo2L2Nu_minnlo__part*.root' List_ggWW_2018_cff.py")
        print("Example: python generate_file_list.py 2018 'nanoLatino_GluGluToWWTo*N*N__part*.root' List_ggWW_2018_cff.py")
        print("Available years: 2016_HIPM, 2016_noHIPM, 2017, 2018")
        sys.exit(1)
    
    year = sys.argv[1]
    pattern = sys.argv[2]
    output_file = sys.argv[3]
    
    generate_file_list(year, pattern, output_file)

if __name__ == "__main__":
    main() 
