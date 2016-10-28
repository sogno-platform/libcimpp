///////////////////////////////////////////////////////////
//  PetersenCoil.h
//  Implementation of the Class PetersenCoil
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef PETERSENCOIL_H
#define PETERSENCOIL_H

#include "IEC61970/Base/Wires/PetersenCoilModeKind.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/EarthFaultCompensator.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A tunable impedance device normally used to offset line charging during single
			 * line faults in an ungrounded section of network.
			 */
			class PetersenCoil : public IEC61970::Base::Wires::EarthFaultCompensator
			{

			public:
				PetersenCoil();
				virtual ~PetersenCoil();
				/**
				 * The mode of operation of the Petersen coil.
				 */
				IEC61970::Base::Wires::PetersenCoilModeKind mode;
				/**
				 * The nominal voltage for which the coil is designed.
				 */
				IEC61970::Base::Domain::Voltage nominalU;
				/**
				 * The offset current that the Petersen coil controller is operating from the
				 * resonant point.  This is normally a fixed amount for which the controller is
				 * configured and could be positive or negative.  Typically 0 to 60 Amperes
				 * depending on voltage and resonance conditions.
				 */
				IEC61970::Base::Domain::CurrentFlow offsetCurrent;
				/**
				 * The control current used to control the Petersen coil also known as the
				 * position current.  Typically in the range of 20-200mA.
				 */
				IEC61970::Base::Domain::CurrentFlow positionCurrent;
				/**
				 * The maximum reactance. 
				 */
				IEC61970::Base::Domain::Reactance xGroundMax;
				/**
				 * The minimum reactance.
				 */
				IEC61970::Base::Domain::Reactance xGroundMin;
				/**
				 * The nominal reactance.  This is the operating point (normally over
				 * compensation) that is defined based on the resonance point in the healthy
				 * network condition.  The impedance is calculated based on nominal voltage
				 * divided by position current.
				 */
				IEC61970::Base::Domain::Reactance xGroundNominal;

			};

		}

	}

}
#endif // PETERSENCOIL_H
