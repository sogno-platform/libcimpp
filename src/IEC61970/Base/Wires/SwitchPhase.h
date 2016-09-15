///////////////////////////////////////////////////////////
//  SwitchPhase.h
//  Implementation of the Class SwitchPhase
//  Created on:      28-Jan-2016 12:47:02
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_A0668285_340D_4f64_BA0E_A8BB6F9F22AD__INCLUDED_)
#define EA_A0668285_340D_4f64_BA0E_A8BB6F9F22AD__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Single phase of a multi-phase switch when its attributes might be different per
			 * phase.
			 */
			class SwitchPhase : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				SwitchPhase();
				virtual ~SwitchPhase();
				/**
				 * The attribute tells if the switch is considered closed when used as input to
				 * topology processing.
				 */
				IEC61970::Base::Domain::Boolean closed;
				/**
				 * Used in cases when no Measurement for the status value is present. If the
				 * SwitchPhase has a status measurement the Discrete.normalValue is expected to
				 * match with this value.
				 */
				IEC61970::Base::Domain::Boolean normalOpen;
				/**
				 * Phase of this SwitchPhase on the side with terminal sequence number equal 1.
				 * Should be a phase contained in that terminal&rsquo;s phases attribute.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phaseSide1;
				/**
				 * Phase of this SwitchPhase on the side with terminal sequence number equal 2.
				 * Should be a phase contained in that terminal&rsquo;s Terminal.phases attribute.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phaseSide2;

			};

		}

	}

}
#endif // !defined(EA_A0668285_340D_4f64_BA0E_A8BB6F9F22AD__INCLUDED_)
