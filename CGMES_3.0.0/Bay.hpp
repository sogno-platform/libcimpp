#ifndef Bay_H
#define Bay_H
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
	class VoltageLevel;

	/*
	A collection of power system resources (within a given substation) including conducting equipment, protection relays, measurements, and telemetry.  A bay typically represents a physical grouping related to modularization of equipment.
	*/
	class Bay : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		Bay();
		~Bay() override;

		CIMPP::VoltageLevel* VoltageLevel;  /* The voltage level containing this bay. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Bay_factory();
}
#endif
