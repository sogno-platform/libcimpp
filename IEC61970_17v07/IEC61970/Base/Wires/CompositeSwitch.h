///////////////////////////////////////////////////////////
//  CompositeSwitch.h
//  Implementation of the Class CompositeSwitch
///////////////////////////////////////////////////////////

#ifndef COMPOSITESWITCH_H
#define COMPOSITESWITCH_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Wires/Switch.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A model of a set of individual Switches normally enclosed within the same
			 * cabinet and possibly with interlocks that restrict the combination of switch
			 * positions. These are typically found in medium voltage distribution networks.
			 * A CompositeSwitch could represent a Ring-Main-Unit (RMU), or pad-mounted
			 * switchgear, with primitive internal devices such as an internal bus-bar plus 3
			 * or 4 internal switches each of which may individually be open or closed. A
			 * CompositeSwitch and a set of contained Switches can also be used to represent a
			 * multi-position switch e.g. a switch that can connect a circuit to Ground, Open
			 * or Busbar.
			 */
			class CompositeSwitch : public IEC61970::Base::Core::Equipment
			{

			public:
				CompositeSwitch();
				virtual ~CompositeSwitch();
				/**
				 * An alphanumeric code that can be used as a reference to extra information such
				 * as the description of the interlocking scheme if any.
				 */
				IEC61970::Base::Domain::String compositeSwitchType;
				/**
				 * Switches contained in this Composite switch.
				 */
				std::list<IEC61970::Base::Wires::Switch*> Switches;

			};

		}

	}

}
#endif // COMPOSITESWITCH_H
