#! /usr/bin/python
'''
 *  $Id: DmpRun.py, 2014-03-07 13:22:33 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 07/03/2014
'''

import os
import libDmpCore as dmpCore

dmpCore.Simulation()

print "an other run..."
dmpCore.PathManager.SetPath(os.environ['HOME']+'/Geometry')
dmpCore.Simulation()
