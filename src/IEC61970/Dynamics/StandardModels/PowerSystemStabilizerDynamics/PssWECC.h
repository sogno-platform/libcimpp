///////////////////////////////////////////////////////////
//  PssWECC.h
//  Implementation of the Class PssWECC
//  Created on:      28-Jan-2016 12:46:22
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_DEA98D65_2F4B_48c3_B0D1_F186CA5D1803__INCLUDED_)
#define EA_DEA98D65_2F4B_48c3_B0D1_F186CA5D1803__INCLUDED_

#include "IEC61970/Dynamics/StandardModels/PowerSystemStabilizerDynamics/InputSignalKind.h"
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
				 * Dual input Power System Stabilizer, based on IEEE type 2, with modified output
				 * limiter defined by WECC (Western Electricity Coordinating Council, USA).
				 */
				class PssWECC : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					PssWECC();
					virtual ~PssWECC();
					/**
					 * Type of input signal #1.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal1Type;
					/**
					 * Type of input signal #2.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal2Type;
					/**
					 * Input signal 1 gain  (K<sub>1</sub>). 
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Input signal 2 gain (K<sub>2</sub>). 
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Input signal 1 transducer time constant (T<sub>1</sub>).
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lag time constant (T<sub>10</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t10;
					/**
					 * Input signal 2 transducer time constant (T<sub>2</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Stabilizer washout time constant (T<sub>3</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Stabilizer washout time lag constant (T<sub>4</sub>) (>0).
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Lead time constant (T<sub>5</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Lag time constant (T<sub>6</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Lead time constant (T<sub>7</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Lag time constant (T<sub>8</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t8;
					/**
					 * Lead time constant (T<sub>9</sub>). 
					 */
					IEC61970::Base::Domain::Seconds t9;
					/**
					 * Minimum value for voltage compensator output (V<sub>CL</sub>). 
					 */
					IEC61970::Base::Domain::PU vcl;
					/**
					 * Maximum value for voltage compensator output (V<sub>CU</sub>). 
					 */
					IEC61970::Base::Domain::PU vcu;
					/**
					 * Maximum output signal (Vsmax). 
					 */
					IEC61970::Base::Domain::PU vsmax;
					/**
					 * Minimum output signal (Vsmin). 
					 */
					IEC61970::Base::Domain::PU vsmin;

				};

			}

		}

	}

}
#endif // !defined(EA_DEA98D65_2F4B_48c3_B0D1_F186CA5D1803__INCLUDED_)
