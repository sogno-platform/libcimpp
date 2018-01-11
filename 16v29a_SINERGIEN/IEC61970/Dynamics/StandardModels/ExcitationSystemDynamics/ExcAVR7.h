///////////////////////////////////////////////////////////
//  ExcAVR7.h
//  Implementation of the Class ExcAVR7
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef EXCAVR7_H
#define EXCAVR7_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * IVO excitation system.
				 */
				class ExcAVR7 : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcAVR7();
					virtual ~ExcAVR7();
					/**
					 * Lead coefficient (A1).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a1;
					/**
					 * Lag coefficient (A2).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a2;
					/**
					 * Lead coefficient (A3).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a3;
					/**
					 * Lag coefficient (A4).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a4;
					/**
					 * Lead coefficient (A5).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a5;
					/**
					 * Lag coefficient (A6).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU a6;
					/**
					 * Gain (K1).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU k1;
					/**
					 * Gain (K3).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU k3;
					/**
					 * Gain (K5).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU k5;
					/**
					 * Lead time constant (T1).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Lag time constant (T2).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead time constant (T3).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lag time constant (T4).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Lead time constant (T5).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t5;
					/**
					 * Lag time constant (T6).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t6;
					/**
					 * Lead-lag max. limit (Vmax1).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vmax1;
					/**
					 * Lead-lag max. limit (Vmax3).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vmax3;
					/**
					 * Lead-lag max. limit (Vmax5).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vmax5;
					/**
					 * Lead-lag min. limit (Vmin1).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU vmin1;
					/**
					 * Lead-lag min. limit (Vmin3).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU vmin3;
					/**
					 * Lead-lag min. limit (Vmin5).  Typical Value = -2.
					 */
					IEC61970::Base::Domain::PU vmin5;

				};

			}

		}

	}

}
#endif // EXCAVR7_H
