#ifndef AsynchronousMachine_H
#define AsynchronousMachine_H

#include "RotatingMachine.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Frequency.hpp"
#include "Boolean.hpp"
#include "PerCent.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "ActivePower.hpp"
#include "AsynchronousMachineKind.hpp"

namespace CIMPP {


class RotationSpeed;
class AsynchronousMachineDynamics;
	/*
	A rotating machine whose shaft rotates asynchronously with the electrical field.  Also known as an induction machine with no external connection to the rotor windings, e.g squirrel-cage induction machine.
	*/
	class AsynchronousMachine: public RotatingMachine
	{

	public:
					CIMPP::Frequency nominalFrequency; 	/* Nameplate data indicates if the machine is 50 or 60 Hz. Default: nullptr */
					CIMPP::RotationSpeed* nominalSpeed; 	/* Nameplate data.  Depends on the slip and number of pole pairs. Default: nullptr */
					CIMPP::Boolean converterFedDrive; 	/* Indicates whether the machine is a converter fed drive. Used for short circuit data exchange according to IEC 60909 Default: false */
					CIMPP::PerCent efficiency; 	/* Efficiency of the asynchronous machine at nominal operation in percent. Indicator for converter drive motors. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::Simple_Float iaIrRatio; 	/* Ratio of locked-rotor current to the rated current of the motor (Ia/Ir). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::Integer polePairNumber; 	/* Number of pole pairs of stator. Used for short circuit data exchange according to IEC 60909 Default: 0 */
					CIMPP::ActivePower ratedMechanicalPower; 	/* Rated mechanical power (Pr in the IEC 60909-0). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
					CIMPP::Boolean reversible; 	/* Indicates for converter drive motors if the power can be reversible. Used for short circuit data exchange according to IEC 60909 Default: false */
					CIMPP::Simple_Float rxLockedRotorRatio; 	/* Locked rotor ratio (R/X). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
					CIMPP::AsynchronousMachineKind asynchronousMachineType; 	/* Indicates the type of Asynchronous Machine (motor or generator). Default: 0 */
					CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics; 	/* Asynchronous machine dynamics model used to describe dynamic behavior of this asynchronous machine. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		AsynchronousMachine();
		virtual ~AsynchronousMachine();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AsynchronousMachine_factory();
}
#endif
