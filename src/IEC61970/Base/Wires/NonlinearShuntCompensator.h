///////////////////////////////////////////////////////////
//  NonlinearShuntCompensator.h
//  Implementation of the Class NonlinearShuntCompensator
//  Created on:      28-Jan-2016 12:45:48
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_26DF23C1_F277_4ca1_BB3D_89E5696E4934__INCLUDED_)
#define EA_26DF23C1_F277_4ca1_BB3D_89E5696E4934__INCLUDED_

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
#endif // !defined(EA_26DF23C1_F277_4ca1_BB3D_89E5696E4934__INCLUDED_)
