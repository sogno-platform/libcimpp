#ifndef Substation_H
#define Substation_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class DCConverterUnit;
	class SubGeographicalRegion;
	class VoltageLevel;

	/** \brief A collection of equipment for purposes other than generation or utilization, through which electric energy in bulk is passed for the purposes of switching or modifying its characteristics. */
	class Substation : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		Substation();
		~Substation() override;

		/** \brief The DC converter unit belonging of the substation. Default: 0 */
		std::list<CIMPP::DCConverterUnit*> DCConverterUnit;

		/** \brief The SubGeographicalRegion containing the substation. Default: 0 */
		CIMPP::SubGeographicalRegion* Region;

		/** \brief The voltage levels within this substation. Default: 0 */
		std::list<CIMPP::VoltageLevel*> VoltageLevels;

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

	BaseClass* Substation_factory();
}
#endif
