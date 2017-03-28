///////////////////////////////////////////////////////////
//  WindProtectionIEC.h
//  Implementation of the Class WindProtectionIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPROTECTIONIEC_H
#define WINDPROTECTIONIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType1or2IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * The grid protection model includes protection against over and under voltage,
				 * and against over and under frequency.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 5.6.6.
				 */
				class WindProtectionIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindProtectionIEC();
					virtual ~WindProtectionIEC();
					/**
					 * Maximum rate of change of frequency (<i>dF</i><i><sub>max</sub></i>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU dfimax;
					/**
					 * Wind turbine over frequency protection activation threshold
					 * (<i>f</i><i><sub>over</sub></i>). It is project dependent parameter. 
					 */
					IEC61970::Base::Domain::PU fover;
					/**
					 * Wind turbine under frequency protection activation threshold
					 * (<i>f</i><i><sub>under</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU funder;
					/**
					 * Zero crossing measurement mode (<i>Mzc</i>). True = 1 if the WT protection
					 * system uses zero crossings to detect frequency – otherwise false = 0. It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mzc;
					/**
					 * Time interval of moving average window (<i>TfMA</i>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds tfma;
					/**
					 * Wind turbine over voltage protection activation threshold
					 * (<i>u</i><i><sub>over</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU uover;
					/**
					 * Wind turbine under voltage protection activation threshold
					 * (<i>u</i><i><sub>under</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU uunder;
					/**
					 * Wind generator type 3 or 4 model with which this wind turbine protection model
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;
					/**
					 * Wind generator type 1 or 2 model with which this wind turbine protection model
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2IEC *WindTurbineType1or2IEC;

				};

			}

		}

	}

}
#endif // WINDPROTECTIONIEC_H
