///////////////////////////////////////////////////////////
//  WindAeroTwoDimIEC.h
//  Implementation of the Class WindAeroTwoDimIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDAEROTWODIMIEC_H
#define WINDAEROTWODIMIEC_H

#include "IEC61970/Base/Domain/PU.h"
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
				 * Two-dimensional aerodynamic model.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 5.6.1.3.
				 */
				class WindAeroTwoDimIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindAeroTwoDimIEC();
					virtual ~WindAeroTwoDimIEC();
					/**
					 * Partial derivative of aerodynamic power with respect to changes in WTR speed
					 * (<i>dp</i><i><sub>omega</sub></i>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpomega;
					/**
					 * Partial derivative of aerodynamic power with respect to changes in pitch angle
					 * (<i>dp</i><i><sub>theta</sub></i>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU dptheta;
					/**
					 * Partial derivative (<i>dp</i><sub>v1</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpv1;
					/**
					 * Rotor speed if the wind turbine is not derated
					 * (<i>omega</i><i><sub>0</sub></i>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU omegazero;
					/**
					 * Available aerodynamic power (<i>p</i><sub>avail</sub>). It is case dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU pavail;
					/**
					 * Blade angle at twice rated wind speed (<i>theta</i><i><sub>v2</sub></i>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetav2;
					/**
					 * Pitch angle if the wind turbine is not derated
					 * (<i>theta</i><i><sub>0</sub></i>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetazero;
					/**
					 * Wind turbine type 3 model with which this wind aerodynamic model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC *WindTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDAEROTWODIMIEC_H
