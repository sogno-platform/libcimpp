///////////////////////////////////////////////////////////
//  UnderexcLimIEEE1.h
//  Implementation of the Class UnderexcLimIEEE1
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef UNDEREXCLIMIEEE1_H
#define UNDEREXCLIMIEEE1_H

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
				 * The class represents the Type UEL1 model which has a circular limit boundary
				 * when plotted in terms of machine reactive power vs. real power output.
				 * 
				 * Reference: IEEE UEL1 421.5-2005 Section 10.1. 
				 */
				class UnderexcLimIEEE1 : public IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics
				{

				public:
					UnderexcLimIEEE1();
					virtual ~UnderexcLimIEEE1();
					/**
					 * UEL center setting (K<sub>UC</sub>).  Typical Value = 1.38.
					 */
					IEC61970::Base::Domain::PU kuc;
					/**
					 * UEL excitation system stabilizer gain (K<sub>UF</sub>).  Typical Value = 3.3.
					 */
					IEC61970::Base::Domain::PU kuf;
					/**
					 * UEL integral gain (K<sub>UI</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kui;
					/**
					 * UEL proportional gain (K<sub>UL</sub>).  Typical Value = 100.
					 */
					IEC61970::Base::Domain::PU kul;
					/**
					 * UEL radius setting (K<sub>UR</sub>).  Typical Value = 1.95.
					 */
					IEC61970::Base::Domain::PU kur;
					/**
					 * UEL lead time constant (T<sub>U1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tu1;
					/**
					 * UEL lag time constant (T<sub>U2</sub>).  Typical Value = 0.05.
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
					 * UEL maximum limit for operating point phasor magnitude (V<sub>UCMAX</sub>).
					 * Typical Value = 5.8.
					 */
					IEC61970::Base::Domain::PU vucmax;
					/**
					 * UEL integrator output maximum limit (V<sub>UIMAX</sub>).
					 */
					IEC61970::Base::Domain::PU vuimax;
					/**
					 * UEL integrator output minimum limit (V<sub>UIMIN</sub>).
					 */
					IEC61970::Base::Domain::PU vuimin;
					/**
					 * UEL output maximum limit (V<sub>ULMAX</sub>).  Typical Value = 18.
					 */
					IEC61970::Base::Domain::PU vulmax;
					/**
					 * UEL output minimum limit (V<sub>ULMIN</sub>).  Typical Value = -18.
					 */
					IEC61970::Base::Domain::PU vulmin;
					/**
					 * UEL maximum limit for radius phasor magnitude (V<sub>URMAX</sub>).  Typical
					 * Value = 5.8.
					 */
					IEC61970::Base::Domain::PU vurmax;

				};

			}

		}

	}

}
#endif // UNDEREXCLIMIEEE1_H
