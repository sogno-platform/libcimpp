#ifndef Bay_H
#define Bay_H

#include "EquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class VoltageLevel;
	/*
	A collection of power system resources (within a given substation) including conducting equipment, protection relays, measurements, and telemetry.  A bay typically represents a physical grouping related to modularization of equipment.
	*/
	class Bay: public EquipmentContainer
	{

	public:
					CIMPP::VoltageLevel* VoltageLevel; 	/* The voltage level containing this bay. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Bay();
		virtual ~Bay();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Bay_factory();
}
#endif
