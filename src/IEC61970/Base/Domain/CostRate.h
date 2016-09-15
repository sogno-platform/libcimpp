///////////////////////////////////////////////////////////
//  CostRate.h
//  Implementation of the Class CostRate
//  Created on:      28-Jan-2016 12:43:45
///////////////////////////////////////////////////////////

#if !defined(EA_2EA3F06D_1A62_4011_9F29_1CE828989D54__INCLUDED_)
#define EA_2EA3F06D_1A62_4011_9F29_1CE828989D54__INCLUDED_

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
			 * Cost, in units of currency, per elapsed time.
			 */
			class CostRate
			{

			public:
				CostRate();
				virtual ~CostRate();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::Currency unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_2EA3F06D_1A62_4011_9F29_1CE828989D54__INCLUDED_)
