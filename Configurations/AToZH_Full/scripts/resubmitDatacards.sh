#!/bin/bash

#.out files need to have $(ProcId) for this script to work
#path and prefix below must match those in condor_datacards.sub and condor_resubmit_datacards.sub
folder_path="jobs_datacards"
file_prefix="datacards"

error_file_numbers=()
while IFS= read -r -d '' file; do
    if ! grep -q "processes and rates" "$file"; then
        #extract the ProcId from the filename and add it to the array
        number=$(echo "$file" | grep -oE '[0-9]+' | tail -n1)
        error_file_numbers+=("$number")
    fi
done < <(find "$folder_path" -name "${file_prefix}.*.out" -print0)

echo "Search complete. Condor ProcIds extracted from files': ${error_file_numbers[@]}"

echo "Cleaning up ${folder_path}..."
for number in "${error_file_numbers[@]}"; do 
    rm "${folder_path}/${file_prefix}.${number}.out"
    rm "${folder_path}/${file_prefix}.${number}.err"
    rm "${folder_path}/${file_prefix}.${number}.log"
done

joined_numbers=$(IFS=,; echo "${error_file_numbers[*]}")
sed -e "s/TMP/${joined_numbers}/g" "condor_resubmit_datacards.sub" > "condor_resubmit_datacards_tmp.sub"
condor_submit "condor_resubmit_datacards_tmp.sub"
rm "condor_resubmit_datacards_tmp.sub"
