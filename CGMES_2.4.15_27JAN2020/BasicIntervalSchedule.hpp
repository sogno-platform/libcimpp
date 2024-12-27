#ifndef BasicIntervalSchedule_H
#define BasicIntervalSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "DateTime.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{

	/*
	Schedule of values at points in time.
	*/
	class BasicIntervalSchedule : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		BasicIntervalSchedule();
		~BasicIntervalSchedule() override;

		CIMPP::DateTime startTime;  /* The time for the first time point. Default: '' */
		CIMPP::UnitSymbol value1Unit;  /* Value1 units of measure. Default: 0 */
		CIMPP::UnitSymbol value2Unit;  /* Value2 units of measure. Default: 0 */

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

	BaseClass* BasicIntervalSchedule_factory();
}
#endif
