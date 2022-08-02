#!/bin/bash


cd Full2016v7

mkShapesMulti.py --pycfg=configuration_fit_v4_2016.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday;

cd ..


cd Full2017v7

mkShapesMulti.py --pycfg=configuration_fit_v4_2017.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday;

cd ..

cd Full2018v7

mkShapesMulti.py --pycfg=configuration_fit_v4_2018.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday;

cd ..