#ifndef SynchronousMachine_H
#define SynchronousMachine_H

#include "RotatingMachine.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"
#include "CurrentFlow.hpp"
#include "ReactivePower.hpp"
#include "Simple_Float.hpp"
#include "SynchronousMachineOperatingMode.hpp"
#include "PerCent.hpp"
#include "PU.hpp"
#include "Integer.hpp"
#include "ShortCircuitRotorKind.hpp"
#include "SynchronousMachineKind.hpp"

namespace CIMPP {


class ReactiveCapabilityCurve;
class SynchronousMachineDynamics;
	/*
	An electromechanical device that operates with shaft rotating synchronously with the network. It is a single machine operating either as a generator or synchronous condenser or pump.
	*/
	class SynchronousMachine: public RotatingMachine
	{

	public:
					CIMPP::ReactiveCapabilityCurve* InitialReactiveCapabilityCurve; 	/* Synchronous machines using this curve as default. Default: 0 */
					CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics; 	/* Synchronous machine dynamics model used to describe dynamic behavior of this synchronous machine. Default: 0 */
					CIMPP::Boolean earthing; 	/* Indicates whether or not the generator is earthed. Used for short circuit data exchange according to IEC 60909 Default: false */
					CIMPP::Resistance earthingStarPointR; 	/* Generator star point earthing resistance (Re). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::Reactance earthingStarPointX; 	/* Generator star point earthing reactance (Xe). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::CurrentFlow ikk; 	/* Steady-state short-circuit current (in A for the profile) of generator with compound excitation during 3-phase short circuit. - Ikk=0: Generator with no compound excitation. - Ikk?0: Generator with compound excitation. Ikk is used to calculate the minimum steady-state short-circuit current for generators with compound excitation (Section 4.6.1.2 in the IEC 60909-0) Used only for single fed short circuit on a generator. (Section 4.3.4.2. in the IEC 60909-0) Default: nullptr */
					CIMPP::ReactivePower maxQ; 	/* Maximum reactive power limit. This is the maximum (nameplate) limit for the unit. Default: nullptr */
					CIMPP::ReactivePower minQ; 	/* Minimum reactive power limit for the unit. Default: nullptr */
					CIMPP::Simple_Float mu; 	/* Factor to calculate the breaking current (Section 4.5.2.1 in the IEC 60909-0). Used only for single fed short circuit on a generator (Section 4.3.4.2. in the IEC 60909-0). Default: nullptr */
					CIMPP::SynchronousMachineOperatingMode operatingMode; 	/* Current mode of operation. Default: 0 */
					CIMPP::PerCent qPercent; 	/* Percent of the coordinated reactive control that comes from this machine. Default: nullptr */
					CIMPP::Resistance r; 	/* Equivalent resistance (RG) of generator. RG is considered for the calculation of all currents, except for the calculation of the peak current ip. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::PU r0; 	/* Zero sequence resistance of the synchronous machine. Default: nullptr */
					CIMPP::PU r2; 	/* Negative sequence resistance. Default: nullptr */
					CIMPP::Integer referencePriority; 	/* Priority of unit for use as powerflow voltage phase angle reference bus selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and so on. Default: 0 */
					CIMPP::PU satDirectSubtransX; 	/* Direct-axis subtransient reactance saturated, also known as Xd`sat. Default: nullptr */
					CIMPP::PU satDirectSyncX; 	/* Direct-axes saturated synchronous reactance (xdsat); reciprocal of short-circuit ration. Used for short circuit data exchange, only for single fed short circuit on a generator. (Section 4.3.4.2. in the IEC 60909-0). Default: nullptr */
					CIMPP::PU satDirectTransX; 	/* Saturated Direct-axis transient reactance. The attribute is primarily used for short circuit calculations according to ANSI. Default: nullptr */
					CIMPP::ShortCircuitRotorKind shortCircuitRotorType; 	/* Type of rotor, used by short circuit applications, only for single fed short circuit according to IEC 60909. Default: 0 */
					CIMPP::SynchronousMachineKind type; 	/* Modes that this synchronous machine can operate in. Default: 0 */
					CIMPP::PerCent voltageRegulationRange; 	/* Range of generator voltage regulation (PG in the IEC 60909-0) used for calculation of the impedance correction factor KG defined in IEC 60909-0 This attribute is used to describe the operating voltage of the generating unit. Default: nullptr */
					CIMPP::PU x0; 	/* Zero sequence reactance of the synchronous machine. Default: nullptr */
					CIMPP::PU x2; 	/* Negative sequence reactance. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SynchronousMachine();
		virtual ~SynchronousMachine();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SynchronousMachine_factory();
}
#endif
