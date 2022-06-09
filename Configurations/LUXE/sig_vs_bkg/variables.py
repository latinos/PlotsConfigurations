# variables

#variables = {}
    
variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}


# Track ID
variables['track_id'] = {
    'name' : 'trackid[0]', 
    'range': (10000,0,10000),
    'xaxis': 'Track ID',
    'fold' : 3
}

# Track PDG ID
variables['track_pdg_id'] = {
    'name' : 'pdg[0]', 
    'range': (100,-50,50),
    'xaxis': 'Track PDG ID',
    'fold' : 3
}

# Physics process
variables['physproc'] = {
    'name' : 'physproc', 
    'range': (10000,0,10000),
    'xaxis': 'Track secondary production process',
    'fold' : 3
}

# Physics process - zooming around 0 
variables['physproc_zoom'] = {
    'name' : 'physproc', 
    'range': (100,0,100),
    'xaxis': 'Track secondary production process (zoom)',
    'fold' : 3
}

# Track energy
variables['energy'] = {
    'name' : 'E', 
    'range': (100,0,25),
    'xaxis': 'Track energy [GeV]',
    'fold' : 3
}

# Track energy (0.05 GeV bins)
variables['energy_high_res'] = {
    'name' : 'E', 
    'range': (500,0,25),
    'xaxis': 'Track energy [GeV]',
    'fold' : 3
}

# Track energy (0.05 GeV bins) x axis in (0,12)
variables['energy_high_res_zoom'] = {
    'name' : 'E', 
    'range': (240,0,12),
    'xaxis': 'Track energy [GeV]',
    'fold' : 3
}

# Track x coordinate
variables['x'] = {
    'name' : 'x',
    'range': (100,-10,10),
    'xaxis': 'Track x position []',
    'fold' : 3
}

# Track y coordinate
variables['y'] = {
    'name' : 'y',
    'range': (100,-10,10),
    'xaxis': 'Track y position []',
    'fold' : 3
}

# Track z coordinate
variables['z'] = {
    'name' : 'z',
    'range': (100,-10,10),
    'xaxis': 'Track z position []',
    'fold' : 3
}

# Track time
variables['t'] = {
    'name' : 't',
    'range': (100,0,1000),
    'xaxis': 'Track time []',
    'fold' : 3
}

# Vertex x position
variables['vtx_x'] = {
    'name' : 'vtxx', 
    'range': (100,-2500,2500),
    'xaxis': 'Vertex x position [mm]',
    'fold' : 3
}

# Vertex y position
variables['vtx_y'] = {
    'name' : 'vtxy', 
    'range': (100,-2500,2500),
    'xaxis': 'Vertex y position [mm]',
    'fold' : 3
}

# Vertex z position
variables['vtx_z'] = {
    'name' : 'vtxz',
    'range': (100,-2500,2500),
    'xaxis': 'Vertex z position [mm]',
    'fold' : 3
}

# Track x momentum
variables['px'] = {
    'name' : 'px',
    'range': (100,-25,25),
    'xaxis': 'Track x momentum [GeV]',
    'fold' : 3
}

# Track y momentum
variables['py'] = {
    'name' : 'py', 
    'range': (100,-25,25),
    'xaxis': 'Track y momentum [GeV]',
    'fold' : 3
}

# Track z momentum
variables['pz'] = {
    'name' : 'pz', 
    'range': (100,0,25),
    'xaxis': 'Track z momentum [GeV]',
    'fold' : 3
}

# Track theta coordinate
variables['theta'] = {
    'name' : 'theta', 
    'range': (100,0,2.5),
    'xaxis': 'Track theta angle',
    'fold' : 3
}

# Track phi coordinate
variables['phi'] = {
    'name' : 'phi', 
    'range': (64,-3.2,3.2),
    'xaxis': 'Track phi angle [rad]',
    'fold' : 3
}

# Track x local coordinate
variables['xlocal'] = {
    'name' : 'xlocal', 
    'range': (100,-2000,2000),
    'xaxis': 'Track x local position [mm]',
    'fold' : 3
}

# Track y local coordinate
variables['ylocal'] = {
    'name' : 'ylocal', 
    'range': (100,-2000,2000),
    'xaxis': 'Track y local position [mm]',
    'fold' : 3
}

# Track z local coordinate
variables['zlocal'] = {
    'name' : 'zlocal', 
    'range': (100,-2000,2000),
    'xaxis': 'Track z local position [mm]',
    'fold' : 3
}

# particle track ID?
variables['ptrackid'] = {
    'name' : 'ptrackid', 
    'range': (10000,0,10000),
    'xaxis': 'Ptrack ID',
    'fold' : 3
}

# Number of track secondary particles?
variables['nsecondary'] = {
    'name' : 'nsecondary', 
    'range': (100,0,500),
    'xaxis': 'Track number of secondary particles',
    'fold' : 3
}

# Detector ID
variables['detid'] = {
    'name' : 'detid', 
    'range': (1000,0,10000),
    'xaxis': 'Detector ID',
    'fold' : 3
}
