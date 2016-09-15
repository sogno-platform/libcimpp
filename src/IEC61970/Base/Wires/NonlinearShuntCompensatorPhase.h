///////////////////////////////////////////////////////////
//  NonlinearShuntCompensatorPhase.h
//  Implementation of the Class NonlinearShuntCompensatorPhase
//  Created on:      28-Jan-2016 12:45:49
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_AD6505F6_391C_4d95_9EF4_4B9BE4E5EF61__INCLUDED_)
#define EA_AD6505F6_391C_4d95_9EF4_4B9BE4E5EF61__INCLUDED_

#include <list>

#include "IEC61970/Base/Wires/ShuntCompensatorPhase.h"
#include "IEC61970/Base/Wires/NonlinearShuntCompensatorPhasePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A per phase non linear shunt compensator has bank or section admittance values
			 * that differs.
			 */
			class NonlinearShuntCompensatorPhase : public IEC61970::Base::Wires::ShuntCompensatorPhase
			{

			public:
				NonlinearShuntCompensatorPhase();
				virtual ~NonlinearShuntCompensatorPhase();
				/**
				 * All points of the non-linear shunt compensator phase.
				 */
				std::list<IEC61970::Base::Wires::NonlinearShuntCompensatorPhasePoint*> NonlinearShuntCompensatorPhasePoints;

			};

		}

	}

}
#endif // !defined(EA_AD6505F6_391C_4d95_9EF4_4B9BE4E5EF61__INCLUDED_)
