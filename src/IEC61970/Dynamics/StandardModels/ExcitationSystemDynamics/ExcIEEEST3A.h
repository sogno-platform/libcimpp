///////////////////////////////////////////////////////////
//  ExcIEEEST3A.h
//  Implementation of the Class ExcIEEEST3A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEST3A_H
#define EXCIEEEST3A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST3A model.  Some static systems
				 * utilize a field voltage control loop to linearize the exciter control
				 * characteristic. This also makes the output independent of supply source
				 * variations until supply limitations are reached.  These systems utilize a
				 * variety of controlled-rectifier designs: full thyristor complements or hybrid
				 * bridges
				 * in either series or shunt configurations. The power source may consist of only
				 * a potential source, either fed from the machine terminals or from internal
				 * windings. Some designs may have compound power sources utilizing both machine
				 * potential and current. These power sources are represented as phasor
				 * combinations of machine terminal current and voltage and are accommodated by
				 * suitable parameters in model Type ST3A which is represented by ExcIEEEST3A.
				 * 
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.3. 
				 */
				class ExcIEEEST3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST3A();
					virtual ~ExcIEEEST3A();
					/**
					 * Voltage regulator gain (K<sub>A</sub>). This is parameter K in the IEEE Std.
					 * Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Feedback gain constant of the inner loop field regulator (K<sub>G</sub>).
					 * Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kg;
					/**
					 * Potential circuit gain coefficient (K<sub>I</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Forward gain constant of the inner loop field regulator (K<sub>M</sub>).
					 * Typical Value = 7.93.
					 */
					IEC61970::Base::Domain::PU km;
					/**
					 * Potential circuit gain coefficient (K<sub>P</sub>).  Typical Value = 6.15.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Potential circuit phase angle (thetap).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::AngleDegrees thetap;
					/**
					 * Forward time constant of inner loop field regulator (T<sub>M</sub>).  Typical
					 * Value = 0.4.
					 */
					IEC61970::Base::Domain::Seconds tm;
					/**
					 * Maximum excitation voltage (V<sub>BMax</sub>).  Typical Value = 6.9.
					 */
					IEC61970::Base::Domain::PU vbmax;
					/**
					 * Maximum inner loop feedback voltage (V<sub>GMax</sub>).  Typical Value = 5.8.
					 */
					IEC61970::Base::Domain::PU vgmax;
					/**
					 * Maximum voltage regulator input limit (V<sub>IMAX</sub>).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Minimum voltage regulator input limit (V<sub>IMIN</sub>).  Typical Value = -0.2.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Maximum inner loop output (V<sub>MMax</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vmmax;
					/**
					 * Minimum inner loop output (V<sub>MMin</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vmmin;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -10.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Reactance associated with potential source (X<sub>L</sub>).  Typical Value = 0.
					 * 081.
					 */
					IEC61970::Base::Domain::PU xl;

				};

			}

		}

	}

}
#endif // EXCIEEEST3A_H
