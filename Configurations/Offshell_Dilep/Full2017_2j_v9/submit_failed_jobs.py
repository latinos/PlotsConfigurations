
failed_ids = ["top.48", "top.184", "top.217", "top.477", "ZZ.37", "Higgs.18", "qqH_sonly_off.25", "qqH_sonly_off.34", "ggHToWWOffshell.11", "ggHToWWOnshell.15"]



# condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/DY.2/mkShapes__hww_offshell_UL_2017__ALL__DY.2.jds


out = ""
for job_id in failed_ids:
    out += 'sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/' + job_id + '/mkShapes__hww_offshell_UL_2017__ALL__' + job_id + '.jds \n'
    out += "condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/" + job_id + "/mkShapes__hww_offshell_UL_2017__ALL__" + job_id + ".jds \n"

with open("submit_failed_jobs.sh", 'w') as f:
    f.write(out)
    



