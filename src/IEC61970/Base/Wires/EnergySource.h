///////////////////////////////////////////////////////////
//  EnergySource.h
//  Implementation of the Class EnergySource
//  Created on:      28-Jan-2016 12:44:15
///////////////////////////////////////////////////////////

#if !defined(EA_0B0C2B00_5AF8_416f_9DF7_D7194F822005__INCLUDED_)
#define EA_0B0C2B00_5AF8_416f_9DF7_D7194F822005__INCLUDED_

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/AngleRadians.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A generic equivalent for an energy supplier on a transmission or distribution
			 * voltage level.
			 */
			class EnergySource : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EnergySource();
				virtual ~EnergySource();
				/**
				 * High voltage source active injection. Load sign convention is used, i.e.
				 * positive sign means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ActivePower activePower;
				/**
				 * Phase-to-phase nominal voltage.
				 */
				IEC61970::Base::Domain::Voltage nominalVoltage;
				/**
				 * Positive sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * High voltage source reactive injection. Load sign convention is used, i.e.
				 * positive sign means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ReactivePower reactivePower;
				/**
				 * Negative sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance rn;
				/**
				 * Phase angle of a-phase open circuit.
				 */
				IEC61970::Base::Domain::AngleRadians voltageAngle;
				/**
				 * Phase-to-phase open circuit voltage magnitude.
				 */
				IEC61970::Base::Domain::Voltage voltageMagnitude;
				/**
				 * Positive sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * Negative sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance xn;

			};

		}

	}

}
#endif // !defined(EA_0B0C2B00_5AF8_416f_9DF7_D7194F822005__INCLUDED_)
