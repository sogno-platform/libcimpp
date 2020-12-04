///////////////////////////////////////////////////////////
//  EnergyConnection.h
//  Implementation of the Class EnergyConnection
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ENERGYCONNECTION_H
#define ENERGYCONNECTION_H

#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			class EnergyConnection : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EnergyConnection();
				virtual ~EnergyConnection();

			};

		}

	}

}
#endif // ENERGYCONNECTION_H
