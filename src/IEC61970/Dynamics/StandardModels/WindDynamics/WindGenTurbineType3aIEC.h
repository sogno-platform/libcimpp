///////////////////////////////////////////////////////////
//  WindGenTurbineType3aIEC.h
//  Implementation of the Class WindGenTurbineType3aIEC
//  Created on:      28-Jan-2016 12:47:51
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_3B847026_0C7A_4656_BA67_29287064234A__INCLUDED_)
#define EA_3B847026_0C7A_4656_BA67_29287064234A__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType3IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * IEC Type 3A generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.3.2.
				 */
				class WindGenTurbineType3aIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC
				{

				public:
					WindGenTurbineType3aIEC();
					virtual ~WindGenTurbineType3aIEC();
					/**
					 * Current PI controller proportional gain (K<sub>Pc</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Float kpc;
					/**
					 * Current PI controller integration time constant (T<sub>Ic</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tic;
					/**
					 * Electromagnetic transient reactance (x<sub>S</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU xs;

				};

			}

		}

	}

}
#endif // !defined(EA_3B847026_0C7A_4656_BA67_29287064234A__INCLUDED_)
