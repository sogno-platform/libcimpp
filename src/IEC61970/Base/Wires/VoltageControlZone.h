///////////////////////////////////////////////////////////
//  VoltageControlZone.h
//  Implementation of the Class VoltageControlZone
//  Created on:      28-Jan-2016 12:47:37
///////////////////////////////////////////////////////////

#if !defined(EA_12D4E724_077B_4381_9B75_A82E8EE69C7A__INCLUDED_)
#define EA_12D4E724_077B_4381_9B75_A82E8EE69C7A__INCLUDED_

#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * An area of the power system network which is defined for secondary voltage
			 * control purposes. A voltage control zone consists of a collection of
			 * substations with a designated bus bar section whose voltage will be controlled.
			 */
			class VoltageControlZone : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				VoltageControlZone();
				virtual ~VoltageControlZone();

			};

		}

	}

}
#endif // !defined(EA_12D4E724_077B_4381_9B75_A82E8EE69C7A__INCLUDED_)
