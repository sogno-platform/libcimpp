///////////////////////////////////////////////////////////
//  Vendor.h
//  Implementation of the Class Vendor
///////////////////////////////////////////////////////////

#ifndef VENDOR_H
#define VENDOR_H

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/PaymentMetering/VendorShift.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The entity that owns the point of sale and contracts with the cashier to
		 * receipt payments and vend tokens using the payment system. The vendor has a
		 * private contract with and is managed by the merchant which is a type of
		 * organisation. The vendor is accountable to the merchant for revenue collected,
		 * and the merchant is in turn accountable to the supplier.
		 */
		class Vendor : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Vendor();
			virtual ~Vendor();
			/**
			 * All vendor shifts opened and owned by this vendor.
			 */
			std::list<IEC61968::PaymentMetering::VendorShift*> VendorShifts;

		};

	}

}
#endif // VENDOR_H
