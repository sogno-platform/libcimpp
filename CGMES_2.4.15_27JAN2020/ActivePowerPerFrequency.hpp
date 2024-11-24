#ifndef ActivePowerPerFrequency_H
#define ActivePowerPerFrequency_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ActivePowerPerFrequency : public BaseClass
	{

	public:
		ActivePowerPerFrequency();
		virtual ~ActivePowerPerFrequency();
		ActivePowerPerFrequency(long double value);
		static const BaseClassDefiner declare();
		ActivePowerPerFrequency& operator=(long double &rop);
		ActivePowerPerFrequency& operator+=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator-=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator*=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator/=(const ActivePowerPerFrequency& rhs);
		friend std::istream& operator>>(std::istream& lop, ActivePowerPerFrequency& rop);
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
