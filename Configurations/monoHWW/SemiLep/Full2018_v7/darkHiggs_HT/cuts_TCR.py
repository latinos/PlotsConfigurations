handle = open('cuts.py', 'r')
exec(handle)
handle.close()

del cuts['InCh_SR']
del cuts['InCh_SB']
