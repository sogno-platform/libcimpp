#ifndef SeasonDayTypeSchedule_H
#define SeasonDayTypeSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RegularIntervalSchedule.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DayType;
	class Season;

	/*
	A time schedule covering a 24 hour period, with curve data for a specific type of season and day.
	*/
	class SeasonDayTypeSchedule : public RegularIntervalSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		SeasonDayTypeSchedule();
		~SeasonDayTypeSchedule() override;

		CIMPP::DayType* DayType;  /* DayType for the Schedule. Default: 0 */
		CIMPP::Season* Season;  /* Season for the Schedule. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SeasonDayTypeSchedule_factory();
}
#endif
