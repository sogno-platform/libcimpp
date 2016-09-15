///////////////////////////////////////////////////////////
//  ProtectedSwitch.h
//  Implementation of the Class ProtectedSwitch
//  Created on:      28-Jan-2016 12:46:13
///////////////////////////////////////////////////////////

#if !defined(EA_F26AFC3F_7BA7_4e7e_8BA4_99962712303D__INCLUDED_)
#define EA_F26AFC3F_7BA7_4e7e_8BA4_99962712303D__INCLUDED_

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
#endif // !defined(EA_F26AFC3F_7BA7_4e7e_8BA4_99962712303D__INCLUDED_)
