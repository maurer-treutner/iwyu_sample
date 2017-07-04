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

std::string LangHelper::getGoodBye()
{
	std::string rv;

	switch (_lang)
	{
	case ge_ge:
		rv = "Tschuess";
		break;
	case en_en:
		rv = "Bye bye";
		break;
	default:
		rv = "GOOD BYE (undefined language)";
	}
	return rv;
}
