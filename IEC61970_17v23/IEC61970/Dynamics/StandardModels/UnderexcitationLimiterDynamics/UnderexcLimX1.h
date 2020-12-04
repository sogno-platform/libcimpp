///////////////////////////////////////////////////////////
//  UnderexcLimX1.h
//  Implementation of the Class UnderexcLimX1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef UNDEREXCLIMX1_H
#define UNDEREXCLIMX1_H

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
				 * <font color="#0f0f0f">Allis-Chalmers minimum excitation limiter.</font>
				 */
				class UnderexcLimX1 : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
				{

				public:
					UnderexcLimX1();
					virtual ~UnderexcLimX1();
					/**
					 * Minimum excitation limit slope (K) (>0).
					 */
					IEC61970::Base::Domain::PU k;
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
#endif // UNDEREXCLIMX1_H
