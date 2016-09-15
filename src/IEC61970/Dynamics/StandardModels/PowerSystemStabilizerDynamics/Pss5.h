///////////////////////////////////////////////////////////
//  Pss5.h
//  Implementation of the Class Pss5
//  Created on:      28-Jan-2016 12:46:16
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_F583B5A2_56EC_4332_9658_CB537E2C8E2E__INCLUDED_)
#define EA_F583B5A2_56EC_4332_9658_CB537E2C8E2E__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Italian PSS - Detailed PSS.
				 */
				class Pss5 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					Pss5();
					virtual ~Pss5();
					/**
					 * Selector for Second washout enabling (C<sub>TW2</sub>).
					 * true = second washout filter is bypassed
					 * false = second washout filter in use.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean ctw2;
					/**
					 * Stabilizer output dead band (DeadBand).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU deadband;
					/**
					 * Selector for Frequency/shaft speed input (IsFreq).
					 * true = speed
					 * false = frequency.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean isfreq;
					/**
					 * Frequency/shaft speed input gain (K<sub>F</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Float kf;
					/**
					 * Electric power input gain (K<sub>PE</sub>).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float kpe;
					/**
					 * PSS gain (K<sub>PSS</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float kpss;
					/**
					 * Minimum power PSS enabling (P<sub>mn</sub>).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::PU pmm;
					/**
					 * Lead/lag time constant (T<sub>L1</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl1;
					/**
					 * Lead/lag time constant (T<sub>L2</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl2;
					/**
					 * Lead/lag time constant (T<sub>L3</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl3;
					/**
					 * Lead/lag time constant (T<sub>L4</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tl4;
					/**
					 * Electric power filter time constant (T<sub>PE</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tpe;
					/**
					 * First WashOut (T<sub>w1</sub>).  Typical Value = 3.5.
					 */
					IEC61970::Base::Domain::Seconds tw1;
					/**
					 * Second WashOut (T<sub>w2</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tw2;
					/**
					 * <font color="#0f0f0f">Signal selector (V<sub>adAtt</sub>).</font>
					 * <font color="#0f0f0f">true = closed (Generator Power is greater than
					 * Pmin)</font>
					 * <font color="#0f0f0f">false = open (Pe is smaller than Pmin).</font>
					 * <font color="#0f0f0f">Typical Value = true.</font>
					 */
					IEC61970::Base::Domain::Boolean vadat;
					/**
					 * Stabilizer output max limit (V<sub>SMN</sub>).  Typical Value = -0.1.
					 */
					IEC61970::Base::Domain::PU vsmn;
					/**
					 * Stabilizer output min limit (V<sub>SMX</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vsmx;

				};

			}

		}

	}

}
#endif // !defined(EA_F583B5A2_56EC_4332_9658_CB537E2C8E2E__INCLUDED_)
