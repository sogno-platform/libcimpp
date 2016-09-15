///////////////////////////////////////////////////////////
//  PssSK.h
//  Implementation of the Class PssSK
//  Created on:      28-Jan-2016 12:46:21
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_5B4AAD55_E69E_4979_9ED9_650E52E417DF__INCLUDED_)
#define EA_5B4AAD55_E69E_4979_9ED9_650E52E417DF__INCLUDED_

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
				 * PSS Slovakian type – three inputs.
				 */
				class PssSK : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssSK();
					virtual ~PssSK();
					/**
					 * Gain P (K1).  Typical Value = -0.3.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Gain fe (K2).  Typical Value = -0.15.
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Gain If (K3).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Denominator time constant (T1).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Filter time constant (T2).  Typical Value = 0.35.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Denominator time constant (T3).  Typical Value = 0.22.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Filter time constant (T4).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Denominator time constant (T5).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Filter time constant (T6).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Stabilizer output max limit (Vsmax).  Typical Value = 0.4.
					 */
					IEC61970::Base::Domain::PU vsmax;
					/**
					 * Stabilizer output min limit (Vsmin).  Typical Value = -0.4.
					 */
					IEC61970::Base::Domain::PU vsmin;

				};

			}

		}

	}

}
#endif // !defined(EA_5B4AAD55_E69E_4979_9ED9_650E52E417DF__INCLUDED_)
