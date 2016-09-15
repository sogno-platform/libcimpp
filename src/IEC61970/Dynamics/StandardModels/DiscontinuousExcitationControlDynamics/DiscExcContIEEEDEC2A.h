///////////////////////////////////////////////////////////
//  DiscExcContIEEEDEC2A.h
//  Implementation of the Class DiscExcContIEEEDEC2A
//  Created on:      28-Jan-2016 12:44:06
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_7B4EF225_38A0_4f4c_BA74_7E63450CFD10__INCLUDED_)
#define EA_7B4EF225_38A0_4f4c_BA74_7E63450CFD10__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/DiscontinuousExcitationControlDynamics/DiscontinuousExcitationControlDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace DiscontinuousExcitationControlDynamics
			{
				/**
				 * The class represents IEEE Type DEC2A model for the discontinuous excitation
				 * control. This system provides transient excitation boosting via an open-loop
				 * control as initiated by a trigger signal generated remotely.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 12.3. 
				 */
				class DiscExcContIEEEDEC2A : public IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics
				{

				public:
					DiscExcContIEEEDEC2A();
					virtual ~DiscExcContIEEEDEC2A();
					/**
					 * Discontinuous controller time constant (<i>T</i><i><sub>D1</sub></i>). 
					 */
					IEC61970::Base::Domain::Seconds td1;
					/**
					 * Discontinuous controller washout time constant (<i>T</i><i><sub>D2</sub></i>). 
					 */
					IEC61970::Base::Domain::Seconds td2;
					/**
					 * Limiter (<i>V</i><i><sub>DMAX</sub></i>). 
					 */
					IEC61970::Base::Domain::PU vdmax;
					/**
					 * Limiter (<i>V</i><i><sub>DMIN</sub></i>). 
					 */
					IEC61970::Base::Domain::PU vdmin;
					/**
					 * Discontinuous controller input reference (<i>V</i><i><sub>K</sub></i>). 
					 */
					IEC61970::Base::Domain::PU vk;

				};

			}

		}

	}

}
#endif // !defined(EA_7B4EF225_38A0_4f4c_BA74_7E63450CFD10__INCLUDED_)
