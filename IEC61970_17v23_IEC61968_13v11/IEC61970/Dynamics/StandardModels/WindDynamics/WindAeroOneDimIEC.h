///////////////////////////////////////////////////////////
//  WindAeroOneDimIEC.h
//  Implementation of the Class WindAeroOneDimIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDAEROONEDIMIEC_H
#define WINDAEROONEDIMIEC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * One-dimensional aerodynamic model.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 5.6.1.2.
				 */
				class WindAeroOneDimIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindAeroOneDimIEC();
					virtual ~WindAeroOneDimIEC();
					/**
					 * Aerodynamic gain (<i>k</i><i><sub>a</sub></i>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Float ka;
					/**
					 * Initial pitch angle (<i>theta</i><i><sub>omega0</sub></i>). It is case
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetaomega;
					/**
					 * Wind turbine type 3 model with which this wind aerodynamic model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC *WindTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDAEROONEDIMIEC_H
