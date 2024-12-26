#ifndef InductancePerLength_H
#define InductancePerLength_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class InductancePerLength : public BaseClass
	{

	public:
		InductancePerLength();
		virtual ~InductancePerLength();
		InductancePerLength(long double value);
		static const BaseClassDefiner declare();
		InductancePerLength& operator=(long double &rop);
		InductancePerLength& operator+=(const InductancePerLength& rhs);
		InductancePerLength& operator-=(const InductancePerLength& rhs);
		InductancePerLength& operator*=(const InductancePerLength& rhs);
		InductancePerLength& operator/=(const InductancePerLength& rhs);
		friend std::istream& operator>>(std::istream& lop, InductancePerLength& rop);
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
