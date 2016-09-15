///////////////////////////////////////////////////////////
//  LinearShuntCompensatorPhase.h
//  Implementation of the Class LinearShuntCompensatorPhase
//  Created on:      28-Jan-2016 12:45:34
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_E700937E_017D_4308_A29D_958C67E06EE3__INCLUDED_)
#define EA_E700937E_017D_4308_A29D_958C67E06EE3__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Wires/ShuntCompensatorPhase.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A per phase linear shunt compensator has banks or sections with equal
			 * admittance values.
			 */
			class LinearShuntCompensatorPhase : public IEC61970::Base::Wires::ShuntCompensatorPhase
			{

			public:
				LinearShuntCompensatorPhase();
				virtual ~LinearShuntCompensatorPhase();
				/**
				 * Susceptance per section of the phase if shunt compensator is wye connected.
				 * Susceptance per section phase to phase if shunt compensator is delta connected.
				 */
				IEC61970::Base::Domain::Susceptance bPerSection;
				/**
				 * Conductance per section for this phase if shunt compensator is wye connected.
				 * Conductance per section phase to phase if shunt compensator is delta connected.
				 */
				IEC61970::Base::Domain::Conductance gPerSection;

			};

		}

	}

}
#endif // !defined(EA_E700937E_017D_4308_A29D_958C67E06EE3__INCLUDED_)
