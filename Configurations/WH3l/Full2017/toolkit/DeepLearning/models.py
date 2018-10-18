#!/usr/bin/env python

import copy

from keras.models import Sequential
from keras.layers.core import Dense, Activation
from keras.regularizers import l2
from keras.optimizers import SGD

models={}

models['default'] = {
    'name'  : "default",
    'model' : None,
}

models['seq'] = copy.deepcopy(models['default'])
models['seq']['name']="seq"

models['seq']['model'] = Sequential()
models['seq']['model'].add(Dense(32, activation='relu', W_regularizer=l2(1e-5), input_dim=4))
models['seq']['model'].add(Dense(4, activation='softmax'))
models['seq']['model'].compile(loss='categorical_crossentropy', optimizer=SGD(lr=0.01), metrics=['accuracy',])

