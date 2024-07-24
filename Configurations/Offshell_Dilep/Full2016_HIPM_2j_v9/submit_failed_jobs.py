
failed_ids = ["top.0", "top.1", "top.2", "top.3", "top.4", "top.5", "top.6", "top.7", "qqH_sand_off.12", "ggH_sonly_off.37", "ggH_bonly_off.4", "ggH_bonly_on.7"]

# condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/DY.2/mkShapes__hww_offshell_UL_2017__ALL__DY.2.jds


out = ""
for job_id in failed_ids:
    out += 'sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_HIPM__ALL/' + job_id + '/mkShapes__hww_offshell_UL_2016_HIPM__ALL__' + job_id + '.jds \n'
    out += "condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_HIPM__ALL/" + job_id + "/mkShapes__hww_offshell_UL_2016_HIPM__ALL__" + job_id + ".jds \n"

with open("submit_failed_jobs.sh", 'w') as f:
    f.write(out)
    



