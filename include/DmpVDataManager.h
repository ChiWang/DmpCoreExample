/*
 *  $Id: DmpVDataManager.h, 2014-03-07 11:22:30 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 07/03/2014
*/

#ifndef DmpVDataManager_H
#define DmpVDataManager_H

#include <string>

class DmpVDataManager{
public:
  DmpVDataManager();
  ~DmpVDataManager();
  static void SetPath(std::string);
  void PrintPath();

private:
  static std::string m_InDataPath;

};

#endif

