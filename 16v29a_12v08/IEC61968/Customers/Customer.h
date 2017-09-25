///////////////////////////////////////////////////////////
//  Customer.h
//  Implementation of the Class Customer
///////////////////////////////////////////////////////////

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <list>

#include "IEC61968/Customers/CustomerKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Priority.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Metering/EndDevice.h"
#include "IEC61968/Customers/CustomerAccount.h"
#include "IEC61968/Customers/CustomerAgreement.h"
#include "IEC61968/InfIEC61968/InfCommon/OldPerson.h"
#include "IEC61968/Common/OrganisationRole.h"
#include "IEC61968/Work/Work.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Organisation receiving services from service supplier.
		 */
		class Customer : public IEC61968::Common::OrganisationRole
		{

		public:
			Customer();
			virtual ~Customer();
			/**
			 * Kind of customer.
			 */
			IEC61968::Customers::CustomerKind kind;
			/**
			 * Locale designating language to use in communications with this customer.
			 */
			IEC61970::Base::Domain::String locale;
			/**
			 * Priority of the customer.
			 */
			IEC61968::Common::Priority priority;
			/**
			 * (if applicable) Public utilities commission (PUC) identification number.
			 */
			IEC61970::Base::Domain::String pucNumber;
			/**
			 * True if customer organisation has special service needs such as life support,
			 * hospitals, etc.
			 */
			IEC61970::Base::Domain::String specialNeed;
			/**
			 * Status of this customer.
			 */
			IEC61968::Common::Status status;
			/**
			 * (use 'priority' instead) True if this is an important customer. Importance is
			 * for matters different than those in 'specialNeed' attribute.
			 */
			IEC61970::Base::Domain::Boolean vip;
			/**
			 * All end devices of this customer.
			 */
			std::list<IEC61968::Metering::EndDevice*> EndDevices;
			/**
			 * All accounts of this customer.
			 */
			std::list<IEC61968::Customers::CustomerAccount*> CustomerAccounts;
			/**
			 * All agreements of this customer.
			 */
			std::list<IEC61968::Customers::CustomerAgreement*> CustomerAgreements;
			std::list<IEC61968::InfIEC61968::InfCommon::OldPerson*> ErpPersons;
			/**
			 * All the works performed for this customer.
			 */
			std::list<IEC61968::Work::Work*> Works;

		};

	}

}
#endif // CUSTOMER_H
