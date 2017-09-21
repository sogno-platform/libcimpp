///////////////////////////////////////////////////////////
//  SynchronousMachine.h
//  Implementation of the Class SynchronousMachine
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINE_H
#define SYNCHRONOUSMACHINE_H

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Wires/CoolantType.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Wires/SynchronousMachineOperatingMode.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Wires/ShortCircuitRotorKind.h"
#include "IEC61970/Base/Wires/SynchronousMachineKind.h"
#include "IEC61970/Base/Wires/RotatingMachine.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * An electromechanical device that operates with shaft rotating synchronously
			 * with the network. It is a single machine operating either as a generator or
			 * synchronous condenser or pump.
			 */
			class SynchronousMachine : public IEC61970::Base::Wires::RotatingMachine
			{

			public:
				SynchronousMachine();
				virtual ~SynchronousMachine();
				/**
				 * Time delay required when switching from Automatic Voltage Regulation (AVR) to
				 * Manual for a lagging MVAr violation.
				 */
				IEC61970::Base::Domain::Seconds aVRToManualLag;
				/**
				 * Time delay required when switching from Automatic Voltage Regulation (AVR) to
				 * Manual for a leading MVAr violation.
				 */
				IEC61970::Base::Domain::Seconds aVRToManualLead;
				/**
				 * Default base reactive power value. This value represents the initial reactive
				 * power that can be used by any application function.
				 */
				IEC61970::Base::Domain::ReactivePower baseQ;
				/**
				 * Active power consumed when in condenser mode operation.
				 */
				IEC61970::Base::Domain::ActivePower condenserP;
				/**
				 * Temperature or pressure of coolant medium
				 */
				IEC61970::Base::Domain::Float coolantCondition;
				/**
				 * Method of cooling the machine.
				 */
				IEC61970::Base::Wires::CoolantType coolantType;
				/**
				 * Indicates whether or not the generator is earthed. Used for short circuit data
				 * exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Boolean earthing;
				/**
				 * Generator star point earthing resistance (Re). Used for short circuit data
				 * exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Resistance earthingStarPointR;
				/**
				 * Generator star point earthing reactance (Xe). Used for short circuit data
				 * exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Reactance earthingStarPointX;
				/**
				 * Steady-state short-circuit current (in A for the profile) of generator with
				 * compound excitation during 3-phase short circuit.
				 * - Ikk=0: Generator with no compound excitation.
				 * - Ikk?0: Generator with compound excitation.
				 * Ikk is used to calculate the minimum steady-state short-circuit current for
				 * generators with compound excitation
				 * (Section 4.6.1.2 in the IEC 60909-0)
				 * Used only for single fed short circuit on a generator. (Section 4.3.4.2. in the
				 * IEC 60909-0)
				 */
				IEC61970::Base::Domain::CurrentFlow ikk;
				/**
				 * Time delay required when switching from Manual to Automatic Voltage Regulation.
				 * This value is used in the accelerating power reference frame for powerflow
				 * solutions
				 */
				IEC61970::Base::Domain::Seconds manualToAVR;
				/**
				 * Maximum reactive power limit. This is the maximum (nameplate) limit for the
				 * unit.
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Maximum voltage limit for the unit.
				 */
				IEC61970::Base::Domain::Voltage maxU;
				/**
				 * Minimum reactive power limit for the unit.
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Minimum voltage  limit for the unit.
				 */
				IEC61970::Base::Domain::Voltage minU;
				/**
				 * Factor to calculate the breaking current (Section 4.5.2.1 in the IEC 60909-0).
				 * Used only for single fed short circuit on a generator (Section 4.3.4.2. in the
				 * IEC 60909-0).
				 */
				IEC61970::Base::Domain::Float mu;
				/**
				 * Current mode of operation.
				 */
				IEC61970::Base::Wires::SynchronousMachineOperatingMode operatingMode;
				/**
				 * Percent of the coordinated reactive control that comes from this machine.
				 */
				IEC61970::Base::Domain::PerCent qPercent;
				/**
				 * Equivalent resistance (RG) of generator. RG is considered for the calculation
				 * of all currents, except for the calculation of the peak current ip. Used for
				 * short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence resistance of the synchronous machine.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Negative sequence resistance.
				 */
				IEC61970::Base::Domain::Resistance r2;
				/**
				 * Priority of unit for use as powerflow voltage phase angle reference bus
				 * selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and
				 * so on.
				 */
				IEC61970::Base::Domain::Integer referencePriority;
				/**
				 * Direct-axis subtransient reactance saturated, also known as Xd"sat.
				 */
				IEC61970::Base::Domain::PU satDirectSubtransX;
				/**
				 * Direct-axes saturated synchronous reactance (xdsat); reciprocal of short-
				 * circuit ration. Used for short circuit data exchange, only for single fed short
				 * circuit on a generator. (Section 4.3.4.2. in the IEC 60909-0).
				 */
				IEC61970::Base::Domain::PU satDirectSyncX;
				/**
				 * Saturated Direct-axis transient reactance. The attribute is primarily used for
				 * short circuit calculations according to ANSI.
				 */
				IEC61970::Base::Domain::PU satDirectTransX;
				/**
				 * Type of rotor, used by short circuit applications, only for single fed short
				 * circuit according to IEC 60909.
				 */
				IEC61970::Base::Wires::ShortCircuitRotorKind shortCircuitRotorType;
				/**
				 * Modes that this synchronous machine can operate in.
				 */
				IEC61970::Base::Wires::SynchronousMachineKind type;
				/**
				 * Range of generator voltage regulation (PG in the IEC 60909-0) used for
				 * calculation of the impedance correction factor KG defined in IEC 60909-0
				 * This attribute is used to describe the operating voltage of the generating unit.
				 */
				IEC61970::Base::Domain::PerCent voltageRegulationRange;
				/**
				 * Zero sequence reactance of the synchronous machine.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * Negative sequence reactance.
				 */
				IEC61970::Base::Domain::Reactance x2;

			};

		}

	}

}
#endif // SYNCHRONOUSMACHINE_H
