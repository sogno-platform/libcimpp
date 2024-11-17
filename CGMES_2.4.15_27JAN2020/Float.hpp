#ifndef Float_H
#define Float_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Float : public BaseClass
	{

	public:
		Float();
		virtual ~Float();
		Float(long double value);
		static const BaseClassDefiner declare();
		Float& operator=(long double &rop);
		Float& operator+=(const Float& rhs);
		Float& operator-=(const Float& rhs);
		Float& operator*=(const Float& rhs);
		Float& operator/=(const Float& rhs);
		friend std::istream& operator>>(std::istream& lop, Float& rop);
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
