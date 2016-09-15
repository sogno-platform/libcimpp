///////////////////////////////////////////////////////////
//  ExcSEXS.h
//  Implementation of the Class ExcSEXS
//  Created on:      28-Jan-2016 12:44:42
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_28544D70_D171_4e70_BBFA_D051CBF03E2F__INCLUDED_)
#define EA_28544D70_D171_4e70_BBFA_D051CBF03E2F__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Simplified Excitation System Model.
				 */
				class ExcSEXS : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcSEXS();
					virtual ~ExcSEXS();
					/**
					 * Field voltage clipping maximum limit (Efdmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Field voltage clipping minimum limit (Efdmin).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * Maximum field voltage output (Emax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU emax;
					/**
					 * Minimum field voltage output (Emin).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU emin;
					/**
					 * Gain (K) (>0).  Typical Value = 100.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * PI controller gain (Kc).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Ta/Tb - gain reduction ratio of lag-lead element (TaTb).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float tatb;
					/**
					 * Denominator time constant of lag-lead block (Tb).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * PI controller phase lead time constant (Tc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Time constant of gain block (Te).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds te;

				};

			}

		}

	}

}
#endif // !defined(EA_28544D70_D171_4e70_BBFA_D051CBF03E2F__INCLUDED_)
