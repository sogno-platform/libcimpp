///////////////////////////////////////////////////////////
//  DiscExcContIEEEDEC3A.h
//  Implementation of the Class DiscExcContIEEEDEC3A
//  Created on:      28-Jan-2016 12:44:07
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_75C08630_1413_4315_A60A_C64FA37F1483__INCLUDED_)
#define EA_75C08630_1413_4315_A60A_C64FA37F1483__INCLUDED_

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
				 * The class represents IEEE Type DEC3A model. In some systems, the stabilizer
				 * output is disconnected from the regulator immediately following a severe fault
				 * to prevent the stabilizer from competing with action of voltage regulator
				 * during the first swing.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 12.4. 
				 */
				class DiscExcContIEEEDEC3A : public IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics
				{

				public:
					DiscExcContIEEEDEC3A();
					virtual ~DiscExcContIEEEDEC3A();
					/**
					 * Reset time delay (<i>T</i><i><sub>DR</sub></i>). 
					 */
					IEC61970::Base::Domain::Seconds tdr;
					/**
					 * Terminal undervoltage comparison level (<i>V</i><i><sub>TMIN</sub></i>). 
					 */
					IEC61970::Base::Domain::PU vtmin;

				};

			}

		}

	}

}
#endif // !defined(EA_75C08630_1413_4315_A60A_C64FA37F1483__INCLUDED_)
