#ifndef PU_H
#define PU_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class PU : public BaseClass
	{
	
	public:
		PU();
		virtual ~PU();
		PU(long double value);
		static const BaseClassDefiner declare();
		PU& operator=(long double &rop);
		PU& operator+=(const PU& rhs);
		PU& operator-=(const PU& rhs);
		PU& operator*=(const PU& rhs);
		PU& operator/=(const PU& rhs);
		friend std::istream& operator>>(std::istream& lop, PU& rop);
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
