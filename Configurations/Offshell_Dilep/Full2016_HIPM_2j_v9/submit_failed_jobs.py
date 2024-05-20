
failed_ids = ["top.3", "top.7", "top.30", "qqH_sand_off.24", "qqH_sand_off.27", "qqH_sand_off.32", "ggHToWWOffshell.3", "ggHToWWOffshell.12"]

# condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/DY.2/mkShapes__hww_offshell_UL_2017__ALL__DY.2.jds


out = ""
for job_id in failed_ids:
    out += 'sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_HIPM__ALL/' + job_id + '/mkShapes__hww_offshell_UL_2016_HIPM__ALL__' + job_id + '.jds \n'
    out += "condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_HIPM__ALL/" + job_id + "/mkShapes__hww_offshell_UL_2016_HIPM__ALL__" + job_id + ".jds \n"

with open("submit_failed_jobs.sh", 'w') as f:
    f.write(out)
    



