Ground 0
```````
To initialize mkShapesMulti, use the in-line command $ cmssw-el7, which opens a container to use el7 with our current LXplus{8,9} host. Initialize $ cmsenv, and then submit the first step of mkShapesMulti from the container. This will serve to craft all of the `.sh` files needed to continue to condor submission. Exit the container via $ exit, and continue as normal in whatever LXplus{8,9} host.
```````

Step 1
```````
In a normal LXplus machine, within the file `make_list_of_dirs.py`, insert your working directory (example therein), which normally houses your `mkShapes__offshellDATE_v9_PROCESS__ALL` files to run on condor.
Run with $ python3 make_list_of_dirs.py
Will output a dirs.txt file, which houses all of your executable paths
```````

Step 2
```````
Run the `condor_submit` file with $condor_submit condor_submit
```````
