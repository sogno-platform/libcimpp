///////////////////////////////////////////////////////////
//  CostRate.h
//  Implementation of the Class CostRate
///////////////////////////////////////////////////////////

#ifndef COSTRATE_H
#define COSTRATE_H

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
				IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				IEC61970::Base::Domain::Currency unit = IEC61970::Base::Domain::Currency::_undef;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // COSTRATE_H
