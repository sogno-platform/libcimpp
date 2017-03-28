///////////////////////////////////////////////////////////
//  ShuntCompensator.h
//  Implementation of the Class ShuntCompensator
///////////////////////////////////////////////////////////

#ifndef SHUNTCOMPENSATOR_H
#define SHUNTCOMPENSATOR_H

#include <list>

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Wires/PhaseShuntConnectionKind.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/VoltagePerReactivePower.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"
#include "IEC61970/Base/Wires/ShuntCompensatorPhase.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A shunt capacitor or reactor or switchable bank of shunt capacitors or reactors.
			 * A section of a shunt compensator is an individual capacitor or reactor.  A
			 * negative value for reactivePerSection indicates that the compensator is a
			 * reactor. ShuntCompensator is a single terminal device.  Ground is implied.
			 */
			class ShuntCompensator : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				ShuntCompensator();
				virtual ~ShuntCompensator();
				/**
				 * Time delay required for the device to be connected or disconnected by automatic
				 * voltage regulation (AVR).
				 */
				IEC61970::Base::Domain::Seconds aVRDelay;
				/**
				 * Used for Yn and Zn connections. True if the neutral is solidly grounded.
				 */
				IEC61970::Base::Domain::Boolean grounded;
				/**
				 * The maximum number of sections that may be switched in. 
				 */
				IEC61970::Base::Domain::Integer maximumSections;
				/**
				 * The voltage at which the nominal reactive power may be calculated. This should
				 * normally be within 10% of the voltage at which the capacitor is connected to
				 * the network.
				 */
				IEC61970::Base::Domain::Voltage nomU;
				/**
				 * The normal number of sections switched in.
				 */
				IEC61970::Base::Domain::Integer normalSections;
				/**
				 * The type of phase connection, such as wye or delta.
				 */
				IEC61970::Base::Wires::PhaseShuntConnectionKind phaseConnection;
				/**
				 * Shunt compensator sections in use.
				 * Starting value for steady state solution. Non integer values are allowed to
				 * support continuous variables. The reasons for continuous value are to support
				 * study cases where no discrete shunt compensators has yet been designed, a
				 * solutions where a narrow voltage band force the sections to oscillate or
				 * accommodate for a continuous solution as input.
				 */
				IEC61970::Base::Domain::Float sections;
				/**
				 * The switch on count since the capacitor count was last reset or initialized.
				 */
				IEC61970::Base::Domain::Integer switchOnCount;
				/**
				 * The date and time when the capacitor bank was last switched on.
				 */
				IEC61970::Base::Domain::DateTime switchOnDate;
				/**
				 * Voltage sensitivity required for the device to regulate the bus voltage, in
				 * voltage/reactive power.
				 */
				IEC61970::Base::Domain::VoltagePerReactivePower voltageSensitivity;
				/**
				 * The individual phases models for the shunt compensator.
				 */
				std::list<IEC61970::Base::Wires::ShuntCompensatorPhase*> ShuntCompensatorPhase;

			};

		}

	}

}
#endif // SHUNTCOMPENSATOR_H
