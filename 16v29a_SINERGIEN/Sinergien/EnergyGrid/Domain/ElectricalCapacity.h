///////////////////////////////////////////////////////////
//  ElectricalCapacity.h
//  Implementation of the Class ElectricalCapacity
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef ELECTRICALCAPACITY_H
#define ELECTRICALCAPACITY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace Domain
		{
			class ElectricalCapacity : public BaseClass
			{

			public:
				ElectricalCapacity();
				virtual ~ElectricalCapacity();
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::UnitSymbol unit = IEC61970::Base::Domain::UnitSymbol::_undef;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ELECTRICALCAPACITY_H
