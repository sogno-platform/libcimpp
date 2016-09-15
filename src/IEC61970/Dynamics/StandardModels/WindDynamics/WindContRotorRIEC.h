///////////////////////////////////////////////////////////
//  WindContRotorRIEC.h
//  Implementation of the Class WindContRotorRIEC
//  Created on:      28-Jan-2016 12:47:49
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_DC047496_7563_4379_B722_D97BCB79D421__INCLUDED_)
#define EA_DC047496_7563_4379_B722_D97BCB79D421__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType2IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Rotor resistance control model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.2.
				 */
				class WindContRotorRIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContRotorRIEC();
					virtual ~WindContRotorRIEC();
					/**
					 * Integral gain in rotor resistance PI controller (<i>K</i><sub>Irr</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kirr;
					/**
					 * Filter gain for generator speed measurement (K<sub>omegafilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float komegafilt;
					/**
					 * Filter gain for power measurement (<i>K</i><sub>pfilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kpfilt;
					/**
					 * Proportional gain in rotor resistance PI controller (<i>K</i><sub>Prr</sub>).
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kprr;
					/**
					 * Maximum rotor resistance (<i>r</i><sub>max</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU rmax;
					/**
					 * Minimum rotor resistance (<i>r</i><sub>min</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU rmin;
					/**
					 * Filter time constant for generator speed measurement
					 * (<i>T</i><sub>omegafilt</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tomegafilt;
					/**
					 * Filter time constant for power measurement (<i>T</i><sub>pfilt</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpfilt;
					/**
					 * Wind turbine type 2 model with whitch this wind control rotor resistance model
					 * is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC *WindGenTurbineType2IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_DC047496_7563_4379_B722_D97BCB79D421__INCLUDED_)
