///////////////////////////////////////////////////////////
//  PostalAddress.h
//  Implementation of the Class PostalAddress
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POSTALADDRESS_H
#define POSTALADDRESS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/StreetDetail.h"
#include "IEC61968/Common/TownDetail.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * General purpose postal address information.
		 */
		class PostalAddress : public BaseClass
		{

		public:
			PostalAddress();
			virtual ~PostalAddress();
			/**
			 * Post office box.
			 */
			IEC61970::Base::Domain::String poBox;
			/**
			 * Postal code for the address.
			 */
			IEC61970::Base::Domain::String postalCode;
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
#endif // POSTALADDRESS_H
