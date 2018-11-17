///////////////////////////////////////////////////////////
//  NonlinearShuntCompensatorPhase.h
//  Implementation of the Class NonlinearShuntCompensatorPhase
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef NONLINEARSHUNTCOMPENSATORPHASE_H
#define NONLINEARSHUNTCOMPENSATORPHASE_H

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
#endif // NONLINEARSHUNTCOMPENSATORPHASE_H
