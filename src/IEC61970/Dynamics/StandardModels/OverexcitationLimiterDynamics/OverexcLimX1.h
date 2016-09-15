///////////////////////////////////////////////////////////
//  OverexcLimX1.h
//  Implementation of the Class OverexcLimX1
//  Created on:      28-Jan-2016 12:45:55
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_CF0B0F85_C113_417c_A957_0A185BBA674A__INCLUDED_)
#define EA_CF0B0F85_C113_417c_A957_0A185BBA674A__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/OverexcitationLimiterDynamics/OverexcitationLimiterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace OverexcitationLimiterDynamics
			{
				/**
				 * Field voltage over excitation limiter.
				 */
				class OverexcLimX1 : public IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics
				{

				public:
					OverexcLimX1();
					virtual ~OverexcLimX1();
					/**
					 * Low voltage point on the inverse time characteristic (EFD<sub>1</sub>).
					 * Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Mid voltage point on the inverse time characteristic (EFD<sub>2</sub>).
					 * Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * High voltage point on the inverse time characteristic (EFD<sub>3</sub>).
					 * Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::PU efd3;
					/**
					 * Desired field voltage (EFD<sub>DES</sub>).  Typical Value = 0.9.
					 */
					IEC61970::Base::Domain::PU efddes;
					/**
					 * Rated field voltage (EFD<sub>RATED</sub>).  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU efdrated;
					/**
					 * Gain (K<sub>MX</sub>).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::PU kmx;
					/**
					 * Time to trip the exciter at the low voltage point on the inverse time
					 * characteristic (TIME<sub>1</sub>).  Typical Value = 120.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time to trip the exciter at the mid voltage point on the inverse time
					 * characteristic (TIME<sub>2</sub>).  Typical Value = 40.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time to trip the exciter at the high voltage point on the inverse time
					 * characteristic (TIME<sub>3</sub>).  Typical Value = 15.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Low voltage limit (V<sub>LOW</sub>) (>0).
					 */
					IEC61970::Base::Domain::PU vlow;

				};

			}

		}

	}

}
#endif // !defined(EA_CF0B0F85_C113_417c_A957_0A185BBA674A__INCLUDED_)
