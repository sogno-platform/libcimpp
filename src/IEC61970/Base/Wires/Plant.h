///////////////////////////////////////////////////////////
//  Plant.h
//  Implementation of the Class Plant
//  Created on:      28-Jan-2016 12:46:06
///////////////////////////////////////////////////////////

#if !defined(EA_77CE6A55_DB69_41e1_B3D2_F568DBAEB47A__INCLUDED_)
#define EA_77CE6A55_DB69_41e1_B3D2_F568DBAEB47A__INCLUDED_

#include "IEC61970/Base/Core/EquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A Plant is a collection of equipment for purposes of generation.
			 */
			class Plant : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Plant();
				virtual ~Plant();

			};

		}

	}

}
#endif // !defined(EA_77CE6A55_DB69_41e1_B3D2_F568DBAEB47A__INCLUDED_)
