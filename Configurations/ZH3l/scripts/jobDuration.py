import os
import argparse
from datetime import datetime,timedelta

FMT = '%H:%M:%S'

parser = argparse.ArgumentParser()
parser.add_argument("job_dir", help="job dir")
args = parser.parse_args()

dirname = args.job_dir

times = {}

for filename in os.listdir(dirname):
    if filename.endswith(".log"):
        starttime = ''
        endtime = ''
        sample = (filename.rsplit('__',1)[1]).split('.')[0]
        with open(dirname+'/'+filename) as f:
            for line in f:
                if 'Started transferring input files' in line: starttime = line.split(' ')[3]
                if 'Started transferring output files' in line: endtime = line.split(' ')[3]        
        if (starttime == '' or endtime == '') : continue
        duration = datetime.strptime(endtime, '%H:%M:%S') - datetime.strptime(starttime, '%H:%M:%S')
        if sample in times : 
            times[sample].append(duration)
        else : 
            times[sample] = [duration]

for sample in times:
    average_duration = sum(times[sample],timedelta(0)) / len(times[sample])
    min_duration = min(times[sample])
    max_duration = max(times[sample])

    print sample.ljust(8) + ' avg. '+str(average_duration).rsplit('.')[0]+' min '+str(min_duration)+' max '+str(max_duration)

