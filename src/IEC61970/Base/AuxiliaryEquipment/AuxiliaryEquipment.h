///////////////////////////////////////////////////////////
//  AuxiliaryEquipment.h
//  Implementation of the Class AuxiliaryEquipment
//  Created on:      28-Jan-2016 12:43:25
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_8BDFFA24_361F_4353_8268_3641CC8971B7__INCLUDED_)
#define EA_8BDFFA24_361F_4353_8268_3641CC8971B7__INCLUDED_

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
#endif // !defined(EA_8BDFFA24_361F_4353_8268_3641CC8971B7__INCLUDED_)
