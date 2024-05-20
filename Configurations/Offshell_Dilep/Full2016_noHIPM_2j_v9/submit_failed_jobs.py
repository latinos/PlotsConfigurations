
failed_ids = ["ZZ.29", "ZZ.30", "ZZ.31", "ggWW.26", "qqH_sonly_on.19", "qqH_sonly_on.20", "qqH_sonly_off.6", "qqH_sonly_off.8", "qqH_sonly_off.12", "qqH_sonly_off.13", "qqH_sand_off.0", "qqH_sand_off.12", "ggHToWWOffshell.18", "ggHToWWOffshell.20", "ggHToWWOffshell.21", "ggHToWWOffshell.25", "ggHToWWOffshell.28", "ggHToWWOnshell.3", "ggHToWWOnshell.8"]

# condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/DY.2/mkShapes__hww_offshell_UL_2017__ALL__DY.2.jds


out = ""
for job_id in failed_ids:
    out += 'sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_noHIPM__ALL/' + job_id + '/mkShapes__hww_offshell_UL_2016_noHIPM__ALL__' + job_id + '.jds \n'
    out += "condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2016_noHIPM__ALL/" + job_id + "/mkShapes__hww_offshell_UL_2016_noHIPM__ALL__" + job_id + ".jds \n"

with open("submit_failed_jobs.sh", 'w') as f:
    f.write(out)
    



