///////////////////////////////////////////////////////////
//  ChargingUnit.h
//  Implementation of the Class ChargingUnit
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef CHARGINGUNIT_H
#define CHARGINGUNIT_H

#include "BaseClass.h"
#include "Sinergien/EnergyGrid/EnergyStorage/BatteryStorage.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace EnergyStorage
		{
			class ChargingUnit : public BaseClass
			{

			public:
				ChargingUnit();
				virtual ~ChargingUnit();
				Sinergien::EnergyGrid::EnergyStorage::BatteryStorage *m_BatteryStorage;

			};

		}

	}

}
#endif // CHARGINGUNIT_H
