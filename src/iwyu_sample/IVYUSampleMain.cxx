/*
 * IVYUSampleMain.cxx
 *
 *	A simple demo program to illustrate the use of iwyu
 *
 *  Created on: Jul 4, 2017
 *      Author: peter
 */

#include <iostream> // iostream is not required in this class

#include "HelloHelper.h"

int main(int argc, char *argv[])
{
	HelloHelper myHelper("Peter");

	myHelper.sayHello();
}
