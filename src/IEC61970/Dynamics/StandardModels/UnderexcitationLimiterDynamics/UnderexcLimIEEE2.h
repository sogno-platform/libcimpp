///////////////////////////////////////////////////////////
//  UnderexcLimIEEE2.h
//  Implementation of the Class UnderexcLimIEEE2
//  Created on:      28-Jan-2016 12:47:29
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_917D984A_08C1_4d28_8B7A_7A0658D89667__INCLUDED_)
#define EA_917D984A_08C1_4d28_8B7A_7A0658D89667__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/UnderexcitationLimiterDynamics/UnderexcitationLimiterDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace UnderexcitationLimiterDynamics
			{
				/**
				 * The class represents the Type UEL2 which has either a straight-line or multi-
				 * segment characteristic when plotted in terms of machine reactive power output
				 * vs. real power output.
				 * 
				 * Reference: IEEE UEL2 421.5-2005 Section 10.2.  (Limit characteristic lookup
				 * table shown in Figure 10.4 (p 32) of the standard).
				 */
				class UnderexcLimIEEE2 : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
				{

				public:
					UnderexcLimIEEE2();
					virtual ~UnderexcLimIEEE2();
					/**
					 * UEL terminal voltage exponent applied to real power input to UEL limit look-up
					 * table (k1).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Float k1;
					/**
					 * UEL terminal voltage exponent applied to reactive power output from UEL limit
					 * look-up table (k2).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Float k2;
					/**
					 * Gain associated with optional integrator feedback input signal to UEL
					 * (K<sub>FB</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kfb;
					/**
					 * UEL excitation system stabilizer gain (K<sub>UF</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kuf;
					/**
					 * UEL integral gain (K<sub>UI</sub>).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU kui;
					/**
					 * UEL proportional gain (K<sub>UL</sub>).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::PU kul;
					/**
					 * Real power values for endpoints (P<sub>0</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU p0;
					/**
					 * Real power values for endpoints (P<sub>1</sub>).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU p1;
					/**
					 * Real power values for endpoints (P<sub>10</sub>). 
					 */
					IEC61970::Base::Domain::PU p10;
					/**
					 * Real power values for endpoints (P<sub>2</sub>).  Typical Value = 0.6.
					 */
					IEC61970::Base::Domain::PU p2;
					/**
					 * Real power values for endpoints (P<sub>3</sub>).  Typical Value = 0.9.
					 */
					IEC61970::Base::Domain::PU p3;
					/**
					 * Real power values for endpoints (P<sub>4</sub>).  Typical Value = 1.02.
					 */
					IEC61970::Base::Domain::PU p4;
					/**
					 * Real power values for endpoints (P<sub>5</sub>). 
					 */
					IEC61970::Base::Domain::PU p5;
					/**
					 * Real power values for endpoints (P<sub>6</sub>).
					 */
					IEC61970::Base::Domain::PU p6;
					/**
					 * Real power values for endpoints (P<sub>7</sub>). 
					 */
					IEC61970::Base::Domain::PU p7;
					/**
					 * Real power values for endpoints (P<sub>8</sub>). 
					 */
					IEC61970::Base::Domain::PU p8;
					/**
					 * Real power values for endpoints (P<sub>9</sub>). 
					 */
					IEC61970::Base::Domain::PU p9;
					/**
					 * Reactive power values for endpoints (Q<sub>0</sub>).  Typical Value = -0.31.
					 */
					IEC61970::Base::Domain::PU q0;
					/**
					 * Reactive power values for endpoints (Q<sub>1</sub>).  Typical Value = -0.31.
					 */
					IEC61970::Base::Domain::PU q1;
					/**
					 * Reactive power values for endpoints (Q<sub>10</sub>). 
					 */
					IEC61970::Base::Domain::PU q10;
					/**
					 * Reactive power values for endpoints (Q<sub>2</sub>).  Typical Value = -0.28.
					 */
					IEC61970::Base::Domain::PU q2;
					/**
					 * Reactive power values for endpoints (Q<sub>3</sub>).  Typical Value = -0.21.
					 */
					IEC61970::Base::Domain::PU q3;
					/**
					 * Reactive power values for endpoints (Q<sub>4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU q4;
					/**
					 * Reactive power values for endpoints (Q<sub>5</sub>). 
					 */
					IEC61970::Base::Domain::PU q5;
					/**
					 * Reactive power values for endpoints (Q<sub>6</sub>). 
					 */
					IEC61970::Base::Domain::PU q6;
					/**
					 * Reactive power values for endpoints (Q<sub>7</sub>). 
					 */
					IEC61970::Base::Domain::PU q7;
					/**
					 * Reactive power values for endpoints (Q<sub>8</sub>). 
					 */
					IEC61970::Base::Domain::PU q8;
					/**
					 * Reactive power values for endpoints (Q<sub>9</sub>). 
					 */
					IEC61970::Base::Domain::PU q9;
					/**
					 * UEL lead time constant (T<sub>U1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tu1;
					/**
					 * UEL lag time constant (T<sub>U2</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tu2;
					/**
					 * UEL lead time constant (T<sub>U3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tu3;
					/**
					 * UEL lag time constant (T<sub>U4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tu4;
					/**
					 * Time constant associated with optional integrator feedback input signal to UEL
					 * (T<sub>UL</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tul;
					/**
					 * Real power filter time constant (T<sub>UP</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tup;
					/**
					 * Reactive power filter time constant (T<sub>UQ</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tuq;
					/**
					 * Voltage filter time constant (T<sub>UV</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tuv;
					/**
					 * UEL integrator output maximum limit (V<sub>UIMAX</sub>).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::PU vuimax;
					/**
					 * UEL integrator output minimum limit (V<sub>UIMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vuimin;
					/**
					 * UEL output maximum limit (V<sub>ULMAX</sub>).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::PU vulmax;
					/**
					 * UEL output minimum limit (V<sub>ULMIN</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vulmin;

				};

			}

		}

	}

}
#endif // !defined(EA_917D984A_08C1_4d28_8B7A_7A0658D89667__INCLUDED_)
