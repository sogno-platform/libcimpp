///////////////////////////////////////////////////////////
//  PssSH.h
//  Implementation of the Class PssSH
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef PSSSH_H
#define PSSSH_H

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
				 * Model for Siemens “H infinity” power system stabilizer with generator
				 * electrical power input.
				 */
				class PssSH : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssSH();
					virtual ~PssSH();
					/**
					 * Main gain (K).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Gain 0 (K0).  Typical Value = 0.012.
					 */
					IEC61970::Base::Domain::PU k0;
					/**
					 * Gain 1 (K1).  Typical Value = 0.488.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Gain 2 (K2).  Typical Value = 0.064.
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Gain 3 (K3).  Typical Value = 0.224.
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Gain 4 (K4).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU k4;
					/**
					 * Time constant 1 (T1).  Typical Value = 0.076.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time constant 2 (T2).  Typical Value = 0.086.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant 3 (T3).   Typical Value = 1.068.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Time constant 4 (T4).  Typical Value = 1.913.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Input time constant (Td).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Output maximum limit (Vsmax).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vsmax;
					/**
					 * Output minimum limit (Vsmin).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::PU vsmin;

				};

			}

		}

	}

}
#endif // PSSSH_H
