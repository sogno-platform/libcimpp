#ifndef String_H
#define String_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>
#include <string>

namespace CIMPP
{
	/** \brief A string consisting of a sequence of characters. The character encoding is UTF-8. The string length is unspecified and unlimited. */
	class String
	{
	public:
		String() : initialized(false) {}
		String(const std::string& value) : value(value), initialized(true) {}

		String& operator=(const std::string& rop);
		operator std::string() const;

		std::string value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, String& rop);
		friend std::ostream& operator<<(std::ostream& os, const String& obj);
	};
}
#endif
