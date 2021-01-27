///////////////////////////////////////////////////////////
//  Cashier.h
//  Implementation of the Class Cashier
///////////////////////////////////////////////////////////

#ifndef CASHIER_H
#define CASHIER_H

#include <list>

#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61968/PaymentMetering/CashierShift.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The operator of the point of sale for the duration of CashierShift. Cashier is
		 * under the exclusive management control of Vendor.
		 */
		class Cashier : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Cashier();
			virtual ~Cashier();
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * All shifts operated by this cashier.
			 */
			std::list<IEC61968::PaymentMetering::CashierShift*> CashierShifts;

		};

	}

}
#endif // CASHIER_H
