#ifndef RegularIntervalSchedule_H
#define RegularIntervalSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BasicIntervalSchedule.hpp"
#include "BaseClassDefiner.hpp"
#include "DateTime.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class RegularTimePoint;

	/*
	The schedule has time points where the time between them is constant.
	*/
	class RegularIntervalSchedule : public BasicIntervalSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		RegularIntervalSchedule();
		~RegularIntervalSchedule() override;

		std::list<CIMPP::RegularTimePoint*> TimePoints;  /* The regular interval time point data values that define this schedule. Default: 0 */
		CIMPP::DateTime endTime;  /* The time for the last time point. Default: '' */
		CIMPP::Seconds timeStep;  /* The time between each pair of subsequent regular time points in sequence order. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RegularIntervalSchedule_factory();
}
#endif
