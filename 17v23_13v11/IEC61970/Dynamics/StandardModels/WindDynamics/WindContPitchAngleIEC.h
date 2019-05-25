///////////////////////////////////////////////////////////
//  WindContPitchAngleIEC.h
//  Implementation of the Class WindContPitchAngleIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTPITCHANGLEIEC_H
#define WINDCONTPITCHANGLEIEC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Domain/Seconds.h"
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
				 * Pitch angle control model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.2.
				 */
				class WindContPitchAngleIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContPitchAngleIEC();
					virtual ~WindContPitchAngleIEC();
					/**
					 * Maximum pitch positive ramp rate (d<i>theta</i><sub>max</sub>). It is type
					 * dependent parameter. Unit = degrees/sec. 
					 */
					IEC61970::Base::Domain::Float dthetamax;
					/**
					 * Maximum pitch negative ramp rate (d<i>theta</i><sub>min</sub>). It is type
					 * dependent parameter. Unit = degrees/sec. 
					 */
					IEC61970::Base::Domain::Float dthetamin;
					/**
					 * Power PI controller integration gain (<i>K</i><sub>Ic</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kic;
					/**
					 * Speed PI controller integration gain (<i>K</i><sub>Iomega</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kiomega;
					/**
					 * Power PI controller proportional gain (<i>K</i><sub>Pc</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpc;
					/**
					 * Speed PI controller proportional gain (<i>K</i><sub>Pomega</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpomega;
					/**
					 * Pitch cross coupling gain (K<sub>PX</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpx;
					/**
					 * Maximum pitch angle (<i>theta</i><sub>max</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetamax;
					/**
					 * Minimum pitch angle (<i>theta</i><sub>min</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetamin;
					/**
					 * Pitch time constant (t<i>theta</i>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds ttheta;
					/**
					 * Wind turbine type 3 model with which this pitch control model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3IEC *WindTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDCONTPITCHANGLEIEC_H
