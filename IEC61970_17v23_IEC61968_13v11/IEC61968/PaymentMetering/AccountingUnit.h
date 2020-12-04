///////////////////////////////////////////////////////////
//  AccountingUnit.h
//  Implementation of the Class AccountingUnit
///////////////////////////////////////////////////////////

#ifndef ACCOUNTINGUNIT_H
#define ACCOUNTINGUNIT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/RealEnergy.h"
#include "IEC61970/Base/Domain/Currency.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Unit for accounting; use either 'energyUnit' or 'currencyUnit' to specify the
		 * unit for 'value'.
		 */
		class AccountingUnit : public BaseClass
		{

		public:
			AccountingUnit();
			virtual ~AccountingUnit();
			/**
			 * Unit of service.
			 */
			IEC61970::Base::Domain::RealEnergy energyUnit;
			/**
			 * Unit of currency.
			 */
			IEC61970::Base::Domain::Currency monetaryUnit = IEC61970::Base::Domain::Currency::_undef;
			/**
			 * Multiplier for the 'energyUnit' or 'monetaryUnit'.
			 */
			IEC61970::Base::Domain::UnitMultiplier multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
			/**
			 * Value expressed in applicable units.
			 */
			IEC61970::Base::Domain::Float value;

		};

	}

}
#endif // ACCOUNTINGUNIT_H
