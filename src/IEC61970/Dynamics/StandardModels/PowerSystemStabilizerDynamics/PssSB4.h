///////////////////////////////////////////////////////////
//  PssSB4.h
//  Implementation of the Class PssSB4
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef PSSSB4_H
#define PSSSB4_H

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
				 * Power sensitive stabilizer model.
				 */
				class PssSB4 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssSB4();
					virtual ~PssSB4();
					/**
					 * Gain (Kx).
					 */
					IEC61970::Base::Domain::PU kx;
					/**
					 * Time constant (Ta).
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Time constant (Tb).
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Time constant (Tc).
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Time constant (Td).
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Time constant (Te).
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Time constant (Tt).
					 */
					IEC61970::Base::Domain::Seconds tt;
					/**
					 * Reset time constant (Tx1).
					 */
					IEC61970::Base::Domain::Seconds tx1;
					/**
					 * Time constant (Tx2).
					 */
					IEC61970::Base::Domain::Seconds tx2;
					/**
					 * Limiter (Vsmax).
					 */
					IEC61970::Base::Domain::PU vsmax;
					/**
					 * Limiter (Vsmin).
					 */
					IEC61970::Base::Domain::PU vsmin;

				};

			}

		}

	}

}
#endif // PSSSB4_H
