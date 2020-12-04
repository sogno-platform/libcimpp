///////////////////////////////////////////////////////////
//  Organisation.h
//  Implementation of the Class Organisation
///////////////////////////////////////////////////////////

#ifndef ORGANISATION_H
#define ORGANISATION_H

#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61968/Common/TelephoneNumber.h"
#include "IEC61968/Common/StreetAddress.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		class ParentOrganization;
	}
}

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
			IEC61968::Common::StreetAddress postalAddress;
			/**
			 * Street address.
			 */
			IEC61968::Common::StreetAddress streetAddress;
			/**
			 * Parent organisation of this organisation.
			 */
			IEC61968::Common::ParentOrganization *ParentOrganisation;

		};

	}

}
#endif // ORGANISATION_H
