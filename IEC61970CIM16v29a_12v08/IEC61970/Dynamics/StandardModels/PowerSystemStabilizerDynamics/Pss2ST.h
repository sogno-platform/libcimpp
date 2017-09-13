///////////////////////////////////////////////////////////
//  Pss2ST.h
//  Implementation of the Class Pss2ST
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef PSS2ST_H
#define PSS2ST_H

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
				 * PTI Microprocessor-Based Stabilizer type 1.
				 */
				class Pss2ST : public IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics
				{

				public:
					Pss2ST();
					virtual ~Pss2ST();
					/**
					 * Type of input signal #1.  Typical Value = rotorAngularFrequencyDeviation.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal1Type;
					/**
					 * Type of input signal #2.  Typical Value = generatorElectricalPower.
					 */
					IEC61970::Dynamics::StandardModels::PowerSystemStabilizerDynamics::InputSignalKind inputSignal2Type;
					/**
					 * Gain (K1). 
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Gain (K2). 
					 */
					IEC61970::Base::Domain::PU k2;
					/**
					 * Limiter (Lsmax). 
					 */
					IEC61970::Base::Domain::PU lsmax;
					/**
					 * Limiter (Lsmin). 
					 */
					IEC61970::Base::Domain::PU lsmin;
					/**
					 * Time constant (T1). 
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Time constant (T10). 
					 */
					IEC61970::Base::Domain::Seconds t10;
					/**
					 * Time constant (T2).
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Time constant (T3). 
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Time constant (T4).
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
					 * Time constant (T7). 
					 */
					IEC61970::Base::Domain::Seconds t7;
					/**
					 * Time constant (T8). 
					 */
					IEC61970::Base::Domain::Seconds t8;
					/**
					 * Time constant (T9). 
					 */
					IEC61970::Base::Domain::Seconds t9;
					/**
					 * Cutoff limiter (Vcl). 
					 */
					IEC61970::Base::Domain::PU vcl;
					/**
					 * Cutoff limiter (Vcu). 
					 */
					IEC61970::Base::Domain::PU vcu;

				};

			}

		}

	}

}
#endif // PSS2ST_H
