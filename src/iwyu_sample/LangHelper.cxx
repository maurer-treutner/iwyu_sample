/*
 * LangHelper.cxx
 *
 *  Created on: Jul 4, 2017
 *      Author: peter
 */

#include "LangHelper.h"

LangHelper::LangHelper(const Language lang):
  _lang(lang)
{}

LangHelper::~LangHelper()
{}

std::string LangHelper::getHello()
{
	std::string rv;

	switch (_lang)
	{
	case ge_ge:
		rv = "Hallo";
		break;
	case en_en:
		rv = "Hello";
		break;
	default:
		rv = "HELLO (undefined language)";
	}
	return rv;
}
