///////////////////////////////////////////////////////////
//  PssPTIST3.h
//  Implementation of the Class PssPTIST3
//  Created on:      28-Jan-2016 12:46:19
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1D58472A_D309_403f_88B8_25FDAB0B0667__INCLUDED_)
#define EA_1D58472A_D309_403f_88B8_25FDAB0B0667__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * PTI Microprocessor-Based Stabilizer type 3.
				 */
				class PssPTIST3 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssPTIST3();
					virtual ~PssPTIST3();
					/**
					 * Filter coefficient (A0). 
					 */
					IEC61970::Base::Domain::PU a0;
					/**
					 * Limiter (Al). 
					 */
					IEC61970::Base::Domain::PU a1;
					/**
					 * Filter coefficient (A2). 
					 */
					IEC61970::Base::Domain::PU a2;
					/**
					 * Filter coefficient (A3). 
					 */
					IEC61970::Base::Domain::PU a3;
					/**
					 * Filter coefficient (A4). 
					 */
					IEC61970::Base::Domain::PU a4;
					/**
					 * Filter coefficient (A5). 
					 */
					IEC61970::Base::Domain::PU a5;
					/**
					 * Limiter (Al).
					 */
					IEC61970::Base::Domain::PU al;
					/**
					 * Threshold value above which output averaging will be bypassed (Athres).
					 * Typical Value = 0.005.
					 */
					IEC61970::Base::Domain::PU athres;
					/**
					 * Filter coefficient (B0). 
					 */
					IEC61970::Base::Domain::PU b0;
					/**
					 * Filter coefficient (B1). 
					 */
					IEC61970::Base::Domain::PU b1;
					/**
					 * Filter coefficient (B2). 
					 */
					IEC61970::Base::Domain::PU b2;
					/**
					 * Filter coefficient (B3). 
					 */
					IEC61970::Base::Domain::PU b3;
					/**
					 * Filter coefficient (B4). 
					 */
					IEC61970::Base::Domain::PU b4;
					/**
					 * Filter coefficient (B5). 
					 */
					IEC61970::Base::Domain::PU b5;
					/**
					 * Limiter (Dl). 
					 */
					IEC61970::Base::Domain::PU dl;
					/**
					 * Time step related to activation of controls (0.03 for 50 Hz) (Dtc).  Typical
					 * Value = 0.025.
					 */
					IEC61970::Base::Domain::Seconds dtc;
					/**
					 * Time step frequency calculation (0.03 for 50 Hz) (Dtf).  Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::Seconds dtf;
					/**
					 * Time step active power calculation (0.015 for 50 Hz) (Dtp).  Typical Value = 0.
					 * 0125.
					 */
					IEC61970::Base::Domain::Seconds dtp;
					/**
					 * Digital/analog output switch (Isw).
					 * true = produce analog output
					 * false = convert to digital output, using tap selection table. 
					 */
					IEC61970::Base::Domain::Boolean isw;
					/**
					 * Gain (K).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Threshold value (Lthres).
					 */
					IEC61970::Base::Domain::PU lthres;
					/**
					 * (M).  M=2*H.  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU m;
					/**
					 * Number of control outputs to average (Nav) (1 <= Nav <= 16).  Typical Value = 4.
					 */
					IEC61970::Base::Domain::Float nav;
					/**
					 * Number of counts at limit to active limit function (Ncl) (>0). 
					 */
					IEC61970::Base::Domain::Float ncl;
					/**
					 * Number of counts until reset after limit function is triggered (Ncr). 
					 */
					IEC61970::Base::Domain::Float ncr;
					/**
					 * (Pmin).
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Time constant (T1).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time constant (T2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant (T3).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Time constant (T4).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Time constant (T5). 
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Time constant (T6). 
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Time constant (Tf).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds tf;
					/**
					 * Time constant (Tp).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::Seconds tp;

				};

			}

		}

	}

}
#endif // !defined(EA_1D58472A_D309_403f_88B8_25FDAB0B0667__INCLUDED_)
