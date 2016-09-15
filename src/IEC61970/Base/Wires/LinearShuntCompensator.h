///////////////////////////////////////////////////////////
//  LinearShuntCompensator.h
//  Implementation of the Class LinearShuntCompensator
//  Created on:      28-Jan-2016 12:45:33
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_5D211039_21EB_47f8_8243_DD43892CE1CC__INCLUDED_)
#define EA_5D211039_21EB_47f8_8243_DD43892CE1CC__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Wires/ShuntCompensator.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A linear shunt compensator has banks or sections with equal admittance values.
			 */
			class LinearShuntCompensator : public IEC61970::Base::Wires::ShuntCompensator
			{

			public:
				LinearShuntCompensator();
				virtual ~LinearShuntCompensator();
				/**
				 * Zero sequence shunt (charging) susceptance per section
				 */
				IEC61970::Base::Domain::Susceptance b0PerSection;
				/**
				 * Positive sequence shunt (charging) susceptance per section
				 */
				IEC61970::Base::Domain::Susceptance bPerSection;
				/**
				 * Zero sequence shunt (charging) conductance per section
				 */
				IEC61970::Base::Domain::Conductance g0PerSection;
				/**
				 * Positive sequence shunt (charging) conductance per section
				 */
				IEC61970::Base::Domain::Conductance gPerSection;

			};

		}

	}

}
#endif // !defined(EA_5D211039_21EB_47f8_8243_DD43892CE1CC__INCLUDED_)
