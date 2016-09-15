///////////////////////////////////////////////////////////
//  CostPerHeatUnit.h
//  Implementation of the Class CostPerHeatUnit
//  Created on:      28-Jan-2016 12:43:44
///////////////////////////////////////////////////////////

#if !defined(EA_B9519497_C432_4709_9332_70B24F2CC3F7__INCLUDED_)
#define EA_B9519497_C432_4709_9332_70B24F2CC3F7__INCLUDED_

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Currency.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Cost, in units of currency, per quantity of heat generated.
				 */
				class CostPerHeatUnit
				{

				public:
					CostPerHeatUnit();
					virtual ~CostPerHeatUnit();
					static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
					static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
					IEC61970::Base::Domain::UnitMultiplier multiplier;
					IEC61970::Base::Domain::Currency unit;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // !defined(EA_B9519497_C432_4709_9332_70B24F2CC3F7__INCLUDED_)
