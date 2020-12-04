///////////////////////////////////////////////////////////
//  ExcAVR5.h
//  Implementation of the Class ExcAVR5
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAVR5_H
#define EXCAVR5_H

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
#endif // EXCAVR5_H
