///////////////////////////////////////////////////////////
//  UnderexcLimX2.h
//  Implementation of the Class UnderexcLimX2
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef UNDEREXCLIMX2_H
#define UNDEREXCLIMX2_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/UnderexcitationLimiterDynamics/UnderexcitationLimiterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace UnderexcitationLimiterDynamics
			{
				/**
				 * <font color="#0f0f0f">Westinghouse minimum excitation limiter.</font>
				 */
				class UnderexcLimX2 : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
				{

				public:
					UnderexcLimX2();
					virtual ~UnderexcLimX2();
					/**
					 * Differential gain (Kf2).
					 */
					IEC61970::Base::Domain::PU kf2;
					/**
					 * Minimum excitation limit gain (Km).
					 */
					IEC61970::Base::Domain::PU km;
					/**
					 * Minimum excitation limit value (MELMAX).
					 */
					IEC61970::Base::Domain::PU melmax;
					/**
					 * Excitation center setting (Qo).
					 */
					IEC61970::Base::Domain::PU qo;
					/**
					 * Excitation radius (R).
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Differential time constant (Tf2) (>0).
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * Minimum excitation limit time constant (Tm).
					 */
					IEC61970::Base::Domain::Seconds tm;

				};

			}

		}

	}

}
#endif // UNDEREXCLIMX2_H
