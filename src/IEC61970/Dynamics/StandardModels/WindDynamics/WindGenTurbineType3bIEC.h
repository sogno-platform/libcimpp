///////////////////////////////////////////////////////////
//  WindGenTurbineType3bIEC.h
//  Implementation of the Class WindGenTurbineType3bIEC
//  Created on:      28-Jan-2016 12:47:52
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_FB0EF898_4086_4ae9_8846_25EF41E14AC5__INCLUDED_)
#define EA_FB0EF898_4086_4ae9_8846_25EF41E14AC5__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * IEC Type 3B generator set model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.3.3.
				 */
				class WindGenTurbineType3bIEC : public IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC
				{

				public:
					WindGenTurbineType3bIEC();
					virtual ~WindGenTurbineType3bIEC();
					/**
					 * Crowbar duration versus voltage variation look-up table (f<sub>duCW</sub>()).
					 * It is case dependent parameter.
					 */
					IEC61970::Base::Domain::Float fducw;
					/**
					 * Crowbar control mode (<i>M</i><sub>WTcwp</sub>).
					 * <ul>
					 * 	<li>true = 1 in the model</li>
					 * 	<li>false = 0 in the model.</li>
					 * </ul>
					 * The parameter is case dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mwtcwp;
					/**
					 * Current generation Time constant (<i>T</i><sub>g</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds tg;
					/**
					 * Time constant for crowbar washout filter (<i>T</i><sub>wo</sub>). It is case
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds two;
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
#endif // !defined(EA_FB0EF898_4086_4ae9_8846_25EF41E14AC5__INCLUDED_)
