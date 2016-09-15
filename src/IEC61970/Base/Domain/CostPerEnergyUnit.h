///////////////////////////////////////////////////////////
//  CostPerEnergyUnit.h
//  Implementation of the Class CostPerEnergyUnit
//  Created on:      28-Jan-2016 12:43:44
///////////////////////////////////////////////////////////

#if !defined(EA_E91440CE_3E51_4286_BE97_797BEA7AFF9E__INCLUDED_)
#define EA_E91440CE_3E51_4286_BE97_797BEA7AFF9E__INCLUDED_

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
			 * Cost, in units of currency, per quantity of electrical energy generated.
			 */
			class CostPerEnergyUnit
			{

			public:
				CostPerEnergyUnit();
				virtual ~CostPerEnergyUnit();
				static const IEC61970::Base::Domain::UnitMultiplier denominatorMultiplier;
				static const IEC61970::Base::Domain::UnitSymbol denominatorUnit;
				IEC61970::Base::Domain::UnitMultiplier multiplier;
				IEC61970::Base::Domain::Currency unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // !defined(EA_E91440CE_3E51_4286_BE97_797BEA7AFF9E__INCLUDED_)
