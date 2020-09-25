#ifndef Area_H
#define Area_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Area : public BaseClass
	{
	
	public:
		Area();
		virtual ~Area();
		Area(long double value);
		static const BaseClassDefiner declare();
		Area& operator=(long double &rop);
		Area& operator+=(const Area& rhs);
		Area& operator-=(const Area& rhs);
		Area& operator*=(const Area& rhs);
		Area& operator/=(const Area& rhs);
		friend std::istream& operator>>(std::istream& lop, Area& rop);
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
