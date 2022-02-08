handle = open('structure.py', 'r')
exec(handle)
handle.close()

try:
    signal
except NameError: 
    signal_file = 'darkHiggs_central.py'
    signal_file_int = 'darkHiggs_interpolation.py'
    if os.path.exists(signal_file) :
        handle = open(signal_file,'r')
        exec(handle)
        handle.close()
    else:
        raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')
    
    if os.path.exists(signal_file_int) :
        handle = open(signal_file_int,'r')
        exec(handle)
        handle.close()
    else:
        raise IOError('FILE NOT FOUND: '+signal_file_int+'does not exist.')


for mp in signal:
    structure[mp] = {
        'isSignal': 2,
        'isData'  : 0,
    }
