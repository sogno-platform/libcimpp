///////////////////////////////////////////////////////////
//  ExcHU.h
//  Implementation of the Class ExcHU
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCHU_H
#define EXCHU_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
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
				 * Hungarian Excitation System Model, with built-in voltage transducer.
				 */
				class ExcHU : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcHU();
					virtual ~ExcHU();
					/**
					 * Major loop PI tag gain factor (Ae).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU ae;
					/**
					 * Minor loop PI tag gain factor (Ai).  Typical Value = 22.
					 */
					IEC61970::Base::Domain::PU ai;
					/**
					 * AVR constant (Atr).  Typical Value = 2.19.
					 */
					IEC61970::Base::Domain::PU atr;
					/**
					 * Field voltage control signal upper limit on AVR base (Emax).  Typical Value = 0.
					 * 996.
					 */
					IEC61970::Base::Domain::PU emax;
					/**
					 * Field voltage control signal lower limit on AVR base (Emin).  Typical Value = -
					 * 0.866.
					 */
					IEC61970::Base::Domain::PU emin;
					/**
					 * Major loop PI tag output signal upper limit (Imax).  Typical Value = 2.19.
					 */
					IEC61970::Base::Domain::PU imax;
					/**
					 * Major loop PI tag output signal lower limit (Imin).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU imin;
					/**
					 * Voltage base conversion constant (Ke).  Typical Value = 4.666.
					 */
					IEC61970::Base::Domain::Float ke;
					/**
					 * Current base conversion constant (Ki).  Typical Value = 0.21428.
					 */
					IEC61970::Base::Domain::Float ki;
					/**
					 * Major loop PI tag integration time constant (Te).  Typical Value = 0.154.
					 */
					IEC61970::Base::Domain::Seconds te;
					/**
					 * Minor loop PI control tag integration time constant (Ti).  Typical Value = 0.
					 * 01333.
					 */
					IEC61970::Base::Domain::Seconds ti;
					/**
					 * Filter time constant (Tr). If a voltage compensator is used in conjunction with
					 * this excitation system model, Tr should be set to 0.  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds tr;

				};

			}

		}

	}

}
#endif // EXCHU_H
