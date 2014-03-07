/*
 *  $Id: binding.cc, 2014-03-07 13:43:56 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 07/03/2014
*/

/*
 *  binding core and path into python, then we can control them in DmpRun.py
 *
 */

#include "DmpCore.h"
#include "DmpVDataManager.h"

//#include "boost/make_shared.hpp"
//#include "boost/noncopyable.hpp"
#include "boost/python.hpp"
//#include <boost/python/module.hpp>
//#include <boost/python/class.hpp>

BOOST_PYTHON_MODULE(libDmpCore){
  using namespace boost::python;
//  using namespace DmpCore;
  def("Simulation",DmpCore::simulationMain);

  class_<DmpVDataManager,boost::noncopyable>("PathManager",no_init)
    .def("SetPath",&DmpVDataManager::SetPath)
    .staticmethod("SetPath")
    ;

}
