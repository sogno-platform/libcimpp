///////////////////////////////////////////////////////////
//  OverexcLimIEEE.h
//  Implementation of the Class OverexcLimIEEE
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef OVEREXCLIMIEEE_H
#define OVEREXCLIMIEEE_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * The over excitation limiter model is intended to represent the significant
				 * features of OELs necessary for some large-scale system studies. It is the
				 * result of a pragmatic approach to obtain a model that can be widely applied
				 * with attainable data from generator owners. An attempt to include all
				 * variations in the functionality of OELs and duplicate how they interact with
				 * the rest of the excitation systems would likely result in a level of
				 * application insufficient for the studies for which they are intended.
				 * 
				 * Reference: IEEE OEL 421.5-2005 Section 9. 
				 */
				class OverexcLimIEEE : public IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics
				{

				public:
					OverexcLimIEEE();
					virtual ~OverexcLimIEEE();
					/**
					 * OEL pickup/drop-out hysteresis (HYST).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::PU hyst;
					/**
					 * OEL timed field current limit (I<sub>FDLIM</sub>).  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU ifdlim;
					/**
					 * OEL instantaneous field current limit (I<sub>FDMAX</sub>).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::PU ifdmax;
					/**
					 * OEL timed field current limiter pickup level (I<sub>TFPU</sub>).  Typical Value
					 * = 1.05.
					 */
					IEC61970::Base::Domain::PU itfpu;
					/**
					 * OEL cooldown gain (K<sub>CD</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kcd;
					/**
					 * OEL ramped limit rate (K<sub>RAMP</sub>).  Unit = PU/sec.  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Float kramp;

				};

			}

		}

	}

}
#endif // OVEREXCLIMIEEE_H
