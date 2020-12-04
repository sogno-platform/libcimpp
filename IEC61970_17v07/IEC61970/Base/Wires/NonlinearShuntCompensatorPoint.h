///////////////////////////////////////////////////////////
//  NonlinearShuntCompensatorPoint.h
//  Implementation of the Class NonlinearShuntCompensatorPoint
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef NONLINEARSHUNTCOMPENSATORPOINT_H
#define NONLINEARSHUNTCOMPENSATORPOINT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A non linear shunt compensator bank or section admittance value.
			 */
			class NonlinearShuntCompensatorPoint : public BaseClass
			{

			public:
				NonlinearShuntCompensatorPoint();
				virtual ~NonlinearShuntCompensatorPoint();
				/**
				 * Positive sequence shunt (charging) susceptance per section
				 */
				IEC61970::Base::Domain::Susceptance b;
				/**
				 * Zero sequence shunt (charging) susceptance per section
				 */
				IEC61970::Base::Domain::Susceptance b0;
				/**
				 * Positive sequence shunt (charging) conductance per section
				 */
				IEC61970::Base::Domain::Conductance g;
				/**
				 * Zero sequence shunt (charging) conductance per section
				 */
				IEC61970::Base::Domain::Conductance g0;
				/**
				 * The number of the section.
				 */
				IEC61970::Base::Domain::Integer sectionNumber;

			};

		}

	}

}
#endif // NONLINEARSHUNTCOMPENSATORPOINT_H
