///////////////////////////////////////////////////////////
//  Organisation.h
//  Implementation of the Class Organisation
///////////////////////////////////////////////////////////

#ifndef ORGANISATION_H
#define ORGANISATION_H

#include <list>

#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61968/Common/TelephoneNumber.h"
#include "IEC61968/Common/PostalAddress.h"
#include "IEC61968/Common/StreetAddress.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Organisation that might have roles as utility, contractor, supplier,
		 * manufacturer, customer, etc.
		 */
		class Organisation : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Organisation();
			virtual ~Organisation();
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * Phone number.
			 */
			IEC61968::Common::TelephoneNumber phone1;
			/**
			 * Additional phone number.
			 */
			IEC61968::Common::TelephoneNumber phone2;
			/**
			 * Postal address, potentially different than 'streetAddress' (e.g., another city).
			 */
			IEC61968::Common::PostalAddress postalAddress;
			/**
			 * Street address.
			 */
			IEC61968::Common::StreetAddress streetAddress;
			std::list<IEC61968::Common::ActivityRecord*> ActivityRecords;

		};

	}

}
#endif // ORGANISATION_H
