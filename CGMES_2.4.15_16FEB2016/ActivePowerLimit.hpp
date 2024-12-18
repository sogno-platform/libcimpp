#ifndef ActivePowerLimit_H
#define ActivePowerLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OperationalLimit.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"

namespace CIMPP
{

	/*
	Limit on active power flow.
	*/
	class ActivePowerLimit : public OperationalLimit
	{
	public:
		/* constructor initialising all attributes to null */
		ActivePowerLimit();
		~ActivePowerLimit() override;

		CIMPP::ActivePower value;  /* Value of active power limit. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ActivePowerLimit_factory();
}
#endif
