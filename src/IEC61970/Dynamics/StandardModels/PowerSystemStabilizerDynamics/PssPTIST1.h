///////////////////////////////////////////////////////////
//  PssPTIST1.h
//  Implementation of the Class PssPTIST1
//  Created on:      28-Jan-2016 12:46:19
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_26F7CDC8_1CC7_4692_9DF9_4B66AC935290__INCLUDED_)
#define EA_26F7CDC8_1CC7_4692_9DF9_4B66AC935290__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
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
				 * PTI Microprocessor-Based Stabilizer type 1.
				 */
				class PssPTIST1 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssPTIST1();
					virtual ~PssPTIST1();
					/**
					 * Time step related to activation of controls (Dtc).  Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::Seconds dtc;
					/**
					 * Time step frequency calculation (Dtf).  Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::Seconds dtf;
					/**
					 * Time step active power calculation (Dtp).  Typical Value = 0.0125.
					 */
					IEC61970::Base::Domain::Seconds dtp;
					/**
					 * Gain (K).  Typical Value = 9.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * (M).  M=2*H.  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU m;
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
#endif // !defined(EA_26F7CDC8_1CC7_4692_9DF9_4B66AC935290__INCLUDED_)
