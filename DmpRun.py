#! /usr/bin/python
import os
import libDmpCore as dmpCore

dmpCore.dmpSimulation()

print "an other run..."
dmpCore.PathManager.SetPath(os.environ['HOME']+'/Geometry')
dmpCore.dmpSimulation()
