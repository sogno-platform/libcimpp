///////////////////////////////////////////////////////////
//  NonlinearShuntCompensator.h
//  Implementation of the Class NonlinearShuntCompensator
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef NONLINEARSHUNTCOMPENSATOR_H
#define NONLINEARSHUNTCOMPENSATOR_H

#include <list>

#include "IEC61970/Base/Wires/ShuntCompensator.h"
#include "IEC61970/Base/Wires/NonlinearShuntCompensatorPoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A non linear shunt compensator has bank or section admittance values that
			 * differs.
			 */
			class NonlinearShuntCompensator : public IEC61970::Base::Wires::ShuntCompensator
			{

			public:
				NonlinearShuntCompensator();
				virtual ~NonlinearShuntCompensator();
				/**
				 * All points of the non-linear shunt compensator.
				 */
				std::list<IEC61970::Base::Wires::NonlinearShuntCompensatorPoint*> NonlinearShuntCompensatorPoints;

			};

		}

	}

}
#endif // NONLINEARSHUNTCOMPENSATOR_H
