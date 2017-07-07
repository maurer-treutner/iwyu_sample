/*
 * HelloHelper.h
 *
 * A simple demo class for explaining the use of iwyo.
 * It ist able to great the name given in constructor.
 *
 *  Created on: Jul 4, 2017
 *      Author: peter
 */

#ifndef SRC_IWYU_SAMPLE_HELLOHELPER_H_
#define SRC_IWYU_SAMPLE_HELLOHELPER_H_

#include <string>
#include <memory>

#include "LangHelper.h"

class HelloHelper {
public:
	HelloHelper(const std::string &name);
	virtual ~HelloHelper();

	void sayHello();

private:
	std::string _name;
	std::shared_ptr<LangHelper> _myHelper;

};

#endif /* SRC_IWYU_SAMPLE_HELLOHELPER_H_ */
