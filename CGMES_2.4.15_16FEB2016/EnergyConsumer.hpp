#ifndef EnergyConsumer_H
#define EnergyConsumer_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"

namespace CIMPP {


class LoadDynamics;
class LoadResponseCharacteristic;
	/*
	Generic user of energy - a  point of consumption on the power system model.
	*/
	class EnergyConsumer: public ConductingEquipment
	{

	public:
					CIMPP::LoadDynamics* LoadDynamics; 	/* Load dynamics model used to describe dynamic behavior of this energy consumer. Default: 0 */
					CIMPP::ActivePower pfixed; 	/* Active power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
					CIMPP::PerCent pfixedPct; 	/* Fixed active power as per cent of load group fixed active power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
					CIMPP::ReactivePower qfixed; 	/* Reactive power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
					CIMPP::PerCent qfixedPct; 	/* Fixed reactive power as per cent of load group fixed reactive power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
					CIMPP::LoadResponseCharacteristic* LoadResponse; 	/* The load response characteristic of this load.  If missing, this load is assumed to be constant power. Default: 0 */
					CIMPP::ActivePower p; 	/* Active power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
					CIMPP::ReactivePower q; 	/* Reactive power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EnergyConsumer();
		virtual ~EnergyConsumer();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EnergyConsumer_factory();
}
#endif
