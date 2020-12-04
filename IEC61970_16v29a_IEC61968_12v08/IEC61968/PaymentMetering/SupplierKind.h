///////////////////////////////////////////////////////////
//  SupplierKind.h
//  Implementation of the Class SupplierKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SUPPLIERKIND_H
#define SUPPLIERKIND_H

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Kind of supplier.
		 */
		enum class SupplierKind
		{
			/**
			 * Entity that delivers the service to the customer.
			 */
			 _undef = -1, 	utility,
			/**
			 * Entity that sells the service, but does not deliver to the customer; applies to
			 * the deregulated markets.
			 */
			retailer,
			/**
			 * Other kind of supplier.
			 */
			other
		};

	}

}
#endif // SUPPLIERKIND_H
