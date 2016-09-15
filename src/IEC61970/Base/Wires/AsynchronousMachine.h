///////////////////////////////////////////////////////////
//  AsynchronousMachine.h
//  Implementation of the Class AsynchronousMachine
//  Created on:      28-Jan-2016 12:43:22
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_8B1D3A1C_9950_4f0c_A477_16256781106A__INCLUDED_)
#define EA_8B1D3A1C_9950_4f0c_A477_16256781106A__INCLUDED_

#include "IEC61970/Base/Wires/AsynchronousMachineKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/RotationSpeed.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/RotatingMachine.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A rotating machine whose shaft rotates asynchronously with the electrical field.
			 *  Also known as an induction machine with no external connection to the rotor
			 * windings, e.g squirrel-cage induction machine.
			 */
			class AsynchronousMachine : public IEC61970::Base::Wires::RotatingMachine
			{

			public:
				AsynchronousMachine();
				virtual ~AsynchronousMachine();
				/**
				 * Indicates the type of Asynchronous Machine (motor or generator).
				 */
				IEC61970::Base::Wires::AsynchronousMachineKind asynchronousMachineType;
				/**
				 * Indicates whether the machine is a converter fed drive. Used for short circuit
				 * data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Boolean converterFedDrive;
				/**
				 * Efficiency of the asynchronous machine at nominal operation in percent.
				 * Indicator for converter drive motors. Used for short circuit data exchange
				 * according to IEC 60909
				 */
				IEC61970::Base::Domain::PerCent efficiency;
				/**
				 * Ratio of locked-rotor current to the rated current of the motor (Ia/Ir). Used
				 * for short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Float iaIrRatio;
				/**
				 * Nameplate data indicates if the machine is 50 or 60 Hz.
				 */
				IEC61970::Base::Domain::Frequency nominalFrequency;
				/**
				 * Nameplate data.  Depends on the slip and number of pole pairs.
				 */
				IEC61970::Base::Domain::RotationSpeed nominalSpeed;
				/**
				 * Number of pole pairs of stator. Used for short circuit data exchange according
				 * to IEC 60909
				 */
				IEC61970::Base::Domain::Integer polePairNumber;
				/**
				 * Rated mechanical power (Pr in the IEC 60909-0). Used for short circuit data
				 * exchange according to IEC 60909.
				 */
				IEC61970::Base::Domain::ActivePower ratedMechanicalPower;
				/**
				 * Indicates for converter drive motors if the power can be reversible. Used for
				 * short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Boolean reversible;
				/**
				 * Damper 1 winding resistance.
				 */
				IEC61970::Base::Domain::Resistance rr1;
				/**
				 * Damper 2 winding resistance.
				 */
				IEC61970::Base::Domain::Resistance rr2;
				/**
				 * Locked rotor ratio (R/X). Used for short circuit data exchange according to IEC
				 * 60909
				 */
				IEC61970::Base::Domain::Float rxLockedRotorRatio;
				/**
				 * Transient rotor time constant (greater than tppo).
				 */
				IEC61970::Base::Domain::Seconds tpo;
				/**
				 * Sub-transient rotor time constant (greater than 0).
				 */
				IEC61970::Base::Domain::Seconds tppo;
				/**
				 * Damper 1 winding leakage reactance.
				 */
				IEC61970::Base::Domain::Reactance xlr1;
				/**
				 * Damper 2 winding leakage reactance.
				 */
				IEC61970::Base::Domain::Reactance xlr2;
				/**
				 * Magnetizing reactance.
				 */
				IEC61970::Base::Domain::Reactance xm;
				/**
				 * Transient reactance (unsaturated) (greater than or equal to xpp).
				 */
				IEC61970::Base::Domain::Reactance xp;
				/**
				 * Sub-transient reactance (unsaturated) (greather than Xl).
				 */
				IEC61970::Base::Domain::Reactance xpp;
				/**
				 * Synchronous reactance (greather than xp).
				 */
				IEC61970::Base::Domain::Reactance xs;

			};

		}

	}

}
#endif // !defined(EA_8B1D3A1C_9950_4f0c_A477_16256781106A__INCLUDED_)
