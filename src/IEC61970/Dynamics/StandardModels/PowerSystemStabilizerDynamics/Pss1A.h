///////////////////////////////////////////////////////////
//  Pss1A.h
//  Implementation of the Class Pss1A
//  Created on:      28-Jan-2016 12:46:15
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_19B245F8_6A44_44fb_8CA2_3795976ACA42__INCLUDED_)
#define EA_19B245F8_6A44_44fb_8CA2_3795976ACA42__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/InputSignalKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Single input power system stabilizer. It is a modified version in order to
				 * allow representation of various vendors' implementations on PSS type 1A.
				 */
				class Pss1A : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					Pss1A();
					virtual ~Pss1A();
					/**
					 * Notch filter parameter (A1).
					 */
					IEC61970::Base::Domain::PU a1;
					/**
					 * Notch filter parameter (A2). 
					 */
					IEC61970::Base::Domain::PU a2;
					/**
					 * Notch filter parameter (A3). 
					 */
					IEC61970::Base::Domain::PU a3;
					/**
					 * Notch filter parameter (A4). 
					 */
					IEC61970::Base::Domain::PU a4;
					/**
					 * Notch filter parameter (A5). 
					 */
					IEC61970::Base::Domain::PU a5;
					/**
					 * Notch filter parameter (A6). 
					 */
					IEC61970::Base::Domain::PU a6;
					/**
					 * Notch filter parameter (A7). 
					 */
					IEC61970::Base::Domain::PU a7;
					/**
					 * Notch filter parameter (A8). 
					 */
					IEC61970::Base::Domain::PU a8;
					/**
					 * Type of input signal.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignalType;
					/**
					 * Selector (Kd).
					 * true = e<sup>-sTdelay</sup> used
					 * false = e<sup>-sTdelay</sup> not used.
					 */
					IEC61970::Base::Domain::Boolean kd;
					/**
					 * Stabilizer gain (Ks). 
					 */
					IEC61970::Base::Domain::PU ks;
					/**
					 * Lead/lag time constant (T1). 
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lead/lag time constant (T2). 
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead/lag time constant (T3). 
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lead/lag time constant (T4). 
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Washout time constant (T5). 
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Transducer time constant (T6). 
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time constant (Tdelay). 
					 */
					IEC61970::Base::Domain::Seconds tdelay;
					/**
					 * Stabilizer input cutoff threshold (Vcl). 
					 */
					IEC61970::Base::Domain::PU vcl;
					/**
					 * Stabilizer input cutoff threshold (Vcu). 
					 */
					IEC61970::Base::Domain::PU vcu;
					/**
					 * Maximum stabilizer output (Vrmax). 
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum stabilizer output (Vrmin). 
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_19B245F8_6A44_44fb_8CA2_3795976ACA42__INCLUDED_)
