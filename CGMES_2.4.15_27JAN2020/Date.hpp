#ifndef Date_H
#define Date_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>
#include <string>

namespace CIMPP
{
	/** \brief Date as "yyyy-mm-dd", which conforms with ISO 8601. UTC time zone is specified as "yyyy-mm-ddZ". A local timezone relative UTC is specified as "yyyy-mm-dd(+/-)hh:mm". */
	class Date
	{
	public:
		Date() : initialized(false) {}
		Date(const std::string& value) : value(value), initialized(true) {}

		Date& operator=(const std::string& rop);
		operator std::string() const;

		std::string value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, Date& rop);
		friend std::ostream& operator<<(std::ostream& os, const Date& obj);
	};
}
#endif
