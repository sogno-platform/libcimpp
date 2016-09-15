///////////////////////////////////////////////////////////
//  EquipmentFault.h
//  Implementation of the Class EquipmentFault
//  Created on:      28-Jan-2016 12:44:16
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_256BB744_D1E6_4dd8_A69F_A159B2018917__INCLUDED_)
#define EA_256BB744_D1E6_4dd8_A69F_A159B2018917__INCLUDED_

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
#endif // !defined(EA_256BB744_D1E6_4dd8_A69F_A159B2018917__INCLUDED_)
