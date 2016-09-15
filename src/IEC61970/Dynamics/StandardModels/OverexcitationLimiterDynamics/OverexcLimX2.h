///////////////////////////////////////////////////////////
//  OverexcLimX2.h
//  Implementation of the Class OverexcLimX2
//  Created on:      28-Jan-2016 12:45:56
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_00FFE35D_DB50_41b9_AE62_2C012A4AFB60__INCLUDED_)
#define EA_00FFE35D_DB50_41b9_AE62_2C012A4AFB60__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Field Voltage or Current overexcitation limiter designed to protect the
				 * generator field of an AC machine with automatic excitation control from
				 * overheating due to prolonged overexcitation.
				 */
				class OverexcLimX2 : public IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics
				{

				public:
					OverexcLimX2();
					virtual ~OverexcLimX2();
					/**
					 * Low voltage or current point on the inverse time characteristic
					 * (EFD<sub>1</sub>).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Mid voltage or current point on the inverse time characteristic
					 * (EFD<sub>2</sub>).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * High voltage or current point on the inverse time characteristic
					 * (EFD<sub>3</sub>).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::PU efd3;
					/**
					 * Desired field voltage if m=F or field current if m=T (EFD<sub>DES</sub>).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU efddes;
					/**
					 * Rated field voltage if m=F or field current if m=T (EFD<sub>RATED</sub>).
					 * Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU efdrated;
					/**
					 * Gain (K<sub>MX</sub>).  Typical Value = 0.002.
					 */
					IEC61970::Base::Domain::PU kmx;
					/**
					 * (m).
					 * true = IFD limiting
					 * false = EFD limiting.
					 */
					IEC61970::Base::Domain::Boolean m;
					/**
					 * Time to trip the exciter at the low voltage or current point on the inverse
					 * time characteristic (TIME<sub>1</sub>).  Typical Value = 120.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time to trip the exciter at the mid voltage or current point on the inverse
					 * time characteristic (TIME<sub>2</sub>).  Typical Value = 40.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time to trip the exciter at the high voltage or current point on the inverse
					 * time characteristic (TIME<sub>3</sub>).  Typical Value = 15.
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
#endif // !defined(EA_00FFE35D_DB50_41b9_AE62_2C012A4AFB60__INCLUDED_)
