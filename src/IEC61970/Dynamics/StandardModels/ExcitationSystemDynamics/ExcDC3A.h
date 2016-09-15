///////////////////////////////////////////////////////////
//  ExcDC3A.h
//  Implementation of the Class ExcDC3A
//  Created on:      28-Jan-2016 12:44:27
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_6075CD4C_8979_424a_85EC_A25A7798D770__INCLUDED_)
#define EA_6075CD4C_8979_424a_85EC_A25A7798D770__INCLUDED_

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
				 * This is modified IEEE DC3A direct current commutator exciters with speed input,
				 * and death band.  DC old type 4.
				 */
				class ExcDC3A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcDC3A();
					virtual ~ExcDC3A();
					/**
					 * Maximum voltage exciter output limiter (Efdmax).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU edfmax;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value =
					 * 2.6.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value =
					 * 3.45.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * (Efdlim).
					 * true = exciter output limiter is active
					 * false = exciter output limiter not active.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean efdlim;
					/**
					 * Minimum voltage exciter output limiter (Efdmin).  Typical Value = -99.
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * (exclim).  IEEE standard is ambiguous about lower limit on exciter output.
					 * true = a lower limit of zero is applied to integrator output
					 * false = a lower limit of zero not applied to integrator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean exclim;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Death band (Kr).  If Kr is not zero, the voltage regulator input changes at a
					 * constant rate if Verr > Kr or Verr < -Kr as per the IEEE (1968) Type 4 model.
					 * If Kr is zero, the error signal drives the voltage regulator continuously as
					 * per the IEEE (1980) DC3 and IEEE (1992, 2005) DC3A models.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kr;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Fast raise/lower contact setting (Kv).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU kv;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd1
					 * (Se[Eefd1]).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd2
					 * (Se[Efd2]).  Typical Value = 0.35.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 1.83.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Rheostat travel time (Trh).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::Seconds trh;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_6075CD4C_8979_424a_85EC_A25A7798D770__INCLUDED_)
