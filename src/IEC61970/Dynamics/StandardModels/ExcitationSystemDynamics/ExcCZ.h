///////////////////////////////////////////////////////////
//  ExcCZ.h
//  Implementation of the Class ExcCZ
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCCZ_H
#define EXCCZ_H

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
				 * Czech Proportion/Integral Exciter.
				 */
				class ExcCZ : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcCZ();
					virtual ~ExcCZ();
					/**
					 * Exciter output maximum limit (Efdmax).
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Exciter output minimum limit (Efdmin). 
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * Regulator gain (Ka).
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (Ke).
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Regulator proportional gain (Kp).
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Regulator time constant (Ta).
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Regulator integral time constant (Tc). 
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Voltage regulator maximum limit (Vrmax). 
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Voltage regulator minimum limit (Vrmin). 
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCCZ_H
