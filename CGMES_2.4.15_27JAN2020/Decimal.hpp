#ifndef Decimal_H
#define Decimal_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Decimal : public BaseClass
	{

	public:
		Decimal();
		virtual ~Decimal();
		Decimal(long double value);
		static const BaseClassDefiner declare();
		Decimal& operator=(long double &rop);
		Decimal& operator+=(const Decimal& rhs);
		Decimal& operator-=(const Decimal& rhs);
		Decimal& operator*=(const Decimal& rhs);
		Decimal& operator/=(const Decimal& rhs);
		friend std::istream& operator>>(std::istream& lop, Decimal& rop);
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
