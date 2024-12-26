#ifndef ResistancePerLength_H
#define ResistancePerLength_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class ResistancePerLength : public BaseClass
	{

	public:
		ResistancePerLength();
		virtual ~ResistancePerLength();
		ResistancePerLength(long double value);
		static const BaseClassDefiner declare();
		ResistancePerLength& operator=(long double &rop);
		ResistancePerLength& operator+=(const ResistancePerLength& rhs);
		ResistancePerLength& operator-=(const ResistancePerLength& rhs);
		ResistancePerLength& operator*=(const ResistancePerLength& rhs);
		ResistancePerLength& operator/=(const ResistancePerLength& rhs);
		friend std::istream& operator>>(std::istream& lop, ResistancePerLength& rop);
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
