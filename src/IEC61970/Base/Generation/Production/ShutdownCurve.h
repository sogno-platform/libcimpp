///////////////////////////////////////////////////////////
//  ShutdownCurve.h
//  Implementation of the Class ShutdownCurve
//  Created on:      28-Jan-2016 12:46:42
///////////////////////////////////////////////////////////

#if !defined(EA_924F2FE0_AD32_4ab0_B72A_F7CF6938024A__INCLUDED_)
#define EA_924F2FE0_AD32_4ab0_B72A_F7CF6938024A__INCLUDED_

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
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
				 * Relationship between the rate in gross active power/minute (Y-axis) at which a
				 * unit should be shutdown and its present gross MW output (X-axis).
				 */
				class ShutdownCurve : public IEC61970::Base::Core::Curve
				{

				public:
					ShutdownCurve();
					virtual ~ShutdownCurve();
					/**
					 * Fixed shutdown cost.
					 */
					IEC61970::Base::Domain::Money shutdownCost;
					/**
					 * The date and time of the most recent generating unit shutdown.
					 */
					IEC61970::Base::Domain::DateTime shutdownDate;

				};

			}

		}

	}

}
#endif // !defined(EA_924F2FE0_AD32_4ab0_B72A_F7CF6938024A__INCLUDED_)
