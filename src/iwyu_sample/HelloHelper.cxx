/*
 * HelloHelper.cpp
 *
 *  Created on: Jul 4, 2017
 *      Author: peter
 */

#include "HelloHelper.h"

#include <iostream>

HelloHelper::HelloHelper(const std::string &name):
  _name(name),
  _myHelper(new LangHelper(LangHelper::ge_ge))
{}

HelloHelper::~HelloHelper()
{}

void HelloHelper::sayHello()
{
	std::cout<<_myHelper->getHello()<<", "<<_name<<"!!!"<<std::endl;
}

