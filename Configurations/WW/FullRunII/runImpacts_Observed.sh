#!/bin/bash

# Set base directory that contains all tag folders
base_dir="."  # <- change this to your actual path

# Arrays of years and jets
YEARS=("2016_HIPM" "2016_noHIPM" "2017" "2018" "RunII")
JETS=("0j" "1j" "2j" "")

# Save starting directory
start_dir=$(pwd)

# Loop through each combination
for year in "${YEARS[@]}"; do
  for jet in "${JETS[@]}"; do

    # Determine tag
    if [[ -z "$jet" ]]; then
      tag="Full${year}_incl_SF_DF"
    else
      tag="Full${year}_incl_SF_DF_${jet}"
    fi

    echo "Processing tag: $tag"

    # Define the full path to the tag directory
    tag_dir="${base_dir}/${tag}"

    # Check if directory exists
    if [[ ! -d "$tag_dir" ]]; then
      # Create an output folder for this tag
      echo "Directory ${tag_dir} not found; making directory.."
      mkdir -p "${tag_dir}"
    fi

    # Change into the tag directory
    cd "${tag_dir}" || { echo "Failed to enter ${tag_dir}"; exit 1; }

    # Run Combine commands inside this directory
    combineTool.py -M Impacts -d "../../${tag}.root" -m 125 \
      --setParameterRanges CMS_SMP24008_Topnorm_0j=-5,5:CMS_SMP24008_Topnorm_1j=-5,5:CMS_SMP24008_Topnorm_2j=-5,5 \
      --doInitialFit --expectSignal 1 --robustFit 1 --saveFitResult | tee "${tag}_Observed_SS.out"

#    CONDOR SUBMISSION   
#    combineTool.py -M Impacts -d "../../${tag}.root" -m 125 \
#      --setParameterRanges CMS_SMP24008_Topnorm_0j=-5,5:CMS_SMP24008_Topnorm_1j=-5,5:CMS_SMP24008_Topnorm_2j=-5,5 \
#      --expectSignal 1 --doFits --job-mode condor --task-name impacts --sub-opts '+JobFlavour = "workday"'

#    combineTool.py -M Impacts -d "../../${tag}.root" -m 125 \
#      --setParameterRanges CMS_SMP24008_Topnorm_0j=-5,5:CMS_SMP24008_Topnorm_1j=-5,5:CMS_SMP24008_Topnorm_2j=-5,5 \
#      --expectSignal 1 --task-name impacts -o "impacts_${tag}_Observed.json"

#    plotImpacts.py -i "impacts_${tag}_Observed.json" -o "impacts_${tag}_Observed"
#    plotImpacts.py -i "impacts_${tag}_Observed.json" -o "impacts_${tag}_Observed_Blinded" --blind

    echo "Done with ${tag} in ${tag_dir}"
    echo "-------------------------------------"

    # Return to the original start directory
    cd "$start_dir"
  done
done
