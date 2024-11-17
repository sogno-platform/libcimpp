#ifndef EarthFaultCompensator_H
#define EarthFaultCompensator_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Resistance.hpp"

namespace CIMPP {


	/*
	A conducting equipment used to represent a connection to ground which is typically used to compensate earth faults..   An earth fault compensator device modeled with a single terminal implies a second terminal solidly connected to ground.  If two terminals are modeled, the ground is not assumed and normal connection rules apply.
	*/
	class EarthFaultCompensator: public ConductingEquipment
	{

	public:
					CIMPP::Resistance r; 	/* Nominal resistance of device. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		EarthFaultCompensator();
		virtual ~EarthFaultCompensator();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EarthFaultCompensator_factory();
}
#endif
