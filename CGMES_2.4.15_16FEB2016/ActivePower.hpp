#ifndef ActivePower_H
#define ActivePower_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ActivePower : public BaseClass
	{

	public:
		ActivePower();
		virtual ~ActivePower();
		ActivePower(long double value);
		static const BaseClassDefiner declare();
		ActivePower& operator=(long double &rop);
		ActivePower& operator+=(const ActivePower& rhs);
		ActivePower& operator-=(const ActivePower& rhs);
		ActivePower& operator*=(const ActivePower& rhs);
		ActivePower& operator/=(const ActivePower& rhs);
		friend std::istream& operator>>(std::istream& lop, ActivePower& rop);
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
