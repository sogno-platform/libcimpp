#ifndef SeasonDayTypeSchedule_H
#define SeasonDayTypeSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RegularIntervalSchedule.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class DayType;
	class Season;

	/** \brief A time schedule covering a 24 hour period, with curve data for a specific type of season and day. */
	class SeasonDayTypeSchedule : public RegularIntervalSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		SeasonDayTypeSchedule();
		~SeasonDayTypeSchedule() override;

		/** \brief Schedules that use this DayType. Default: 0 */
		CIMPP::DayType* DayType;

		/** \brief Schedules that use this Season. Default: 0 */
		CIMPP::Season* Season;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* SeasonDayTypeSchedule_factory();
}
#endif
