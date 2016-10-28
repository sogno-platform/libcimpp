///////////////////////////////////////////////////////////
//  UnderexcLim2Simplified.h
//  Implementation of the Class UnderexcLim2Simplified
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef UNDEREXCLIM2SIMPLIFIED_H
#define UNDEREXCLIM2SIMPLIFIED_H

#include "IEC61970/Base/Domain/PU.h"
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
				 * This model can be derived from UnderexcLimIEEE2.
				 * The limit characteristic (look –up table) is a single straight-line, the same
				 * as UnderexcLimIEEE2 (see Figure 10.4 (p 32), IEEE 421.5-2005 Section 10.2).
				 */
				class UnderexcLim2Simplified : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
				{

				public:
					UnderexcLim2Simplified();
					virtual ~UnderexcLim2Simplified();
					/**
					 * Gain Under excitation limiter (Kui).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kui;
					/**
					 * Segment P initial point (P0).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU p0;
					/**
					 * Segment P end point (P1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU p1;
					/**
					 * Segment Q initial point (Q0).  Typical Value = -0.31.
					 */
					IEC61970::Base::Domain::PU q0;
					/**
					 * Segment Q end point (Q1).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::PU q1;
					/**
					 * Maximum error signal (V<sub>UImax</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vuimax;
					/**
					 * Minimum error signal (V<sub>UImin</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vuimin;

				};

			}

		}

	}

}
#endif // UNDEREXCLIM2SIMPLIFIED_H
