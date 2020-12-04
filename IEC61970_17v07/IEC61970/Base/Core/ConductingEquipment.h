///////////////////////////////////////////////////////////
//  ConductingEquipment.h
//  Implementation of the Class ConductingEquipment
///////////////////////////////////////////////////////////

#ifndef CONDUCTINGEQUIPMENT_H
#define CONDUCTINGEQUIPMENT_H

#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The parts of the AC power system that are designed to carry current or that are
			 * conductively connected through terminals.
			 */
			class ConductingEquipment : public IEC61970::Base::Core::Equipment
			{

			public:
				ConductingEquipment();
				virtual ~ConductingEquipment();

			};

		}

	}

}
#endif // CONDUCTINGEQUIPMENT_H
