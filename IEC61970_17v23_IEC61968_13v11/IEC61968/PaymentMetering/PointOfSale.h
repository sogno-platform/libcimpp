///////////////////////////////////////////////////////////
//  PointOfSale.h
//  Implementation of the Class PointOfSale
///////////////////////////////////////////////////////////

#ifndef POINTOFSALE_H
#define POINTOFSALE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Logical point where transactions take place with operational interaction
		 * between cashier and the payment system; in certain cases the point of sale
		 * interacts directly with the end customer, in which case the cashier might not
		 * be a real person: for example a self-service kiosk or over the internet.
		 */
		class PointOfSale : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			PointOfSale();
			virtual ~PointOfSale();
			/**
			 * Local description for where this point of sale is physically located.
			 */
			IEC61970::Base::Domain::String location;

		};

	}

}
#endif // POINTOFSALE_H
