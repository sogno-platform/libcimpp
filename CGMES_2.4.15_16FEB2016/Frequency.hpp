#ifndef Frequency_H
#define Frequency_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Frequency : public BaseClass
	{

	public:
		Frequency();
		virtual ~Frequency();
		Frequency(long double value);
		static const BaseClassDefiner declare();
		Frequency& operator=(long double &rop);
		Frequency& operator+=(const Frequency& rhs);
		Frequency& operator-=(const Frequency& rhs);
		Frequency& operator*=(const Frequency& rhs);
		Frequency& operator/=(const Frequency& rhs);
		friend std::istream& operator>>(std::istream& lop, Frequency& rop);
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
