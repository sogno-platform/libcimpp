///////////////////////////////////////////////////////////
//  VAdjIEEE.h
//  Implementation of the Class VAdjIEEE
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef VADJIEEE_H
#define VADJIEEE_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/VoltageAdjusterDynamics/VoltageAdjusterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageAdjusterDynamics
			{
				/**
				 * The class represents IEEE Voltage Adjuster which is used to represent the
				 * voltage adjuster in either a power factor or var control system.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 11.1.
				 */
				class VAdjIEEE : public IEC61970::Dynamics::StandardModels::VoltageAdjusterDynamics::VoltageAdjusterDynamics
				{

				public:
					VAdjIEEE();
					virtual ~VAdjIEEE();
					/**
					 * Rate at which output of adjuster changes (<i>ADJ_SLEW</i>).  Unit = sec./PU.
					 * Typical Value = 300.
					 */
					IEC61970::Base::Domain::Float adjslew;
					/**
					 * Time that adjuster pulses are off (<i>T</i><i><sub>AOFF</sub></i>).  Typical
					 * Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds taoff;
					/**
					 * Time that adjuster pulses are on (<i>T</i><i><sub>AON</sub></i>).  Typical
					 * Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds taon;
					/**
					 * Set high to provide a continuous raise or lower
					 * (<i>V</i><i><sub>ADJF</sub></i>).
					 */
					IEC61970::Base::Domain::Float vadjf;
					/**
					 * Maximum output of the adjuster (<i>V</i><i><sub>ADJMAX</sub></i>).  Typical
					 * Value = 1.1.
					 */
					IEC61970::Base::Domain::PU vadjmax;
					/**
					 * Minimum output of the adjuster (<i>V</i><i><sub>ADJMIN</sub></i>).  Typical
					 * Value = 0.9.
					 */
					IEC61970::Base::Domain::PU vadjmin;

				};

			}

		}

	}

}
#endif // VADJIEEE_H
