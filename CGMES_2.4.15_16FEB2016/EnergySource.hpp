#ifndef EnergySource_H
#define EnergySource_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Voltage.hpp"
#include "Resistance.hpp"
#include "AngleRadians.hpp"
#include "Reactance.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP {


class WindTurbineType3or4Dynamics;
class EnergySchedulingType;
	/*
	A generic equivalent for an energy supplier on a transmission or distribution voltage level.
	*/
	class EnergySource: public ConductingEquipment
	{

	public:
					CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics; 	/* Wind generator Type 3 or 4 dynamics model associated with this energy source. Default: 0 */
					CIMPP::Voltage nominalVoltage; 	/* Phase-to-phase nominal voltage. Default: nullptr */
					CIMPP::Resistance r; 	/* Positive sequence Thevenin resistance. Default: nullptr */
					CIMPP::Resistance r0; 	/* Zero sequence Thevenin resistance. Default: nullptr */
					CIMPP::Resistance rn; 	/* Negative sequence Thevenin resistance. Default: nullptr */
					CIMPP::AngleRadians voltageAngle; 	/* Phase angle of a-phase open circuit. Default: nullptr */
					CIMPP::Voltage voltageMagnitude; 	/* Phase-to-phase open circuit voltage magnitude. Default: nullptr */
					CIMPP::Reactance x; 	/* Positive sequence Thevenin reactance. Default: nullptr */
					CIMPP::Reactance x0; 	/* Zero sequence Thevenin reactance. Default: nullptr */
					CIMPP::Reactance xn; 	/* Negative sequence Thevenin reactance. Default: nullptr */
					CIMPP::EnergySchedulingType* EnergySchedulingType; 	/* Energy Source of a particular Energy Scheduling Type Default: 0 */
					CIMPP::ActivePower activePower; 	/* High voltage source active injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
					CIMPP::ReactivePower reactivePower; 	/* High voltage source reactive injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EnergySource();
		virtual ~EnergySource();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EnergySource_factory();
}
#endif
