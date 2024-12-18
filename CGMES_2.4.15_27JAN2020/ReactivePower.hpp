#ifndef ReactivePower_H
#define ReactivePower_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ReactivePower : public BaseClass
	{

	public:
		ReactivePower();
		virtual ~ReactivePower();
		ReactivePower(long double value);
		static const BaseClassDefiner declare();
		ReactivePower& operator=(long double &rop);
		ReactivePower& operator+=(const ReactivePower& rhs);
		ReactivePower& operator-=(const ReactivePower& rhs);
		ReactivePower& operator*=(const ReactivePower& rhs);
		ReactivePower& operator/=(const ReactivePower& rhs);
		friend std::istream& operator>>(std::istream& lop, ReactivePower& rop);
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
