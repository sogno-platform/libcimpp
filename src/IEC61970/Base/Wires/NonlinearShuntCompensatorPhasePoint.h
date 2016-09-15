///////////////////////////////////////////////////////////
//  NonlinearShuntCompensatorPhasePoint.h
//  Implementation of the Class NonlinearShuntCompensatorPhasePoint
//  Created on:      28-Jan-2016 12:45:49
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_1E2620F4_CD5F_4463_B888_B277D416D415__INCLUDED_)
#define EA_1E2620F4_CD5F_4463_B888_B277D416D415__INCLUDED_

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
			 * A per phase non linear shunt compensator bank or section admittance value.
			 */
			class NonlinearShuntCompensatorPhasePoint : public BaseClass
			{

			public:
				NonlinearShuntCompensatorPhasePoint();
				virtual ~NonlinearShuntCompensatorPhasePoint();
				/**
				 * Positive sequence shunt (charging) susceptance per section
				 */
				IEC61970::Base::Domain::Susceptance b;
				/**
				 * Positive sequence shunt (charging) conductance per section
				 */
				IEC61970::Base::Domain::Conductance g;
				/**
				 * The number of the section.
				 */
				IEC61970::Base::Domain::Integer sectionNumber;

			};

		}

	}

}
#endif // !defined(EA_1E2620F4_CD5F_4463_B888_B277D416D415__INCLUDED_)
