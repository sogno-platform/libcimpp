#ifndef Resistance_H
#define Resistance_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Resistance : public BaseClass
	{

	public:
		Resistance();
		virtual ~Resistance();
		Resistance(long double value);
		static const BaseClassDefiner declare();
		Resistance& operator=(long double &rop);
		Resistance& operator+=(const Resistance& rhs);
		Resistance& operator-=(const Resistance& rhs);
		Resistance& operator*=(const Resistance& rhs);
		Resistance& operator/=(const Resistance& rhs);
		friend std::istream& operator>>(std::istream& lop, Resistance& rop);
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
