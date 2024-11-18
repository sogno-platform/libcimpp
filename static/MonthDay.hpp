#ifndef MonthDay_H
#define MonthDay_H

#include <string>
#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	MonthDay format as "--mm-dd", which conforms with XSD data type gMonthDay.
	*/
	class MonthDay
	{
	public:
		MonthDay() : initialized(false) {}
		MonthDay(const std::string& value) : value(value), initialized(true) {}

		MonthDay& operator=(const std::string &rop);
		operator std::string() const;

		std::string value;
		bool initialized;

		static const char debugName[];
		const char* debugString();

		friend std::istream& operator>>(std::istream& lop, MonthDay& rop);
		friend std::ostream& operator<<(std::ostream& os, const MonthDay& obj);
	};
}
#endif
