#ifndef RotationSpeed_H
#define RotationSpeed_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class RotationSpeed : public BaseClass
	{

	public:
		RotationSpeed();
		virtual ~RotationSpeed();
		RotationSpeed(long double value);
		static const BaseClassDefiner declare();
		RotationSpeed& operator=(long double &rop);
		RotationSpeed& operator+=(const RotationSpeed& rhs);
		RotationSpeed& operator-=(const RotationSpeed& rhs);
		RotationSpeed& operator*=(const RotationSpeed& rhs);
		RotationSpeed& operator/=(const RotationSpeed& rhs);
		friend std::istream& operator>>(std::istream& lop, RotationSpeed& rop);
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
