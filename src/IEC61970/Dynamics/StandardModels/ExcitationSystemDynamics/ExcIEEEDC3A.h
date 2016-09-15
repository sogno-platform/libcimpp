///////////////////////////////////////////////////////////
//  ExcIEEEDC3A.h
//  Implementation of the Class ExcIEEEDC3A
//  Created on:      28-Jan-2016 12:44:34
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_57C7789C_C065_4c32_B1E5_A1590E579EBC__INCLUDED_)
#define EA_57C7789C_C065_4c32_B1E5_A1590E579EBC__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
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
				 * The class represents IEEE Std 421.5-2005 type DC3A model. This model represents
				 * represent older systems, in particular those dc commutator exciters with non-
				 * continuously acting regulators that were commonly used before the development
				 * of the continuously acting varieties.  These systems respond at basically two
				 * different rates, depending upon the magnitude of voltage error. For small
				 * errors, adjustment is made periodically with a signal to a motor-operated
				 * rheostat. Larger errors cause resistors to be quickly shorted or inserted and a
				 * strong forcing signal applied to the exciter. Continuous motion of the motor-
				 * operated rheostat occurs for these larger error signals, even though it is
				 * bypassed by contactor action.
				 * 
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 5.3. 
				 */
				class ExcIEEEDC3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEDC3A();
					virtual ~ExcIEEEDC3A();
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD1</sub>).
					 * Typical Value = 3.375.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (E<sub>FD2</sub>).
					 * Typical Value = 3.15.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * (exclim).  IEEE standard is ambiguous about lower limit on exciter output.
					 * true = a lower limit of zero is applied to integrator output
					 * false = a lower limit of zero is not applied to integrator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean exclim;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 0.05.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Fast raise/lower contact setting (K<sub>V</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU kv;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD1</sub> (S<sub>E</sub>[E<sub>FD1</sub>]).  Typical Value = 0.267.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * E<sub>FD2</sub> (S<sub>E</sub>[E<sub>FD2</sub>]).  Typical Value = 0.068.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Rheostat travel time (T<sub>RH</sub>).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::Seconds trh;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_57C7789C_C065_4c32_B1E5_A1590E579EBC__INCLUDED_)
