///////////////////////////////////////////////////////////
//  ExcIEEEAC2A.h
//  Implementation of the Class ExcIEEEAC2A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEAC2A_H
#define EXCIEEEAC2A_H

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
				 * The class represents IEEE Std 421.5-2005 type AC2A model. The model represents
				 * a high initial response field-controlled alternator-rectifier excitation system.
				 * The alternator main exciter is used with non-controlled rectifiers. The Type
				 * AC2A model is similar to that of Type AC1A except for the inclusion of exciter
				 * time constant compensation and exciter field current limiting elements.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.2.
				 */
				class ExcIEEEAC2A : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC2A();
					virtual ~ExcIEEEAC2A();
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 400.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Second stage regulator gain (K<sub>B</sub>).  Typical Value = 25.
					 */
					IEC61970::Base::Domain::PU kb;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.28.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances
					 * (K<sub>D</sub>).  Typical Value = 0.35.
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
					 * Exciter field current feedback gain (K<sub>H</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E1</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E1</sub>]).
					 * Typical Value = 0.037.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E2</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E2</sub>]).
					 * Typical Value = 0.012.
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
					 * (T<sub>E</sub>).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Excitation control system stabilizer time constant (T<sub>F</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Maximum voltage regulator output (V<sub>AMAX</sub>).  Typical Value = 8.
					 */
					IEC61970::Base::Domain::PU vamax;
					/**
					 * Minimum voltage regulator output (V<sub>AMIN</sub>).  Typical Value = -8.
					 */
					IEC61970::Base::Domain::PU vamin;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E1</sub>).  Typical Value = 4.4.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E2</sub>).  Typical Value = 3.3.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Exciter field current limit reference (V<sub>FEMAX</sub>).  Typical Value = 4.4.
					 */
					IEC61970::Base::Domain::PU vfemax;
					/**
					 * Maximum voltage regulator outputs (V<sub>RMAX</sub>).  Typical Value = 105.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator outputs (V<sub>RMIN</sub>).  Typical Value = -95.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // EXCIEEEAC2A_H
