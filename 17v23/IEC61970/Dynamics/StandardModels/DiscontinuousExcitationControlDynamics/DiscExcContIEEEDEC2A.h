///////////////////////////////////////////////////////////
//  DiscExcContIEEEDEC2A.h
//  Implementation of the Class DiscExcContIEEEDEC2A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef DISCEXCCONTIEEEDEC2A_H
#define DISCEXCCONTIEEEDEC2A_H

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
#endif // DISCEXCCONTIEEEDEC2A_H
