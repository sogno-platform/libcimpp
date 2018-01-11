///////////////////////////////////////////////////////////
//  WindContQLimIEC.h
//  Implementation of the Class WindContQLimIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDCONTQLIMIEC_H
#define WINDCONTQLIMIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Constant Q limitation model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.9.
				 */
				class WindContQLimIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContQLimIEC();
					virtual ~WindContQLimIEC();
					/**
					 * Maximum reactive power (<i>q</i><sub>max</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU qmax;
					/**
					 * Minimum reactive power (<i>q</i><sub>min</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU qmin;
					/**
					 * Wind generator type 3 or 4 model with which this constant Q limitation model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // WINDCONTQLIMIEC_H
