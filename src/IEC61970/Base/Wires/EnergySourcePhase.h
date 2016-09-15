///////////////////////////////////////////////////////////
//  EnergySourcePhase.h
//  Implementation of the Class EnergySourcePhase
//  Created on:      28-Jan-2016 12:44:15
//  Original author: 222206
///////////////////////////////////////////////////////////

#if !defined(EA_3F69DD27_0FC5_4085_B961_AC637790F2FA__INCLUDED_)
#define EA_3F69DD27_0FC5_4085_B961_AC637790F2FA__INCLUDED_

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
#endif // !defined(EA_3F69DD27_0FC5_4085_B961_AC637790F2FA__INCLUDED_)
