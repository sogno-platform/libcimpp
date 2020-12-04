///////////////////////////////////////////////////////////
//  ExcAC5A.h
//  Implementation of the Class ExcAC5A
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCAC5A_H
#define EXCAC5A_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
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
				 * Modified IEEE AC5A alternator-supplied rectifier excitation system with
				 * different minimum controller output.
				 */
				class ExcAC5A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAC5A();
					virtual ~ExcAC5A();
					/**
					 * Coefficient to allow different usage of the model (a).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float a;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value =
					 * 5.6.
					 */
					IEC61970::Base::Domain::PU efd1;
					/**
					 * Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value =
					 * 4.2.
					 */
					IEC61970::Base::Domain::PU efd2;
					/**
					 * Voltage regulator gain (Ka).  Typical Value = 400.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Exciter constant related to self-excited field (Ke).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (Kf).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Coefficient to allow different usage of the model-speed coefficient (Ks).
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd1
					 * (S<sub>E</sub>[Efd1]).  Typical Value = 0.86.
					 */
					IEC61970::Base::Domain::Float seefd1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage, Efd2
					 * (S<sub>E</sub>[Efd2]).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Float seefd2;
					/**
					 * Voltage regulator time constant (Ta).  Typical Value = 0.02.
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
					 * Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (Tf1).  Typical Value  = 1.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Excitation control system stabilizer time constant (Tf2).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * Excitation control system stabilizer time constant (Tf3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tf3;
					/**
					 * Maximum voltage regulator output (Vrmax).  Typical Value = 7.3.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (Vrmin).  Typical Value =-7.3.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCAC5A_H
