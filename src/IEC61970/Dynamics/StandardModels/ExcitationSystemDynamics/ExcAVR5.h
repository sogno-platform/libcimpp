///////////////////////////////////////////////////////////
//  ExcAVR5.h
//  Implementation of the Class ExcAVR5
//  Created on:      28-Jan-2016 12:44:24
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_D5431CB9_EEB0_4473_B4D5_A35CADC549D6__INCLUDED_)
#define EA_D5431CB9_EEB0_4473_B4D5_A35CADC549D6__INCLUDED_

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
				 * Manual excitation control with field circuit resistance. This model can be used
				 * as a very simple representation of manual voltage control.
				 */
				class ExcAVR5 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR5();
					virtual ~ExcAVR5();
					/**
					 * Gain (Ka).
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Effective Output Resistance (Rex). Rex represents the effective output
					 * resistance seen by the excitation system.
					 */
					IEC61970::Base::Domain::PU rex;
					/**
					 * Time constant (Ta).
					 */
					IEC61970::Base::Domain::Seconds ta;

				};

			}

		}

	}

}
#endif // !defined(EA_D5431CB9_EEB0_4473_B4D5_A35CADC549D6__INCLUDED_)
