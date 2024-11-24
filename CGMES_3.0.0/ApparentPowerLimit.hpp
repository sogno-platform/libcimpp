#ifndef ApparentPowerLimit_H
#define ApparentPowerLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OperationalLimit.hpp"
#include "BaseClassDefiner.hpp"
#include "ApparentPower.hpp"

namespace CIMPP
{

	/*
	Apparent power limit.
	*/
	class ApparentPowerLimit : public OperationalLimit
	{
	public:
		/* constructor initialising all attributes to null */
		ApparentPowerLimit();
		~ApparentPowerLimit() override;

		CIMPP::ApparentPower normalValue;  /* The normal apparent power limit. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::ApparentPower value;  /* The apparent power limit. The attribute shall be a positive value or zero. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ApparentPowerLimit_factory();
}
#endif
