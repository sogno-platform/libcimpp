///////////////////////////////////////////////////////////
//  RotatingMachine.h
//  Implementation of the Class RotatingMachine
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef ROTATINGMACHINE_H
#define ROTATINGMACHINE_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Generation/Production/HydroPump.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A rotating machine which may be used as a generator or motor.
			 */
			class RotatingMachine : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				RotatingMachine();
				virtual ~RotatingMachine();
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
				 * Power factor (nameplate data). It is primarily used for short circuit data
				 * exchange according to IEC 60909.
				 */
				IEC61970::Base::Domain::Float ratedPowerFactor;
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
				 * The synchronous machine drives the turbine which moves the water from a low
				 * elevation to a higher elevation. The direction of machine rotation for pumping
				 * may or may not be the same as for generating.
				 */
				IEC61970::Base::Generation::Production::HydroPump *HydroPump;

			};

		}

	}

}
#endif // ROTATINGMACHINE_H
