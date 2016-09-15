///////////////////////////////////////////////////////////
//  PssSB4.h
//  Implementation of the Class PssSB4
//  Created on:      28-Jan-2016 12:46:20
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_BDB658DB_A97F_4124_864E_4944AD92F341__INCLUDED_)
#define EA_BDB658DB_A97F_4124_864E_4944AD92F341__INCLUDED_

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
#endif // !defined(EA_BDB658DB_A97F_4124_864E_4944AD92F341__INCLUDED_)
