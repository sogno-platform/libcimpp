///////////////////////////////////////////////////////////
//  BatteryStorage.h
//  Implementation of the Class BatteryStorage
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef BATTERYSTORAGE_H
#define BATTERYSTORAGE_H

#include <list>

#include "Sinergien/EnergyGrid/Domain/ElectricalCapacity.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "Sinergien/Communication/communicationRequirement.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"
#include "Sinergien/Communication/Modems/ComMod.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace EnergyStorage
		{
			class BatteryStorage : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				BatteryStorage();
				virtual ~BatteryStorage();
				Sinergien::EnergyGrid::Domain::ElectricalCapacity capacity;
				IEC61970::Base::Domain::ActivePower nominalP;
				IEC61970::Base::Domain::ReactivePower nominalQ;
				float ratedPowerFactor;
				IEC61970::Base::Domain::ApparentPower ratedS;
				IEC61970::Base::Domain::Voltage ratedU;
				Sinergien::Communication::communicationRequirement *m_communicationRequirement;
				std::list<Sinergien::Communication::Modems::ComMod*> m_ComMod;

			};

		}

	}

}
#endif // BATTERYSTORAGE_H
