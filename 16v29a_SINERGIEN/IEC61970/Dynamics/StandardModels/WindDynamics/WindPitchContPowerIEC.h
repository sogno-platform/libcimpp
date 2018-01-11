///////////////////////////////////////////////////////////
//  WindPitchContPowerIEC.h
//  Implementation of the Class WindPitchContPowerIEC
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPITCHCONTPOWERIEC_H
#define WINDPITCHCONTPOWERIEC_H

#include "IEC61970/Base/Domain/PU.h"
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
				 * Pitch control power model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.1.
				 */
				class WindPitchContPowerIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindPitchContPowerIEC();
					virtual ~WindPitchContPowerIEC();
					/**
					 * Rate limit for increasing power (d<i>p</i><sub>max</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU dpmax;
					/**
					 * Rate limit for decreasing power (d<i>p</i><sub>min</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU dpmin;
					/**
					 * Minimum power setting (<i>p</i><sub>min</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * If <i>p</i><sub>init </sub>< <i>p</i><sub>set </sub>then power will ne ramped
					 * down to <i>p</i><sub>min</sub>. It is (<i>p</i><sub>set</sub>) in the IEC 61400-
					 * 27-1. It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU pset;
					/**
					 * Lag time constant (<i>T</i><sub>1</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Voltage measurement time constant (<i>T</i><sub>r</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds tr;
					/**
					 * Dip detection threshold (u<sub>UVRT</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU uuvrt;
					/**
					 * Wind turbine type 2 model with which this Pitch control power model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType2IEC *WindGenTurbineType2IEC;

				};

			}

		}

	}

}
#endif // WINDPITCHCONTPOWERIEC_H
