
#include "BaseClass.hpp"
#include "Date.hpp"
#include "String.hpp"

using namespace CIMPP;

Date::Date() {}

Date::Date(String s)
{
	value=s;
}

Date::~Date() {}

BaseClass* Date_factory()
{
	return new Date;
}
