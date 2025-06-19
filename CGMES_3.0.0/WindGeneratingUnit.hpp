#ifndef WindGeneratingUnit_H
#define WindGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "WindGenUnitKind.hpp"

namespace CIMPP
{
	class WindPowerPlant;

	/** \brief A wind driven generating unit, connected to the grid by means of a rotating machine.  May be used to represent a single turbine or an aggregation. */
	class WindGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		WindGeneratingUnit();
		~WindGeneratingUnit() override;

		/** \brief A wind power plant may have wind generating units. Default: 0 */
		CIMPP::WindPowerPlant* WindPowerPlant;

		/** \brief The kind of wind generating unit. Default: 0 */
		CIMPP::WindGenUnitKind windGenUnitType;

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

	BaseClass* WindGeneratingUnit_factory();
}
#endif
