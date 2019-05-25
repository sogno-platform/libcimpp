///////////////////////////////////////////////////////////
//  OverexcLim2.h
//  Implementation of the Class OverexcLim2
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OVEREXCLIM2_H
#define OVEREXCLIM2_H

#include "IEC61970/Base/Domain/PU.h"
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
				 * Different from LimIEEEOEL, LimOEL2 has a fixed pickup threshold and reduces the
				 * excitation set-point by mean of non-windup integral regulator.
				 * Irated is the rated machine excitation current (calculated from nameplate
				 * conditions: V<sub>nom</sub>, P<sub>nom</sub>, CosPhi<sub>nom</sub>).
				 */
				class OverexcLim2 : public IEC61970::Dynamics::StandardModels::OverexcitationLimiterDynamics::OverexcitationLimiterDynamics
				{

				public:
					OverexcLim2();
					virtual ~OverexcLim2();
					/**
					 * Limit value of rated field current (I<sub>FDLIM</sub>).  Typical Value = 1.05.
					 */
					IEC61970::Base::Domain::PU ifdlim;
					/**
					 * Gain Over excitation limiter (K<sub>OI</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU koi;
					/**
					 * Maximum error signal (V<sub>OIMAX</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU voimax;
					/**
					 * Minimum error signal (V<sub>OIMIN</sub>).  Typical Value = -9999.
					 */
					IEC61970::Base::Domain::PU voimin;

				};

			}

		}

	}

}
#endif // OVEREXCLIM2_H
