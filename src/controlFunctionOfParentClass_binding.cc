
#include "DmpSimulation.h"
#include "DmpVDataManager.h"

//#include "boost/make_shared.hpp"
//#include "boost/noncopyable.hpp"
#include "boost/python.hpp"
//#include <boost/python/module.hpp>
//#include <boost/python/class.hpp>

BOOST_PYTHON_MODULE(libDmpCore){
  using namespace boost::python;
  def("dmpSimulation",simulationMain);

  class_<DmpVDataManager,boost::noncopyable>("PathManager",no_init)
    .def("SetPath",&DmpVDataManager::SetPath)
    .staticmethod("SetPath")
    ;

}
