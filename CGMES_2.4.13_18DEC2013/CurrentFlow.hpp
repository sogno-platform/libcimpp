#ifndef CurrentFlow_H
#define CurrentFlow_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class CurrentFlow : public BaseClass
	{
	
	public:
		CurrentFlow();
		virtual ~CurrentFlow();
		CurrentFlow(long double value);
		static const BaseClassDefiner declare();
		CurrentFlow& operator=(long double &rop);
		CurrentFlow& operator+=(const CurrentFlow& rhs);
		CurrentFlow& operator-=(const CurrentFlow& rhs);
		CurrentFlow& operator*=(const CurrentFlow& rhs);
		CurrentFlow& operator/=(const CurrentFlow& rhs);
		friend std::istream& operator>>(std::istream& lop, CurrentFlow& rop);
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
