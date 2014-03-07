/*
 *  $Id: DmpEntranceSimulation.cc, 2014-03-07 13:43:57 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 07/03/2014
*/

#include "DmpCore.h"
#include "DmpSimDataManager.h"

int DmpCore::simulationMain(){
  DmpSimDataManager *simDataMan = new DmpSimDataManager();
  simDataMan->PrintPath();
  return 0;
}


