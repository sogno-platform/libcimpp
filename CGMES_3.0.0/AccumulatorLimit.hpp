#ifndef AccumulatorLimit_H
#define AccumulatorLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Limit.hpp"
#include "BaseClassDefiner.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class AccumulatorLimitSet;

	/*
	Limit values for Accumulator measurements.
	*/
	class AccumulatorLimit : public Limit
	{
	public:
		/* constructor initialising all attributes to null */
		AccumulatorLimit();
		~AccumulatorLimit() override;

		CIMPP::AccumulatorLimitSet* LimitSet;  /* The set of limits. Default: 0 */
		CIMPP::Integer value;  /* The value to supervise against. The value is positive. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AccumulatorLimit_factory();
}
#endif
