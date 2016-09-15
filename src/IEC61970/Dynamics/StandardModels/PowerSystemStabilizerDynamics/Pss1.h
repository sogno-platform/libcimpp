///////////////////////////////////////////////////////////
//  Pss1.h
//  Implementation of the Class Pss1
//  Created on:      28-Jan-2016 12:46:14
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_5D0C664A_7103_4a0c_9CCF_D63CFEF84881__INCLUDED_)
#define EA_5D0C664A_7103_4a0c_9CCF_D63CFEF84881__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Italian PSS - three input PSS (speed, frequency, power).
				 */
				class Pss1 : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					Pss1();
					virtual ~Pss1();
					/**
					 * Frequency power input gain (K<sub>F</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Float kf;
					/**
					 * Electric power input gain (K<sub>PE</sub>).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::Float kpe;
					/**
					 * PSS gain (K<sub>S</sub>).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float ks;
					/**
					 * Shaft speed power input gain (K<sub>W</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float kw;
					/**
					 * Minimum power PSS enabling (P<sub>MIN</sub>).  Typical Value = 0.25.
					 */
					IEC61970::Base::Domain::PU pmin;
					/**
					 * Lead/lag time constant (T<sub>10</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t10;
					/**
					 * Washout (T<sub>5</sub>).  Typical Value = 3.5.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Filter time constant (T<sub>6</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Lead/lag time constant (T<sub>7</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Lead/lag time constant (T<sub>8</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t8;
					/**
					 * Lead/lag time constant (T<sub>9</sub>).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds t9;
					/**
					 * Electric power filter time constant (T<sub>PE</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tpe;
					/**
					 * <font color="#0f0f0f">Signal selector (V<sub>adAt</sub>).</font>
					 * <font color="#0f0f0f">true = closed (Generator Power is greater than
					 * Pmin)</font>
					 * <font color="#0f0f0f">false = open (Pe is smaller than Pmin).</font>
					 * <font color="#0f0f0f">Typical Value = true.</font>
					 */
					IEC61970::Base::Domain::Boolean vadat;
					/**
					 * Stabilizer output max limit (V<sub>SMN</sub>).  Typical Value = -0.06.
					 */
					IEC61970::Base::Domain::PU vsmn;
					/**
					 * Stabilizer output min limit (V<sub>SMX</sub>).  Typical Value = 0.06.
					 */
					IEC61970::Base::Domain::PU vsmx;

				};

			}

		}

	}

}
#endif // !defined(EA_5D0C664A_7103_4a0c_9CCF_D63CFEF84881__INCLUDED_)
