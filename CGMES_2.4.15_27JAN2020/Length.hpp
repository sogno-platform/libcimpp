#ifndef Length_H
#define Length_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Length : public BaseClass
	{

	public:
		Length();
		virtual ~Length();
		Length(long double value);
		static const BaseClassDefiner declare();
		Length& operator=(long double &rop);
		Length& operator+=(const Length& rhs);
		Length& operator-=(const Length& rhs);
		Length& operator*=(const Length& rhs);
		Length& operator/=(const Length& rhs);
		friend std::istream& operator>>(std::istream& lop, Length& rop);
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
