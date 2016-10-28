///////////////////////////////////////////////////////////
//  PssIEEE4B.h
//  Implementation of the Class PssIEEE4B
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef PSSIEEE4B_H
#define PSSIEEE4B_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/PowerSystemStabilizerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace PowerSystemStabilizerDynamics
			{
				/**
				 * The class represents IEEE Std 421.5-2005 type PSS2B power system stabilizer
				 * model. The PSS4B model represents a structure based on multiple working
				 * frequency bands. Three separate bands, respectively dedicated to the low-,
				 * intermediate- and high-frequency modes of oscillations, are used in this delta-
				 * omega (speed input) PSS.
				 * 
				 * Reference: IEEE 4B 421.5-2005 Section 8.4. 
				 */
				class PssIEEE4B : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssIEEE4B();
					virtual ~PssIEEE4B();
					/**
					 * Notch filter 1 (high-frequency band): Three dB bandwidth (B<sub>wi</sub>). 
					 */
					IEC61970::Base::Domain::Float bwh1;
					/**
					 * Notch filter 2 (high-frequency band): Three dB bandwidth (B<sub>wi</sub>). 
					 */
					IEC61970::Base::Domain::Float bwh2;
					/**
					 * Notch filter 1 (low-frequency band): Three dB bandwidth (B<sub>wi</sub>). 
					 */
					IEC61970::Base::Domain::Float bwl1;
					/**
					 * Notch filter 2 (low-frequency band): Three dB bandwidth (B<sub>wi</sub>). 
					 */
					IEC61970::Base::Domain::Float bwl2;
					/**
					 * High band gain (K<sub>H</sub>).  Typical Value = 120.
					 */
					IEC61970::Base::Domain::PU kh;
					/**
					 * High band differential filter gain (K<sub>H1</sub>).  Typical Value = 66.
					 */
					IEC61970::Base::Domain::PU kh1;
					/**
					 * High band first lead-lag blocks coefficient (K<sub>H11</sub>).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kh11;
					/**
					 * High band first lead-lag blocks coefficient (K<sub>H17</sub>).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kh17;
					/**
					 * High band differential filter gain (K<sub>H2</sub>).  Typical Value = 66.
					 */
					IEC61970::Base::Domain::PU kh2;
					/**
					 * Intermediate band gain (K<sub>I</sub>).  Typical Value = 30.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Intermediate band differential filter gain (K<sub>I1</sub>).  Typical Value =
					 * 66.
					 */
					IEC61970::Base::Domain::PU ki1;
					/**
					 * Intermediate band first lead-lag blocks coefficient (K<sub>I11</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU ki11;
					/**
					 * Intermediate band first lead-lag blocks coefficient (K<sub>I17</sub>).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU ki17;
					/**
					 * Intermediate band differential filter gain (K<sub>I2</sub>).  Typical Value =
					 * 66.
					 */
					IEC61970::Base::Domain::PU ki2;
					/**
					 * Low band gain (K<sub>L</sub>).  Typical Value = 7.5.
					 */
					IEC61970::Base::Domain::PU kl;
					/**
					 * Low band differential filter gain (K<sub>L1</sub>).  Typical Value = 66.
					 */
					IEC61970::Base::Domain::PU kl1;
					/**
					 * Low band first lead-lag blocks coefficient (K<sub>L11</sub>).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kl11;
					/**
					 * Low band first lead-lag blocks coefficient (K<sub>L17</sub>).  Typical Value =
					 * 1.
					 */
					IEC61970::Base::Domain::PU kl17;
					/**
					 * Low band differential filter gain (K<sub>L2</sub>).  Typical Value = 66.
					 */
					IEC61970::Base::Domain::PU kl2;
					/**
					 * Notch filter 1 (high-frequency band): filter frequency (omega<sub>ni</sub>).
					 */
					IEC61970::Base::Domain::Float omeganh1;
					/**
					 * Notch filter 2 (high-frequency band): filter frequency (omega<sub>ni</sub>).
					 */
					IEC61970::Base::Domain::Float omeganh2;
					/**
					 * Notch filter 1 (low-frequency band): filter frequency (omega<sub>ni</sub>).
					 */
					IEC61970::Base::Domain::Float omeganl1;
					/**
					 * Notch filter 2 (low-frequency band): filter frequency (omega<sub>ni</sub>).
					 */
					IEC61970::Base::Domain::Float omeganl2;
					/**
					 * High band time constant (T<sub>H1</sub>).  Typical Value = 0.01513.
					 */
					IEC61970::Base::Domain::Seconds th1;
					/**
					 * High band time constant (T<sub>H10</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th10;
					/**
					 * High band time constant (T<sub>H11</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th11;
					/**
					 * High band time constant (T<sub>H12</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th12;
					/**
					 * High band time constant (T<sub>H2</sub>).  Typical Value = 0.01816.
					 */
					IEC61970::Base::Domain::Seconds th2;
					/**
					 * High band time constant (T<sub>H3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th3;
					/**
					 * High band time constant (T<sub>H4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th4;
					/**
					 * High band time constant (T<sub>H5</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th5;
					/**
					 * High band time constant (T<sub>H6</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th6;
					/**
					 * High band time constant (T<sub>H7</sub>).  Typical Value = 0.01816.
					 */
					IEC61970::Base::Domain::Seconds th7;
					/**
					 * High band time constant (T<sub>H8</sub>).  Typical Value = 0.02179.
					 */
					IEC61970::Base::Domain::Seconds th8;
					/**
					 * High band time constant (T<sub>H9</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds th9;
					/**
					 * Intermediate band time constant (T<sub>I1</sub>).  Typical Value = 0.173.
					 */
					IEC61970::Base::Domain::Seconds ti1;
					/**
					 * Intermediate band time constant (T<sub>I11</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti10;
					/**
					 * Intermediate band time constant (T<sub>I11</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti11;
					/**
					 * Intermediate band time constant (T<sub>I2</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti12;
					/**
					 * Intermediate band time constant (T<sub>I2</sub>).  Typical Value = 0.2075.
					 */
					IEC61970::Base::Domain::Seconds ti2;
					/**
					 * Intermediate band time constant (T<sub>I3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti3;
					/**
					 * Intermediate band time constant (T<sub>I4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti4;
					/**
					 * Intermediate band time constant (T<sub>I5</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti5;
					/**
					 * Intermediate band time constant (T<sub>I6</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti6;
					/**
					 * Intermediate band time constant (T<sub>I7</sub>).  Typical Value = 0.2075.
					 */
					IEC61970::Base::Domain::Seconds ti7;
					/**
					 * Intermediate band time constant (T<sub>I8</sub>).  Typical Value = 0.2491.
					 */
					IEC61970::Base::Domain::Seconds ti8;
					/**
					 * Intermediate band time constant (T<sub>I9</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds ti9;
					/**
					 * Low band time constant (T<sub>L1</sub>).  Typical Value = 1.73.
					 */
					IEC61970::Base::Domain::Seconds tl1;
					/**
					 * Low band time constant (T<sub>L10</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl10;
					/**
					 * Low band time constant (T<sub>L11</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl11;
					/**
					 * Low band time constant (T<sub>L12</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl12;
					/**
					 * Low band time constant (T<sub>L2</sub>).  Typical Value = 2.075.
					 */
					IEC61970::Base::Domain::Seconds tl2;
					/**
					 * Low band time constant (T<sub>L3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl3;
					/**
					 * Low band time constant (T<sub>L4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl4;
					/**
					 * Low band time constant (T<sub>L5</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl5;
					/**
					 * Low band time constant (T<sub>L6</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl6;
					/**
					 * Low band time constant (T<sub>L7</sub>).  Typical Value = 2.075.
					 */
					IEC61970::Base::Domain::Seconds tl7;
					/**
					 * Low band time constant (T<sub>L8</sub>).  Typical Value = 2.491.
					 */
					IEC61970::Base::Domain::Seconds tl8;
					/**
					 * Low band time constant (T<sub>L9</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl9;
					/**
					 * High band output maximum limit (V<sub>Hmax</sub>).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::PU vhmax;
					/**
					 * High band output minimum limit (V<sub>Hmin</sub>).  Typical Value = -0.6.
					 */
					IEC61970::Base::Domain::PU vhmin;
					/**
					 * Intermediate band output maximum limit (V<sub>Imax</sub>).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::PU vimax;
					/**
					 * Intermediate band output minimum limit (V<sub>Imin</sub>).  Typical Value = -0.
					 * 6.
					 */
					IEC61970::Base::Domain::PU vimin;
					/**
					 * Low band output maximum limit (V<sub>Lmax</sub>).  Typical Value = 0.075.
					 */
					IEC61970::Base::Domain::PU vlmax;
					/**
					 * Low band output minimum limit (V<sub>Lmin</sub>).  Typical Value = -0.075.
					 */
					IEC61970::Base::Domain::PU vlmin;
					/**
					 * PSS output maximum limit (V<sub>STmax</sub>).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::PU vstmax;
					/**
					 * PSS output minimum limit (V<sub>STmin</sub>).  Typical Value = -0.15.
					 */
					IEC61970::Base::Domain::PU vstmin;

				};

			}

		}

	}

}
#endif // PSSIEEE4B_H
