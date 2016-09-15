///////////////////////////////////////////////////////////
//  ExcIEEEAC1A.h
//  Implementation of the Class ExcIEEEAC1A
//  Created on:      28-Jan-2016 12:44:30
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_A8BC3DEF_39D5_4f67_8C95_2BF2FC3AF91A__INCLUDED_)
#define EA_A8BC3DEF_39D5_4f67_8C95_2BF2FC3AF91A__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
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
				 * The class represents IEEE Std 421.5-2005 type AC1A model. The model represents
				 * the field-controlled alternator-rectifier excitation systems designated Type
				 * AC1A. These excitation systems consist of an alternator main exciter with non-
				 * controlled rectifiers.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.1.
				 */
				class ExcIEEEAC1A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC1A();
					virtual ~ExcIEEEAC1A();
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 400.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances
					 * (K<sub>D</sub>).  Typical Value = 0.38.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Excitation control system stabilizer gains (K<sub>F</sub>).  Typical Value = 0.
					 * 03.
					 */
					IEC61970::Base::Domain::PU kf;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E1</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E1</sub>]).
					 * Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E2</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E2</sub>]).
					 * Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Voltage regulator time constant (T<sub>B</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Voltage regulator time constant (T<sub>C</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 14.5.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -14.5.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E1</sub>).  Typical Value = 4.18.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E2</sub>).  Typical Value = 3.14.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Maximum voltage regulator outputs (V<sub>RMAX</sub>).  Typical Value = 6.03.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (V<sub>RMIN</sub>).  Typical Value = -5.43.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_A8BC3DEF_39D5_4f67_8C95_2BF2FC3AF91A__INCLUDED_)
