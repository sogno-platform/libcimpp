///////////////////////////////////////////////////////////
//  Ground.h
//  Implementation of the Class Ground
//  Created on:      28-Jan-2016 12:45:16
///////////////////////////////////////////////////////////

#if !defined(EA_5053F9DB_8685_40fa_8FD6_C595D1C6EA9A__INCLUDED_)
#define EA_5053F9DB_8685_40fa_8FD6_C595D1C6EA9A__INCLUDED_

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A point where the system is grounded used for connecting conducting equipment
			 * to ground. The power system model can have any number of grounds.
			 */
			class Ground : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				Ground();
				virtual ~Ground();

			};

		}

	}

}
#endif // !defined(EA_5053F9DB_8685_40fa_8FD6_C595D1C6EA9A__INCLUDED_)
