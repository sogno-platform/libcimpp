///////////////////////////////////////////////////////////
//  PenstockLossCurve.h
//  Implementation of the Class PenstockLossCurve
//  Created on:      28-Jan-2016 12:45:56
///////////////////////////////////////////////////////////

#if !defined(EA_0E2BD1FE_C1B4_409e_A20F_813FFDC9F659__INCLUDED_)
#define EA_0E2BD1FE_C1B4_409e_A20F_813FFDC9F659__INCLUDED_

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Relationship between penstock head loss (in meters) and  total discharge
				 * through the penstock (in cubic meters per second). One or more turbines may be
				 * connected to the same penstock.
				 */
				class PenstockLossCurve : public IEC61970::Base::Core::Curve
				{

				public:
					PenstockLossCurve();
					virtual ~PenstockLossCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_0E2BD1FE_C1B4_409e_A20F_813FFDC9F659__INCLUDED_)
