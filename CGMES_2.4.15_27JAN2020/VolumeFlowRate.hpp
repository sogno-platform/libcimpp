#ifndef VolumeFlowRate_H
#define VolumeFlowRate_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class VolumeFlowRate : public BaseClass
	{

	public:
		VolumeFlowRate();
		virtual ~VolumeFlowRate();
		VolumeFlowRate(long double value);
		static const BaseClassDefiner declare();
		VolumeFlowRate& operator=(long double &rop);
		VolumeFlowRate& operator+=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator-=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator*=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator/=(const VolumeFlowRate& rhs);
		friend std::istream& operator>>(std::istream& lop, VolumeFlowRate& rop);
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
