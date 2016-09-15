///////////////////////////////////////////////////////////
//  StaticLoadModelKind.h
//  Implementation of the Class StaticLoadModelKind
//  Created on:      28-Jan-2016 12:46:46
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_CDCC4D44_575B_45dc_B2E5_3C0165CA0F73__INCLUDED_)
#define EA_CDCC4D44_575B_45dc_B2E5_3C0165CA0F73__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * Type of static load model.
				 */
				enum class StaticLoadModelKind
				{
					/**
					 * Exponential P and Q equations are used and the following attributes are
					 * required:
					 * kp1, kp2, kp3, kpf, ep1, ep2, ep3
					 * kq1, kq2, kq3, kqf, eq1, eq2, eq3.
					 */
					exponential,
					/**
					 * ZIP1 P and Q equations are used and the following attributes are required:
					 * kp1, kp2, kp3, kpf
					 * kq1, kq2, kq3, kqf.
					 */
					zIP1,
					/**
					 * This model separates the frequency-dependent load (primarily motors) from other
					 * load.  ZIP2 P and Q equations are used and the following attributes are
					 * required:
					 * kp1, kp2, kp3, kq4, kpf
					 * kq1, kq2, kq3, kq4, kqf.
					 */
					zIP2,
					/**
					 * The load is represented as a constant impedance.  ConstantZ P and Q equations
					 * are used and no attributes are required.
					 */
					constantZ
				};

			}

		}

	}

}
#endif // !defined(EA_CDCC4D44_575B_45dc_B2E5_3C0165CA0F73__INCLUDED_)
