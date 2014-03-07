#include "DmpSimulation.h"
#include "DmpSimDataManager.h"

int simulationMain(){
  DmpSimDataManager *simDataMan = new DmpSimDataManager();
  simDataMan->PrintPath();
  return 0;
}


