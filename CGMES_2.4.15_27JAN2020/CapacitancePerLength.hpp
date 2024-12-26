#ifndef CapacitancePerLength_H
#define CapacitancePerLength_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class CapacitancePerLength : public BaseClass
	{

	public:
		CapacitancePerLength();
		virtual ~CapacitancePerLength();
		CapacitancePerLength(long double value);
		static const BaseClassDefiner declare();
		CapacitancePerLength& operator=(long double &rop);
		CapacitancePerLength& operator+=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator-=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator*=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator/=(const CapacitancePerLength& rhs);
		friend std::istream& operator>>(std::istream& lop, CapacitancePerLength& rop);
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
