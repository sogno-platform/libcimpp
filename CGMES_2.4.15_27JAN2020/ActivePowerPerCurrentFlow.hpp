#ifndef ActivePowerPerCurrentFlow_H
#define ActivePowerPerCurrentFlow_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ActivePowerPerCurrentFlow : public BaseClass
	{

	public:
		ActivePowerPerCurrentFlow();
		virtual ~ActivePowerPerCurrentFlow();
		ActivePowerPerCurrentFlow(long double value);
		static const BaseClassDefiner declare();
		ActivePowerPerCurrentFlow& operator=(long double &rop);
		ActivePowerPerCurrentFlow& operator+=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator-=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator*=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator/=(const ActivePowerPerCurrentFlow& rhs);
		friend std::istream& operator>>(std::istream& lop, ActivePowerPerCurrentFlow& rop);
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
