#ifndef DateTime_H
#define DateTime_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>
#include <string>

namespace CIMPP
{
	/** \brief Date and time as "yyyy-mm-ddThh:mm:ss.sss", which conforms with ISO 8601. UTC time zone is specified as "yyyy-mm-ddThh:mm:ss.sssZ". A local timezone relative UTC is specified as "yyyy-mm-ddThh:mm:ss.sss-hh:mm". The second component (shown here as "ss.sss") could have any number of digits in its fractional part to allow any kind of precision beyond seconds. */
	class DateTime
	{
	public:
		DateTime() : initialized(false) {}
		DateTime(const std::string& value) : value(value), initialized(true) {}

		DateTime& operator=(const std::string& rop);
		operator std::string() const;

		std::string value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, DateTime& rop);
		friend std::ostream& operator<<(std::ostream& os, const DateTime& obj);
	};
}
#endif
