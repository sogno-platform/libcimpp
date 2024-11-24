#ifndef DayType_H
#define DayType_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SeasonDayTypeSchedule;

	/*
	Group of similar days.   For example it could be used to represent weekdays, weekend, or holidays.
	*/
	class DayType : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DayType();
		~DayType() override;

		std::list<CIMPP::SeasonDayTypeSchedule*> SeasonDayTypeSchedules;  /* Schedules that use this DayType. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DayType_factory();
}
#endif
