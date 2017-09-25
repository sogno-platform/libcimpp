///////////////////////////////////////////////////////////
//  WindContPType3IEC.h
//  Implementation of the Class WindContPType3IEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTPTYPE3IEC_H
#define WINDCONTPTYPE3IEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
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
				 * P control model Type 3.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.3.
				 */
				class WindContPType3IEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContPType3IEC();
					virtual ~WindContPType3IEC();
					/**
					 * Maximum wind turbine power ramp rate (<i>dp</i><sub>max</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU dpmax;
					/**
					 * Limitation of torque rise rate during LVRT for S<sub>1</sub>
					 * (d<i>T</i><sub>risemaxLVRT</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU dtrisemaxlvrt;
					/**
					 * Gain for active drive train damping (<i>K</i><sub>DTD</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kdtd;
					/**
					 * PI controller integration parameter (<i>K</i><sub>Ip</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kip;
					/**
					 * PI controller proportional gain (<i>K</i><sub>Pp</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU kpp;
					/**
					 * Enable LVRT power control mode (M<sub>pLVRT).</sub>
					 * true = 1: voltage control
					 * false = 0: reactive power control.
					 * 
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mplvrt;
					/**
					 * Offset to reference value that limits controller action during rotor speed
					 * changes (omega<sub>offset</sub>). It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU omegaoffset;
					/**
					 * Maximum active drive train damping power (<i>p</i><sub>DTDmax</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU pdtdmax;
					/**
					 * Ramp limitation of torque, required in some grid codes
					 * (<i>R</i><sub>ramp</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU rramp;
					/**
					 * Time<sub> </sub>delay after deep voltage sags (T<sub>DVS</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tdvs;
					/**
					 * Minimum electrical generator torque (<i>T</i><sub>emin</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU temin;
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
					 * Time constant in power order lag (<i>T</i><sub>pord</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU tpord;
					/**
					 * Filter time constant for voltage measurement (<i>T</i><sub>ufilt</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufilt;
					/**
					 * Voltage scaling factor of reset-torque (T<sub>uscale</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU tuscale;
					/**
					 * Time constant in speed reference filter (<i>T</i><sub>omega,ref</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twref;
					/**
					 * Voltage limit for hold LVRT status after deep voltage sags
					 * (<i>u</i><i><sub>DVS</sub></i>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU udvs;
					/**
					 * Voltage dip threshold for P-control (<i>u</i><sub>Pdip</sub>).  Part of turbine
					 * control, often different (e.g 0.8) from converter thresholds. It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU updip;
					/**
					 * Active drive train damping frequency (omega<sub>DTD</sub>). It can be
					 * calculated from two mass model parameters. It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU wdtd;
					/**
					 * Coefficient for active drive train damping (zeta). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Float zeta;
					/**
					 * Wind turbine type 3 model with which this Wind control P type 3 model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindGenTurbineType3IEC *WindGenTurbineType3IEC;

				};

			}

		}

	}

}
#endif // WINDCONTPTYPE3IEC_H
