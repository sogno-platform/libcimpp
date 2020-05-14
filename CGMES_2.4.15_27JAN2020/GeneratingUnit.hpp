#ifndef GeneratingUnit_H
#define GeneratingUnit_H

#include "Equipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "GeneratorControlSource.hpp"
#include "PerCent.hpp"
#include "ActivePower.hpp"
#include "Simple_Float.hpp"
#include "Money.hpp"

namespace CIMPP {


class ControlAreaGeneratingUnit;
class RotatingMachine;
class GrossToNetActivePowerCurve;
	/*
	A single or set of synchronous machines for converting mechanical power into alternating-current power. For example, individual machines within a set may be defined for scheduling purposes while a single control signal is derived for the set. In this case there would be a GeneratingUnit for each member of the set and an additional GeneratingUnit corresponding to the set.
	*/
	class GeneratingUnit: public Equipment
	{

	public:
					CIMPP::GeneratorControlSource genControlSource; 	/* The source of controls for a generating unit. Default: 0 */
					CIMPP::PerCent governorSCD; 	/* Governor Speed Changer Droop.   This is the change in generator power output divided by the change in frequency normalized by the nominal power of the generator and the nominal frequency and expressed in percent and negated. A positive value of speed change droop provides additional generator output upon a drop in frequency. Default: nullptr */
					CIMPP::ActivePower initialP; 	/* Default initial active power  which is used to store a powerflow result for the initial active power for this unit in this network configuration. Default: nullptr */
					CIMPP::Simple_Float longPF; 	/* Generating unit long term economic participation factor. Default: nullptr */
					CIMPP::ActivePower maximumAllowableSpinningReserve; 	/* Maximum allowable spinning reserve. Spinning reserve will never be considered greater than this value regardless of the current operating point. Default: nullptr */
					CIMPP::ActivePower maxOperatingP; 	/* This is the maximum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
					CIMPP::ActivePower minOperatingP; 	/* This is the minimum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
					CIMPP::ActivePower nominalP; 	/* The nominal power of the generating unit.  Used to give precise meaning to percentage based attributes such as the governor speed change droop (governorSCD attribute). The attribute shall be a positive value equal or less than RotatingMachine.ratedS. Default: nullptr */
					CIMPP::ActivePower ratedGrossMaxP; 	/* The unit`s gross rated maximum capacity (book value). Default: nullptr */
					CIMPP::ActivePower ratedGrossMinP; 	/* The gross rated minimum generation level which the unit can safely operate at while delivering power to the transmission grid. Default: nullptr */
					CIMPP::ActivePower ratedNetMaxP; 	/* The net rated maximum capacity determined by subtracting the auxiliary power used to operate the internal plant machinery from the rated gross maximum capacity. Default: nullptr */
					CIMPP::Simple_Float shortPF; 	/* Generating unit short term economic participation factor. Default: nullptr */
					CIMPP::Money startupCost; 	/* The initial startup cost incurred for each start of the GeneratingUnit. Default: nullptr */
					CIMPP::Money variableCost; 	/* The variable cost component of production per unit of ActivePower. Default: nullptr */
					CIMPP::PerCent totalEfficiency; 	/* The efficiency of the unit in converting the fuel into electrical energy. Default: nullptr */
					std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit; 	/* ControlArea specifications for this generating unit. Default: 0 */
					std::list<CIMPP::RotatingMachine*> RotatingMachine; 	/* A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
					std::list<CIMPP::GrossToNetActivePowerCurve*> GrossToNetActivePowerCurves; 	/* A generating unit may have a gross active power to net active power curve, describing the losses and auxiliary power requirements of the unit. Default: 0 */
					CIMPP::Simple_Float normalPF; 	/* Generating unit economic participation factor. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GeneratingUnit();
		virtual ~GeneratingUnit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GeneratingUnit_factory();
}
#endif
