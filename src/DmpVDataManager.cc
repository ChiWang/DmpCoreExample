/*
 *  $Id: DmpVDataManager.cc, 2014-03-07 12:19:40 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 07/03/2014
*/

#include <iostream>
#include "DmpVDataManager.h"

std::string DmpVDataManager::m_InDataPath = "./";

DmpVDataManager::DmpVDataManager(){
std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<"), in "<<__PRETTY_FUNCTION__<<std::endl;
}

DmpVDataManager::~DmpVDataManager(){
std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<"), in "<<__PRETTY_FUNCTION__<<std::endl;
}

void DmpVDataManager::SetPath(std::string path){
std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<"), in "<<__PRETTY_FUNCTION__<<std::endl;
  m_InDataPath = path;
}

void DmpVDataManager::PrintPath(){
std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<"), in "<<__PRETTY_FUNCTION__<<"\t path = "<<m_InDataPath<<std::endl;
}
