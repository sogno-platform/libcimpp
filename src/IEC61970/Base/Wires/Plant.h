///////////////////////////////////////////////////////////
//  Plant.h
//  Implementation of the Class Plant
///////////////////////////////////////////////////////////

#ifndef PLANT_H
#define PLANT_H

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
#endif // PLANT_H
