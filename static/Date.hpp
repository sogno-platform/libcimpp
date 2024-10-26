#ifndef Date_H
#define Date_H

#include "BaseClass.hpp"
#include "String.hpp"


/*
Date as "yyyy-mm-dd", which conforms with ISO 8601. UTC time zone is specified as "yyyy-mm-ddZ". A local timezone relative UTC is specified as "yyyy-mm-dd(+/-)hh:mm".
*/
namespace CIMPP {

	class Date: public BaseClass
	{
	public:
		Date();
		Date(String);
		virtual ~Date();

	private:
		String value;
	};

	BaseClass* Date_factory();
}
#endif
