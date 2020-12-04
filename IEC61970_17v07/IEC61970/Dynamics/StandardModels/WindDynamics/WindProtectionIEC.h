///////////////////////////////////////////////////////////
//  WindProtectionIEC.h
//  Implementation of the Class WindProtectionIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPROTECTIONIEC_H
#define WINDPROTECTIONIEC_H

#include "IEC61970/Base/Domain/PU.h"
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
				 * Reference: IEC Standard 614000-27-1 Section 6.6.6.
				 */
				class WindProtectionIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindProtectionIEC();
					virtual ~WindProtectionIEC();
					/**
					 * Set of wind turbine over frequency protection levels
					 * (<i>f</i><i><sub>over</sub></i>). It is project dependent parameter. 
					 */
					IEC61970::Base::Domain::PU fover;
					/**
					 * Set of wind turbine under frequency protection levels
					 * (<i>f</i><i><sub>under</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU funder;
					/**
					 * Set of corresponding wind turbine over frequency protection disconnection times
					 * (<i>T</i><i><sub>fover</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tfover;
					/**
					 * Set of corresponding wind turbine under frequency protection disconnection
					 * times (<i>T</i><i><sub>funder</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tfunder;
					/**
					 * Set of corresponding wind turbine over voltage protection disconnection times
					 * (<i>T</i><i><sub>uover</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tuover;
					/**
					 * Set of corresponding wind turbine under voltage protection disconnection times
					 * (<i>T</i><i><sub>uunder</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tuunder;
					/**
					 * Set of wind turbine over voltage protection levels
					 * (<i>u</i><i><sub>over</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU uover;
					/**
					 * Set of wind turbine under voltage protection levels
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
