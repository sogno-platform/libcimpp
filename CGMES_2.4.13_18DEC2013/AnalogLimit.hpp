#ifndef AnalogLimit_H
#define AnalogLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Limit.hpp"
#include "BaseClassDefiner.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class AnalogLimitSet;

	/*
	Limit values for Analog measurements.
	*/
	class AnalogLimit : public Limit
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogLimit();
		~AnalogLimit() override;

		CIMPP::AnalogLimitSet* LimitSet;  /* The limit values used for supervision of Measurements. Default: 0 */
		CIMPP::Simple_Float value;  /* The value to supervise against. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AnalogLimit_factory();
}
#endif
