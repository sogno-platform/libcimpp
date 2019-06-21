///////////////////////////////////////////////////////////
//  LifecycleDate.h
//  Implementation of the Class LifecycleDate
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef LIFECYCLEDATE_H
#define LIFECYCLEDATE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Date.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Dates for asset lifecycle state changes. May have multiple lifecycle dates for
		 * this device and a compound type allows a query to return multiple dates.
		 */
		class LifecycleDate : public BaseClass
		{

		public:
			LifecycleDate();
			virtual ~LifecycleDate();
			/**
			 * Date current installation was completed, which may not be the same as the in-
			 * service date. Asset may have been installed at other locations previously.
			 * Ignored if asset is (1) not currently installed (e.g., stored in a depot) or
			 * (2) not intended to be installed (e.g., vehicle, tool).
			 */
			IEC61970::Base::Domain::Date installationDate;
			/**
			 * Date the asset was manufactured.
			 */
			IEC61970::Base::Domain::Date manufacturedDate;
			/**
			 * Date the asset was purchased. Note that even though an asset may have been
			 * purchased, it may not have been received into inventory at the time of purchase.
			 */
			IEC61970::Base::Domain::Date purchaseDate;
			/**
			 * Date the asset was received and first placed into inventory.
			 */
			IEC61970::Base::Domain::Date receivedDate;
			/**
			 * Date when the asset was last removed from service. Ignored if (1) not intended
			 * to be in service, or (2) currently in service.
			 */
			IEC61970::Base::Domain::Date removalDate;
			/**
			 * Date the asset is permanently retired from service and may be scheduled for
			 * disposal. Ignored if asset is (1) currently in service, or (2) permanently
			 * removed from service.
			 */
			IEC61970::Base::Domain::Date retiredDate;

		};

	}

}
#endif // LIFECYCLEDATE_H
