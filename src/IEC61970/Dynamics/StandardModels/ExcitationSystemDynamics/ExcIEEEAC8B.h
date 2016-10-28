///////////////////////////////////////////////////////////
//  ExcIEEEAC8B.h
//  Implementation of the Class ExcIEEEAC8B
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCIEEEAC8B_H
#define EXCIEEEAC8B_H

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
				 * The class represents IEEE Std 421.5-2005 type AC8B model. This model represents
				 * a PID voltage regulator with either a brushless exciter or dc exciter. The AVR
				 * in this model consists of PID control, with separate constants for the
				 * proportional (<b>K</b><b><sub>PR</sub></b>), integral
				 * (<b>K</b><b><sub>IR</sub></b>), and derivative (<b>K</b><b><sub>DR</sub></b>)
				 * gains. The representation of the brushless exciter (<b>T</b><b><sub>E</sub></b>,
				 * <b>K</b><b><sub>E</sub></b>, <b>S</b><b><sub>E</sub></b>,
				 * <b>K</b><b><sub>C</sub></b>, <b>K</b><b><sub>D</sub></b>) is similar to the
				 * model Type AC2A. The Type AC8B model can be used to represent static voltage
				 * regulators applied to brushless excitation systems. Digitally based voltage
				 * regulators feeding dc rotating main exciters can be represented with the AC
				 * Type AC8B model with the parameters <b>K</b><b><sub>C</sub></b> and
				 * <b>K</b><b><sub>D</sub></b> set to 0.  For thyristor power stages fed from the
				 * generator terminals, the limits <b>V</b><b><sub>RMAX</sub></b> and
				 * <b>V</b><b><sub>RMIN</sub></b> should be a function of terminal voltage:
				 * <b>V</b><b><sub>T</sub></b> * <b>V</b><b><sub>RMAX</sub></b><sub> </sub>and
				 * <b>V</b><b><sub>T</sub></b> * <b>V</b><b><sub>RMIN</sub></b>.
				 * 
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 6.8. 
				 */
				class ExcIEEEAC8B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEAC8B();
					virtual ~ExcIEEEAC8B();
					/**
					 * Voltage regulator gain (K<sub>A</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Rectifier loading factor proportional to commutating reactance (K<sub>C</sub>).
					 * Typical Value = 0.55.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Demagnetizing factor, a function of exciter alternator reactances
					 * (K<sub>D</sub>).    Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU kd;
					/**
					 * Voltage regulator derivative gain (K<sub>DR</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU kdr;
					/**
					 * Exciter constant related to self-excited field (K<sub>E</sub>).  Typical Value
					 * = 1.
					 */
					IEC61970::Base::Domain::PU ke;
					/**
					 * Voltage regulator integral gain (K<sub>IR</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU kir;
					/**
					 * Voltage regulator proportional gain (K<sub>PR</sub>).  Typical Value = 80.
					 */
					IEC61970::Base::Domain::PU kpr;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E1</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E1</sub>]).
					 * Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float seve1;
					/**
					 * Exciter saturation function value at the corresponding exciter voltage,
					 * V<sub>E2</sub>, back of commutating reactance (S<sub>E</sub>[V<sub>E2</sub>]).
					 * Typical Value = 3.
					 */
					IEC61970::Base::Domain::Float seve2;
					/**
					 * Voltage regulator time constant (T<sub>A</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Lag time constant (T<sub>DR</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tdr;
					/**
					 * Exciter time constant, integration rate associated with exciter control
					 * (T<sub>E</sub>).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E1</sub>) equals V<sub>EMAX</sub> (V<sub>E1</sub>).
					 *  Typical Value = 6.5.
					 */
					IEC61970::Base::Domain::PU ve1;
					/**
					 * Exciter alternator output voltages back of commutating reactance at which
					 * saturation is defined (V<sub>E2</sub>).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::PU ve2;
					/**
					 * Minimum exciter voltage output (V<sub>EMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vemin;
					/**
					 * Exciter field current limit reference (V<sub>FEMAX</sub>).  Typical Value = 6.
					 */
					IEC61970::Base::Domain::PU vfemax;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 35.
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
#endif // EXCIEEEAC8B_H
