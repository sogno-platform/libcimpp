///////////////////////////////////////////////////////////
//  EnergySourcePhase.h
//  Implementation of the Class EnergySourcePhase
//  Original author: 222206
///////////////////////////////////////////////////////////

#ifndef ENERGYSOURCEPHASE_H
#define ENERGYSOURCEPHASE_H

#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61970/Base/Wires/EnergySource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Represents the single phase information of an unbalanced energy source.
			 */
			class EnergySourcePhase : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				EnergySourcePhase();
				virtual ~EnergySourcePhase();
				/**
				 * Phase of this energy source component.   If the energy source wye connected,
				 * the connection is from the indicated phase to the central ground or neutral
				 * point.  If the energy source is delta connected, the phase indicates an energy
				 * source connected from the indicated phase to the next logical non-neutral phase.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase;
				/**
				 * The energy sourceto which the phase belongs.
				 */
				IEC61970::Base::Wires::EnergySource *EnergySource;

			};

		}

	}

}
#endif // ENERGYSOURCEPHASE_H
