///////////////////////////////////////////////////////////
//  WindContQPQULimIEC.h
//  Implementation of the Class WindContQPQULimIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDCONTQPQULIMIEC_H
#define WINDCONTQPQULIMIEC_H

#include "IEC61970/Base/Domain/Seconds.h"
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
				 * QP and QU limitation model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.10.
				 */
				class WindContQPQULimIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContQPQULimIEC();
					virtual ~WindContQPQULimIEC();
					/**
					 * Power measurement filter time constant for Q capacity
					 * (<i>T</i><sub>pfiltql</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpfiltql;
					/**
					 * Voltage measurement filter time constant for Q capacity
					 * (<i>T</i><sub>ufiltql</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufiltql;
					/**
					 * Wind generator type 3 or 4 model with which this QP and QU limitation model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // WINDCONTQPQULIMIEC_H
