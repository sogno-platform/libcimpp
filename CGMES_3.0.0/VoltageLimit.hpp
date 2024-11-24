#ifndef VoltageLimit_H
#define VoltageLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OperationalLimit.hpp"
#include "BaseClassDefiner.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/*
	Operational limit applied to voltage. The use of operational VoltageLimit is preferred instead of limits defined at VoltageLevel. The operational VoltageLimits are used, if present.
	*/
	class VoltageLimit : public OperationalLimit
	{
	public:
		/* constructor initialising all attributes to null */
		VoltageLimit();
		~VoltageLimit() override;

		CIMPP::Voltage normalValue;  /* The normal limit on voltage. High or low limit nature of the limit depends upon the properties of the operational limit type. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::Voltage value;  /* Limit on voltage. High or low limit nature of the limit depends upon the properties of the operational limit type. The attribute shall be a positive value or zero. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VoltageLimit_factory();
}
#endif
