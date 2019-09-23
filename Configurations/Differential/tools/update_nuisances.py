import collections
import copy

def update_nuisances(nuisances, samples, cuts, sample_merging=None, cut_merging=None):
    """
    Update the nuisance dictionary using flattened samples and cuts. During mkShapes, 'samples' and 'cuts' entries in
    each nuisance have to refer to the parent sample / uncategorized cut name. For plotting and datacard making, the
    subsamples and categories appear in the histogram file as if there were samples and cuts as <sample>_<subsample>
    and <cut>_<category>. 
    The arguments samples and cuts must already be flattened, i.e., there must be one entry per subsample and per category
    in the dictionaries, respectively. Finally, if samples are being merged into smaller numbers of samples, nuisances will also be merged and in some cases
    change their types. The function returns a new nuisance dictionary in terms of merged samples if sample_merging is provided
    with structure {new_sample: [merged_sample_names]}.
    """

    if sample_merging is not None or cut_merging is not None:
        new_nuisances = collections.OrderedDict()
    else:
        new_nuisances = None

    if sample_merging is not None:
        merged_samples = set()
        for sources in sample_merging.itervalues():
            merged_samples.update(sources)

    if cut_merging is not None:
        reverse_cut_merging = {}
        for target, sources in cut_merging.iteritems():
            reverse_cut_merging.update((source, target) for source in sources)

    for nname, nuisance in nuisances.iteritems():
        if nname == 'stat':
            if new_nuisances is not None:
                new_nuisances[nname] = copy.deepcopy(nuisance)

            continue

        if 'samplespost' in nuisance:
            nuisance['samples'] = nuisance['samplespost'](nuisance, samples)
                
        if 'cutspost' in nuisance:
            nuisance['cuts'] = nuisance['cutspost'](nuisance, cuts)

        if sample_merging is None and cut_merging is None:
            continue

        new_nuisance = new_nuisances[nname] = copy.deepcopy(nuisance)

        if sample_merging is not None:
            new_nuisance['samples'] = {}
    
            affected = set(nuisance['samples'].iterkeys())
    
            if nuisance['type'] == 'lnN':
                # if samples affected by this uncertainty are all merged with uniform values, we let the nuisance stay as lnN
                to_shape = False
                for target, sources in sample_merging.iteritems():
                    ssources = set(sources)
                    affected_sources = affected & ssources

                    if len(affected_sources) == 0:
                        # this nuisance has nothing to do with the target
                        continue
    
                    var_values = set(nuisance['samples'][s] for s in affected_sources)

                    if affected_sources == ssources and len(var_values) == 1:
                        # this nuisance affects all sources with a uniform value
                        new_nuisance['samples'][target] = var_values.pop()
                        continue

                    # only a subset of sources is affected, or there are multiple values within the merged samples
                    to_shape = True
                    break
    
                if to_shape:
                    new_nuisance['type'] = 'shape'
                    new_nuisance['samples'] = dict((target, ['1.', '1.']) for target, sources in sample_merging.iteritems() if len(set(sources) & affected) != 0)
    
                    for sname in nuisance['samples'].iterkeys():
                        if sname not in merged_samples:
                            new_nuisance['samples'][sname] = ['1.', '1.']
    
                else:
                    for sname, value in nuisance['samples'].iteritems():
                        if sname not in merged_samples:
                            new_nuisance['samples'][sname] = value
    
            else:
                for target, sources in sample_merging.iteritems():
                    if len(set(sources) & affected) != 0:
                        new_nuisance['samples'][target] = ['1.', '1.']
    
                for sname in nuisance['samples'].iterkeys():
                    if sname not in merged_samples:
                        new_nuisance['samples'][sname] = ['1.', '1.']

        if cut_merging is not None and 'cuts' in nuisance:
            new_cuts = set()

            for cname in nuisance['cuts']:
                try:
                    new_cuts.add(reverse_cut_merging[cname])
                except KeyError:
                    new_cuts.add(cname)

            new_nuisance['cuts'] = list(new_cuts)

    return new_nuisances
