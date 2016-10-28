///////////////////////////////////////////////////////////
//  ExcAVR4.h
//  Implementation of the Class ExcAVR4
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAVR4_H
#define EXCAVR4_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Italian excitation system. It represents static exciter and electric voltage
				 * regulator.
				 */
				class ExcAVR4 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR4();
					virtual ~ExcAVR4();
					/**
					 * AVR output voltage dependency selector (Imul).
					 * true = selector is connected
					 * false = selector is not connected.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean imul;
					/**
					 * AVR gain (K<sub>A</sub>).  Typical Value = 300.
					 */
					IEC61970::Base::Domain::Float ka;
					/**
					 * Exciter gain (K<sub>E</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float ke;
					/**
					 * Exciter internal reactance (K<sub>IF</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float kif;
					/**
					 * AVR time constant (T<sub>1</sub>).  Typical Value = 4.8.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Exciter current feedback time constant (T<sub>1IF</sub>).  Typical Value = 60.
					 */
					IEC61970::Base::Domain::Seconds t1if;
					/**
					 * AVR time constant (T<sub>2</sub>).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * AVR time constant (T<sub>3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * AVR time constant (T<sub>4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Exciter current feedback time constant (T<sub>IF</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tif;
					/**
					 * Minimum exciter output (V<sub>FMN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vfmn;
					/**
					 * Maximum exciter output (V<sub>FMX</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vfmx;
					/**
					 * Maximum AVR output (V<sub>RMN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmn;
					/**
					 * Minimum AVR output (V<sub>RMX</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmx;

				};

			}

		}

	}

}
#endif // EXCAVR4_H
