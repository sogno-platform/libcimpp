#ifndef DateTime_H
#define DateTime_H

#include <string>
#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Date and time as "yyyy-mm-ddThh:mm:ss.sss", which conforms with ISO 8601. UTC time zone is specified as "yyyy-mm-ddThh:mm:ss.sssZ". A local timezone relative UTC is specified as "yyyy-mm-ddThh:mm:ss.sss-hh:mm". The second component (shown here as "ss.sss") could have any number of digits in its fractional part to allow any kind of precision beyond seconds.
	*/
	class DateTime
	{
	public:
		DateTime() : initialized(false) {}
		DateTime(const std::string& value) : value(value), initialized(true) {}

		DateTime& operator=(const std::string &rop);
		operator std::string() const;

		std::string value;
		bool initialized;

		static const char debugName[];
		const char* debugString();

		friend std::istream& operator>>(std::istream& lop, DateTime& rop);
		friend std::ostream& operator<<(std::ostream& os, const DateTime& obj);
	};
}
#endif
