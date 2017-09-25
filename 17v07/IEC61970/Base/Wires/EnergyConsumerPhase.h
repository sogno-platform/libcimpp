///////////////////////////////////////////////////////////
//  EnergyConsumerPhase.h
//  Implementation of the Class EnergyConsumerPhase
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ENERGYCONSUMERPHASE_H
#define ENERGYCONSUMERPHASE_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A single phase of an energy consumer.
			 */
			class EnergyConsumerPhase : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				EnergyConsumerPhase();
				virtual ~EnergyConsumerPhase();
				/**
				 * Active power of the load that is a fixed quantity. Load sign convention is used,
				 * i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::ActivePower pfixed;
				/**
				 * Fixed active power as per cent of load group fixed active power. Load sign
				 * convention is used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::PerCent pfixedPct;
				/**
				 * Phase of this energy consumer component.   If the energy consumer is wye
				 * connected, the connection is from the indicated phase to the central ground or
				 * neutral point.  If the energy consumer is delta connected, the phase indicates
				 * an energy consumer connected from the indicated phase to the next logical non-
				 * neutral phase.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase;
				/**
				 * Reactive power of the load that is a fixed quantity. Load sign convention is
				 * used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::ReactivePower qfixed;
				/**
				 * Fixed reactive power as per cent of load group fixed reactive power. Load sign
				 * convention is used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::PerCent qfixedPct;

			};

		}

	}

}
#endif // ENERGYCONSUMERPHASE_H
