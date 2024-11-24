#ifndef Substation_H
#define Substation_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DCConverterUnit;
	class SubGeographicalRegion;
	class VoltageLevel;

	/*
	A collection of equipment for purposes other than generation or utilization, through which electric energy in bulk is passed for the purposes of switching or modifying its characteristics.
	*/
	class Substation : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		Substation();
		~Substation() override;

		std::list<CIMPP::DCConverterUnit*> DCConverterUnit;  /* The DC converter unit belonging of the substation. Default: 0 */
		CIMPP::SubGeographicalRegion* Region;  /* The SubGeographicalRegion containing the substation. Default: 0 */
		std::list<CIMPP::VoltageLevel*> VoltageLevels;  /* The voltage levels within this substation. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Substation_factory();
}
#endif
