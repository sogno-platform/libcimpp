///////////////////////////////////////////////////////////
//  LinearShuntCompensator.h
//  Implementation of the Class LinearShuntCompensator
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef LINEARSHUNTCOMPENSATOR_H
#define LINEARSHUNTCOMPENSATOR_H

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
#endif // LINEARSHUNTCOMPENSATOR_H
