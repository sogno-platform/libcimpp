///////////////////////////////////////////////////////////
//  ExcDC1A.h
//  Implementation of the Class ExcDC1A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCDC1A_H
#define EXCDC1A_H

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
				 * Modified IEEE DC1A direct current commutator exciter with speed input and
				 * without underexcitation limiters (UEL) inputs.
				 */
				class ExcDC1A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcDC1A();
					virtual ~ExcDC1A();
					/**
					 * Maximum voltage exciter output limiter (Efdmax).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU edfmax;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value =
					 * 3.1.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value =
					 * 2.3.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * Minimum voltage exciter output limiter (Efdmin).  Typical Value = -99.
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * (exclim).
					 * IEEE standard is ambiguous about lower limit on exciter output.
					 * true = a lower limit of zero is applied to integrator output
					 * false = a lower limit of zero is not applied to integrator output.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean exclim;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 46.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gain (Kf).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd1
					 * (Se[Eefd1]).  Typical Value = 0.33.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd1
					 * (Se[Eefd1]).  Typical Value = 0.33.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.06.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (Tb).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (Tc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control (Te).
					 * Typical Value = 0.46.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value = -0.9.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCDC1A_H
