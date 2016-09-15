///////////////////////////////////////////////////////////
//  NonlinearShuntCompensatorPoint.h
//  Implementation of the Class NonlinearShuntCompensatorPoint
//  Created on:      28-Jan-2016 12:45:49
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_2396B043_719A_4e5a_ADE1_09780802CA40__INCLUDED_)
#define EA_2396B043_719A_4e5a_ADE1_09780802CA40__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "BaseClass.h"

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
#endif // !defined(EA_2396B043_719A_4e5a_ADE1_09780802CA40__INCLUDED_)
