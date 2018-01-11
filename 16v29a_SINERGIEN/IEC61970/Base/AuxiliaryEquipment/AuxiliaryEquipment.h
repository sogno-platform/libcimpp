///////////////////////////////////////////////////////////
//  AuxiliaryEquipment.h
//  Implementation of the Class AuxiliaryEquipment
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef AUXILIARYEQUIPMENT_H
#define AUXILIARYEQUIPMENT_H

#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Core/Terminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace AuxiliaryEquipment
		{
			/**
			 * AuxiliaryEquipment describe equipment that is not performing any primary
			 * functions but support for the equipment performing the primary function.
			 * AuxiliaryEquipment is attached to primary eqipment via an association with
			 * Terminal.
			 */
			class AuxiliaryEquipment : public IEC61970::Base::Core::Equipment
			{

			public:
				AuxiliaryEquipment();
				virtual ~AuxiliaryEquipment();
				/**
				 * The Terminal at the equipment where the AuxiliaryEquipment is attached.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // AUXILIARYEQUIPMENT_H
