///////////////////////////////////////////////////////////
//  StreetAddress.h
//  Implementation of the Class StreetAddress
///////////////////////////////////////////////////////////

#ifndef STREETADDRESS_H
#define STREETADDRESS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/Common/StreetDetail.h"
#include "IEC61968/Common/TownDetail.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * General purpose street and postal address information.
		 */
		class StreetAddress : public BaseClass
		{

		public:
			StreetAddress();
			virtual ~StreetAddress();
			/**
			 * Post office box.
			 */
			IEC61970::Base::Domain::String poBox;
			/**
			 * Postal code for the address.
			 */
			IEC61970::Base::Domain::String postalCode;
			/**
			 * Status of this address.
			 */
			IEC61968::Common::Status status;
			/**
			 * Street detail.
			 */
			IEC61968::Common::StreetDetail streetDetail;
			/**
			 * Town detail.
			 */
			IEC61968::Common::TownDetail townDetail;

		};

	}

}
#endif // STREETADDRESS_H
