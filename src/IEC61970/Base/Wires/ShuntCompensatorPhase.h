///////////////////////////////////////////////////////////
//  ShuntCompensatorPhase.h
//  Implementation of the Class ShuntCompensatorPhase
//  Created on:      28-Jan-2016 12:46:41
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_86C2037B_C702_4397_8F21_AC1E9366ECEA__INCLUDED_)
#define EA_86C2037B_C702_4397_8F21_AC1E9366ECEA__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Single phase of a multi-phase shunt compensator when its attributes might be
			 * different per phase.
			 */
			class ShuntCompensatorPhase : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				ShuntCompensatorPhase();
				virtual ~ShuntCompensatorPhase();
				/**
				 * The maximum number of sections that may be switched in for this phase. 
				 */
				IEC61970::Base::Domain::Integer maximumSections;
				/**
				 * For the capacitor phase, the normal number of sections switched in.
				 */
				IEC61970::Base::Domain::Integer normalSections;
				/**
				 * Phase of this shunt compensator component.   If the shunt compensator is wye
				 * connected, the connection is from the indicated phase to the central ground or
				 * neutral point.  If the shunt compensator is delta connected, the phase
				 * indicates a shunt compensator connected from the indicated phase to the next
				 * logical non-neutral phase.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase;

			};

		}

	}

}
#endif // !defined(EA_86C2037B_C702_4397_8F21_AC1E9366ECEA__INCLUDED_)
