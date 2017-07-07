/*
 * LangHelper.h
 *
 * A simple demo class to request words in different languages. Since this class is just
 * to demonstrate iwyu, we are well awre of the fact, that this is by far not the most elegant
 * approach to solve translation requirements - but it's quite helpful to explain the use
 * of iwyu.
 *
 *  Created on: Jul 4, 2017
 *      Author: peter
 */

#ifndef SRC_IWYU_SAMPLE_LANGHELPER_H_
#define SRC_IWYU_SAMPLE_LANGHELPER_H_

#include <string>

class LangHelper {
public:
	typedef enum{
		en_en,
		ge_ge,
	}Language;

	LangHelper(const Language lang);
	virtual ~LangHelper();

	std::string getHello();

private:
	Language _lang;
};

#endif /* SRC_IWYU_SAMPLE_LANGHELPER_H_ */
