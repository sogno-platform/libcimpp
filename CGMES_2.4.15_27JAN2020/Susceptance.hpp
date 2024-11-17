#ifndef Susceptance_H
#define Susceptance_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Susceptance : public BaseClass
	{

	public:
		Susceptance();
		virtual ~Susceptance();
		Susceptance(long double value);
		static const BaseClassDefiner declare();
		Susceptance& operator=(long double &rop);
		Susceptance& operator+=(const Susceptance& rhs);
		Susceptance& operator-=(const Susceptance& rhs);
		Susceptance& operator*=(const Susceptance& rhs);
		Susceptance& operator/=(const Susceptance& rhs);
		friend std::istream& operator>>(std::istream& lop, Susceptance& rop);
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
