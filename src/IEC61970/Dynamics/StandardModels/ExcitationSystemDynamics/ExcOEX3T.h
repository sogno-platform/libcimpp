///////////////////////////////////////////////////////////
//  ExcOEX3T.h
//  Implementation of the Class ExcOEX3T
//  Created on:      28-Jan-2016 12:44:40
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_2CE0ED9A_A4B4_4554_94E0_D08DADAD1199__INCLUDED_)
#define EA_2CE0ED9A_A4B4_4554_94E0_D08DADAD1199__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Modified IEEE Type ST1 Excitation System with semi-continuous and acting
				 * terminal voltage limiter.
				 */
				class ExcOEX3T : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcOEX3T();
					virtual ~ExcOEX3T();
					/**
					 * Saturation parameter (E<sub>1</sub>).
					 */
					IEC61970::Base::Domain::PU e1;
					/**
					 * Saturation parameter (E<sub>2</sub>).
					 */
					IEC61970::Base::Domain::PU e2;
					/**
					 * Gain (K<sub>A</sub>).
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Gain (K<sub>C</sub>).
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Gain (K<sub>D</sub>).
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Gain (K<sub>E</sub>).
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Gain (K<sub>F</sub>).
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Saturation parameter (S<sub>E</sub>(E<sub>1</sub>)).
					 */
					IEC61970::Base::Domain::PU see1;
					/**
					 * Saturation parameter (S<sub>E</sub>(E<sub>2</sub>)).
					 */
					IEC61970::Base::Domain::PU see2;
					/**
					 * Time constant (T<sub>1</sub>).
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time constant (T<sub>2</sub>).
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant (T<sub>3</sub>).
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Time constant (T<sub>4</sub>).
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Time constant (T<sub>5</sub>).
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Time constant (T<sub>6</sub>).
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time constant (T<sub>E</sub>).
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Time constant (T<sub>F</sub>).
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Limiter (V<sub>RMAX</sub>).
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Limiter (V<sub>RMIN</sub>). 
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_2CE0ED9A_A4B4_4554_94E0_D08DADAD1199__INCLUDED_)
