#ifndef PerCent_H
#define PerCent_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class PerCent : public BaseClass
	{

	public:
		PerCent();
		virtual ~PerCent();
		PerCent(long double value);
		static const BaseClassDefiner declare();
		PerCent& operator=(long double &rop);
		PerCent& operator+=(const PerCent& rhs);
		PerCent& operator-=(const PerCent& rhs);
		PerCent& operator*=(const PerCent& rhs);
		PerCent& operator/=(const PerCent& rhs);
		friend std::istream& operator>>(std::istream& lop, PerCent& rop);
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
