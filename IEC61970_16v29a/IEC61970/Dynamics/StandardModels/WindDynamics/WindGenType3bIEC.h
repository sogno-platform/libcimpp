///////////////////////////////////////////////////////////
//  WindGenType3bIEC.h
//  Implementation of the Class WindGenType3bIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDGENTYPE3BIEC_H
#define WINDGENTYPE3BIEC_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * IEC Type 3B generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.3.3.
				 */
				class WindGenType3bIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenType3IEC
				{

				public:
					WindGenType3bIEC();
					virtual ~WindGenType3bIEC();
					/**
					 * Crowbar control mode (<i>M</i><sub>WTcwp</sub>).
					 * <ul>
					 * 	<li>true = 1 in the model</li>
					 * 	<li>false = 0 in the model.</li>
					 * </ul>
					 * The parameter is case dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mwtcwp;
					/**
					 * Current generation Time constant (<i>T</i><sub>g</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Time constant for crowbar washout filter (<i>T</i><sub>wo</sub>). It is case
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds two;

				};

			}

		}

	}

}
#endif // WINDGENTYPE3BIEC_H
