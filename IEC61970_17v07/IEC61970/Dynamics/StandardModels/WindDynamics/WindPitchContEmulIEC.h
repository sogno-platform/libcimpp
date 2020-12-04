///////////////////////////////////////////////////////////
//  WindPitchContEmulIEC.h
//  Implementation of the Class WindPitchContEmulIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPITCHCONTEMULIEC_H
#define WINDPITCHCONTEMULIEC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindGenTurbineType2IEC.h"
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
				 * Pitch control emulator model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.1.
				 */
				class WindPitchContEmulIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindPitchContEmulIEC();
					virtual ~WindPitchContEmulIEC();
					/**
					 * Power error gain (<i>K</i><sub>droop</sub>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::Float kdroop;
					/**
					 * Pitch control emulator integral constant (<i>K</i><sub>I,pce</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kipce;
					/**
					 * Aerodynamic power change vs. omega<sub>WTR </sub>change
					 * (<i>K</i><sub>omegaaero</sub>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU komegaaero;
					/**
					 * Pitch control emulator proportional constant (<i>K</i><sub>P,pce</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Float kppce;
					/**
					 * Rotor speed in initial steady state (omega<sub>ref</sub>). It is case dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU omegaref;
					/**
					 * Maximum steady state power (<i>p</i><sub>imax</sub>). It is case dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU pimax;
					/**
					 * Minimum steady state power (<i>p</i><sub>imin</sub>). It is case dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU pimin;
					/**
					 * First time constant in pitch control lag (<i>T</i><sub>1</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Second time constant in pitch control lag (<i>T</i><sub>2</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant in generator air gap power lag (<i>T</i><sub>pe</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpe;
					/**
					 * Wind turbine type 2 model with which this Pitch control emulator model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC *WindGenTurbineType2IEC;

				};

			}

		}

	}

}
#endif // WINDPITCHCONTEMULIEC_H
