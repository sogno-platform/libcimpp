///////////////////////////////////////////////////////////
//  CostPerVolume.h
//  Implementation of the Class CostPerVolume
//  Created on:      28-Jan-2016 12:43:45
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_0A34C0A7_66A8_422f_9839_3695FECAFF88__INCLUDED_)
#define EA_0A34C0A7_66A8_422f_9839_3695FECAFF88__INCLUDED_

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
#endif // !defined(EA_0A34C0A7_66A8_422f_9839_3695FECAFF88__INCLUDED_)
