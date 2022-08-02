handle = open('cuts.py', 'r')
exec(handle)
handle.close()

del cuts['InCh_SB']
del cuts['InCh_TCR']
