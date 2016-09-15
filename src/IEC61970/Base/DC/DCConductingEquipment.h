///////////////////////////////////////////////////////////
//  DCConductingEquipment.h
//  Implementation of the Class DCConductingEquipment
//  Created on:      28-Jan-2016 12:43:56
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_ADEF6CCD_9FD0_473d_97B8_8BA94D61DB89__INCLUDED_)
#define EA_ADEF6CCD_9FD0_473d_97B8_8BA94D61DB89__INCLUDED_

#include <list>

#include "IEC61970/Base/DC/DCTerminal.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * The parts of the DC power system that are designed to carry current or that are
			 * conductively connected through DC terminals.
			 */
			class DCConductingEquipment : public IEC61970::Base::Core::Equipment
			{

			public:
				DCConductingEquipment();
				virtual ~DCConductingEquipment();
				std::list<IEC61970::Base::DC::DCTerminal*> DCTerminals;

			};

		}

	}

}
#endif // !defined(EA_ADEF6CCD_9FD0_473d_97B8_8BA94D61DB89__INCLUDED_)
