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
				/**
				 * The operating condition to the Conducting Equipment is changed when protective
				 * action adjustment is activated. For Shunt Compensator or other conducting
				 * equipment that operates on discrete values (integer), the values given in float
				 * will be rounded. 
				 */

			};

		}

	}

}
#endif // CONDUCTINGEQUIPMENT_H
