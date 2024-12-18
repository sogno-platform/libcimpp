#ifndef RegulationSchedule_H
#define RegulationSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SeasonDayTypeSchedule.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class RegulatingControl;

	/*
	A pre-established pattern over time for a controlled variable, e.g., busbar voltage.
	*/
	class RegulationSchedule : public SeasonDayTypeSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		RegulationSchedule();
		~RegulationSchedule() override;

		CIMPP::RegulatingControl* RegulatingControl;  /* Regulating controls that have this schedule. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RegulationSchedule_factory();
}
#endif
