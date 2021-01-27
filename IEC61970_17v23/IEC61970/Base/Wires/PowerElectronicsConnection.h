///////////////////////////////////////////////////////////
//  PowerElectronicsConnection.h
//  Implementation of the Class PowerElectronicsConnection
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef POWERELECTRONICSCONNECTION_H
#define POWERELECTRONICSCONNECTION_H

#include <list>

#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Generation/Production/PowerElectronicsUnit.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A connection to the AC network for energy production or consumption that uses
			 * power electronics rather than rotating machines.
			 */
			class PowerElectronicsConnection : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				PowerElectronicsConnection();
				virtual ~PowerElectronicsConnection();
				/**
				 * Maximum reactive power limit. This is the maximum (nameplate) limit for the
				 * unit.
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Minimum reactive power limit for the unit. This is the minimum (nameplate)
				 * limit for the unit.
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Active power injection. Load sign convention is used, i.e. positive sign means
				 * flow out from a node.
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * Reactive power injection. Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Equivalent resistance (RG) of generator. RG is considered for the calculation
				 * of all currents, except for the calculation of the peak current ip. Used for
				 * short circuit data exchange according to IEC 60909.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence resistance of the synchronous machine.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Nameplate apparent power rating for the unit.
				 * The attribute shall have a positive value.
				 */
				IEC61970::Base::Domain::ApparentPower ratedS;
				/**
				 * Rated voltage (nameplate data, Ur in IEC 60909-0). It is primarily used for
				 * short circuit data exchange according to IEC 60909.
				 */
				IEC61970::Base::Domain::Voltage ratedU;
				/**
				 * Negative sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance rn;
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
				std::list<IEC61970::Base::Generation::Production::PowerElectronicsUnit*> PowerElectronicsUnit;

			};

		}

	}

}
#endif // POWERELECTRONICSCONNECTION_H
