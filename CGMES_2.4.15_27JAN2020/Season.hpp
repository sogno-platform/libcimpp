#ifndef Season_H
#define Season_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "MonthDay.hpp"

namespace CIMPP
{
	class SeasonDayTypeSchedule;

	/*
	A specified time period of the year.
	*/
	class Season : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Season();
		~Season() override;

		std::list<CIMPP::SeasonDayTypeSchedule*> SeasonDayTypeSchedules;  /* Season for the Schedule. Default: 0 */
		CIMPP::MonthDay endDate;  /* Date season ends. Default: nullptr */
		CIMPP::MonthDay startDate;  /* Date season starts. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Season_factory();
}
#endif
