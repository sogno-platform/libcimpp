///////////////////////////////////////////////////////////
//  DCConductingEquipment.h
//  Implementation of the Class DCConductingEquipment
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef DCCONDUCTINGEQUIPMENT_H
#define DCCONDUCTINGEQUIPMENT_H

#include <list>

#include "IEC61970/Base/Domain/Voltage.h"
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
				/**
				 * Rated DC device voltage. Converter configuration data used in power flow.
				 */
				IEC61970::Base::Domain::Voltage ratedUdc;
				/**
				 * A DC conducting equipment has DC terminals.
				 */
				std::list<IEC61970::Base::DC::DCTerminal*> DCTerminals;

			};

		}

	}

}
#endif // DCCONDUCTINGEQUIPMENT_H
