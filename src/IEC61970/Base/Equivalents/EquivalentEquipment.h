///////////////////////////////////////////////////////////
//  EquivalentEquipment.h
//  Implementation of the Class EquivalentEquipment
///////////////////////////////////////////////////////////

#ifndef EQUIVALENTEQUIPMENT_H
#define EQUIVALENTEQUIPMENT_H

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * The class represents equivalent objects that are the result of a network
			 * reduction. The class is the base for equivalent objects of different types.
			 */
			class EquivalentEquipment : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EquivalentEquipment();
				virtual ~EquivalentEquipment();

			};

		}

	}

}
#endif // EQUIVALENTEQUIPMENT_H
