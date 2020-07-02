N=8
(
for myjob in `ls -U  /gwteraz/users/dmapelli/latinos_workdir/jobs/mkShapes__VBSjjlnu/*.sh`; do
   ((i=i%N)); ((i++==0)) && wait
   ${myjob} >/dev/null & 
done
)
