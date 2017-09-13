///////////////////////////////////////////////////////////
//  WindRefFrameRotIEC.h
//  Implementation of the Class WindRefFrameRotIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDREFFRAMEROTIEC_H
#define WINDREFFRAMEROTIEC_H

#include "IEC61970/Base/Domain/Seconds.h"
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
				 * Reference frame rotation model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.3.5.
				 */
				class WindRefFrameRotIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindRefFrameRotIEC();
					virtual ~WindRefFrameRotIEC();
					/**
					 * Time constant for PLL first order filter model (T<sub>PLL</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpll;
					/**
					 * Voltage below which the angle of the voltage is filtered and possibly also
					 * frozen (u<sub>PLL1</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU upll1;
					/**
					 * Voltage (u<sub>PLL2</sub>) below which the angle of the voltage is frozen if
					 * u<sub>PLL2 </sub>is smaller or equal to u<sub>PLL1</sub> . It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU upll2;
					/**
					 * Wind turbine type 3 or 4 model with which this reference frame rotation model
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // WINDREFFRAMEROTIEC_H
