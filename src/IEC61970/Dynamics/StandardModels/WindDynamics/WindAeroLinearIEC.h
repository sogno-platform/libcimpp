///////////////////////////////////////////////////////////
//  WindAeroLinearIEC.h
//  Implementation of the Class WindAeroLinearIEC
//  Created on:      28-Jan-2016 12:47:45
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_B662359D_F2D7_4a5e_A024_6703B317C95B__INCLUDED_)
#define EA_B662359D_F2D7_4a5e_A024_6703B317C95B__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType3IEC.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * The linearised aerodynamic model.
				 * 
				 * Reference: IEC Standard 614000-27-1 Section 6.6.1.2.
				 */
				class WindAeroLinearIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindAeroLinearIEC();
					virtual ~WindAeroLinearIEC();
					/**
					 * Partial derivative of aerodynamic power with respect to changes in WTR speed
					 * (<i>dp</i><i><sub>omega</sub></i>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpomega;
					/**
					 * Partial derivative of aerodynamic power with respect to changes in pitch angle
					 * (<i>dp</i><i><sub>theta</sub></i>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU dptheta;
					/**
					 * Rotor speed if the wind turbine is not derated
					 * (<i>omega</i><i><sub>0</sub></i>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU omegazero;
					/**
					 * Available aerodynamic power (<i>p</i><sub>avail</sub>). It is case dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU pavail;
					/**
					 * Pitch angle if the wind turbine is not derated
					 * (<i>theta</i><i><sub>0</sub></i>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::AngleDegrees thetazero;
					/**
					 * Wind generator type 3 model with which this wind aerodynamic model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC *WindGenTurbineType3IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_B662359D_F2D7_4a5e_A024_6703B317C95B__INCLUDED_)
