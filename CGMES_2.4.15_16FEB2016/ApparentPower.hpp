#ifndef ApparentPower_H
#define ApparentPower_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ApparentPower : public BaseClass
	{

	public:
		ApparentPower();
		virtual ~ApparentPower();
		ApparentPower(long double value);
		static const BaseClassDefiner declare();
		ApparentPower& operator=(long double &rop);
		ApparentPower& operator+=(const ApparentPower& rhs);
		ApparentPower& operator-=(const ApparentPower& rhs);
		ApparentPower& operator*=(const ApparentPower& rhs);
		ApparentPower& operator/=(const ApparentPower& rhs);
		friend std::istream& operator>>(std::istream& lop, ApparentPower& rop);
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
