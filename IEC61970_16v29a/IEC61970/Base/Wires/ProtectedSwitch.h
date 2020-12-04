///////////////////////////////////////////////////////////
//  ProtectedSwitch.h
//  Implementation of the Class ProtectedSwitch
///////////////////////////////////////////////////////////

#ifndef PROTECTEDSWITCH_H
#define PROTECTEDSWITCH_H

#include <list>

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Protection/RecloseSequence.h"
#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A ProtectedSwitch is a switching device that can be operated by
			 * ProtectionEquipment.
			 */
			class ProtectedSwitch : public IEC61970::Base::Wires::Switch
			{

			public:
				ProtectedSwitch();
				virtual ~ProtectedSwitch();
				/**
				 * The maximum fault current a breaking device can break safely under prescribed
				 * conditions of use.
				 */
				IEC61970::Base::Domain::CurrentFlow breakingCapacity;
				/**
				 * A breaker may have zero or more automatic reclosures after a trip occurs.
				 */
				std::list<IEC61970::Base::Protection::RecloseSequence*> RecloseSequences;

			};

		}

	}

}
#endif // PROTECTEDSWITCH_H
