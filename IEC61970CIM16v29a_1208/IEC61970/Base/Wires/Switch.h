///////////////////////////////////////////////////////////
//  Switch.h
//  Implementation of the Class Switch
///////////////////////////////////////////////////////////

#ifndef SWITCH_H
#define SWITCH_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Wires/SwitchPhase.h"
#include "IEC61970/Base/Wires/SwitchSchedule.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A generic device designed to close, or open, or both, one or more electric
			 * circuits.  All switches are two terminal devices including grounding switches.
			 */
			class Switch : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Switch();
				virtual ~Switch();
				/**
				 * The attribute is used in cases when no Measurement for the status value is
				 * present. If the Switch has a status measurement the Discrete.normalValue is
				 * expected to match with the Switch.normalOpen.
				 */
				IEC61970::Base::Domain::Boolean normalOpen;
				/**
				 * The attribute tells if the switch is considered open when used as input to
				 * topology processing.
				 */
				IEC61970::Base::Domain::Boolean open;
				/**
				 * The maximum continuous current carrying capacity in amps governed by the device
				 * material and construction.
				 */
				IEC61970::Base::Domain::CurrentFlow ratedCurrent;
				/**
				 * Branch is retained in a bus branch model.  The flow through retained switches
				 * will normally be calculated in power flow.
				 */
				IEC61970::Base::Domain::Boolean retained;
				/**
				 * The switch on count since the switch was last reset or initialized.
				 */
				IEC61970::Base::Domain::Integer switchOnCount;
				/**
				 * The date and time when the switch was last switched on.
				 */
				IEC61970::Base::Domain::DateTime switchOnDate;
				/**
				 * The individual switch phases for the switch.
				 */
				std::list<IEC61970::Base::Wires::SwitchPhase*> SwitchPhase;
				/**
				 * A Switch can be associated with SwitchSchedules.
				 */
				std::list<IEC61970::Base::Wires::SwitchSchedule*> SwitchSchedules;

			};

		}

	}

}
#endif // SWITCH_H
