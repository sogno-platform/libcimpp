///////////////////////////////////////////////////////////
//  PssELIN2.h
//  Implementation of the Class PssELIN2
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PSSELIN2_H
#define PSSELIN2_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/PowerSystemStabilizerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PowerSystemStabilizerDynamics
			{
				/**
				 * Power system stabilizer typically associated with ExcELIN2 (though PssIEEE2B or
				 * Pss2B can also be used).
				 */
				class PssELIN2 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssELIN2();
					virtual ~PssELIN2();
					/**
					 * Coefficient (a_PSS).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU apss;
					/**
					 * Gain (Ks1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ks1;
					/**
					 * Gain (Ks2).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU ks2;
					/**
					 * Coefficient (p_PSS) (>=0 and <=4).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU ppss;
					/**
					 * PSS limiter (psslim).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU psslim;
					/**
					 * Time constant (Ts1).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ts1;
					/**
					 * Time constant (Ts2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ts2;
					/**
					 * Time constant (Ts3).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ts3;
					/**
					 * Time constant (Ts4).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds ts4;
					/**
					 * Time constant (Ts5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ts5;
					/**
					 * Time constant (Ts6).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ts6;

				};

			}

		}

	}

}
#endif // PSSELIN2_H
