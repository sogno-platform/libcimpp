#ifndef AccumulatorLimitSet_H
#define AccumulatorLimitSet_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "LimitSet.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class Accumulator;
	class AccumulatorLimit;

	/*
	An AccumulatorLimitSet specifies a set of Limits that are associated with an Accumulator measurement.
	*/
	class AccumulatorLimitSet : public LimitSet
	{
	public:
		/* constructor initialising all attributes to null */
		AccumulatorLimitSet();
		~AccumulatorLimitSet() override;

		std::list<CIMPP::AccumulatorLimit*> Limits;  /* The set of limits. Default: 0 */
		std::list<CIMPP::Accumulator*> Measurements;  /* A measurement may have zero or more limit ranges defined for it. Default: 0 */
		CIMPP::Boolean isPercentageLimits;  /* Tells if the limit values are in percentage of normalValue or the specified Unit for Measurements and Controls. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AccumulatorLimitSet_factory();
}
#endif
