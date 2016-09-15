///////////////////////////////////////////////////////////
//  ExcIEEEST6B.h
//  Implementation of the Class ExcIEEEST6B
//  Created on:      28-Jan-2016 12:44:37
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_CAF60577_216C_4c0d_9C83_046566F38975__INCLUDED_)
#define EA_CAF60577_216C_4c0d_9C83_046566F38975__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcST6BOELselectorKind.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST6B model. This model consists
				 * of a PI voltage regulator with an inner loop field voltage regulator and pre-
				 * control. The field voltage regulator implements a proportional control. The pre-
				 * control and the delay in the feedback circuit increase the dynamic response.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.6. 
				 */
				class ExcIEEEST6B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST6B();
					virtual ~ExcIEEEST6B();
					/**
					 * Exciter output current limit reference (I<sub>LR</sub>).  Typical Value = 4.164.
					 */
					IEC61970::Base::Domain::PU ilr;
					/**
					 * Exciter output current limit adjustment (K<sub>CI</sub>).  Typical Value = 1.
					 * 0577.
					 */
					IEC61970::Base::Domain::PU kci;
					/**
					 * Pre-control gain constant of the inner loop field regulator (K<sub>FF</sub>).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kff;
					/**
					 * Feedback gain constant of the inner loop field regulator (K<sub>G</sub>).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Voltage regulator integral gain (K<sub>IA</sub>).  Typical Value = 45.094.
					 */
					IEC61970::Base::Domain::PU kia;
					/**
					 * Exciter output current limiter gain (K<sub>LR</sub>).  Typical Value = 17.33.
					 */
					IEC61970::Base::Domain::PU klr;
					/**
					 * Forward gain constant of the inner loop field regulator (K<sub>M</sub>).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU km;
					/**
					 * Voltage regulator proportional gain (K<sub>PA</sub>).  Typical Value = 18.038.
					 */
					IEC61970::Base::Domain::PU kpa;
					/**
					 * OEL input selector (OELin). Typical Value = noOELinput.
					 */
					IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcST6BOELselectorKind oelin;
					/**
					 * Feedback time constant of inner loop field voltage regulator (T<sub>G</sub>).
					 * Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 4.81.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -3.85.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 4.81.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -3.85.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_CAF60577_216C_4c0d_9C83_046566F38975__INCLUDED_)
