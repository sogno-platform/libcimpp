///////////////////////////////////////////////////////////
//  EquipmentFault.h
//  Implementation of the Class EquipmentFault
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef EQUIPMENTFAULT_H
#define EQUIPMENTFAULT_H

#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Faults/Fault.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * A fault applied at the terminal, external to the equipment. This class is not
			 * used to specify faults internal to the equipment.
			 */
			class EquipmentFault : public IEC61970::Base::Faults::Fault
			{

			public:
				EquipmentFault();
				virtual ~EquipmentFault();
				/**
				 * The terminal connecting to the bus to which the fault is applied.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // EQUIPMENTFAULT_H
