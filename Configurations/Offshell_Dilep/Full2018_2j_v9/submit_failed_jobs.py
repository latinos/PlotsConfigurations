
failed_ids = ["ggHToWWOnshell.18"] #"qqH_sonly_off.14"] #"top.161", "top.180", "top.185", "Higgs.20", "ggWW.63", "ggWW.80", "ggWW.89", "qqH_sonly_on.0", "qqH_sonly_on.5", "ggHToWWOffshell.25", "ggHToWWOnshell.7", "ggHToWWOnshell.16"]



# condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/DY.2/mkShapes__hww_offshell_UL_2017__ALL__DY.2.jds


out = ""
for job_id in failed_ids:
    out += 'sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2018__ALL/' + job_id + '/mkShapes__hww_offshell_UL_2018__ALL__' + job_id + '.jds \n'
    out += "condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2018__ALL/" + job_id + "/mkShapes__hww_offshell_UL_2018__ALL__" + job_id + ".jds \n"

with open("submit_failed_jobs.sh", 'w') as f:
    f.write(out)
    



