
def cmssw_template(user, cmssw):
    script = '''#!/bin/sh -e

    export X509_USER_PROXY=/afs/cern.ch/user/{user1}/{user}/.proxy
    voms-proxy-info

    cp -r {cmssw_loc} .
    cd {cmssw_file}/src

    echo -e "evaluate"
    eval `scramv1 ru -sh`
    '''

    script = script.replace("{user1}", user[:1])
    script = script.replace("{user}", user)
    cmssw_file = cmssw.split("/")[-1]
    script = script.replace("{cmssw_loc}", cmssw)
    script = script.replace("{cmssw_file}", cmssw_file)

    return script


def jds_template(exe, output, n_jobs, lines=[]):
    jds = []
    jds.append("executable = {0}".format(exe))
    jds.append("arguments = $(ProcId)")
    jds.append("universe = vanilla")
    jds.append("output = {}/gof_$(ProcId).out".format(output))
    jds.append("error = {}/gof_$(ProcId).err".format(output))
    jds.append("log = {}/gof_$(ClusterId).log".format(output))
    jds.append("+JobFlavour = 'espresso'")
    jds += lines
    jds.append("queue {}".format(n_jobs))
    return "\n".join(jds)