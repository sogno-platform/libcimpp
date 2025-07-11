#ifndef RegularIntervalSchedule_H
#define RegularIntervalSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BasicIntervalSchedule.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "DateTime.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class RegularTimePoint;

	/** \brief The schedule has time points where the time between them is constant. */
	class RegularIntervalSchedule : public BasicIntervalSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		RegularIntervalSchedule();
		~RegularIntervalSchedule() override;

		/** \brief The regular interval time point data values that define this schedule. Default: 0 */
		std::list<CIMPP::RegularTimePoint*> TimePoints;

		/** \brief The time for the last time point. Default: '' */
		CIMPP::DateTime endTime;

		/** \brief The time between each pair of subsequent regular time points in sequence order. Default: nullptr */
		CIMPP::Seconds timeStep;

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

	BaseClass* RegularIntervalSchedule_factory();
}
#endif
