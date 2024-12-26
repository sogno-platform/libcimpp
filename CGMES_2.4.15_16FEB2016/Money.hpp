#ifndef Money_H
#define Money_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Money : public BaseClass
	{

	public:
		Money();
		virtual ~Money();
		Money(long double value);
		static const BaseClassDefiner declare();
		Money& operator=(long double &rop);
		Money& operator+=(const Money& rhs);
		Money& operator-=(const Money& rhs);
		Money& operator*=(const Money& rhs);
		Money& operator/=(const Money& rhs);
		friend std::istream& operator>>(std::istream& lop, Money& rop);
		operator long double();

		long double value = 0.0;
		bool initialized = false;

		static const char debugName[];
		virtual const char* debugString();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	};
}
#endif
