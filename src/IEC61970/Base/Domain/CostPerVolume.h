///////////////////////////////////////////////////////////
//  CostPerVolume.h
//  Implementation of the Class CostPerVolume
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef COSTPERVOLUME_H
#define COSTPERVOLUME_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Currency.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Cost per unit volume.
			 */
			class CostPerVolume
			{

			public:
				CostPerVolume();
				virtual ~CostPerVolume();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::Currency unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // COSTPERVOLUME_H
