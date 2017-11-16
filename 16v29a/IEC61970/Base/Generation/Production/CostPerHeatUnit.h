///////////////////////////////////////////////////////////
//  CostPerHeatUnit.h
//  Implementation of the Class CostPerHeatUnit
///////////////////////////////////////////////////////////

#ifndef COSTPERHEATUNIT_H
#define COSTPERHEATUNIT_H

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
					IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
					IEC61970::Base::Domain::Currency unit = IEC61970::Base::Domain::Currency::_undef;
					IEC61970::Base::Domain::Float value;

				};

			}

		}

	}

}
#endif // COSTPERHEATUNIT_H
