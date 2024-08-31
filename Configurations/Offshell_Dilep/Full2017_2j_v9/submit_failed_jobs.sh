sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/ggH_bonly_off.40/mkShapes__hww_offshell_UL_2017__ALL__ggH_bonly_off.40.jds 
condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/ggH_bonly_off.40/mkShapes__hww_offshell_UL_2017__ALL__ggH_bonly_off.40.jds 
sed -i "s/longlunch/workday/g" ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/ggH_bonly_on.40/mkShapes__hww_offshell_UL_2017__ALL__ggH_bonly_on.40.jds 
condor_submit ../../../../../../jobs/mkShapes__hww_offshell_UL_2017__ALL/ggH_bonly_on.40/mkShapes__hww_offshell_UL_2017__ALL__ggH_bonly_on.40.jds 
